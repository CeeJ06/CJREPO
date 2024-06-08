#include<iostream>
#include<string>
#include<fstream>
#include<istream>
#include<ostream>
using namespace std;

void createFile(std::string filename)
{
	fstream file(filename);
	file.open(filename+".txt", ios_base::out);
		if (file)
		{
		
		cout<<"file created successfully"<<endl;
	}
	else
	{
		cout<<"unable to create file"<<endl;
	}
	file.close();
}

void writeinfile(std::string filename){
	fstream myfile;
	if (myfile){
	
	string text;
	myfile.open(filename+".txt", ios::out);
	cout<<"enter text \n";
	cin>>text;
	myfile<<text;

		myfile.close();
		cout<<"text accepted"<<endl;
	}
	else
	{
		cout<<"error in writing file";
	}
}
void readfromfile(string& filename)
{
	ifstream myfile;
	myfile.open(filename+".txt", ios::out);
	if (myfile){
	string read;
	getline(myfile,read);
	cout<<read<<endl;
	
}
else
{

}
	myfile.close();
	
}

//using namespace std;
int main(){
	string filename;
	int num,choi=1;
	do{
	
	cout<<"enter filename \n";
	cin>>filename;
	cout<<"select operation \n";
	string option[3]={
	"1.create file",
	"2.write in file",
	"3. read from file"
	};
	for(int i=0;i<3;i++)
	{
		cout<<option[i]<<endl;
	}
	cin>>num;
	switch(num)
	{
		case 1:
			createFile(filename);
			break;
		case 2:
			writeinfile(filename);
			break;
		case 3:
			readfromfile(filename);
			break;
		default:
			cout<<"invalid choice"<<endl;
	}
	cout<<"1.continue \n"<<"2.exit"<<endl;
	cin>>choi;
	}while(choi==1);
	
	return 0; 
}