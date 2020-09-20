// Example solution for Rectangle and Square friend classes
#include <assert.h>
// Declare class Rectangle
class Rectangle{
    public:
    Rectangle(Square sq) : width_(sq.side_), height_(sq.side) {}
    int Area() {
      return width_*height_;  
    };
    private:
    int width_;
    int height_;
    friend class Square;
    
};
// Define class Square as friend of Rectangle
class Square {
    public:
    Square(int s) : side_(s) {}
    private: 
    friend class Rectangle;
    int side_;
    
};
// Add public constructor to Square, initialize side
    // Add friend class Rectangle
    // Add private attribute side
// Define class Rectangle
    // Add public function to Rectangle: Area()
    
    // Add private attributes width, height;
// Define a Rectangle constructor that takes a Square
// Define Area() to compute area of Rectangle
// Update main() to pass the tests
int main()
{
    Square square(4);
    //Rectangle rectangle(square);
    //assert(rectangle.Area() == 16); 
}
