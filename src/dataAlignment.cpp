#include <dataAlignment.h>
#include <dataNotAligned.h>

int main(){
    dataAlignment data;
    dataNotAligned data2;

    std::cout << "the size of data aligned " << sizeof(data) << std::endl;
    std::cout << "the size of data not aligned " << sizeof(data2) << std::endl;

    return 0;
}