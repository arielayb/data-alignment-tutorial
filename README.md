	• What is data alignment?
		○ Data alignment is one of the optimization techniques used to achieve good performance.
		○ Data alignment is the placement of data in memory so that the CPU can access it efficiently.

	• Data alignment example in c++:
		○ In c++, structs and classes are allocated as a contiguous block of memory with each element having its own size, offset, and alignment. 
		○ Let's assume a 64 bit CPU is being used.
			§ Let's also assume the program is a Book.
				□ Code:

#ifndef DATA_ALIGNMENT_H
#define DATA_ALIGNMENT_H
#include <iostream>
// A size total of 40 bytes with padding for this class.
// On the other hand, adding __attribute__((packed)) at the end of this class object
// will be the total size of 34 bytes.
class dataAlignment {
    public:
        char *title;           // 8 bytes
        char *author;          // 8 bytes
        char *body;            // 8 bytes
        bool is_published;     // 1 byte
        bool is_member_only;   // 1 byte
        int no_comments;       // 4 bytes
        int no_claps;          // 4 bytes
};
#endif

	• Data alignment is achieved by dividing the allocated memory into equal-sized segments.
		○ Note: each size corresponds to the maximum alignment.

	• Padding:
		○ Padding is the technique of adding extra bytes to a struct or class to align its data members to specific boundaries.
			§ Padding is done so that data can be accessed efficiently by the processor.
			§ Data from memory is fetched in chunk fixed sizes, such as 8 or 4 bytes.
			§ Padding can improve the performance of a program.
		
	• Greedy Alignment in c++:
		○ Greedy alignment is a technique used to minimize padding by ordering the data members of a class in decreasing order of size.
			§ The largest data members are placed first in the class or struct.

	• Padding compression:
		○ Using packed attribute tells the compiler to place data members without padding bytes in between.
		○ Packed attribute can reduce the size of the class or struct.
		○ However, it does not guarantee data alignment and may degrade performance.
			§ NOTE: Having a lot of RAM and using packed attribute. 
			§ A packed class or struct requries more work for the CPU to get the remaining bytes.
			§ The compiler will apply padding bytes automatically.
