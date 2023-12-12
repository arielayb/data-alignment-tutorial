#ifndef DATA_ALIGNMENT_H
#define DATA_ALIGNMENT_H

#include <iostream>

class dataAlignment {
    public:
        int no_comments;      // 4 bytes
        int no_claps;         // 4 bytes
        char title;           // 1 byte
        char author;          // 1 byte
        char body;            // 1 byte
        bool is_published;    // 1 byte 
        bool is_member_only;  // 1 byte
};

#endif