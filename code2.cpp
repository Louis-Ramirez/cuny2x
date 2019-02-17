//coding challenge 2 
//2/16/19
/*
This problem was asked by Uber.

Given an array of integers, 
return a new array such that each element at index i of the new array is the product of all the numbers in the original array 
except the one at i.
For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. 
If our input was [3, 2, 1], the expected output would be [2, 3, 6].

*/
#include<iostream>
using namespace std;


void prodArr(int a[], int size )
{
    int *p = new int [size];
    for(int a =0; a < size; a++)
    {
        p[a] =1;

    }

   for(int i = 0; i < size; i++ )
   {
       for(int j = 0; j < size; j++)
       {
            
         if(j!=i)
         {
           p[i]*=a[j];

         }


       }
            
    }

   

   for(int t= 0; t< size; t++ )
   {

       cout<<p[t]<<" ";
   }

cout<<endl;

}
void disArr(int arr[], int size)
{
    for(int t= 0; t< size; t++ )
    {
        cout<<arr[t]<<" ";
    }

}
int main()
{

int arr[5] = {1,2,3,4,5};

prodArr(arr, 5);

int apr[3] = {3,2,1};

prodArr(apr, 3);

    return 0;
}