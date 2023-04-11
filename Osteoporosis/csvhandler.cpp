#include "csvhandler.h"

csvhandler::csvhandler()
{

}

void csvhandler::loadQuestion()
{
    if(this->newVersion){
        vector<vector<string>> dataCSV = csvhandler::loadCSV("resources/question_v2.csv");

        // header (0) <int> no (1 - 6)  <string> question,questionType,audioFileName,questionForPrint,resource,NoteForDisplay;
        for (vector<vector<string> >::iterator it = dataCSV.begin(); it != dataCSV.end(); ++it) {

             if( isNum((*it)[0].data()) ){  // check no is interger for skip header and protect last row

                 int noQuestion = stoi((*it)[0].data());
//                 qDebug() << (*it)[0].c_str();
//                 qDebug() << noQuestion;
                 newQuestionArr.push_back(make_tuple(noQuestion,vector<string>(it->begin()+1,it->end())  ));
             }


        }
        maxQuestion = static_cast<int>(newQuestionArr.size());

    }
    else{
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
                    }
                }

            }

            maxQuestion = static_cast<int>(questionArr.size());
        }
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
//    QDateTime currentTime = QDateTime::currentDateTime();
//    QString strTime =  currentTime.toString("yyyy_MM_dd_hh_mm_ss");
//    fstream fout;
//    string outFileName = "resources/output/"+strTime.toStdString() + "xxx.csv";
//    fout.open(outFileName,ios::out | ios::app); // write + append

//    fout << "Number" << "," << "Answer" << "\n";
//    for(int i = 0;i<maxQuestion;i++){
////          qDebug() << i+1 << get<1>(answerArr[i]).c_str();
//          fout << i+1 <<"," << get<1>(answerArr[i]).c_str() << "\n";
//    }
//    fout.close();
    // ------------------ new method ----------------------//
    QDateTime currentTime = QDateTime::currentDateTime();
    fstream fout;
    QString dateStr = currentTime.toString("yyyy_MMMM_dd"), timeStampStr = currentTime.toString("yyyy-MM-dd hh:mm:ss");

    string outFileName = "resources/output/"+dateStr.toStdString() + ".csv";
    // check if database exist
    fout.open(outFileName,ios::in);
    if(!fout.is_open()){
        // if exist add new data
        fout.open(outFileName,ios::out);
        // create new file with head for not exist
        fout <<	"timestamp" << "," <<	"HN Number" << ",";
        for(int i = 0;i<maxQuestion;i++) fout << i+1 << ",";
        fout << "\n";
        fout.close();
    }
    else fout.close();


    fout.open(outFileName,ios::app);
    qDebug() << HNNumber;

    fout << timeStampStr.toStdString() << "," << HNNumber.toStdString() << ",";
    for(int i = 0;i<maxQuestion;i++) fout << get<1>(answerArr[i]).c_str() << ",";
    fout << "\n";
    fout.close();


}

vector<vector<string> > csvhandler::loadCSV(string fileName)
{
    fstream fin;
    fin.open(fileName, ios::in);

    if (!fin.is_open()) {
            qDebug() << "Error: File not found\n";
            exit(1);
        }

    vector<string> col;
    vector<vector<string> > allCell;
    string line, word, temp;
    if(fin.is_open()){
        while (!fin.eof()) {
            col.clear();
            getline(fin, line);
            stringstream s(line);
            while ( getline(s, word, ',') ) {
                       col.push_back(word);
//                       qDebug() << word.c_str();
                    }

            if(col.size()>0){
                if(s.eof() && word.empty()) col.push_back("");
                allCell.push_back(col);

            }

        }
    }
    fin.close();
    return allCell;
}

bool csvhandler::isNum(const string &s)
{
        return !s.empty() && std::find_if(s.begin(),s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}
