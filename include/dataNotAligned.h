#ifndef DATA_NOT_ALIGNED_H
#define DATA_NOT_ALIGNED_H

#include <iostream>

// A size total of 16 bytes with padding for this class.
// On the other hand, adding __attribute__((packed)) at the end of this class object
// will be the total size of 13 bytes.
class dataNotAligned {
    public:
        char title;           // 1 byte
        int no_claps;         // 4 bytes
        char body;            // 1 byte
        bool is_published;    // 1 byte 
        int no_comments;      // 4 bytes
        bool is_member_only;  // 1 byte       
};

#endif