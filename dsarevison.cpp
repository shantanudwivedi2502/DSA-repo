/*
//to find the largest and the smallest element in array 

#include<iostream>
using namespace std;
int  getMax(int arr[],int n)
{
    int max= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
       
    }
    cout<<"the max elemnt is "<<max<<endl;

   
}

int getMin(int arr[],int n)
{
    int min =INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }

    }
    cout<<"the smallest element is "<<min;


}
int main ()
{
   int num[100];
   int size;
   cout<<"enter the size"<<endl;
   cin>>size;
   cout<<"enter the values"<<endl;
   for(int i=0;i<size;i++)
   {
    cin>>num[i];
   }
   getMax(num,size);
   getMin(num,size);

}*/
//liner search in array 
/*#include<iostream>
using namespace std;
bool search(int arr[],int n , int key)
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



int main ()

{
    int num[100];
    int size;
    cout<<"enter the size "<<endl;
    cin>>size;
    cout<<"enter the values"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>num[i];

    }
    int key ;
    cout<<"enter the value to find"<<endl;
    cin>>key;
       if (search(num, size, key)) {
        cout << "Key is present in the array." << endl;
    } else {
        cout << "Key is not present in the array." << endl;
    }
}*/
//reverse an array 
/*#include<iostream>
using namespace std ;

void reverse(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i];
    }
}
  




  int main ()
  {
    int num [200];
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    cout<<"enter the value"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>num[i];

    }
    reverse(num,size);
    print(num,size);
  }
 */
//swap adjacent 
/*#include<iostream>
using namespace std;
void swap(int arr[],int n)
{
    for(int i =0;i<n;i=i+2)
    {
       if(i+1<n)
       {
        swap(arr[i],arr[i+1]);
       }
    }
}
void print(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int num[100];
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    cout<<"enter the value"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    swap(num,size);
    print(num,size);

}*/
// find the element that occur only once in array 
/*#include<iostream>
using namespace std ;
int solve(int arr[],int n)
{
    int p=0;
    for(int i =0;i<n;i++)
    {
        p=p^arr[i];

    }
    cout<<"the sigle occurnace of element is"<<p;
}
int main ()
{
    int num[100];
    int size;
    cout<<"enter the the size"<<endl;
    cin>>size;
    cout<<"enter the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    solve(num,size);
}*/
//find the duplicate element  
/*#include<iostream>
using namespace std;
void ocu(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++)
    {
        ans=ans^arr[i];
    }
    cout<<"the duplicate value is "<<ans;
}
int main()
{
    int num[100];
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    cout<<"enter the value";
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    ocu(num,size);
}*/
/*#include<iostream>
#include <vector>
using  namespace std ;
vector<int> ocu(int ar1[], int ar2[], int n, int m)

{
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        int element =ar1[i];

        for(int j=0;j<m;j++)
        {
            if(element==ar2[j])
            {
                ans.push_back(element);
                ar2[j]=-12332;
                break;
            }
        }
      
    }
      return ans ;

}

int main ()
{
    int arr1[100];
    int arr2[50];
    int size1;
    int size2;
    cout<<"enter the size of 1st array"<<endl;
    cin>>size1;
    cout<<"enter the size of 2nd array "<<endl ;
    cin>>size2;
    cout<<"enter the values of array1 "<<endl;
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
       cout<<"enter the values of array2 "<<endl;
         for(int i=0;i<size2;i++)
    {
        cin>>arr2[i];
    }
 vector<int> result = ocu(arr1,arr2,size1,size2);

 cout<<"the intersection value is "<<endl;
  for (int val : result)
        {
            cout << val << " ";
        }
    
       return 0;

}*/
//
/*#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > check(int arr[], int n, int q)  // ✅ Fixed space in `>>`
{
    vector<vector<int> > ans;  // ✅ Fixed space in `>>`
    
    for (int i = 0; i < n; i++)  // ✅ Fixed `int i`
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == q) 
            {
                vector<int> temp;  // ✅ Declare inside loop to reset each time
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main() 
{
    int num[100];
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the values:\n";
    for (int i = 0; i < size; i++)  // ✅ Fixed `int i`
    {
        cin >> num[i];
    }

    int s;
    cout << "Enter the number whose sum is to be checked: ";
    cin >> s;

    vector<vector<int> > result = check(num, size, s);  // ✅ Fixed space in `>>`

    cout << "Pairs with sum " << s << " are:\n";
    for (size_t i = 0; i < result.size(); i++)  // ✅ Avoid `auto` if C++11 is not used
    {
        cout << "(" << result[i][0] << ", " << result[i][1] << ")\n";
    }

    return 0;
}*/
/*#include<iostream>
using namespace std;
void sort(int arr[],int n )

{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        while(s<e&&arr[s]==0)
        {
            s++;
        }
        while(s<e&&arr[e]==1)
        {
            e--;
        }
        swap(arr[s],arr[e]);
        s++;
        e--;
  
    
    }
};
void print(int arr[],int n )
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()

{
    int num[6]={1,0,0,1,0,1};
    sort(num,6);
    print(num,6);
}*/
//BINARY SEARCH
/*#include<iostream>
using  namespace std;

int search (int arr[],int n,int key )
{
    int s=0;
    int e=n-1;
    int mid= (s+e)/2;
    while (s<=e)
    {
        if(key==arr[mid])
        {
            return mid ;

        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        if(key<arr[mid])
        {
            e=mid-1;
        }
        mid= (s+e)/2;
    }
    return -1;
};
int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int index=search(odd,5,3);
    cout<<"the index of 3 is:- "<<index<<endl;
}*/
//firt occurance and last occurance 
/*#include<iostream>
using namespace std;
int  firstOcc(int arr[],int n,int key )
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(key==arr[mid])
        {
            ans=mid;
            e=mid-1;
        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        if(key<arr[mid])
        {
            e=mid-1;
        }
       mid =s+(e-s)/2;
    }
    return ans ;
 
};
int lastOcc(int arr[],int n,int key )
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans =-1;
    while(s<=e)
    {
        if(key==arr[mid])
        {
            ans=mid;
            s=mid+1;

        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        if(key<arr[mid])
        {
            e=mid-1;
        }
        mid =s+(e-s)/2;
    }
    return ans ;
    
};
int main ()
{
    int num[11]={1,2,3,3,3,3,3,3,3,4,5};
  
 
    cout<<"the first occ of 3 is at index no:-"<<  firstOcc(num,11,3)<<endl;
    cout<<"the last occ of 3 is at index no:-"<<   lastOcc(num,11,3);
}*/

