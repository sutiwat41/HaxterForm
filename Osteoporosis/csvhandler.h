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


        //------------- method -------------//

        void loadQuestion();
        QString loadPrinter();
        void savePrinter(QString outPrinter);
        void exportCSV();
        vector<vector<string> > loadCSV(string fileName);



        //------------- attribute -------------//
        bool newVersion = true;
        int maxPage = 0;
        int maxQuestion = 0;
        string question;
        QString defaultPrinter = "Microsoft Print to PDF";
        QString HNNumber = "";
        vector<tuple<int,vector<string> > > newQuestionArr;
        vector< tuple<int,string,string,string> > questionArr;
        vector< tuple<int,string> > answerArr;

    private:
        bool isNum(const std::string& s);

};

#endif // CSVHANDLER_H
