#ifndef IMEDIA_H
#define IMEDIA_H

#include <iostream>

class iMedia
{
public:
    iMedia();
    virtual void play() = 0;
    virtual void pause() = 0;
};

#endif // IMEDIA_H
