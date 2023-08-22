#ifndef APLAYER_H
#define APLAYER_H

#include <QObject>

class APlayer : public QObject
{
    Q_OBJECT
public:
    explicit APlayer(unsigned int playerID, QString playerNickName, QObject *parent = nullptr);
protected:
    const QString playerNickName;
    const unsigned int playerID;


    virtual bool getCard() =0;
    virtual void playCard() =0;
    virtual void winGame() =0;
signals:

};

#endif // APLAYER_H
