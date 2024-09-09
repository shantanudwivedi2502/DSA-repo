
//finding max and min value in array 

/*#include<iostream>
using namespace std;
int getMax(int arr[],int n){
    int max=INT_MIN;
    for(int i=1;i<=n;i++){
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[],int n ){
    int min =INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    
    int size;
    cout<<"enter the size "<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter the value"<<endl;
    for(int i=1;i<=size;i++){
        cin>>arr[i];
    }
    cout<<"max value in array is "<<getMax(arr,size)<<endl;
    cout<<"min value in array is "<<getMin(arr,size);
}*/

//printing sum of all the element in array 
/*#include<iostream>
using namespace std; 
 int printArr(int arr[],int n)
 {
    int add=0;
    for (int i =0;i<n;i++)
    {
         add=add+arr[i];
    }
    return add;
 }
 int main()
 {
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"the sum is"<<printArr(arr,size);

 }*/
//liner search 
/*#include<iostream>
using namespace std;
void search(int arr[],int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            cout<<"key is present "<<endl;
        }
        
       
    }

     
           
     cout<<"not present";

}

int main()
{
    int n;
    cout<<"enter the size of  array";
    cin>>n;
    int arr[100];
    int key ;
    cout<<"enter the key "<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    search(arr,n,key);
}*/
/*#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}






int main(){
    int arr[6]={12, 3,4,55,8,9};
    int size =6;
    reverse(arr,size);
    print(arr,size);



}*/
//swapping alternate value inn array 
/*#include<iostream>
using namespace std;
void swap(int arr[],int n)
{
    for(int i=0;i<n;i=i+2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
 










 int main()
 {
    int arr[6]={10,34,56,7,9,3};
    int n=6;
    swap(arr,n);
    print(arr,n);


 }*/
/*#include<iostream>
using namespace std ;
int sol(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];

    }
    return ans ;
}




int main()
{
    int arr[6]={1,1,2,2,3};
    int n=6;
   cout<< sol(arr,n);
}*/
//finding duplicate in array 
/*#include<iostream>
using namespace std;
int duplicate(int arr[],int n)
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
        return ans;
}



int main ()
{
    int arr[5]={1,2,3,4,1};
    int n=5;
    cout<<duplicate(arr,n);


}*/
/*#include<iostream>
using namespace std;
int ans=0 ;
void find (int arr1[],int arr2[],int n){
    
for(int i=0;i<n;i++)
int element=arr1[i];
for(int i=0;i<n;i++)
{
    if(element==arr2[i])
}



}





int main()
{
    int arr1[3]={1,2,3};
    int arr2[3]={3,4,5};
}*/

/*#include<iostream>
using namespace std;
void sol(int arr[], int size,int s)
{
    
    for(int i=0;i<size-1;i++)
    {
        for(int j=1;i<size-1;i++)
        {
            if(arr[i]+arr[j]==s)
            {
                cout<< 
            }
        }
    }
}*/
//binary search 
//hamesha sorted array mie lgta hai 
/*#include<iostream>
using namespace std;
int binary(int arr[], int n,int key )
{
    int start=0;
    int end =n-1;
    int mid= (start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;//righ wale part mie jana hai toh mid+1



        }
        else{
            end=mid-1;//left mie jana hai toh mid -1 
        }
        mid=(start+end)/2;


    }
    return -1;
}
//







int main(){
    int even[4]={2,4,6,8};
    int key=4 ;
    int n=4;
   int index= binary(even,n, key);
   cout<<"the index is"<<index<<endl;
}*/
//first occurance and last occursance (binary search)eg arry 2,5,3,3,3,7   ....key is 3 output is 2,4.
/*#include<iostream>
using namespace std;
int firstOcc(int arr[],int n , int key )
{
   int start=0;
   int end=n-1;
   int ans=11;
   int mid=start+(end-start)/2;
   while(start<=end )
   {
    if(arr[mid]==key)
    {
        ans=mid;
        end=mid-1;//or bhi check krlenge kahin 3  left mie or toh nahi hain , coz hum 3 k left occurance check kr rahe hain 

    }
    else if(key>arr[mid])
    {
        start=mid+1;
    }
    else if(key<arr[mid])
    {
        end=mid-1;
    }
    mid=start+(end-start)/2;
   }
   return ans;




}




int lastOcc(int arr[],int n , int key )
{
   int start=0; 
   int end=n-1;
   int ans=11;
   int mid=start+(end-start)/2;
   while(start<=end )
   {
    if(arr[mid]==key)
    {
        ans=mid;
        start =mid+1;

    }
    else if(key>arr[mid])
    {
        start=mid+1;
    }
    else if(key<arr[mid])
    {
        end=mid-1;
    }
    mid=start+(end-start)/2;
   }
   return ans;




}










int main()
{
    int even[5]={1,2,3,3,5};
    int key=3;
    int n=5;
    cout<<"first occ at index"<<firstOcc(even,n,key)<<endl;
    cout<<"last occ at index"<<lastOcc(even,n,key);
    return 0;
}*/
//mountain peek probleum 3,4,5,1 output shuld be  5.
/*#include<iostream>
using namespace std;
int fun(int arr[],int n)
{
    int start=0;
    int end =n-1;
    int ans;
    int mid = (start +end)/2;
    while (start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
            

        }
        else{
            end=mid;

        }
        mid=(start+end)/2;
    }
    return start;
}

int main()
{
   int arr[10]={3,4,5,1};
   cout<<"the output is"<<fun(arr,4);
}*/
//pivot element 
/*#include<iostream>
using namespace std;
int fun(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid= (start+end)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;
}
int main(){
int arr[10]={3,8,10,17,1,};
cout<<"the pivot is "<<fun(arr,5);
}*/
/*#include<iostream>
using namespace std;
int getPivot(int arr[],int n )
{
    int s=0;
    int e=n-1; 
    int mid=(s+e)/2;
    while(s<e)
    {
        if(arr[mid]<=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}
int binarySearch(int arr[],int s,int e , int k)
{
    int start=s;
    int end =e;
    int mid= (start+end)/2;
    int ans =-1;
    while(start<end )
    {
        if(arr[mid]==k)
        {
            ans =mid;
        }
        else if(k<arr[mid]){
            end =mid-1;
        }
        else if(k>arr[mid])
        {
            start=mid+1;

        }
        mid=(start+end )/2;

    }
    return ans ;

}
int findPos(int arr[],int n, int k)
{int pivot=getPivot( arr,n);


    if(k>=arr[pivot]&& k<arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}
int main()
{
    int arr[10]={7,9,1,2,4};
    int n=5;
    cout<<"the output is "<<findPos(arr,n,2);
}*/
//sqare root of number 
/*#include<iostream>
using namespace std;
long long int binarySearch (int n )
{
    int s=0;
    int e=n;
    long long int ans=-1;
   
    while(s<=e)
{ 
     
    long long int mid=(s+e)/2;
    long long int sqrt=mid*mid;
    if(n==sqrt)
    {
        return mid;
        
    }
     if(sqrt<n)
    {
        ans=mid;
        s=mid+1;
        
    }
    else
    {
        e=mid-1;
    }
}
return ans;

}

double exact (int n, int places,int tempSol)
{
    double factor=1;
    int ans=tempSol;
    for(int i=1;i<places;i++)
    {

        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans =j;
        }
    }
    return ans;
}
int main ()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
   int tempSol=binarySearch(n);
   cout<<"answer is "<<exact(n,3,tempSol);
}*/
//book allocation problem 
/*#include<iostream> 
using namespace std;
bool isPossible(int arr[],int n ,int m,int mid)
{
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m||arr[i]>mid)
            {
                return false;
            }
            pageSum=arr[i];
        }

    }
    return true;
}


int allocateBooks(int arr[],int n, int m)
{
    int s=0;
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int ans =-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))//agr possible solution mil jata hai iska mtlab hai usse chote wale possible solution ho skte hain islye mid peeche yani left wale part mie leke jayenge 
        {
            ans=mid;
            e =mid-1;
             
        }
        else{
            s=mid+1;//nahi possible solution milta hai toh mid iska mtlab hai usse choti values bhi possible solution nahi hongi isliye hum right wale part jayenge 
        }
        mid=(e+s)/2;
    }
    return ans;
}
int main ()
{
    int arr[10]={10,20,30,40};
    int m=2;
    int n=4;
    cout<<"the ans is"<<allocateBooks(arr,n,m);
}*/
#include<iostream>
using namespace std;
int sort(int arr[],int n )
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=j+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
               minIndex=j;
            }
        }
     swap(arr[i],arr[minIndex]);
    }

}


int main()
{
    int arr[5]={64,25,12,22,11};
    int n =5;
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}