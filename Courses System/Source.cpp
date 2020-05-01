////////////////////////////headers////////////////////////////////

#include<windows.h>
#include<chrono>
#include<thread>
#include<iostream>
#include<fstream>
#include<string>
#define x 100

using namespace std;

///////////////////////////data (structs)///////////////////////////////
struct mutual
{
	string cid, sid, grade;
} loadmut[x], tempm;
struct courses
{
	string Cid, CourseName, InstName;
	int nomstus = 0;
} loadcrs[x], predef[6], tempc;
struct student
{
	string Sid, Fname, Lname, age, Address;
} loadstu[x], temps;

////////////////////////functions declaration////////////////////////////

void add_crsnstu(string Sid);
void del_crsnstu(string Sid);
void pre_def_crs();
void load_stu();
void load_crs();
void add_stu();
void search_stu();
void display_allstu();
void add_crs();
void search_crs();
void display_allcrs();
void edit_stu();
void del_stu();
void delete_course();
void edit_course();
void enrollncrs(string Sid);

////////////////////////main function////////////////////////////

int main()
{
	load_stu();
	load_crs();
	char a = 177, b = 219;
	cout << "\n\n\n\t\t\t\t\t\tLoading....\n\n\n\t\t\t\t\t";
	for (int i = 0; i <= 25; i++)
	{
		cout << a;
	}
	cout << "\r";
	cout << "\t\t\t\t\t";
	for (int i = 0; i <= 25; i++)
	{
		cout << b;
		Sleep(50);
	}
	system("CLS");
	int choice;
	//char cont;
	while (true)  ///outer loop (main)
	{

		char c = 177, d = 219;
		for (int i = 0; i <= 30; i++)
		{
			cout << c;
		}
		cout << "\r";
		for (int i = 0; i <= 30; i++)
		{
			cout << d;
		}
		cout << "\t";
		cout << "[[[COURSE-MANAGEMENT-SYSTEM]]]";
		char z = 177, y = 219;
		cout << "\t";
		for (int i = 0; i <= 30; i++)
		{
			cout << z;
		}
		cout << "\r";
		cout << "\t\t\t\t\t\t\t\t";
		for (int i = 0; i <= 30; i++)
		{
			cout << y;
		}
		cout << "\n\n--------------------------- MAIN MENU --------------------------\n\n";
		cout << ">>>Enter your choice: \n\n";
		cout << "1-Students\n2-Courses\n3-Exit\n";  ///level 1 display
		cout << "\nChoice >>> ";
		cin >> choice;
		system("CLS");

		//////////////////////////////////////////////////////////////////////////



		if (choice == 1)   ///students
		{
			while (true)  ///inner loop 1
			{
				cout << "\n------STUDENTS MENU------\n\n";
				cout << ">>>Enter your choice: \n\n";
				cout << "1-Add new student\n2-Search and Display student data\n3-Edit or Delete student data\n4-Back to main menu\n";
				///level 2 display
				cout << "\nChoice >>> ";
				cin >> choice;
				system("CLS");

				/////////////////////////////////////////////////////////////////////////////////////////


				switch (choice)  ///inner switch 1 (student case)
				{
				case 1:      ///new student
				{
					add_stu();
					continue;  ///back to level 2 display (inner loop 1)
				}
				case 2:      ///Search and Display student data
				{


					while (true)  ///inner loop 1.1
					{
						cout << "\n1-Search for a student\n2-Display all students data\n3-Back to students menu\n";
						cout << "\nChoice >>> ";
						cin >> choice;
						system("CLS");
						switch (choice)  ///inner switch 1.1
						{
						case 1:  ///search for one student
						{
							search_stu();
							continue;  ///back to inner loop 1.1
						}
						case 2:   ///display all
						{
							display_allstu();
							continue;
						}
						case 3:
						{
							break;  ///end inner switch 1.1
						}
						default:
							cout << "----------------------------- Invalid Input! -------------------------- \n";
							continue;
						}
						break;  ///end inner loop 1.1
					}



					continue;  ///back to level 2 display (inner loop 1)
				}
				case 3:     ///Edit or Delete student data
				{
					while (true)  ///inner loop 1.1
					{
						cout << "\n1-Edit a student\n2-Delete students data\n3-Back to students menu\n";
						cout << "\nChoice >>> ";
						cin >> choice;
						system("CLS");
						switch (choice)  ///inner switch 1.1
						{
						case 1:  ///Edit Student
						{
							edit_stu();
							continue;  ///back to inner loop 1.1
						}
						case 2:   ///Delete Student
						{
							del_stu();
							continue;
						}
						case 3:
						{
							break;  ///end inner switch 1.1
						}
						default:
							cout << "------------------------------ Invalid Input! ------------------------------ \n";
							continue;
						}
						break;  ///end inner loop 1.1
					}
					continue;
				}
				case 4:  ///jump to main menu
				{
					break;   ///end inner switch 1
				}
				default:
					cout << "------------------------------ Invalid Input! ------------------------------ \n";
					continue;
				}
				break;    ///end inner loop 1
			}
			continue;   ///back to main loop
		}


		/////////////////////////////////////////////////////////////////////////

		else if (choice == 2)  ///courses
		{
			while (true)   ///inner loop 2
			{
				cout << "\n------COURSES MENU------\n\n";
				cout << ">>>Enter your choice: \n\n";
				cout << "1-Add new course\n2-Search and Display a course\n3-Edit or Delete courses\n4-Back to main menu\n";
				///level 3 display
				cout << "\nChoice >>> ";
				cin >> choice;
				system("CLS");

				/////////////////////////////////////////////////////////////////////////////////////////

				switch (choice)  ///inner switch 2 (course case)
				{
				case 1:      ///new course
				{
					add_crs();
					continue;  ///back to level 2 display (inner loop 2)
				}
				case 2:      ///Search and Display course data
				{
					while (true)  ///inner loop 2.1
					{
						cout << "\n1-Search for a course\n2-Display all courses data\n3-Back to courses menu\n";
						cout << "\nChoice >>> ";
						cin >> choice;
						system("CLS");

						switch (choice)  ///inner switch 2.1
						{
						case 1:  ///search for one course
						{
							search_crs();
							continue;  ///back to inner loop 2.1
						}
						case 2:   ///display all
						{
							display_allcrs();
							continue;
						}
						case 3:
						{
							break;  ///end inner switch 2.1
						}
						default:
							cout << "------------------------------ Invalid Input! ------------------------------ \n";
							continue;
						}
						break;  ///end inner loop 2.1
					}



					continue;  //////back to level 3 display (inner loop 2)
				}
				case 3:     ///Edit or Delete course data
				{
					while (true)  ///inner loop 2.1
					{
						cout << "\n1-Edit a course\n2-Delete a course's Data\n3-Back to courses menu\n";
						cout << "\nChoice >>> ";
						cin >> choice;
						system("CLS");
						switch (choice)  ///inner switch 2.1
						{
						case 1:  ///Edit a course
						{
							edit_course();
							continue;  ///back to inner loop 2.1
						}
						case 2:   ///Delete a Course's Data
						{
							delete_course();
							continue;
						}
						case 3:
						{
							break;  ///end inner switch 2.1
						}
						default:
							cout << "------------------------------ Invalid Input! ------------------------------ \n";
							continue;
						}
						break;  ///end inner loop 2.1
					}
					continue;
				}
				case 4:  ///jump to main menu
				{
					break;   ///end inner switch 2
				}
				default:
					cout << "------------------------------ Invalid Input! ------------------------------ \n";
					continue;
				}
				break;    ///end inner loop 2
			}
			continue;   ///back to main loop
		}


		////////////////////////////////////////////////////////////////////////

		else if (choice == 3)  ///exit
		{
			break;
		}    ///main case 3
		else
		{
			cout << "------------------------------ Invalid Input! ------------------------------ \n";
			continue;
		}
		break;  ///main loop end
	}
	exit(1);
	return 0;
}

////////////////////////students functions////////////////////////////

void add_stu()
{
	int found = 1;
	int choice1 = 0;
	string id, fname, lname, age, address;
	ifstream infile;
	ofstream f1;
	infile.open("Students Data.txt");
	f1.open("Students Data.txt", ios::app);
	student stu;
	char choice;
	while (true)
	{
		cout << "Enter Student ID: ";
		cin >> stu.Sid;
		while (infile >> id >> fname >> lname >> age >> address)
		{
			if (stu.Sid == id)
			{
				cout << "------------------------------ ID Already Exists ------------------------------ \n";
				cout << "1.Enter Another ID" << endl << "2.Back To Students Menu" << endl;
				cout << "Choice >>> ";
				cin >> choice1;
				switch (choice1)
				{
				case 1:
					add_stu();
					found = 0;
					break;
				case 2:
					found = 0;
					break;
				}
			}
		}
		if (found == 0)
		{
			break;
		}
		cout << "Enter Student First name: ";
		cin >> stu.Fname;
		cout << "Enter Student Last name: ";
		cin >> stu.Lname;
		cout << "Enter Student Age:";
		cin >> stu.age;
		cout << "Enter Student Address i.e.(NasrCity): ";
		cin >> stu.Address;
		pre_def_crs();
		enrollncrs(stu.Sid);
		f1 << stu.Sid << "\t" << stu.Fname << "\t" << stu.Lname << "\t" << stu.age << "\t" << stu.Address << endl;
		cout << "To Continue Adding Students Press(Y)" << endl;
		cin >> choice;
		if (choice == 'Y')
		{
			continue;
		}
		else
		{
			break;
		}
	}
	f1.close();
	infile.close();
}
void search_stu()
{
	ifstream infile;
	infile.open("Mutual Data.txt");
	ifstream f2;  ///read data from the containing file
	f2.open("Students Data.txt");
	bool found = 0, cfound = 0;
	char choice;
	mutual m;
	student stu;   ///declare variables to store data from file in
	string find;   ///declare variable to search with(keyword)
	cout << "Enter ID: ";
	cin >> find;
	cout << endl;
	cout << "\t\t\t\t\t\tLoading";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".\r";
	if (f2.is_open() && infile.is_open())
	{
		while (f2 >> stu.Sid >> stu.Fname >> stu.Lname >> stu.age >> stu.Address)
		{
			if (find == stu.Sid)
			{
				found = 1;
				cout << "------------------------------ Student Found! ------------------------------\n";
				cout << "ID: " << stu.Sid << "\nName: " << stu.Fname << " " << stu.Lname << "\nAge:" << stu.age << "\nAddress:" << stu.Address << endl;   ///displaying wanted data from the file
				cout << "------------------------------ Courses Enrolled In ------------------------------\n";
				while (infile >> m.cid >> m.sid >> m.grade)
				{
					if (stu.Sid == m.sid)
					{
						cfound = 1;
						cout << "Course ID:" << m.cid << endl << "Their Grade:" << m.grade << endl;
					}
				}
				if (cfound == 0)
				{
					cout << "------------------------------ No Courses Found ------------------------------" << endl;
				}

			}

		}
		if (found == 0)
		{
			cout << "------------------------------ Student ID Wasn't Found! ------------------------------" << endl;
			search_stu();
		}
	}
	else
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}
	infile.close();
	f2.close();
}
void display_allstu()
{
	cout << "\t\t\t\t\t\tLoading";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".\r";
	ifstream f2;  ///read data from the containing file
	f2.open("Students Data.txt");

	student stu;   ///declare variables to store data from file in

	if (f2.is_open())
	{
		while (f2 >> stu.Sid >> stu.Fname >> stu.Lname >> stu.age >> stu.Address)
		{
			cout << "ID: " << stu.Sid << "\nName: " << stu.Fname << " " << stu.Lname << "\nAge:" << stu.age << "\nAddress:" << stu.Address << endl;   ///displaying wanted data from the file
		}
	}
	else
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}

	f2.close();
}
void del_stu()
{
	courses crs;
	mutual m;
	student stu;
	bool found = 0;
	string id;
	ifstream f1, infile, offile;
	ofstream f2;
	ofstream outfile, tofile;
	offile.open("Courses Data.txt");
	infile.open("Mutual Data.txt");
	outfile.open("temp1.txt");
	tofile.open("temp2.txt");
	f1.open("Students Data.txt");
	f2.open("temp.txt");
	cout << "Enter Student ID:";
	cin >> id;
	cout << "\t\t\t\t\t\tLoading";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".\r";
	if (f1.is_open())
	{
		while (f1 >> stu.Sid >> stu.Fname >> stu.Lname >> stu.age >> stu.Address)
		{
			if (id == stu.Sid)
			{
				found = 1;
				cout << "------------------------------ Student Found! ------------------------------\n";
				cout << "ID:" << stu.Sid << endl;
				cout << "Name:" << stu.Fname << " " << stu.Lname << endl << "Age:" << stu.age << endl << "\nAddress:" << stu.Address << endl;
				int choice;
				cout << "Are you sure you want to delete the information" << endl;
				cout << "1.YES" << endl << "2.NO" << endl;
				cin >> choice;
				switch (choice)
				{
				case 1:
					for (int i = 0; i < 100; i++)
					{
						if (loadmut[i].sid == stu.Sid)
						{
							continue;
						}
						else
						{
							outfile << loadcrs[i].Cid << "\t" << loadcrs[i].CourseName << "\t" << loadcrs[i].InstName << "\t" << loadcrs[i].nomstus << endl;
						}
					}
					while (infile >> m.cid >> m.sid >> m.grade)
					{
						if (m.sid == stu.Sid)
						{
							continue;
						}
						else
						{
							tofile << m.cid << "\t" << m.sid << "\t" << m.grade << endl;
						}
					}
					cout << "------------------------------ Student Deleted! ------------------------------" << endl;
					break;
				case 2:
					f2 << stu.Sid << "\t" << stu.Fname << "\t" << stu.Lname << "\t" << stu.age << "\t" << stu.Address << endl;
					del_stu();
					break;
				}
			}
			else
			{
				f2 << stu.Sid << "\t" << stu.Fname << "\t" << stu.Lname << "\t" << stu.age << "\t" << stu.Address << endl;
			}
		}
	}
	else if (!f1.is_open())
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}
	if (found == 1)
	{
		tofile.close();
		outfile.close();
		f2.close();
		f1.close();
		remove("Mutual Data.txt");
		remove("Students Data.txt");
		rename("temp.txt", "Students Data.txt");
		rename("temp2.txt", "Mutual Data.txt");
	}
	else if (found == 0)
	{
		cout << "------------------------------ Student ID Wasn't Found! ------------------------------" << endl;
		del_stu();
	}
}
void edit_stu()
{
	student stu;
	mutual m;
	int choice = 0;
	bool found = 0;
	string id;
	ifstream f1, f3;
	ofstream f2;
	f1.open("Students Data.txt");
	f2.open("temp.txt");
	f3.open("Mutual Data.txt");
	cout << "Enter Student ID:";
	cin >> id;
	cout << "\t\t\t\t\t\tLoading";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".\r";
	if (f1.is_open() && f3.is_open())
	{
		while (f1 >> stu.Sid >> stu.Fname >> stu.Lname >> stu.age >> stu.Address)
		{
			if (id == stu.Sid)
			{
				bool cfound = 0;
				found = 1;
				string newFnam, newLnam, newage, newaddress;
				cout << "------------------------------ Student Found! ------------------------------\n";
				cout << "ID:-" << stu.Sid << endl;
				cout << "1.Name:-" << stu.Fname << " " << stu.Lname << endl << "2.Age:-" << stu.age << endl << "3.Address:-" << stu.Address << endl;
				cout << "4.Add Course:-" << endl << "5.Delete Course:-" << endl << "6.Edit Another Student" << endl << "7.Exit Editing" << endl;
				cout << "------------------------------ Courses Enrolled In ------------------------------\n" << endl;
				while (f3 >> m.cid >> m.sid >> m.grade)
				{
					if (stu.Sid == m.sid)
					{
						cfound = 1;
						cout << "Course ID:" << m.cid << endl << "Their Grade:" << m.grade << endl;
					}
				}
				if (cfound == 0)
				{
					cout << "------------------------------ No Courses Found ------------------------------" << endl;
				}
				cout << "Choice >>> ";
				cin >> choice;
				switch (choice)
				{
				case 1:
					cout << "Enter New Name:\nFirst Name:";
					cin >> newFnam;
					cout << "\nLast Name:";
					cin >> newLnam;
					f2 << stu.Sid << "\t" << newFnam << "\t" << newLnam << "\t" << stu.age << "\t" << stu.Address << endl;
					break;
				case 2:
					cout << "Enter New Age:";
					cin >> newage;
					f2 << stu.Sid << "\t" << stu.Fname << "\t" << stu.Lname << "\t" << newage << "\t" << stu.Address << endl;
					break;
				case 3:
					cout << "Enter New Address i.e (NasrCity):";
					cin >> newaddress;
					f2 << stu.Sid << "\t" << stu.Fname << "\t" << stu.Lname << "\t" << stu.age << "\t" << newaddress << endl;
					break;
				case 4:
					f3.close();
					add_crsnstu(stu.Sid);
					f2 << stu.Sid << "\t" << stu.Fname << "\t" << stu.Lname << "\t" << stu.age << "\t" << stu.Address << endl;
					break;
				case 5:
					f3.close();
					del_crsnstu(stu.Sid);
					f2 << stu.Sid << "\t" << stu.Fname << "\t" << stu.Lname << "\t" << stu.age << "\t" << stu.Address << endl;
					break;
				case 6:
					edit_stu();
					break;
				case 7:
					break;
				}
			}
			else
			{
				f2 << stu.Sid << "\t" << stu.Fname << "\t" << stu.Lname << "\t" << stu.age << "\t" << stu.Address << endl;
			}
			if (choice == 7)
			{
				break;
			}
		}

	}
	else if (!f1.is_open())
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}
	if (found == 1)
	{
		f2.close();
		f1.close();
		remove("Students Data.txt");
		rename("temp.txt", "Students Data.txt");
	}
	else if (found == 0)
	{
		cout << "------------------------------ Student ID Wasn't Found! ------------------------------" << endl;
		edit_stu();
	}

}

////////////////////////courses functions////////////////////////////

void add_crs()
{
	bool found = 1;
	int choice1 = 0;
	string id, name, inst, nom;
	ifstream infile;
	ofstream f3;
	f3.open("Courses Data.txt", ios::app);
	infile.open("Courses Data.txt");
	courses crs;
	char choice;

	do
	{
		cout << "Enter Course ID: ";
		cin >> crs.Cid;
		while (infile >> id >> name >> inst >> nom)
		{
			if (id == crs.Cid)
			{
				cout << "------------------------------ ID Already Exists ------------------------------ \n";
				cout << "1.Enter Another ID" << endl << "2.Back To Courses Menu" << endl;
				cout << "Choice >>> ";
				cin >> choice1;
				switch (choice1)
				{
				case 1:
					add_crs();
					found = 0;
					break;
				case 2:
					found = 0;
					break;
				}
			}
		}
		if (found == 0)
		{
			break;
		}
		cout << "Enter Course name: ";
		cin >> crs.CourseName;
		cout << "Enter Instructor name: ";
		cin >> crs.InstName;
		f3 << crs.Cid << "\t" << crs.CourseName << "\t" << crs.InstName << "\t" << crs.nomstus << endl;
		cout << "To Continue Adding Courses Press(Y)" << endl;
		cin >> choice;

	} while (choice == 'Y' || choice == 'y');
	f3.close();

}
void search_crs()
{
	ifstream infile;
	ifstream f4;  ///read data from the containing file
	f4.open("Courses Data.txt");
	infile.open("Mutual Data.txt");
	bool found = 0, sfound = 0;
	char choice;
	courses crs;   ///declare variables to store data from file in
	mutual m;
	string find;   ///declare variable to search with(keyword)
	cout << "Enter ID: ";
	cin >> find;
	cout << endl;
	cout << "\t\t\t\t\t\tLoading";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << "." << endl;
	system("CLS");
	if (f4.is_open())
	{
		while (f4 >> crs.Cid >> crs.CourseName >> crs.InstName >> crs.nomstus)
		{
			if (find == crs.Cid)
			{
				found = 1;
				cout << "------------------------------ Course Found! ------------------------------" << endl;
				cout << "ID: " << crs.Cid << "\nName: " << crs.CourseName << "\nInstructor: " << crs.InstName << "\n#Students: " << crs.nomstus << endl;     ///displaying wanted data from the file
				cout << "------------------------------ Students Enrolled In Course ------------------------------ \n";
				while (infile >> m.cid >> m.sid >> m.grade)
				{
					if (find == m.cid)
					{
						sfound = 1;
						cout << "Student ID:" << m.sid << endl << "Their Grade:" << m.grade << endl;
					}
				}
				if (sfound == 0)
				{
					cout << "------------------------------ No Students Enrolled In Course ------------------------------ \n";

				}
			}
		}
		if (found == 0)
		{
			cout << "------------------------------ Course ID Wasn't Found! ------------------------------" << endl;
		}
	}
	else
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}
	infile.close();
	f4.close();
}
void display_allcrs()
{
	cout << "\t\t\t\t\t\tLoading";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << "." << endl;
	system("CLS");
	ifstream f4;  ///read data from the containing file
	f4.open("Courses Data.txt");

	courses crs;   ///declare variables to store data from file in


	if (f4.is_open())
	{
		while (f4 >> crs.Cid >> crs.CourseName >> crs.InstName >> crs.nomstus)
		{
			cout << "ID: " << crs.Cid << "\nName: " << crs.CourseName << "\nInstructor: " << crs.InstName << "\n#Students: " << crs.nomstus << endl;   ///displaying wanted data from the file
		}
	}
	else
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}

	f4.close();
}
void edit_course()
{
	bool found = 0;
	string newCrsname, newinstname, id;
	ifstream f1;
	ofstream f2;
	f1.open("Courses Data.txt");
	f2.open("temp.txt");
	courses crs;
	cout << "Enter Course ID:" << endl;
	cin >> id;
	cout << "\t\t\t\t\t\tLoading";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".\r";
	if (f1.is_open())
	{
		while (f1 >> crs.Cid >> crs.CourseName >> crs.InstName >> crs.nomstus)
		{
			if (id == crs.Cid)
			{
				found = 1;
				int choice;
				cout << "what you want to Edit ?" << endl;
				cout << "1--Course Name ." << crs.CourseName << endl;
				cout << "2--Instructor Name ." << crs.InstName << endl;
				cout << "3--Back to Editing ." << endl;
				cin >> choice;
				switch (choice)
				{
				case 1:
					cout << "Enter New Course Name: ";
					cin >> newCrsname;
					f2 << crs.Cid << "\t" << newCrsname << "\t" << crs.InstName << "\t" << crs.nomstus << endl;
					break;
				case 2:
					cout << "Enter New Course Instructor:";
					cin >> newinstname;
					f2 << crs.Cid << "\t" << crs.CourseName << "\t" << newinstname << "\t" << crs.nomstus << endl;
					break;
				case 3:
					edit_course();
					break;
				}
			}
			else
			{
				f2 << crs.Cid << "\t" << crs.CourseName << "\t" << crs.InstName << "\t" << crs.nomstus << endl;
			}
		}
		if (found == 1)
		{
			f2.close();
			f1.close();
			remove("Courses Data.txt");
			rename("temp.txt", "Courses Data.txt");
		}
		if (found == 0)
		{
			cout << "------------------------------ Course ID Wasn't Found! ------------------------------" << endl;
			edit_course();
		}
	}
	else
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}
}
void delete_course()
{
	bool found = 0;
	string id;
	ofstream tofile;
	ifstream f1;
	ofstream f2;
	f1.open("Courses Data.txt");
	f2.open("temp.txt");
	tofile.open("temp1.txt");
	courses crs;
	cout << "Enter Course ID: ";
	cin >> id;
	cout << "\t\t\t\t\t\tLoading";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(600));
	cout << ".\r";
	if (f1.is_open())
	{
		while (f1 >> crs.Cid >> crs.CourseName >> crs.InstName >> crs.nomstus)
		{
			if (id == crs.Cid)
			{
				found = 1;
				int choice;
				cout << "Course : " << crs.CourseName << endl;
				cout << "Are You Sure You Want To Delete Course Informations ?" << endl;
				cout << "1.YES" << endl << "2.NO" << endl;
				cin >> choice;
				switch (choice)
				{
				case 1:
					for (int i = 0; i < 100; i++)
					{
						if (crs.Cid == loadmut[i].cid)
						{

						}
						else
						{
							tofile << loadmut[i].cid << "\t" << loadmut[i].sid << "\t" << loadmut[i].grade << endl;
						}
					}
					cout << "------------------------------ Course Deleted! ------------------------------\n";
					break;
				case 2:
					f2 << crs.Cid << "\t" << crs.CourseName << "\t" << crs.InstName << "\t" << crs.nomstus << endl;
					delete_course();
					break;
				}
			}
			else
			{
				f2 << crs.Cid << "\t" << crs.CourseName << "\t" << crs.InstName << "\t" << crs.nomstus << endl;
			}
		}
		if (found == 1)
		{
			f1.close();
			f2.close();
			tofile.close();
			remove("Courses Data.txt");
			rename("temp.txt", "Courses Data.txt");
			remove("Mutual Data.txt");
			rename("temp1.txt", "Mutual Data.txt");
		}
		else if (found == 0)
		{
			cout << "------------------------------ Course ID Wasn't Found! ------------------------------" << endl;
			delete_course();
		}
	}
	else
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}
}
///////////////////////////// Loading Functions //////////////////////////////
void load_crs()
{
	int i = 0;
	ifstream f1;
	f1.open("Courses Data.txt");
	if (f1.is_open())
	{
		while (f1 >> loadcrs[i].Cid >> loadcrs[i].CourseName >> loadcrs[i].InstName)
		{
			i++;
		}
	}
	else
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}
	f1.close();
}
void load_stu()
{
	int i = 0;
	ifstream f1;
	f1.open("Students Data.txt");
	if (f1.is_open())
	{
		while (f1 >> loadstu[i].Sid >> loadstu[i].Fname >> loadstu[i].Lname >> loadstu[i].age >> loadstu[i].Address)
		{
			i++;
		}
	}
	else
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}
	f1.close();
}
void load_mut()
{
	int i = 0;
	ifstream f1;
	f1.open("Mutual Data.txt");
	if (f1.is_open())
	{
		while (f1 >> loadmut[i].cid >> loadmut[i].sid >> loadmut[i].grade)
		{
			i++;
		}
	}
	else
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}
	f1.close();
}
void pre_def_crs()
{
	cout << "\n------------------------------ Predefined Courses ------------------------------\n";
	ifstream f9;
	f9.open("Courses Data.txt");
	if (f9.is_open())
	{
		for (int i = 0; i < 6; i++)
		{
			f9 >> predef[i].Cid >> predef[i].CourseName >> predef[i].InstName >> predef[i].nomstus;
		}
		for (int i = 0; i < 6; i++)
		{
			cout << "Course ID:" << predef[i].Cid << "\nCourse Name:" << predef[i].CourseName << "\nInstructor:" << predef[i].InstName << "\n" << predef[i].nomstus << endl;
		}
	}
	cout << "--------------------------------------------------------------------------\n";
	if (!f9.is_open())
	{
		cout << "------------------------------ Unable To Open File! ------------------------------\n";
		exit(1);
	}
	f9.close();
}
void enrollncrs(string Sid)
{
	bool found = 0;
	ifstream infile;
	ofstream tofile;
	ofstream outfile;
	infile.open("Courses Data.txt");
	outfile.open("Mutual Data.txt", ios::app);
	tofile.open("temp5.txt");
	student stu;
	courses crs;
	mutual m;
	string id;
	while (true)
	{
		cout << "Enter ID Of Desired Course: ";
		cin >> id;
		while (infile >> crs.Cid >> crs.CourseName >> crs.InstName >> crs.nomstus)
		{
			if (id == crs.Cid)
			{
				found = 1;
				int newnomstus = crs.nomstus + 1;
				cout << "------------------------------ Course Found! ------------------------------" << endl;
				cout << "Enter Student Grade:";
				cin >> m.grade;
				outfile << crs.Cid << "\t" << Sid << "\t" << m.grade << endl;
				tofile << crs.Cid << "\t" << crs.CourseName << "\t" << crs.InstName << "\t" << newnomstus << endl;
				cout << "------------------------------ Student Enrolled! -------------------------------" << endl;
			}
			else
			{
				tofile << crs.Cid << "\t" << crs.CourseName << "\t" << crs.InstName << "\t" << crs.nomstus << endl;
			}
		}
		if (found == 0)
		{
			cout << "------------------------------ Course Not Found! ------------------------------" << endl;
			enrollncrs(Sid);
			break;
		}
		tofile.close();
		infile.close();
		outfile.close();
		remove("Courses Data.txt");
		rename("temp5.txt", "Courses Data.txt");
		cout << "Would You Like To Add Another Course To The Student(Y/N) \nChoice >>> ";
		char choice;
		cin >> choice;
		if (choice == 'Y')
		{
			enrollncrs(Sid);
			break;
		}
		else
		{
			break;
		}
	}
}
void add_crsnstu(string Sid)
{
	bool found = 0;
	string id;
	ifstream offile;
	ofstream outfile, tofile;
	outfile.open("Mutual Data.txt", ios::app);
	offile.open("Courses Data.txt");
	tofile.open("Temp7.txt");
	if (outfile.is_open() && offile.is_open())
	{
		pre_def_crs();
		cout << "------------------------------------------------------------------\n";
		cout << "Enter Course ID:";
		cin >> id;
		while (offile >> tempc.Cid >> tempc.CourseName >> tempc.InstName >> tempc.nomstus)
		{
			if (id == tempc.Cid)
			{
				found = 1;
				cout << "------------------------------ Course Found! ----------------------------- \n";
				cout << "Enter Student Grade:";
				cin >> tempm.grade;
				outfile << tempc.Cid << "\t" << Sid << "\t" << tempm.grade << endl;
				tofile << tempc.Cid << "\t" << tempc.CourseName << "\t" << tempc.InstName << "\t" << tempc.nomstus + 1 << endl;
			}
			else
			{
				tofile << tempc.Cid << "\t" << tempc.CourseName << "\t" << tempc.InstName << "\t" << tempc.nomstus << endl;
			}
		}
		if (found == 0)
		{
			cout << "------------------------------ Course Not Found! ------------------------------ \n";
		}
	}
	outfile.close();
	offile.close();
	tofile.close();
	remove("Courses Data.txt");
	rename("Temp7.txt", "Courses Data.txt");
}
void del_crsnstu(string Sid)
{
	string id;
	bool found = 0;
	ifstream infile, offile;
	ofstream tofile, outfile;
	infile.open("Courses Data.txt");
	offile.open("Mutual Data.txt");
	tofile.open("Temp8.txt", ios::app);
	outfile.open("Temp9.txt", ios::app);
	if (infile.is_open() && offile.is_open())
	{
		cout << "--------------------------------------------------------------------------------- \n";
		cout << "Enter Course ID:";
		cin >> id;
		while (offile >> tempm.cid >> tempm.sid >> tempm.grade)
		{
			if (id == tempm.cid && Sid == tempm.sid)
			{
				found = 1;
			}
			else
			{
				outfile << tempm.cid << "\t" << tempm.sid << "\t" << tempm.grade << endl;
			}
		}
		while (infile >> tempc.Cid >> tempc.CourseName >> tempc.InstName >> tempc.nomstus)
		{
			if (id == tempc.Cid && found == 1)
			{
				tofile << tempc.Cid << "\t" << tempc.CourseName << "\t" << tempc.InstName << "\t" << tempc.nomstus - 1 << endl;
				cout << "------------------------------ Course Deleted! ------------------------------- \n";
			}
			else
			{
				tofile << tempc.Cid << "\t" << tempc.CourseName << "\t" << tempc.InstName << "\t" << tempc.nomstus << endl;
			}
		}
	}
	infile.close();
	offile.close();
	tofile.close();
	outfile.close();
	remove("Courses Data.txt");
	remove("Mutual Data.txt");
	rename("Temp8.txt", "Courses Data.txt");
	rename("Temp9.txt", "Mutual Data.txt");
}
