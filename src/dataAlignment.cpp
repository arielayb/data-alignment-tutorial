#include <dataAlignment.h>
#include <dataNotAligned.h>
#include <dataAlignmentPacked.h>

int main(){

    dataAlignment data;
    dataNotAligned data2;
    dataAlignmentPacked data3;

    std::cout << "the size of data aligned " << sizeof(data) << std::endl;
    std::cout << "the size of data not aligned " << sizeof(data2) << std::endl;
    std::cout << "the size of data aligned and packed " << sizeof(data3) << std::endl;

    return 0;
}