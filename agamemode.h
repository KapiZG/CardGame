#ifndef AGAMEMODE_H
#define AGAMEMODE_H

#include <QMainWindow>

class AGameMode : public QMainWindow
{
    Q_OBJECT
public:
    explicit AGameMode(unsigned int gameID, QWidget *parent = nullptr);

protected:
    const unsigned int gameID;
    int* players[4];

signals:

};

#endif // AGAMEMODE_H
