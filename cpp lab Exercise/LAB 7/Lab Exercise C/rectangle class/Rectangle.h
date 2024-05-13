#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    public:
       Rectangle();
       Rectangle(float newLength, float newWidth);
       
        void setLenght(float a);
        float getLength();

        void setWidth(float b);
        float getWidth();

       float calculateAreaOfRectangle(float lengthValue, float widthValue);
       ~Rectangle();
    private:
        float length;
        float width;
};

#endif