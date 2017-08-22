#include "FileWriter.h"
int main(int argc, char * argv[])
{
	argv[1] = "INFO";
	argv[2] = "KAVACH";
	argv[3] = "MethodName";
	FileWriter l(argv[1], argv[2], argv[3]);
	l.DateTime();
	l.WriteLogToFile();
	system("pause");
}