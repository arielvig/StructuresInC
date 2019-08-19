#include <iostream>

using namespace std;
struct stick
{
    double lengthInInches;
    string material;
    double weightInOunces;


};



int main()
{

    stick walkingStick;
    //we need many walking sticks
    const int SIZE = 5;
    stick allWalkingSticks[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        //ask for the information about the walking stick
        stick temp;
        cout << "Enter the length in inches: " << endl;
        cin >> temp.lengthInInches;
    }

    walkingStick.lengthInInches = 60;
    walkingStick.material = "Wood";
    walkingStick.weightInOunces = 20;
    //walkingStick.nickname = "Ol Reliable";
    allWalkingSticks[0] = walkingStick;
    stick s = {25.5, "wood", 32.5};
    allWalkingSticks[1] = s;
    for(int i = 0; i < SIZE; i++)
    {
        cout << allWalkingSticks[i].material << " Length in inches: " <<
    allWalkingSticks[i].lengthInInches << " Weight ounces: " <<
    allWalkingSticks[i].weightInOunces << endl;
    }


    return 0;
}
