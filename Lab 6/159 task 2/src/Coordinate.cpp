#include "Coordinate.h"
#include<cmath>
Coordinate::Coordinate()
{
    ordinate=0;
    abscissa=0;
}

        Coordinate::Coordinate(float x,float y){
          ordinate=x;
          abscissa=y;
        }
        float Coordinate::operator-(const Coordinate c)const {
            float d;
            d=sqrt(pow((ordinate-c.ordinate),2)+pow((abscissa-c.abscissa),2));
            return d;
        }
        float Coordinate::getDistance()const{
            return sqrt((ordinate*ordinate)+(abscissa*abscissa));
        }
        void Coordinate::moveX(float val){
            ordinate+=val;
        }
        void Coordinate::moveY(float val){
            abscissa+=val;
        }
        void Coordinate::move(float xVal,float yVal){
            ordinate+=xVal;
            abscissa+=yVal;
        }
        bool Coordinate::operator>(const Coordinate c)const{
        return getDistance()>c.getDistance();
        }
         bool Coordinate::operator<(const Coordinate c)const{
             return getDistance()<c.getDistance();
         }
          bool Coordinate::operator==(const Coordinate c)const{
              return getDistance()==c.getDistance();
          }
           bool Coordinate::operator!=(const Coordinate c)const{
               return getDistance()!=c.getDistance();
           }
            bool Coordinate::operator>=(const Coordinate c)const{
                return getDistance()>=c.getDistance();
            }
             bool Coordinate::operator<=(const Coordinate c)const{
                 return getDistance()<=c.getDistance();
             }

Coordinate::~Coordinate()
{
    //dtor
}
