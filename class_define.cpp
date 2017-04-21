#include<iostream>
#include<vector>
using namespace std;
class class_d
{
	public:
		class_d(string inteacher,string inname,int inclassroom,string intime,int inmax_stu,float inclasspoint)
		{
			num++;
			id=10000+num;
			teacher=inteacher;
			name=inname;
			classroom=inclassroom;
			time=intime;
			max_std=inmax_std;
			classpoint=inclasspoint;
		}
	private:
		static int class_num;
		int id;
		string name;
		int classroom;
		string time;
		int max_std;
		float classpoint;
};
class_d::class_num=0;
std::std_num=0;
class std
{
	public:
		std(string inname)
		{
			name=inname;
			id=std_num+15020023000
			money=100;
		}
	private:
		static int std_num;
		string name;
		int money;
		int id;
		vector<class_d> myclass;
	
}

int add_stu()
{
	string name;
	cout<<"";
	cin>>name;
	std temp()
	
}
int main()
{
	cout<<"";//something about welcome
	int choise=0;
	cin>>choise;
	while(choise)
	switch(choise)
	{
		case 1:add_stu();break;
		case 2:add_admin();break;
		case 3:next_stage();break;
	}
}

