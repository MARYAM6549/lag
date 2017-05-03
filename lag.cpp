#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout<<"we save your lag's , please tip something after your program's name with a space \nfor example : ./a.out abc\n"<<endl;
	cout<<"argc = "<<argc<<"\n"<<endl;
	for (int i = 0; i < argc; ++i)
	{
		cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
			ofstream outfile;
			outfile.open("lag.txt",ios::app);
			outfile<<argv[i]<<"  \n";
			outfile.close();

	}
	return 0;
}
