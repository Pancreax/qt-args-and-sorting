#include "ArgumentHandling.h"
#include <QDebug>

ArgumentHandling::ArgumentHandling()
{

}

QString ArgumentHandling::header =  "************************************************************************************\n"
                                    "*                                     qtSort                                       *\n"
                                    "*                                                                                  *\n"
                                    "* Hi! I am just another random program to study sorting algorithms, C++ and Qt.    *\n"
                                    "* I use qDebug for some prints because i'm just a test program.                    *\n"
                                    "* For things that should really be shown to de user, it must be used std::cout!    *\n"
                                    "*                                                                                  *\n"
                                    "************************************************************************************\n";

QString ArgumentHandling::sortingAlgorithm = "";

const char* ArgumentHandling::program_name = "qtSort";
const char* ArgumentHandling::program_version = "v0.0";
const char* ArgumentHandling::program_bug_address = "https://github.com/Pancreax";

const char* ArgumentHandling::option_bubble_sort = "bubble-sort";
const char* ArgumentHandling::option_insertion = "insertion-sort";
const char* ArgumentHandling::option_merge_sort = "merge-sort";

bool ArgumentHandling::parseArgs(QCoreApplication &app)
{
    QCommandLineParser parser;

    parser.setApplicationDescription(QString("%1%2 - %3 - %4 %5").arg(header).arg(program_name).arg(program_version).arg(program_bug_address).arg("Helper"));

    parser.addHelpOption();
    parser.addVersionOption();

    QCommandLineOption sortAlgorithm(QStringList() << "s" << "sorting-algorithm",
                                     QCoreApplication::translate("main",QString("%1\n    %2\n    %3\n    %4")
                                                                 .arg("Select the sorting algorithm. Possibilities are:")
                                                                 .arg(option_bubble_sort)
                                                                 .arg(option_insertion)
                                                                 .arg(option_merge_sort)
                                                                 .toStdString().c_str()),
                                     "Sorting Algorithm",
                                     option_bubble_sort);
    parser.addOption(sortAlgorithm);

    parser.process(app);
    ArgumentHandling::sortingAlgorithm = parser.value(sortAlgorithm);

    if(!ArgumentHandling::verifySortingAlgorithm(ArgumentHandling::sortingAlgorithm))
    {
        parser.showHelp();
    }

    return true;
}

QString ArgumentHandling::getSortingAlgorithm()
{
    return ArgumentHandling::sortingAlgorithm;
}

bool ArgumentHandling::verifySortingAlgorithm(QString typedString)
{
    if(QString::compare(typedString, QString(option_bubble_sort), Qt::CaseInsensitive) &&
        QString::compare(typedString, QString(option_insertion), Qt::CaseInsensitive) &&
        QString::compare(typedString, QString(option_merge_sort), Qt::CaseInsensitive))
    {
        return false;
    }
    return true;
}

