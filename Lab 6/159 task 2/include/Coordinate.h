#ifndef COORDINATE_H
#define COORDINATE_H


class Coordinate
{
private:
    float ordinate;
    float abscissa;
    public:
        Coordinate();
        Coordinate(float ,float );
        float operator-(const Coordinate )const ;
        float getDistance()const;
        void moveX(float val);
        void moveY(float val);
        void move(float xVal,float yVal);
        bool operator>(const Coordinate c)const;
         bool operator<(const Coordinate c)const;
          bool operator==(const Coordinate c)const;
           bool operator!=(const Coordinate c)const;
            bool operator>=(const Coordinate c)const;
             bool operator<=(const Coordinate c)const;
        ~Coordinate();


};

#endif // COORDINATE_H
