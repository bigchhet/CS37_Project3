#include "Minion.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

//need to double check this logic
ostream &operator<<(ostream &output, const Minion &minion)
{
    return output;
};

int main()
{

    //declare variables
    string name;
    float height;
    int hair;
    int bananas;

    //read file
    string minionFileName = "minions.txt";
    ifstream minionFile(minionFileName);

    //Check file open
    if (!minionFile.is_open())
    {
        cout << "File fail to open." << endl;
        return 0;      
    }

    //logic for reading data from file
    //getting data for minion1
    minionFile >> name >> height >> hair >> bananas;
    const Minion minion1(name, height, hair, bananas);
    //getting data for minion2
    minionFile >> name >> height >> hair >> bananas;
    Minion minion2(name, height, hair, bananas);
    //getting data for minion3
    minionFile >> name >> height >> hair >> bananas;
    Minion minion3(name, height, hair, bananas);
    

    //Find the taller minion
    if (minion1.getHeight() > minion2.getHeight()) 
    {
        cout << minion1.getName() << " is taller than " << minion2.getName() << endl;
    } 
    if (minion2.getHeight() < minion3.getHeight()) 
    {
        cout << minion3.getName() << " is taller than " << minion2.getName() << endl;
    }


    //Minion2 output
    cout << minion2;
    cout << "The minion " << minion2.getName() << " is " << minion2.getHeight() << " inches tall, has " << minion2.getHair() << " strands of hair, and owns " << minion2.getBananasOwned() << " banana(s)." << endl;
    cout << minion2.getName() << " growing hair.\n";
    cout << "The minion now has " << (++(++minion2)).getHair() << " strands of hair.\n" << endl;

    //Minion3 output
    cout << minion3;
    cout << "The minion " << minion3.getName() << " is " << minion3.getHeight() << " inches tall, has " << minion3.getHair() << " strands of hair, and owns " << minion3.getBananasOwned() << " banana(s)." << endl;
    cout << minion3.getName() << " growing hair.\n";
    cout << "Before growing, the minion had " << minion3++.getHair() << " strands of hair.\n";
    cout << "After growing, the minion has " << minion3.getHair() << " strands of hair.\n" << endl;

    //show the minionCount 
    Minion::printMinionCount();                                                               
    
    return 0;
}