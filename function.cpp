/*#include<iostream>
using namespace std;
int pow()
{
    int a,b;
    cout<<"enter the value of a,b";
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans ;
}
int main()
{
    int answer=pow();
    cout<<answer;
}*/
/*#include<iostream>
using namespace std;
int fact(int n)
{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r)
{
    int numerator=fact(n);
    int denomintor=fact(r)*fact(n-r);
    int answer=numerator/denomintor;
    return answer;
}
int main(){

    int n ,r;
     cout<<"enter the value of n and r";
     cin>>n>>r;
     cout<<ncr(n,r)<<endl;
   
}*/
/*#include<iostream>
using namespace std ;
void counting(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the value";
    cin>>n;
    counting(n);
}*/