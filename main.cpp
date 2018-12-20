#include <QCoreApplication>
#include <QDebug>
#include <QProcess>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString app = "xed"; // notepad

    qInfo() << "Start";
    QProcess proc1;
    proc1.start(app);
    qInfo() << "Exit code: " << proc1.exitCode();

    qInfo() << "Execute";
    QProcess proc2;
    proc1.execute(app);
    qInfo() << "Exit code: " << proc2.exitCode();

    return a.exec();
}
