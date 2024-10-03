#include "music.h"

Music::Music()
    :m_variable{ 2 }
{

}

void Music::play()
{
    std::cout << "Play music\n";
}

void Music::pause()
{
    std::cout << "Pause music\n";
}
