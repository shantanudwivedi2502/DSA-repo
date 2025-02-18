#include<iostream>
using namespace std;
class Hero 
{    private:
    int health;
    public:
    char level;
    void print()
    {
        cout<<level<<endl;
    }

    int getHealth()
    {
        return health;
    }
     int getLevel()
    {
        return level;
    }
    int setHealth(int h)
    {
        health=h;
        
    }
   
    int setLevel(char ch)
    {
        level=ch;

    }



};
int main()
{
    Hero *b=new Hero;
    b->setHealth(40);
    b->setLevel('A');
    cout<<"health of ramesh is "<<b->getHealth()<<endl;
    cout<<"the level of ramesh is "<<b->getLevel();









   /* Hero ramesh;
    ramesh.setHealth(70);
    cout<<"ramesh health is "<<ramesh.getHealth()<<endl;
    ramesh.setLevel('a') ;
    cout<<"ramesh level is "<<ramesh.getLevel()<<endl;*/




   // ramesh.health=90;
  //  ramesh.level='A';
    
   // cout<<"health of ramesh is "<<ramesh.health<<endl;
    //cout<<"level of ramesh is "<<ramesh.level<<endl;

}

