#include <iostream>
#include "interfaces/imedia.h"
#include "music.h"

void playMedia(iMedia &mediaPlayer)
{
    mediaPlayer.play();
}

void pauseMedia(iMedia &mediaPlayer)
{
    mediaPlayer.pause();
}

int main()
{
    Music musicPlayer;
    playMedia(musicPlayer);
    pauseMedia(musicPlayer);

    return 0;
}
