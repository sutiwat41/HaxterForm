#include "csvhandler.h"

csvhandler::csvhandler()
{

}

void csvhandler::loadQuestion()
{
    fstream fin;
    fin.open("resources/question.csv", ios::in);
//    qDebug() << "Questions are loading ......";
    vector<string> col;
    string line, word, temp;
    if(fin.is_open()){
        while (!fin.eof()) {
            col.clear();
            getline(fin, line);
            stringstream s(line);

            while ( getline(s, word, ',') ) {
                       col.push_back(word);
                    }
            if(col.size()>0){
                if( isNum(col[0].data()) ){
                    int noQuestion = stoi(col[0].data());
                    string question,questionType,fileName;
                    question = col[1].data();
                    questionType = col[2].data();
                    fileName = col[3].data();
                    questionArr.push_back(make_tuple(noQuestion,question,questionType,fileName));
//                    qDebug() <<"add element" << questionArr.size();
                }
            }

        }

        maxQuestion = static_cast<int>(questionArr.size());
    }
    //    else qDebug() << "failed to load questions";
}

QString csvhandler::loadPrinter()
{
    fstream fin;
    fin.open("resources/config.txt", ios::in);
    string line, word, temp;
    QString outPrinter;
    if(fin.is_open()){
        while (!fin.eof()) {
            getline(fin, line);
//            qDebug() <<"print: " << line.c_str();
            outPrinter = line.c_str();
        }
    }
    else return defaultPrinter;
    return outPrinter;

}

void csvhandler::savePrinter(QString outPrinter)
{
    fstream fout;
    string outFileName = "resources/config.txt";
    fout.open(outFileName,ios::out); // write only
    fout << outPrinter.toStdString();
    fout.close();

}

void csvhandler::exportCSV()
{
    QDateTime currentTime = QDateTime::currentDateTime();
    QString strTime =  currentTime.toString("yyyy_MM_dd_hh_mm_ss");
    fstream fout;
    string outFileName = "resources/output/"+strTime.toStdString() + "xxx.csv";
    fout.open(outFileName,ios::out | ios::app); // write + append

    fout << "Number" << "," << "Answer" << "\n";
    for(int i = 0;i<maxQuestion;i++){
//          qDebug() << i+1 << get<1>(answerArr[i]).c_str();
          fout << i+1 <<"," << get<1>(answerArr[i]).c_str() << "\n";
    }
}

bool csvhandler::isNum(const string &s)
{
        return !s.empty() && std::find_if(s.begin(),s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}
