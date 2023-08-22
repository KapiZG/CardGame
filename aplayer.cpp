#include "aplayer.h"

APlayer::APlayer(unsigned int playerID, QString playerNickName, QObject *parent)
    : QObject{parent},
      playerNickName(playerNickName),
      playerID(playerID)
{

}
