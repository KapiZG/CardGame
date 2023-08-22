#include "mainmenu.h"
#include "./ui_mainmenu.h"
#include "player.h"
#include <QMessageBox>

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
    , player(NULL)
{
    ui->setupUi(this);

    connect(ui->BLogin, &QPushButton::pressed, this, &MainMenu::login);
    showDefaultView();
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::showSelectGameView()
{
    ui->WDefault->setVisible(false);
    ui->WGameSelect->setVisible(true);
    connect(ui->BSelectGameModeBack, &QPushButton::pressed, this, &MainMenu::showDefaultView);
    connect(ui->BSingleplayer, &QPushButton::pressed, this, &MainMenu::createSinglePlayerGame);
}

void MainMenu::showDefaultView()
{
    ui->WGameSelect->setVisible(false);
    ui->WDefault->setVisible(true);
    connect(ui->BPlay, &QPushButton::pressed, this, &MainMenu::showSelectGameView);
    connect(ui->BExit, &QPushButton::pressed, this, &QMainWindow::close);
}

void MainMenu::createSinglePlayerGame()
{
    if(player == NULL)
    {
        QMessageBox msgBox;
        msgBox.setText("Nie jesteś zalogowany. Czy chcesz się zalogować");
        msgBox.setInformativeText("Brak zalogowania spowoduje że zostaniesz oznaczony jako gość");

        QPushButton *bLogIn = msgBox.addButton(tr("Zaloguj"), QMessageBox::ActionRole);
        QPushButton *bCancel = msgBox.addButton(QMessageBox::Cancel);

        msgBox.exec();

        if(msgBox.clickedButton() == bLogIn)
        {

        }
        else if(msgBox.clickedButton() == bCancel)
        {
            loginPlayer(0, "Guess");
        }
    }
}

void MainMenu::login()
{

}

void MainMenu::loginPlayer(unsigned int playerID, QString playerNick)
{
    player = new Player(playerID, playerNick);
    ui->TPlayerNickname->setText(playerNick);
}
