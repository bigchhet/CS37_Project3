#include <iostream>
#include <string>

using namespace std;

#ifndef Minion_H
#define Minion_H

class Minion
{
    //declare friend relationship
    friend ostream& operator<<(ostream&, const Minion&);
    
    private:
        //declare private attributes
        string name;
        float height;
        int hair;
        int bananasOwned;

        //declare staic minionCount
        static int minionCount; 

    public:
        //constructor
        Minion(string, float, int, int);

        //getter function
        float getHeight() const;
        string getName() const;
        int getHair() const;
        int getBananasOwned() const;

        //update count function
        static void printMinionCount();
        
        //logic to overload operator
        bool operator>(const Minion&) const;
        bool operator<(const Minion&) const;

        //pre-increment overload
        Minion &operator++();

        //post-increment overload with dummy int
        Minion operator++(int);
};

#endif