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
        // padding                2 bytes
        int no_comments;       // 4 bytes
        int no_claps;          // 4 bytes
        // padding                4 bytes
};

#endif