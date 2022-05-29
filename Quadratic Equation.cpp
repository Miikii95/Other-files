// Krzysztof Mikulec
// Quadratic Equation.cpp 

#include <iostream>
#include <cmath>

int main()
{
    double a, b, c, x1, x2;
    std::cout << "Rozwiazywanie rownan kwadratowych!\n Wprowadz kolejno wspolczynniki:\n";
    std::cout << "A = ";
    std::cin >> a;
    std::cout << "B = ";
    std::cin >> b;
    std::cout << "C = ";
    std::cin >> c;
    
    if (a == 0)
    {
        std::cout << "Rownanie nie jest kwadratowe!";
        return 0;
    }

    std::cout << "Twoje rownanie to: \n" << a << "x^2 ";
    if (b > 0)
    {
        std::cout << "+ " << b<<"x ";
    }
    if (b < 0)
    {
        std::cout << b<<"x ";
    }

    if (c > 0)
    {
        std::cout << "+ " << c << " ";
    }
    if (c < 0)
    {
        std::cout << c << " ";
    }


    double delta = b * b - (4 * a * c);

    if (delta >= 0)
    {
        x1 = -b + sqrt(delta);
        x1 = x1 / 2;

        x2 = -b - sqrt(delta);
        x2 = x2 / 2;
    }
    else
    {
        std::cout << "\n \n moze potem";
        return 0;
    }

    std::cout<<"\n\n Pierwiastki to:\n x1 = "<<x1<<"   x2 = "<<x2<<"\n\n\n";
}
