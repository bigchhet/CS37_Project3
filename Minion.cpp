#include "Minion.h"

using namespace std;

int Minion::minionCount = 0;

Minion::Minion(string name, float height, int hair, int bananasOwned) 
{
    this->name = name;
    this->height = height;
    this->hair = hair;
    this->bananasOwned = bananasOwned;

    //increment minionCount
    minionCount++;   
}

//height getter function
float Minion::getHeight() const
{
  return height;
}

//banana getter function
int Minion::getBananasOwned() const
{
  return bananasOwned;
}

//name getter function
string Minion::getName() const
{
  return name;
}

//hair getter function
int Minion::getHair() const
{
  return hair;
}

//function to print minioncount
void Minion::printMinionCount() 
{
  cout << minionCount << " minions created." << endl;
}

//function to output greater than overload
bool Minion::operator>(const Minion &m) const
{
  return this->name > m.name;
}

//function to output less than overload
bool Minion::operator<(const Minion &m) const
{
  return this->name < m.name;
}

//overloading preincrement
Minion& Minion::operator++()
{
  //increment
  this->hair++;
  //return updated hair
  return *this;
}

//overloading postincrement
Minion Minion::operator++(int)
{
  //create temp variable of orignal hair
  Minion temp = *this;
  //update hair
  this->hair++;
  //return non-increment hair
  return temp;
}