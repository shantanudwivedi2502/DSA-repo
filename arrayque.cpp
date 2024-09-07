//linear search (ismie pure array ko starting se ending tak traverse krte hain or jahn par wo value mil jati hai retuen kr dete hain)
/*#include<iostream>
using namespace std;
bool search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
return 0;
}
int main()
{
    int arr[10]={1,2,3,4,-6,5,7,8,9,-3};
    int key;
    cin>>key;
    bool found =search(arr,10,key);
    if(found)
    {
        cout<<"key is present"<<endl;

    }
    else{
        cout<<"key is absent"<<endl;
    }
}*/
// reverse array
//start lenge usmie array k first index hoga ek end lenge usmie array k last index hoga 
//start ko ++ kredenge or end of --
//or stop condition ye hogi ki start index agr end index se bada hojata hai  toh end.
//while swap krwate chelenge start[i]and end[i]
/*#include<iostream>
using namespace std;
int reverse(int arr[],int n)
{
    int start=0;
    int end =n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}





void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}





int main()
{
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={2,-4,-7,5,0};
    reverse(arr,6);
    printArray(arr,6);
    reverse(brr,5);
    printArray(brr,5);
    


}*/
// swap the alternate value of array 
/*#include<iostream>
using namespace std;
void swapAlternate(int arr[],int n)
{
  for(int i=0;i<n;i+=2)
  {
    if(i+1<n)
    {
        swap(arr[i],arr[i+1]);
    }
  }
}




void printArray(int arr[],int n)
{
    for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main()
{
    int arr[8]={2,3,4,5,6,7,9,8};
    int brr[5]={1,2,3,4,5};
    swapAlternate(arr,8);
    printArray(arr,8);
    swapAlternate(brr,5);
    printArray(brr,5);


}*/
//array mie jo number singe baar occur kr raha ho usko print krk k dekhao .
//array ko traverse krte jao or xor krdo har value ko 
//same value sab cancel hojyengi jo value cnacel nahi hogi wahi hogi unique.
//#include<iostream>
//using namespace std;
//int solution(int arr[],int n)
/*{
    int ans =0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];// xor krdiya kyuki koi bhi do same value k apas me xor zero hotab hai (eq 1^1=0)
    }
    return ans;
}
int main()
{
    int arr[5]={1,1,1,1,2};
    cout<<solution(arr,5);
}*/

//find the number that is repeated in array .
#include <iostream>
using namespace std;
int show(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++)
    {
        ans=ans^i;
    }
    return ans ;
}
int main()
{
    int arr[5]={1,2,4,6,1};
    cout<<show(arr,5);
}