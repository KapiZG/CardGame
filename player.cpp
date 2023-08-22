#include "player.h"

Player::Player(unsigned int playerID, QString playerNickName, QObject *parent)
    : APlayer(playerID, playerNickName, parent)
{

}

bool Player::getCard()
{
    return true;
}

void Player::playCard()
{

}

void Player::winGame()
{

}
