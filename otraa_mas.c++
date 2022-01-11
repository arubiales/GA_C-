#include <iostream>

using namespace std;


class Example{
    private:
        int num1;

    public:

    void set_num1(int n){
        this->num1 = n;
    }

    int get_num1(){
        return num1;
    }
};


int main(){
    Example instance(10, 8);

    instance.set_num1(5);
    cout<<instance.get_num1();


}