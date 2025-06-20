#include<iostream>
#include<string>
using namespace std;
struct r {
	string name;
	int rollno;
	string dep;
	string uni;
	string city;
	string count;
	string cont;
	int mark;
	int totmark;
	bool P;
};
int main() {
	int choice;
	
const int HashamSize= 10;
r Hasham[HashamSize];
int Studentcou = 0;
	
    do {
        cout << "      \n   ________*^^ Student Record Menu ^^*___________\n";
        cout<<endl;
        cout << "              1. Add Student Record"<<endl;
        cout << "              2. Display All Records"<<endl;
        cout << "              3. Exit"<<endl;
        cout<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;
        cin.ignore(); 
        cout<<endl;
	switch(choice){
		case 1:
	if(Studentcou<HashamSize){
		cout<<"***Enter the name of the student : "<<endl;
		getline(cin,Hasham[Studentcou].name);
		cout<<endl;
		cout<<"^^^Enter the Roll.No of the student: "<<endl;
		cin>>Hasham[Studentcou].rollno;
		cin.ignore();
		cout<<endl;
		cout<<"###Enter the departement of the student: "<<endl;
		getline(cin,Hasham[Studentcou].dep);
	cout<<endl;
		cout<<"~~~Enter the name of the University of the student: "<<endl;
		getline(cin,Hasham[Studentcou].uni);
cout<<endl;
		cout<<"---Enter the Country of the Student : "<<endl;
		getline(cin,Hasham[Studentcou].count);
	cout<<endl;
			cout<<"___Enter the City of the Student : "<<endl;
		getline(cin,Hasham[Studentcou].city);
	cout<<endl;
		cout<<"<><>Enter the Contact Number of the student: "<<endl;
		cin>>Hasham[Studentcou].cont;
		cin.ignore();
	cout<<endl;
		cout<<"...Enter the Marks of the student: "<<endl;
		cin>>Hasham[Studentcou].mark;
		cin.ignore();
	cout<<endl;
		cout<<"```Enter the total marks of the student: "<<endl;
		cin>>Hasham[Studentcou].totmark;
		cin.ignore();
	cout<<endl;
	cout<<"&^^Does the student passed the Exam: (1 for 'Yes' / 0 for 'No')"<<endl;
		cin>>Hasham[Studentcou].P;
		cin.ignore();
		Studentcou++;
	}
	else
	{
		cout<<"Maximum no of student reached."<<endl;
			}
			break;
			case 2:
				if(Studentcou==0){
					cout<<"No student records to display."<<endl;
				}
				else {
					
				for(int i=0; i<Studentcou; ++i){
				 cout << "\n--- Student " << i + 1 << " Details ---"<<endl;
				 cout<<endl;
	cout<<"The Name of the Student is: "<<Hasham[i].name<<endl;	
	 cout<<endl;
	cout<<"The Roll.No of the Student: "<<Hasham[i].rollno<<endl;
	 cout<<endl;
	cout<<"The Departement of the Student is: "<<Hasham[i].dep<<endl;
	 cout<<endl;
	cout<<"The Name of the University is: "<<Hasham[i].uni<<endl;
	 cout<<endl;
	cout<<"The City of the University: "<<Hasham[i].city<<endl;
	 cout<<endl;
	cout<<"The Country of the University: "<<Hasham[i].count<<endl;
	 cout<<endl;
	cout<<"The Contact Number of the Student is: "<<Hasham[i].cont<<endl;
	 cout<<endl;
	cout<<"The Marks of the Student is: "<<Hasham[i].mark<<endl;
	 cout<<endl;
	cout<<"The Total Marks of the Student: "<<Hasham[i].totmark<<endl;
	 cout<<endl;
	cout<<"The Exam of the Student's Subject is : "<<(Hasham[i].P ? "Passed":"Not Passed Yet")<<endl;
}
break;
case 3:
                cout << "Exiting the program.\n";
                break;
                 default:
                cout << "Invalid choice. Please select a valid option."<<endl;
        }
    }
}
	 while (choice != 3);

    return 0;

}
