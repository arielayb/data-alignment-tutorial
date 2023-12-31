#ifndef DATA_NOT_ALIGNED_H
#define DATA_NOT_ALIGNED_H

#include <iostream>

// A size total of 56 bytes with padding for this class.
class dataNotAligned {
    public:
        int no_claps;         // 4 bytes
        char *body;           // 8 bytes
        bool is_published;    // 1 byte 
        char *author;         // 8 bytes
        int no_comments;      // 4 bytes
        char *title;          // 8 bytes
        bool is_member_only;  // 1 byte       
};

#endif