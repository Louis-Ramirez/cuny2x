/*daily code practice 
2/15/19

 Here's your coding interview problem for today.

This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?
*/

#include<iostream>
using namespace std;
bool checker (int a[], int size, int k)
{
    bool flag = false;
    
    for (int i = 0; i < size; i++ )
    {
        for(int j = 1; j<size; j++)
        {
            int sum = 0;
            sum = a[i] + a[j];
            if(sum == k)
            {
                flag = true;
                return flag;
            } 
      
        
        }

    }

    return flag;
}
int main ()
{
int array[4] ={10,15,3,7};
cout<<checker(array,4,17);

return 0;
}