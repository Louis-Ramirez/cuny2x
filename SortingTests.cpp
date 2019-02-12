/** Name:Louis Ramirez
    Project 5: SortingTests
    File name: SortingTests.cpp
    CSCI 23500
    Date: 11/27/2018
    Fall 2018
    Description : this project code analyzes 3 different sorting algorithms:
*/

#include "SortingTests.hpp"
/*****************************************************************/
/********************* SORTING FUNCTIONS *************************/
/*****************************************************************/




/**
 @post Sorts an array in ascending order using the selection sort algorithm.
 @param a the array to sort
 @param size the number of elements in a
 */
void mergeSort(int a[], int from, int to, int leftArr[], int rightArr[]);




void selectionSort(int a[], size_t size)
{


int n = size; // initialise to a's length 
 /* advance the position through the entire array */
 /*   (could do j < n-1 because single element is also min element) */
 for (int j = 0; j < n-1; j++)
 {
     /* find the min element in the unsorted a[j .. n-1] */
 
     /* assume the min is the first element */
     int iMin = j;
     /* test against elements after j to find the smallest */
     for (int i = j+1; i < n; i++)
     {
         /* if this element is less, then it is the new minimum */
         if (a[i] < a[iMin])
         {
             /* found new minimum; remember its index */
             iMin = i;
         }
     }
 
     if (iMin != j) 
     {
         std::swap(a[j], a[iMin]);
     }
 }

}

/**
 @post Sorts an array in ascending order using insertion sort.
 @param a the array to sort
 @param size of the array
 */

void insertionSort(int a[], size_t size)
{ 

	int temp; 
	int pos = 1; 
	while (pos < size) 
    {
		int j = pos; 
		//while there's a position && the second index is > first ----swap 
		while ((j > 0) && (a[j - 1] > a[j]))
        {
			temp = a[j]; 
			a[j] = a[j-1]; 
			a[j-1] = temp; 
			j--; 
		}
		pos++;
	}
}


 
 void merge(int arr[], int l, int m, int r, int leftArr[], int rightArr[]) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; //size left
    int n2 =  r - m; //size right
	int* L = leftArr;
	int* R = rightArr;
    /* create temp arrays */
    //int L[n1], R[n2];             //allocate  DYNAMIC ARRAY ????
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
/**
 @post Sorts the elements in a range of a array.
 @param a the array with the elements to sort
 @param from the first position in the range to sort
 @param to the last position in the range to sort (included)
 */


void mergeSort(int a[], int from, int to)
{

	int * leftArr = new int[to - from];
	int * rightArr = new int[to - from];
	mergeSort(a, from, to, leftArr, rightArr);

	delete[] leftArr;
	delete[] rightArr; 
}


void mergeSort(int a[], int from, int to, int leftArr[], int rightArr[]) 
{
	if (from < to) 
    {         
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        //int m = from + (to - from)/2; 
  		int m = (from + to) / 2;
        // Sort first and second halves 
        mergeSort(a, from, m, leftArr, rightArr); 
        mergeSort(a, m+1, to, leftArr, rightArr); 
  
        merge(a, from, m, to, leftArr, rightArr); 
    } 
}

// void mergeSort(int a[], int from, int to)
// {
//                                //DYNAMIC HERE???? 
// if (from < to) 
//     {         
//         // Same as (l+r)/2, but avoids overflow for 
//         // large l and h 
//         int m = from + (to - from)/2; 
  
//         // Sort first and second halves 
//         mergeSort(a, from, m); 
//         mergeSort(a, m+1, to); 
  
//         merge(a, from, m, to); 
//     } 

// }




/*********************************************************************/
/****************** ARRAY POPULATING FUNCTIONS ***********************/
/*********************************************************************/


/**
 @post Populates values with randomly generated numbers in range size
 @param values the array to populate
 @param size of the array to be populated
 */
void generateRandomArray(int values[], size_t size)
{

	srand(static_cast<unsigned>(time(0)));
 	int aRandVar;
	for(int i = 0; i < size; i++ )
	{
     aRandVar = rand() % size;

     values[i] = aRandVar;

	}
}

/**
 @post Populates values with integers in ascending order
 @param values the array to populate
 @param size of the array to be populated
 */
void generateAscendingArray(int values[], size_t size)
{

    srand(static_cast<unsigned>(time(0)));
 	int aRandVar;
     
 	for(int i = 0; i < size; i++)
 	{
  		aRandVar = rand() % size; 
  		values[i]= aRandVar;
     
 	}
    selectionSort(values, size);
}

/**
 @post Populates values with integers in descending order
 @param values the array to populate
 @param size of the array to be populated
 */
void generateDescendingArray(int values[], size_t size)
{
	srand(static_cast<unsigned>(time(0)));
 	int aRandVar;
     
 	for(int i = 0; i < size; i++)
 	{
  		aRandVar = rand() % size; 
  		values[i]= aRandVar;
     
 	}

// 			USED SELECTION SORT ALG.
 	int n = size; // initialise to a's length 
 /* advance the position through the entire array */
 /*   (could do j < n-1 because single element is also min element) */
 for (int j = 0; j < n-1; j++)
 {
     /* find the min element in the unsorted a[j .. n-1] */
 
     /* assume the min is the first element */
     int iMax = j;
     /* test against elements after j to find the smallest */
     for (int i = j+1; i < n; i++)
     {
         /* if this element is less, then it is the new minimum */
         if (values[i] > values[iMax])
         {
             /* found new minimum; remember its index */
             iMax = i;
         }
     }
 
     if (iMax != j) 
     {
         std::swap(values[j], values[iMax]);
     }
 }



}

/**
 @post Populates values with integers in ascending order except for the last 10 that are randomly generated
 @param values the array to populate
 @param size of the array to be populated
 */
void generateLastTenRandomArray(int values[], size_t size)
{
  srand(static_cast<unsigned>(time(0)));
  int aRandVar;
     
  for(int i = 0; i < size-10; i++)
  {
      aRandVar = rand() % size; 
      values[i]= aRandVar;
     
  }
    selectionSort(values, size-10);

  for(int i = 10; i < size; i++)
  {
    aRandVar = rand() % size; 
    values[i]= aRandVar; 


  }

}

/**
 @post Populates values with integers in randomly generated in range size/10
 @param values the array to populate
 @param size of the array to be populated
 */
void generateFewRandomArray(int values[], size_t size)
{

    srand(static_cast<unsigned>(time(0)));
 	int aRandVar;
     
 	for(int i = 0; i < size; i++)
 	{
  		aRandVar = rand() % size *0.10; 
  		values[i]= aRandVar;
     
 	}
}



/*****************************************************************/
/****************** RUNTIME TEST FUNCTIONS ***********************/
/*****************************************************************/


/**
 @post Sorts values in ascending order and averages its runtime over 10 runs
 @param sortingFunction the function used to sort the array
 @param values the array to sort
 @param size of the array to sort
 @return the average runtime in microseconds
 */
double sortTest(void (*sortingFunction)(int a[], size_t size), int values[], size_t size)
{
//the first parameters are for the sortTest and the second are for sortingFunction 

	duration<float, std::micro> run_time; 
	double runtime_sum; 
	for (int i = 0; i < 10; i++){
		auto start_time = high_resolution_clock::now(); //now stores the time (abstracted)
		//now is a function within the high_res class 
		sortingFunction(values, size); //we're calling this as a sorting function
		auto end_time = high_resolution_clock::now();
		//Its taking start and end time substracting it and then casting the duration as microseconds 
		run_time = duration_cast<microseconds>(end_time - start_time); 
		runtime_sum += run_time.count(); //counter is extracting the actual interval 
	}
	runtime_sum = (runtime_sum/10); //averaging all the timings 
	//std::cout << runtime_sum << std:: endl;
	return runtime_sum;




//     double runtime_sum = 0;
//     int copy[size];
//     for(int t = 0; t < 10; t++)
//     {
// 	    for(int i = 0; i < size; i++)
// 	    {      
		
// 		    copy[i] = values[i];

// 	    }

// 	    auto start_time = high_resolution_clock().now();
//         sortingFunction(copy, size);
//         auto end_time = high_resolution_clock().now();
//         duration<float, std::micro> runt_time = duration_cast<microseconds>(end_time - start_time);
//         runtime_sum += runt_time.count();
//         // cout<<runtime_sum<<endl;
//    }

//         return runtime_sum/10;

}

/**
 @post Sorts values in ascending order using mergeSort and averages its runtime over 10 runs
 @param values the array to sort
 @param size of the array to sort
 @return the average runtime in microseconds
 */
double mergeSortTest(int values[], size_t size)
{

double runtime_sum = 0;
int *copy = new int [size];
for(int t = 0; t < 10; t++)
{
  for(int i = 0; i < size; i++)
  {
    
    copy[i] = values[i];

  }

  auto start_time = high_resolution_clock().now();
  mergeSort(values, 0 , size - 1);
  auto end_time = high_resolution_clock().now();
  duration<float, std::micro> runt_time = duration_cast<microseconds>(end_time - start_time);
  runtime_sum += runt_time.count();

}
return runtime_sum/10;

}
