#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <qprocess.h>
#include <qstringlist.h>
#include <QDebug>
#include <qdir.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


//Start the UserHome of Varian Software
void MainWindow::on_startButton_clicked()
{
         /* Fill in the following things:
         * - Name of program to execute.
         * - Every option needed by the program.
         * Attention: be aware of any strange options you pass to the program, e.g.
         * IP addresses. Quoting these options will usually help.
         */

        //QString program = "C:\\Program Files (x86)\\Varian\\DA Workspaces\\StartUserHome.exe";

      //  QStringList workdir;
      //  workdir<< "C:/" <<"Program Files (x86)/"<<"Varian/"<<"DA Workspaces/";

       // QString program = "StartUserHome.exe";

       // qDebug() << "Workdir: "<<workdir;

        //qDebug() << "Program: "<<program;


       // QString myUnixPath = QDir::toNativeSeparators("C:/Program Files (x86)/Varian/DA Workspaces/");
       // qDebug() << "myUnixPath "<<myUnixPath;

       // QString qtPath = QDir::fromNativeSeparators("C:/Program Files (x86)/Varian/DA Workspaces/");
       // qDebug() << "qtPath "<<qtPath;



        // QString program = "D:/zoulian/CloudShell/User home/Userhome.exe";
         //QString program = "D:/Program Files (x86)/Varian/DA Workspaces/StartUserHome.exe";
         QString program = "C:/Program Files (x86)/Varian/DA Workspaces/StartUserHome.exe";
         qDebug() << "program "<<program;


        // /Volumes/ADATA\ UFD/Programming/Qt
        /*if the external program has options to set, using the arguments
         * QStringList arguments;
         * arguments << "-style" << "fusion";
         */
        QProcess *startUserHome = new QProcess();

        try
        {

            startUserHome->setProgram(program);
            startUserHome->start();


        }
        catch (...)
        {
            qDebug() << "CRASH!";
        }

        //startUserHome->start(program, arguments);


}
