#include <iostream>
#include <cmath>

void deposit(double sum, double interest, double term, double tax = 0.805)
{
    double answer;
    answer = sum * interest / 100 * term / 12 * tax;
    answer = std::round(answer * 10) / 10.0;
    std::cout << "Profit is: " << answer << " UAH" << std::endl;
}

int main()
{
    double sum, interest, term, tax;

    std::cout << "Enter the deposit amount: " << std::endl;
    std::cin >> sum;

    std::cout << "Enter the interest rate (for example 15.5): " << std::endl;
    std::cin >> interest;

    std::cout << "Enter the duration: " << std::endl;
    std::cin >> term;

    int flag;
    std::cout << "You want to change the tax rate (for by default, this coefficient is equal to 0.805) ?" << std::endl;
    std::cout << "0 - No\t1 - Yes" << std::endl;
    std::cin >> flag;

    if (flag)
    {
        std::cout << "Enter the tax rate: " << std::endl;
        std::cin >> tax;
        std::cout << std::endl;
        deposit(sum, interest, term, tax);
    }
    else
        deposit(sum, interest, term);
}
