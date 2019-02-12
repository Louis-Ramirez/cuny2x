#include"SortingTests.cpp"
#include<iostream>
using namespace std;
int main() {
    
    const size_t SMALL_ARRAY_SIZE = 100;
    const size_t MEDIUM_ARRAY_SIZE = 1000;
    const size_t LARGE_ARRAY_SIZE = 10000;
    const size_t HUGE_ARRAY_SIZE = 100000;
    
    //int values[SMALL_ARRAY_SIZE];
    
    //*** FIRST TEST RANDOM VALUES ON SMALL_ARRAY_SIZE ***/
    
    // generateRandomArray(values, SMALL_ARRAY_SIZE);
    // cout << "Elapsed time for selection sort averaged over 10 runs on array of size " << SMALL_ARRAY_SIZE << " is: " << sortTest(&selectionSort, values, SMALL_ARRAY_SIZE)<< " microseconds" << endl;
   
    // generateRandomArray(values, SMALL_ARRAY_SIZE);
    // cout << "Elapsed time for insertion sort averaged over 10 runs on array of size " << SMALL_ARRAY_SIZE << " is: " << sortTest(&insertionSort, values, SMALL_ARRAY_SIZE)<< " microseconds" << endl;
    
    // generateRandomArray(values, SMALL_ARRAY_SIZE);
    // cout << "Elapsed time for merge sort averaged over 10 runs on array of size " << SMALL_ARRAY_SIZE << " is: " << mergeSortTest(values, SMALL_ARRAY_SIZE)<< " microseconds" << endl;
    
    // // //*** SECOND TEST SORTED VALUES ON SMALL_ARRAY_SIZE ***/
    
    // generateAscendingArray(values, SMALL_ARRAY_SIZE);
    // cout << "Elapsed time for selection sort averaged over 10 runs on array of size " << SMALL_ARRAY_SIZE << " is: " << sortTest(&selectionSort, values, SMALL_ARRAY_SIZE)<< " microseconds" << endl;
    
    // generateAscendingArray(values, SMALL_ARRAY_SIZE);
    // cout << "Elapsed time for insertion sort averaged over 10 runs on array of size " << SMALL_ARRAY_SIZE << " is: " << sortTest(&insertionSort, values, SMALL_ARRAY_SIZE)<< " microseconds" << endl;
    
    // generateAscendingArray(values, SMALL_ARRAY_SIZE);
    // cout << "Elapsed time for merge sort averaged over 10 runs on array of size " << SMALL_ARRAY_SIZE << " is: " << mergeSortTest(values, SMALL_ARRAY_SIZE)<< " microseconds" << endl;



    
     // YOU SHOULD GET THE IDEA! DO THIS FOR ALL ARRAY-TYPES AND FOR ALL ARRAY-SIZES.
    //  RUN THESE TESTS ONE AT A TIME ESPECIALLY FOR LARGER ARRAY SIZES
    //  OBSERVE AND COMPARE THE REPORTED TIMES AND MAKE SURE THEY MAKE SENSE

    
int values[MEDIUM_ARRAY_SIZE];

    generateRandomArray(values, MEDIUM_ARRAY_SIZE);
    cout << "Elapsed time for selection sort averaged over 10 runs on array of size " << MEDIUM_ARRAY_SIZE << " is: " << sortTest(&selectionSort, values, MEDIUM_ARRAY_SIZE)<< " microseconds" << endl;
   
    generateRandomArray(values, MEDIUM_ARRAY_SIZE);
    cout << "Elapsed time for insertion sort averaged over 10 runs on array of size " << MEDIUM_ARRAY_SIZE << " is: " << sortTest(&insertionSort, values, MEDIUM_ARRAY_SIZE)<< " microseconds" << endl;
    
    generateRandomArray(values, MEDIUM_ARRAY_SIZE);
    cout << "Elapsed time for merge sort averaged over 10 runs on array of size " << MEDIUM_ARRAY_SIZE << " is: " << mergeSortTest(values, MEDIUM_ARRAY_SIZE)<< " microseconds" << endl;
    
    // //*** SECOND TEST SORTED VALUES ON MEDIUM_ARRAY_SIZE ***/
    
    generateAscendingArray(values, MEDIUM_ARRAY_SIZE);
    cout << "Elapsed time for selection sort averaged over 10 runs on array of size " << MEDIUM_ARRAY_SIZE << " is: " << sortTest(&selectionSort, values, MEDIUM_ARRAY_SIZE)<< " microseconds" << endl;
    
    generateAscendingArray(values, MEDIUM_ARRAY_SIZE);
    cout << "Elapsed time for insertion sort averaged over 10 runs on array of size " << MEDIUM_ARRAY_SIZE << " is: " << sortTest(&insertionSort, values, MEDIUM_ARRAY_SIZE)<< " microseconds" << endl;
    
    generateAscendingArray(values, MEDIUM_ARRAY_SIZE);
    cout << "Elapsed time for merge sort averaged over 10 runs on array of size " << MEDIUM_ARRAY_SIZE << " is: " << mergeSortTest(values, MEDIUM_ARRAY_SIZE)<< " microseconds" << endl;
   
    return 0;
}