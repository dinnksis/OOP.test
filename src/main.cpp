#include <iostream>
int addd(int a,int b);
int subtr(int a,int b);

int main() {
    int a,b;
    std::cin>>a>>b;
    std::cout<<"+:"<<addd(a,b)<<std::endl;
    std::cout<<"-:"<<subtr(a,b);
}