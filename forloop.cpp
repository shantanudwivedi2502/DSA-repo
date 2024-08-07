/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }


}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i =1; i<=n;i++)
    {
        sum=sum+i;
       
    }
     cout<<sum;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n =10;
    int a=1;
    int b=0;
    cout<<a<<" "<<b;
    for(int i =1;i<=n;i++)
    {
        int nextNumber=a+b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber;
    
    }
}*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime ";

        }
        else{
            cout<<"its prime";
        }
    }
}