#ifndef ARGUMENTHANDLING_H
#define ARGUMENTHANDLING_H
#include <QCoreApplication>
#include <QCommandLineParser>

// Class with some static functions to handle the arguments passed to the program
class ArgumentHandling
{
public:
    ArgumentHandling();
    static bool parseArgs(QCoreApplication &app);
    static QString getSortingAlgorithm();
    static bool verifySortingAlgorithm(QString typedString);
    static QString getHeader();
    static QString header;
    static const char* program_name;
    static const char* program_version;
    static const char* program_bug_address;
    static const char* option_bubble_sort;
    static const char* option_insertion;
    static const char* option_merge_sort;
    static QString sortingAlgorithm;
};

#endif // ARGUMENTHANDLING_H
