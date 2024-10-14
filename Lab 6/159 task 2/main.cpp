#include <iostream>
#include<cstdlib>
#include<ctime>
#include "Coordinate.h"
using namespace std;
double randomInRange(double min, double max) {
    // Ensure min is less than or equal to max
    if (min > max) {
        std::swap(min, max); // Swap if min is greater than max
    }

    // Generate a random double between 0 and 1
    double randomFraction = static_cast<double>(rand()) / RAND_MAX;

    // Scale and shift the random value to the desired range
    return min + randomFraction * (max - min);
}

void randomAssignment(Coordinate c[],int size){
    for(int i=0;i<size;i++){
        c[i].abscissa=randomInRange(0,10000);
        c[i].ordinate=randomInRange(0,10000);
    }
}
void sort(Coordinate c[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<0;j++){
            if(c[i]>c[j]){
                swap(c[i],c[j]);
            }
        }
    }
}
Coordinate highest(Coordinate c[],int size){
    return c[size-1];
}
Coordinate lowest(Coordinate c[],int size){
    return c[0];
}
int main()
{
    Coordinate coord[10];
    randomAssignment(coord,10);
    sort(c,10);
    cout<<highest(c,10)<<endl;
    cout<<lowest(c,10)<<endl;

    return 0;
}
