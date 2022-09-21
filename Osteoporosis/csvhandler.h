#ifndef CSVHANDLER_H
#define CSVHANDLER_H

#include <vector>
#include<string>
#include <fstream>
#include <sstream>
#include <QtDebug>
#include <QFile>
#include <QDir>
#include <QDateTime>
#include <typeinfo>

using namespace std;


class csvhandler
{
public:
    csvhandler();

    void loadQuestion();
    void exportCSV();
    bool isNum(const std::string& s);
    int maxPage = 0;
    int maxQuestion = 0;
    string question;

    vector< tuple<int,string,string,string> > questionArr;
    vector< tuple<int,string> > answerArr;

};

#endif // CSVHANDLER_H
