#include "FileWriter.h"

using namespace std;
FileWriter::FileWriter(const char* a, const char* b, const char* c)
	{
		char buffer[200];
		strcpy(buffer, b);
		strcpy(message, buffer);
		strcpy(TypeofLog, a);
		strcpy(MethodName, c);
	}
const std::string FileWriter::DateTime() {
		time_t     now = time(0);
		struct tm  tstruct;
		char       buf[80];
		tstruct = *localtime(&now);
		strftime(buf, sizeof(buf), "%m-%d-%Y\t%X", &tstruct);
		return buf;
	}
void FileWriter:: WriteLogToFile()
	{
		std::string timevar = DateTime();
		long begin, end,var;
		char v[10];
		int i = 0;
 lable: std::sprintf(v, "%d", i);
		
		std::string tvar1=timevar.substr(0,10);
		std::string tvr2;
		std::string tvr4= timevar.substr(0, 10);
		std::string tvr3=timevar.substr(11, 19);
		
		tvar1=tvar1+v+"Kavach.txt";
		tvr2 = Path + tvar1;
		std::fstream myfile;
		myfile.open(tvr2, ios::app);
		begin = myfile.tellg();
		myfile.seekg(0, ios::end);
		end = myfile.tellg();

		if (end - begin <= 300) {
			myfile << "{" << "\"Date\"" << ":" << "\"" << tvr4.c_str() << "\"" << "," << "\"time\"" << ":" << "\"" << tvr3.c_str() << "\"" << "," << "\"Message\"" << ":" << "\"" << message << "\"" << "," << "\"TypeofLog\"" << ":" << "\"" << TypeofLog << "\"" << "," << "\"MethodName\"" << ":" << "\"" << MethodName << "\"" << "}" << "\n";
		}
		else {
			i++;
			goto lable;
			}
		myfile.close();
		
	}















