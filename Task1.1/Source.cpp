#include <iostream>
using namespace std;

class Die
{
    int dice;

public:  
    Die() :dice(1) { }
    Die(int x) { setDie(x); }
    void rolling()
    {
        dice = ((rand() % 6 + 1)); 
    }

    void setDie(int x) { dice = x; }
  
    int getDie() { return dice; };
    
    bool Yatzhee(Die* x, int count)
      {
          bool roll = true;

          for (int i = 0; i < (count - 1); i++)
          {
              if (x[i].getDie() == x[i + 1].getDie() && roll == true)
                  roll == true;
              else
                  roll = false;
          }

          return roll;
      }
};




int main()
{
    srand(time(0));
   
    Die roll[10];
    for (int i = 0; i < 10; i++)
    {
        roll[i].rolling();
    }

    for (int i = 0; i < 10; i++)
    {
        cout << roll[i].getDie() << endl;
    }
   
  
    if ((roll[10].Yatzhee(roll, 10)) == true)
    {
        cout << "Yathzee !!!" << endl;
    }
        else
        cout << "Not Yathzee !!!" << endl;

    
}