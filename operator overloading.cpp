#include <iostream>
using namespace std;
class Complex
{
 private:  float real, imaginary;
 public:
  Complex()
  {    real = 0;
    imaginary = 0;
  }
  Complex(float r, float i)
  {   real = r;
    imaginary = i;
  }
  friend Complex operator +(Complex c1, Complex c2)
  {    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
  }
  friend Complex operator -(Complex c1, Complex c2)
  {    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imaginary = c1.imaginary - c2.imaginary;
    return temp;
  }
        Complex operator*(Complex c)           // Operator overloading for multiplication
         {     Complex temp;
            temp.real = real * c.real - imaginary * c.imaginary;
            temp.imaginary = real * c.imaginary + imaginary * c.real;
            return temp;
        }
        Complex operator/(Complex c)           // Operator overloading for division
      {      Complex temp;
            double denominator = c.real * c.real + c.imaginary * c.imaginary;
            temp.real = (real * c.real + imaginary * c.imaginary) / denominator;
            temp.imaginary = (imaginary * c.real - real * c.imaginary) / denominator;
            return temp;
        }
        // Display the complex number
        void display()           // Display the complex number
         {      cout << real<<"+" << imaginary << "i" << endl;        }
};
int main() 
{    float a, b, c, d;
  cout << "Enter the first complex number:" << endl;
  cout << "Real number: ";
  cin >> a;
  cout << "Imaginary number: ";
  cin >> b;
  cout << "Enter the second complex number:" << endl;
  cout << "Real Number: ";
  cin >> c;
  cout << "Imaginary Number: ";
  cin >> d;
  Complex c1(a ,b);
  Complex c2(c, d);
  cout << "enter number are: ";
  c1.display();
  cout << endl;
  cout << "enter number are: ";
  c2.display();
  cout << endl;
    Complex c3, c4, c5, c6;
    int choice;
    do {			    // Menu driven program
        cout<< "Menu:" << endl;
        cout<< "1. Addition"<<endl; 
        cout<< "2.Subtraction" << endl;
        cout<< "3. Multiplication"<<endl;
        cout<< "4. Division" << endl;
        cout<< "5. Exit" << endl;
        cout<< "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:    c3 = c1 + c2;
                cout << "Addition: ";
                c3.display();
                break;
            case 2:	c4 = c1 - c2;
                cout << "Subtraction: ";
                c4.display();
                break;
            case 3:	c5 = c1 * c2;
                cout << "Multiplication: ";
                c5.display();
                break;
            case 4:	c6 = c1 / c2;
                cout << "Division: ";
                c6.display();
                break;
            case 5:  cout << "Exiting..." << endl;
            	break;
            default:   cout << "Invalid choice" << endl;
                break;
        }   } while (choice != 5);
    return 0;
}

