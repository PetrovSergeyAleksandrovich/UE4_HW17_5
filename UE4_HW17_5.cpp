#include <iostream> 
#include <vector>

class myData
{
private: 
    int a = 1;
    int b = 2;
    int c = 3;
public:
    void SetData(int A, int B, int C)
    {
        a = A;
        b = B;
        c = C;
    }
    void ShowData()
    {
        std::cout << "\nYour Data now: " << "\na = " << a << "\nb = " << b << "\nc = " << c << std::endl;
    }
};

class myVector
{
private:
    double x = 0;
    double y = 0;
    double z = 0;
    std::vector<double> currentVectorState = {};
public:
    void SetVector(double _x, double _y, double _z)
    {
        currentVectorState.push_back(_x);
        currentVectorState.push_back(_y);
        currentVectorState.push_back(_z);
    }

    void ShowVector()
    {
        std::cout << "\nYour Vector now: ";
        for(int i = 0; i < currentVectorState.size(); i++)
        {
            std:: cout << currentVectorState[i] << " ";
        }

    }

    void VectorLength()
    {
        std::cout << "\nYour vector has: " << currentVectorState.size() << " elements\n";
    }
};

int main()
{ 
    myData tmp;
    myVector vec;
    int A, B, C;

    std::cout << "Input data:\nA:";
    std::cin >> A;
    std::cout << "Input data:\nB:";
    std::cin >> B;
    std::cout << "Input data:\nC:";
    std::cin >> C;
    tmp.SetData(A, B, C);
    tmp.ShowData();

    std::cout << std::endl;

    std::cout << "Input vector data:\nX:";
    std::cin >> A;
    std::cout << "Input vector data\nY:";
    std::cin >> B;
    std::cout << "Input vector data\nZ:";
    std::cin >> C;

    vec.SetVector(A, B, C);
    vec.ShowVector();
    vec.VectorLength();

    return 0;
}
