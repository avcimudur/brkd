#include "brkdpencere.h"
#include "ui_brkdpencere.h"
#include <QtDebug>
#include <QMessageBox>

brkdpencere::brkdpencere(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::brkdpencere)
{
    ui->setupUi(this);

    connect(ui->baslat, SIGNAL(clicked()), this, SLOT(baslatButonuTiklandi()));
    connect(ui->durdur, SIGNAL(clicked()), this, SLOT(durdurButonuTiklandi()));
    sayac = 0;
}

brkdpencere::~brkdpencere()
{
    delete ui;
}

int brkdpencere::cikarma(int sayi1, int sayi2)
{
    int cikarma = sayi1 - sayi2;
    return cikarma;
}

void brkdpencere::baslatButonuTiklandi()
{
    sayac++;
    qDebug() << "Sayac degeri: " << sayac;
    int s1 = ui->bir->text().toInt();
    int s2 = ui->iki->text().toInt();
    int sonuc = cikarma(s1, s2);
    //QMessageBox msgbox;
    //msgbox.setText(QString::number(sonuc));
   // msgbox.show();
    qDebug() << "Sonuc = " << sonuc;

}

void brkdpencere::durdurButonuTiklandi()
{
    qDebug() << "Durdur Butonu Tiklandi";

}
