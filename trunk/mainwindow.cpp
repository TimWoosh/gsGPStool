#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtXml/QDomElement>
#include <QtXml/QDomDocument>
#include <QtXml/qdom.h>
#include <QDomNodeList>
#include <QDomNode>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QFileDialog>
#include "waypointmaster.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile file(QFileDialog::getOpenFileName(this, tr("Open gpx file"), QString()));

    QDomDocument gpxml("xml");
    if(file.open(QFile::ReadOnly))
    {
        qDebug() << "xml file opened";
        int l,c;
        QString error;
        if(!gpxml.setContent(&file, false,&error,&l,&c))
        {
            QString msg("Error parsing project.xml: " + error +
                                    " (line " + QString::number(l) +
                                    ", column " + QString::number(c) + ")");
        }
        QDomElement xmlement = gpxml.documentElement();
        QString gpswp;
        QDomNodeList nl = xmlement.childNodes();

        QDomElement de = nl.at(0).toElement();
        WayPoint *wm = new WayPoint(&de, this);

        int numNodes = nl.count();
        for(int i=0; i<numNodes; i++)
        {

            gpswp = nl.at(i).nodeName();
        }

    } else {
        qDebug() << "file not opened...";

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
