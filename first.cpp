#include <iostream>
using namespace std;
class Rectangular
{
private:
    int length;
    int breath;

public:
    int area()
    {
        return length * breath;
    }
    int Perimetre()
    {

        return 2 * (length + breath);
    }
    /// valedating functions
    void setLength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }

        else
            length = 0;
    }
    void setBreath(int b)
    {
        if (b >= 0)
        {
            breath = b;
        }

        else
            breath = 0;
    }
    int getBreath()
    {
        return breath;
    }
    int getLength()
    {
        return length;
    }
};
int main()
{
    ///Object-Oriented Programming
    Rectangular r1, r2;
    r1.setLength(14);
    r1.setBreath(-13);
    cout << r1.area();

    return 0;
}
