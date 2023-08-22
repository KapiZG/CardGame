#ifndef PLAYER_H
#define PLAYER_H

#include "aplayer.h"

class Player : public APlayer
{
public:
    explicit Player(unsigned int playerID, QString playerNickName, QObject *parent = nullptr);

    bool getCard();
    void playCard();
    void winGame();
};

#endif // PLAYER_H
