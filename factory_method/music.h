#ifndef MUSIC_H
#define MUSIC_H

#include "interfaces/imedia.h"

class Music : public iMedia
{
public:
    Music();


    // iMedia interface
public:
    void play();
    void pause();
private:
    int m_variable;
};

#endif // MUSIC_H
