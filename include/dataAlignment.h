#ifndef DATA_ALIGNMENT_H
#define DATA_ALIGNMENT_H

#include <iostream>

// A size total of 16 bytes with padding for this class.
// On the other hand, adding __attribute__((packed)) at the end of this class object
// will be the total size of 13 bytes.
class dataAlignment {
    public:
        int no_comments;      // 4 bytes
        int no_claps;         // 4 bytes
        char title;           // 1 byte
        char author;          // 1 byte
        bool is_published;    // 1 byte
        bool is_member_only;  // 1 byte

};

#endif