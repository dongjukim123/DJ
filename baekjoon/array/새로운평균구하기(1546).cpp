//
// Created by dongju-kim on 23. 3. 10.
//
# include <iostream>
#include <algorithm>
#include <iomanip>

int main()
{
    int N;
    std::cin>>N;
    int maxval;
    auto * grade = new double[N];
    double sum=0;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> grade[i];
    }

    maxval = *std::max_element(grade,grade+N);

    for(int i=0;i<N;++i)
    {
        grade[i] = (grade[i]/maxval)*100;
        sum=sum+grade[i];
    }

    double avg = sum/N;
    std::cout<<std::setprecision(4);
    std::cout<<avg<<std::endl;

    delete[] grade;

    return 0;
}
