
// //finding max and min value in array 

// /*#include<iostream>
// using namespace std;
// int getMax(int arr[],int n){
//     int max=INT_MIN;
//     for(int i=1;i<=n;i++){
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     return max;
// }
// int getMin(int arr[],int n ){
//     int min =INT_MAX;
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]<min)
//         {
//             min=arr[i];
//         }
//     }
//     return min;
// }
// int main()
// {
    
//     int size;
//     cout<<"enter the size "<<endl;
//     cin>>size;
//     int arr[100];
//     cout<<"enter the value"<<endl;
//     for(int i=1;i<=size;i++){
//         cin>>arr[i];
//     }
//     cout<<"max value in array is "<<getMax(arr,size)<<endl;
//     cout<<"min value in array is "<<getMin(arr,size);
// }*/

// //printing sum of all the element in array 
// /*#include<iostream>
// using namespace std; 
//  int printArr(int arr[],int n)
//  {
//     int add=0;
//     for (int i =0;i<n;i++)
//     {
//          add=add+arr[i];
//     }
//     return add;
//  }
//  int main()
//  {
//     int size;
//     cout<<"enter the size of array";
//     cin>>size;
//     int arr[100];
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"the sum is"<<printArr(arr,size);

//  }*/
// //liner search 
// /*#include<iostream>
// using namespace std;
// void search(int arr[],int size, int key)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==key)
//         {
//             cout<<"key is present "<<endl;
//         }
        
       
//     }

     
           
//      cout<<"not present";

// }

// int main()
// {
//     int n;
//     cout<<"enter the size of  array";
//     cin>>n;
//     int arr[100];
//     int key ;
//     cout<<"enter the key "<<endl;
//     cin>>key;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     search(arr,n,key);
// }*/
// /*#include<iostream>
// using namespace std;

// void print(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// void reverse(int arr[],int size)
// {
//     int start=0;
//     int end=size-1;
//     while(start<=end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

// }






// int main(){
//     int arr[6]={12, 3,4,55,8,9};
//     int size =6;
//     reverse(arr,size);
//     print(arr,size);



// }*/
// //swapping alternate value inn array 
// /*#include<iostream>
// using namespace std;
// void swap(int arr[],int n)
// {
//     for(int i=0;i<n;i=i+2)
//     {
//         if(i+1<n)
//         {
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
// void print(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
 










//  int main()
//  {
//     int arr[6]={10,34,56,7,9,3};
//     int n=6;
//     swap(arr,n);
//     print(arr,n);


//  }*/
// /*#include<iostream>
// using namespace std ;
// int sol(int arr[],int n)
// {
//     int ans=0;
//     for(int i=0;i<n;i++)
//     {
//         ans=ans^arr[i];

//     }
//     return ans ;
// }




// int main()
// {
//     int arr[6]={1,1,2,2,3};
//     int n=6;
//    cout<< sol(arr,n);
// }*/
// //finding duplicate in array 
// /*#include<iostream>
// using namespace std;
// int duplicate(int arr[],int n)
// {
//         int ans=0;
//         for(int i=0;i<n;i++)
//         {
//             ans=ans^arr[i];

//         }
//         for(int i=0;i<n;i++)
//         {
//             ans=ans^i;
//         }
//         return ans;
// }



// int main ()
// {
//     int arr[5]={1,2,3,4,1};
//     int n=5;
//     cout<<duplicate(arr,n);


// }*/
// /*#include<iostream>
// using namespace std;
// int ans=0 ;
// void find (int arr1[],int arr2[],int n){
    
// for(int i=0;i<n;i++)
// int element=arr1[i];
// for(int i=0;i<n;i++)
// {
//     if(element==arr2[i])
// }



// }





// int main()
// {
//     int arr1[3]={1,2,3};
//     int arr2[3]={3,4,5};
// }*/

// /*#include<iostream>
// using namespace std;
// void sol(int arr[], int size,int s)
// {
    
//     for(int i=0;i<size-1;i++)
//     {
//         for(int j=1;i<size-1;i++)
//         {
//             if(arr[i]+arr[j]==s)
//             {
//                 cout<< 
//             }
//         }
//     }
// }*/
// //binary search 
// //hamesha sorted array mie lgta hai 
// /*#include<iostream>
// using namespace std;
// int binary(int arr[], int n,int key )
// {
//     int start=0;
//     int end =n-1;
//     int mid= (start+end)/2;
//     while(start<=end)
//     {
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         if(key>arr[mid])
//         {
//             start=mid+1;//righ wale part mie jana hai toh mid+1



//         }
//         else{
//             end=mid-1;//left mie jana hai toh mid -1 
//         }
//         mid=(start+end)/2;


//     }
//     return -1;
// }
// //







// int main(){
//     int even[4]={2,4,6,8};
//     int key=4 ;
//     int n=4;
//    int index= binary(even,n, key);
//    cout<<"the index is"<<index<<endl;
// }*/
// //first occurance and last occursance (binary search)eg arry 2,5,3,3,3,7   ....key is 3 output is 2,4.
// /*#include<iostream>
// using namespace std;
// int firstOcc(int arr[],int n , int key )
// {
//    int start=0;
//    int end=n-1;
//    int ans=11;
//    int mid=start+(end-start)/2;
//    while(start<=end )
//    {
//     if(arr[mid]==key)
//     {
//         ans=mid;
//         end=mid-1;//or bhi check krlenge kahin 3  left mie or toh nahi hain , coz hum 3 k left occurance check kr rahe hain 

//     }
//     else if(key>arr[mid])
//     {
//         start=mid+1;
//     }
//     else if(key<arr[mid])
//     {
//         end=mid-1;
//     }
//     mid=start+(end-start)/2;
//    }
//    return ans;




// }




// int lastOcc(int arr[],int n , int key )
// {
//    int start=0; 
//    int end=n-1;
//    int ans=11;
//    int mid=start+(end-start)/2;
//    while(start<=end )
//    {
//     if(arr[mid]==key)
//     {
//         ans=mid;
//         start =mid+1;

//     }
//     else if(key>arr[mid])
//     {
//         start=mid+1;
//     }
//     else if(key<arr[mid])
//     {
//         end=mid-1;
//     }
//     mid=start+(end-start)/2;
//    }
//    return ans;




// }










// int main()
// {
//     int even[5]={1,2,3,3,5};
//     int key=3;
//     int n=5;
//     cout<<"first occ at index"<<firstOcc(even,n,key)<<endl;
//     cout<<"last occ at index"<<lastOcc(even,n,key);
//     return 0;
// }*/
// //mountain peek probleum 3,4,5,1 output shuld be  5.
// /*#include<iostream>
// using namespace std;
// int fun(int arr[],int n)
// {
//     int start=0;
//     int end =n-1;
//     int ans;
//     int mid = (start +end)/2;
//     while (start<end)
//     {
//         if(arr[mid]<arr[mid+1])
//         {
//             start=mid+1;
            

//         }
//         else{
//             end=mid;

//         }
//         mid=(start+end)/2;
//     }
//     return start;
// }

// int main()
// {
//    int arr[10]={3,4,5,1};
//    cout<<"the output is"<<fun(arr,4);
// }*/
// //pivot element 
// /*#include<iostream>
// using namespace std;
// int fun(int arr[],int n)
// {
//     int start=0;
//     int end=n-1;
//     int mid= (start+end)/2;
//     while(start<end)
//     {
//         if(arr[mid]>=arr[0])
//         {
//             start=mid+1;
//         }
//         else{
//             end=mid;
//         }
//         mid=(start+end)/2;
//     }
//     return start;
// }
// int main(){
// int arr[10]={3,8,10,17,1,};
// cout<<"the pivot is "<<fun(arr,5);
// }*/
// /*#include<iostream>
// using namespace std;
// int getPivot(int arr[],int n )
// {
//     int s=0;
//     int e=n-1; 
//     int mid=(s+e)/2;
//     while(s<e)
//     {
//         if(arr[mid]<=arr[0])
//         {
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=(s+e)/2;
//     }
//     return s;
// }
// int binarySearch(int arr[],int s,int e , int k)
// {
//     int start=s;
//     int end =e;
//     int mid= (start+end)/2;
//     int ans =-1;
//     while(start<end )
//     {
//         if(arr[mid]==k)
//         {
//             ans =mid;
//         }
//         else if(k<arr[mid]){
//             end =mid-1;
//         }
//         else if(k>arr[mid])
//         {
//             start=mid+1;

//         }
//         mid=(start+end )/2;

//     }
//     return ans ;

// }
// int findPos(int arr[],int n, int k)
// {int pivot=getPivot( arr,n);


//     if(k>=arr[pivot]&& k<arr[n-1])
//     {
//         return binarySearch(arr,pivot,n-1,k);
//     }
//     else{
//         return binarySearch(arr,0,pivot-1,k);
//     }
// }
// int main()
// {
//     int arr[10]={7,9,1,2,4};
//     int n=5;
//     cout<<"the output is "<<findPos(arr,n,2);
// }*/
// //sqare root of number 
// /*#include<iostream>
// using namespace std;
// long long int binarySearch (int n )
// {
//     int s=0;
//     int e=n;
//     long long int ans=-1;
   
//     while(s<=e)
// { 
     
//     long long int mid=(s+e)/2;
//     long long int sqrt=mid*mid;
//     if(n==sqrt)
//     {
//         return mid;
        
//     }
//      if(sqrt<n)
//     {
//         ans=mid;
//         s=mid+1;
        
//     }
//     else
//     {
//         e=mid-1;
//     }
// }
// return ans;

// }

// double exact (int n, int places,int tempSol)
// {
//     double factor=1;
//     int ans=tempSol;
//     for(int i=1;i<places;i++)
//     {

//         factor=factor/10;
//         for(double j=ans;j*j<n;j=j+factor)
//         {
//             ans =j;
//         }
//     }
//     return ans;
// }
// int main ()
// {
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//    int tempSol=binarySearch(n);
//    cout<<"answer is "<<exact(n,3,tempSol);
// }*/
// //book allocation problem 
// /*#include<iostream> 
// using namespace std;
// bool isPossible(int arr[],int n ,int m,int mid)
// {
//     int studentCount=1;
//     int pageSum=0;
//     for(int i=0;i<n;i++)
//     {
//         if(pageSum+arr[i]<=mid)
//         {
//             pageSum+=arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount>m||arr[i]>mid)
//             {
//                 return false;
//             }
//             pageSum=arr[i];
//         }

//     }
//     return true;
// }


// int allocateBooks(int arr[],int n, int m)
// {
//     int s=0;
//     int sum =0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=arr[i];
//     }
//     int e=sum;
//     int ans =-1;
//     int mid=(s+e)/2;
//     while(s<=e)
//     {
//         if(isPossible(arr,n,m,mid))//agr possible solution mil jata hai iska mtlab hai usse chote wale possible solution ho skte hain islye mid peeche yani left wale part mie leke jayenge 
//         {
//             ans=mid;
//             e =mid-1;
             
//         }
//         else{
//             s=mid+1;//nahi possible solution milta hai toh mid iska mtlab hai usse choti values bhi possible solution nahi hongi isliye hum right wale part jayenge 
//         }
//         mid=(e+s)/2;
//     }
//     return ans;
// }
// int main ()
// {
//     int arr[10]={10,20,30,40};
//     int m=2;
//     int n=4;
//     cout<<"the ans is"<<allocateBooks(arr,n,m);
// }*/
// //selection sort ismie ye krte hain ki array ki har agli value ko pichli wali value is comparec krte hain age wo choti hoti hai tohswap kr dete hain 
// // #include<iostream>
// /*using namespace std;
// //int sort(int arr[],int n )
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int minIndex=i;
//         for(int j=j+1;j<n;j++)
//         {
//             if(arr[j]<arr[minIndex])
//             {
//                minIndex=j;
//             }
//         }
//      swap(arr[i],arr[minIndex]);
//     }

// }


// int main()
// {
//   //  int arr[5]={64,25,12,22,11};
//   //  int n =5;
//    // sort(arr,n);
//     //for(int i=0;i<n;i++)
//     {
//    //     cout<<" "<<arr[i];
//     }
// }*/
// //bubble sort 
// /*#include<iostream>
// using namespace std;
// void sort (int arr[],int n )
// {
// for(int i=1;i<n;i++)//no. of rounda k liye hai ye 
// {
//     for(int j=0;j<n-i;j++)
//     {
//         if(arr[j]>arr[j+1])//comparison k liye hai ye , iske alwa n-i isloye kiya hai kyuki end of 1 round mie last mie sabse badi value fix hojyegi 
//         {
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }

// }
// int main()
// {
//     int arr[10]={10,9,43,3,56};
//     int n=5;
//     sort(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<""<<arr[i];
//     }
// }*/
// //insertion sort 
// /*#include<iostream>
// using namespace std ;
// void insertionSort(int arr[], int n )
// {
//     for (int i=1;i<n;i++)
//     {
//         int temp=arr[i];
//         int j;

//         for(j=i-1;j>=0;j--)
//         {
//             if(arr[j]>temp)
//             {
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1]=temp;



//     }
// }*/
// //reverse an array 
// /*#include<iostream>
// using namespace std;
// void arr(int arr[],int n )
// {
//     int start=0;
//     int end =n-1;
//     while(start<=end )
//     {
//             swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int arrt[5]={1,2,3,4,5};
//     int n =5;
//     arr(arrt,n);
//     for(int i=0;i<=n-1;i++)
//     {
//         cout<<" "<<arrt[i];
//     }
// }*/
// //merge 2 sorted array 
// /*#include<iostream>
// using namespace std;
// void merge(int arr1[],int n, int arr2[],int m , int arr3[])
// {
//     int i=0,j=0;
//     int k=0;
//     while(i<n&&j<m)
//     {
//         if(arr1[i]<arr2[j])
//         {
//             arr3[k]=arr1[i];
//             k++;
//             i++;
//         }
//         else{
//             arr3[k]=arr2[j];
//             k++;
//             j++;
//         }

//     }
//     while(i<n)
//     {
//         arr3[k]=arr1[i];
//         k++;
//         i++;

//     }
//     while(j<m)
//     {
//         arr3[k]=arr2[j];
//         k++;
//         j++;
//     }
// }
// void print (int arr[],int n )
// {
//     for(int i =0;i<n;i++)
//     {
//         cout<<" "<<arr[i];
//     }
// }
// int main ()
// {
//     int arr1[5]={1,3,5,7,9};
//     int arr2[4]={2,4,6,8};
//     int arr3[15]={0};
//     int n=5;
//     int m=4;
//     merge(arr1,n,arr2,m ,arr3);
//     print(arr3,9);
//     return 0;


// }*/
// //palindorme string 
// /*#include<iostream>
// using namespace std ;
// bool eck(char arr[],int n )
// {
//     int s=0;
//     int e=n-1;
//     while (s<=e)
//     {
//         if(arr[s]!=arr[e])
//         {
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
     
//     }
//        return 1;
// }
// int main ()
// {
//     char arr[4];
//     int n=4;
//     cout<<"enter the string "<<endl;
//     cin>> arr;
//     cout<<"the enterd string is "<<arr<<endl;
   

    
//     cout<<"palindrom or not "<< eck(arr, n );
    
// }*/
// //counting the lenghth of string 
// /*#include<iostream>
// using namespace std;
// int  rush  (char arr[] )

// {
//     int coun=0;
//     for(int i =0;arr[i]!='\0';i++)
//     {
//         coun++;

//     }
//     return coun ;
// }
// int main ()

// {
//     char arr[5];
//  int n =5;
//  cin>>arr;
//  cout<<"the lenght of string is "<<rush(arr);
//  return 0;
// }*/
// /*#include<iostream>
// #include<vector>
// using namespace std;
// void palat(vector<char>s)
// {
//     int st=0;
//     int e=s.size()-1;
//     while (st<e)
//     {
//         swap(s[st++],s[e--]);
//     }

    
// }
// int main ()
// {
//     vector<char>s ;
//     cout<<"enter the value ";
//     for (int i =0;i<s.size();i++)
//     {
//         cin>>s[i];
//     }
//     cout<<s;

// }*/
// /*#include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][4];
//     for(int i=0;i<=3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<3;i++)
//     {
//         for(int j =0;j<4;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }*/
// /*#include<iostream>
// using namespace std ;



// bool isFound(int arr[][4],int row , int col,int target  )
// {
//     for(int row=0;row<3;row++)
//     {
//         for(int col=0;col<4;col++)
//         {
//             if(arr[row][col]==target)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }*/
// /*

// int main()
// {
//     int arr[3][4];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
 
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<arr[i][j]<<"  ";
//         }
//         cout<<endl;
//     }
//     cout<<"enter the element to sreach "<<endl;
//     int target ;
//     cin>>target;
//     if(isFound(arr,3,4,target ))
//     {
//         cout<<"element found "<<endl;
//     }
//     else{
//         cout<<"element not found "<<endl;
//     }

//     return 0;
// }
// */
// /*#include<iostream>
// using namespace std;
// int main()
// {
//     int i=5;
//     int *ptr=&i;
//     int **ptr2=&ptr;
//     cout<<"the value of ptr "<<ptr <<endl;
//     cout<<"the address of ptr is "<<&ptr<<endl;
//     cout<<"the address of i "<<&i<<endl;
//     cout<<" "<<*ptr2<<endl;
// }*/
// /*
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=5;
//     int *p=&i;
//     int *q=p;
//     cout<<q;
// }*/
// //recursion 
// /*#include<iostream>
// using namespace std ;
// int rec(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     else{
    
//     return n*rec(n-1);;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter the value"<<endl;
//     cin>>n;
//     int ans=rec(n);
//     cout<<ans;
// }*/
// /*#include<iostream>
// using namespace std;
// int power(int n )
// {
//     if(n==0)
//     return 1;
//     int small=power(n-1);
//     int big=2*small;
//     return big;
// }
// int main()
// {
//     int n;
//     cout<<"enter the value"<<endl;
//     cin >>n;
//     int ans= power(n);
//     cout<< ans ; 
// }*/
// /*#include<iostream>
// using namespace std ;
// void  count (int n )
// {
//     if(n==0){
//     return ;
//     }
//     cout<<n<<endl;
//     count(n-1);


// }
// int main()
// {
//     int n ;
//     cout<<"enter the value "<<endl;
//     cin>>n ;
//     count(n);

// }*/
// /*#include<iostream>
// using namespace std;
// int fibo(int n )
// {
//     if(n==0)
    
//         return 0;
//         if(n==1)
//         return 1;
    
//     int ans=fibo(n-1)+fibo(n-2);
//     return ans ;
// }
// int main ()
// {
//     int n ;
//     cout<<"entr the value of no "<<endl;
//     cin>>n ;
//     int an=fibo(n);
//     cout<<an ;
// }*/
// /*#include<iostream>
// using namespace std;
// void find(int n,string arr[] )
// {
//     if(n==0)
//     return ;
//     int digit=n%10;
//     n=n/10;
//     find(n,arr);
//     cout<<arr[digit]<<endl;

// }
// int main ()
// {
//     string arr[10]={"zero","one","two","three","four","five","six","seven ","eight ","nine ",};
//     int n;
    
//     cout<<"enter the number "<<endl;

//     cin>>n;
//     find(n,arr);

// }*/
// /*#include<iostream>
// using namespace std;
// bool isSorted(int *arr, int size )
// {
//     if(size==0||size==1)
//     return true ;
//     if(arr[0]>arr[1])
//     return false ;
//     else{
//         int rem =isSorted(arr+1,size-1);
//         return rem ;
//     }
// }
// int main()
// {
//     int arr[5]={2,4,6,7,8};
//     int size=5;
//     bool ans=isSorted(arr, size);
//     if(ans )
    
//         cout<<"the sorted array is "<<endl;
    
//     else
//         cout<<"the array is not sorted"<<endl;
    
//     return 0;

// }*/
// /*#include<iostream>
// using namespace std;
// int sum(int*arr,int size)
// {
//     if(size==0)
//     {
//         return 0;

//     }
//     if(size==1)
//     {
//         return arr[0];
//     }
//     int rem=sum(arr+1,size-1);
//     int s=arr[0]+rem;
//     return s;
// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     sum(arr,size);
// }*/
// /*#include<iostream>
// using namespace std ;
// bool liner(int *arr,int key,int size)
// {
//     if(size==0)

//     {
//         return false;
//     }
//     if(arr[0]==key)
//     {
//         return true ;

//     }
//     else 
//     {
//         bool rem =liner(arr+1,key,size-1);
//         return rem;
//     }
// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int key=8;
//     int size=5;
//     bool ans  =liner(arr,key, size);

// if(ans)
// {
//     cout<<"present "<<endl;

// }
// else{
//     cout<<"absent "<<endl;
// }
// return 0;
// }*/
// /*#include<iostream>
// using namespace std;
// bool search(int *arr,int key , int size)
// {
//     int s=arr[0];
//     int e=arr[size-1];
//     int mid=(s+e)/2;
//     if(size==0)
//     {
//         return false;
//     }
//     if(s>e)
//     {
//         return -1;
//     }
//     if(arr[mid]==key)
//     {
//         return true;
//     }
//     else if(arr[mid]>key){
//         e--;
//         return search(arr,key,size);

//     }
//     else if(arr[mid]<key){
//     s++;
//     return search(arr,key,size);
//     }
// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int key=2;
//     int size=5;
//     bool ans=search(arr, key, size);
//     if(ans)
//     {
//         cout<<"present "<<endl ;
//     }
//     else{
//         cout<<" absent "<<endl;
//     }
// }*/

// #include<iostream>
// using namespace std; 
// void merge(int *arr,int s,int e)
// {
//     int mid=(s+e)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;
//     int *first=new int[len1];
//     int *second=new int [len2];
//     int k=s;
//     for(int i=0;i<len1;i++)//copy krne ki game thi ye 
//     {
//         first[i]=arr[k++];
//     }
//      k=mid+1;
//      for(int i=0;i<len2;i++)
//     {
//         second[i]=arr[k++];
//     }
//     //merge krna hai 
//     int index1=0;
//     int index2=0;
//     int kk=s;
//     while(index1<len1 && index2<len2)
//     {
//         if(first[index1]<second[index2])
//         {
//             arr[kk++]=first[index1++];
//         }
//         else{
//             arr[kk++]=second[index2++];
//         }
    
//     while(index1<len1)
//     {
//           arr[kk++]=first[index1++];
//     }
//     while(index2<len2)
//     {
//        arr[kk++]=second[index2++];  
//     }
//     }


// }
// void  sorted(int*arr, int s, int e)
// {
//     int mid=(s+e)/2;
// //base case 
// if(s>=e)
// {
//     return;
// }
// //left part
// sorted(arr,s,mid);
// //right part
// sorted(arr,mid+1,e);
// //merge krne k liye 
// merge(arr, s, e);
// }
// int main()
// {
//     int arr[5]={2,5,1,4,6};
//     int n=5;
//     sorted(arr,0,n-1);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }