#include <iostream>
#include "../THIS_LIBRARIE_IS_AWESOME/math_funcs.h"
#include<string>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::vector<float> vec = {};
    int len;

    std::cout << "������� ����� ������: ";
    std::cin >> len;

    for (int i = 0; i < len; i++) {
        std::cout << "������� �������: ";
        float el;
        std::cin >> el;

        vec.push_back(el);
    }

    std::cout << std::endl;

    std::cout << "������� ��������������: " << ArithmeticMean(vec) << std::endl;
    std::cout << "�������: " << Median(vec) << std::endl;
    std::cout << "������� ��������������: " << RootMeanSquare(vec) << std::endl;
    std::cout << "���������: " << Variance(vec) << std::endl;

    std::cout << std::endl << "��, ��� ������ ��� � ���� ���� ����� ����������� ���������� ���� �� ��� �������!" << std::endl;
}
