#include <iostream>

using namespace std;

void printAge (int t, int g)
{
    cout << "Oscar is " << t << " years old\n";
    cout << "Jimbob is " << g << " years old\n";
}

int main()
{
    printAge(19, 3);
    int a, b;
    
   
    cout << "\n Enter Oscar's age, bud\n" ;
    cin >> a;
    cout << "Go ahead and enter Jimbob's age\n";
    cin >> b;
    
    
    
    if (a > b)
    {
     cout << "Oscar is older \n" ;
    
    }
    if ( a < b)
    {
        cout << "Jimbob is older\n" ;
    }
    if ( a == b)
    {
        cout << "They're both just as old\n" ;
        
    }
    

    
    return 0;
    
}
