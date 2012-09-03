#ifndef BRKDPENCERE_H
#define BRKDPENCERE_H

#include <QMainWindow>

namespace Ui {
class brkdpencere;
}

class brkdpencere : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit brkdpencere(QWidget *parent = 0);
    ~brkdpencere();
    
private:
    Ui::brkdpencere *ui;
    int sayac;
    int cikarma(int sayi1, int sayi2);

private slots:
    void baslatButonuTiklandi();
    void durdurButonuTiklandi();
};

#endif // BRKDPENCERE_H
