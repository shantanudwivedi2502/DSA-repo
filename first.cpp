/*#include<iostream>
using namespace std;
int main(){
    int a,b ;
    cout<<"enter the vlue of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<"the sum number is "<<a+b;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    if(n>0)
    {
        cout<<"the number is postive "<<endl;

    }
    else{
        cout<<"the number is negative "<<endl;

    }


}*/
/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the values of a,b"<<endl ;
    cin>>a>>b;
    if(a>b)
    {
        cout<<"a";
        cout<<a;
    } 
    else{
        cout<<"b";
        cout<<b;
    }
}*/
/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the value of n";
    cin>>n;
    if(n>0)
    {
        cout<<"it is a positive number";

    }
    else if(n==0)
    {
        cout<<"it is zero";

    }
    else{
        cout<<"it is negative number";
    }
    return 0;
}*/
/*#include<iostream>
using namespace std ;
int main(){
    char a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    if(a>=65&&a<=90)
    {
        cout<<"upper case ";
    }
    else if(a>=97&&a<=122)
    {
        cout<<"lower case";

    }
    else if (a>=48&&a<=57)
    {
        cout<<"it is numeric ";

    }
    else{
        cout<<"it is something else ";
    }
}*/
/*#include<iostream>
using namespace std ;
int main(){
    int i=1;
    while(i<=10)
    {
        cout<<i<<endl;;
        i++;
    }

}*/
/*#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }

}*/



/*#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n ;
    int sum =0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
          i++;
      
        
    }
    cout<<"sum is "<<sum;


}*/
//find sum of all even no 
/*#include<iostream>
using namespace std; 
int main(){
    int i=1;
    int n;
    int sum=0;
    cout<<"enter the value of n ";
    cin>> n ;
    while(i<=n)
    {
        if(i/n==0)
        {
            sum=sum+i;
        }
        i++;
    }
    cout<<"sum of all even number is "<<sum ;
}*/
//prime number 
/*#include<iostream>
using namespace std;
int main(){
int i=1;
int n ;
cout<<"enter the value of n ";
cin>>n ;
for(i=1;i<=n;i++)
{
    if(i%n==0){
        cout<<"it is not prime"<<endl;

    }
    else{
        cout<<"it is prime "<<endl;
    }
}
}*/
