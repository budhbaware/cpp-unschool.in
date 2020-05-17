/* C++ Program to Find Area of Shapes using Function Overloading */

#include<iostream>
using namespace std;
class measure
{
        public:
                void shape(int r);
                void shape(int l,int b);
                void shape(float t,int d,int e);
                void shape(long a);

};
void measure::shape(int r)
{
        cout<<"Area of the circle is  "<<3.14*r*r;

}
void measure::shape(int l,int b)
{
        cout<<"Area of the rectangle is"<<l*b;
}
void measure::shape(float t,int d,int e)
{
        cout<<"Area of the triangle is"<<t*d*e;
}
void measure::shape(long a)
{
        cout<<"Area of the square is"<<a*a;
}

int main()
{
        int r,d,e,l,b;
        float t,c,h;
        long a;
        int ch;
        measure obj;
        cout<<"\tCALCULATION OF AREA OF FOLLOWING SHAPES:";
        cout<<"\n\n1. Area of circle is ";
        cout<<"\n2. Area of rectangle is ";
        cout<<"\n3. Area of triangle is ";
        cout<<"\n4. Area of square is ";

        cout<<"\n\tEnter your choice ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                        cout<<"Enter the value of radius of the circle \n";
                        cin>>r;
                        obj.shape(r);
                        break;
                case 2:
                        cout<<"Enter the sides of rectangle \n";
                        cin>>l>>b;
                        obj.shape(l,b);
                        break;
                case 3:
                        cout<<"Enter the sides of triangle \n";
                        cin>>d>>e;
                        obj.shape(0.5,d,e);
                        break;
                case 4:
                        cout<<"Enter the sides of square";
                        cin>>a;
                        obj.shape(a);
                        break;

                default:
                        cout<<"\nINVALID CHOICE";
        }
        return 0;
}
