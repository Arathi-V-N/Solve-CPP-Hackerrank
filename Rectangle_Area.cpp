
/*
 * Create classes Rectangle and RectangleArea
 */
 class Rectangle{
     protected:
     int width, height;
     
     public:
     void read_input(){
         cin >> width >> height;
     }
         
     void display(){
         cout << width << " " << height<<endl;
     }
     };
     
class RectangleArea: public Rectangle{
    public:
    void display()
    {
        cout << width*height <<endl;
    }
};
