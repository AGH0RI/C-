#include <iostream>

using namespace std;

class Rectangle
{
public:
    int l,b;
    void display()
        {
            cout<<b<<" "<<l<<endl;
        }
};
class RectangleArea :public Rectangle
{
    public:
        void read_input()
        {
            cin>>l>>b; 
        }
        void display()
        {
            cout<<l*b;
        }

};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}