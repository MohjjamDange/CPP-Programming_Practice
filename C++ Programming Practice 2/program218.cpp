#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int Size;

        ArrayX(int value);
       

        ~ArrayX();
       

        void Accept();
        

        void Display();
        
        int Maximum();
       
};
 Array::ArrayX(int value)
        {
            Size = value;
            Arr = new int[Size];
        }


Array::~ArrayX()
        {
            delete [] Arr;
        }
		
void Array::Accept()
        {
            cout<<"Enter the values : "<<endl;
            for(int i = 0; i < Size; i++)
            {
                cin>>Arr[i];
            }
        }
		
 void  Array::Display()
        {
            cout<<"Values are: "<<endl;
            for(int i = 0; i < Size; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }
		
int Maximum()
        {
            int Max= Arr[0];
            for(int i = 0; i < Size; i++)
            {
                if(Arr[i] > Max)
                {
                    Max = Arr[i];
                }
            }
            return Max;
        }

int main()
{
    ArrayX obj1(5);
    obj1.Accept();
    obj1.Display();

    return 0;
}