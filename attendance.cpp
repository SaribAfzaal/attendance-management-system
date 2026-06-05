#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
	string st_name[10] = {"Ali", "Ahmed", "Sara", "Ayesha", "Bilal","Fatima", "Usman", "Hina", "Hamza", "Zain"};
	string r_num[10] = {"CS01", "CS02", "CS03", "CS04", "CS05","CS06", "CS07", "CS08", "CS09", "CS10"};
	int classes_att[10] = {20, 18, 15, 22, 17,19, 12, 21, 16, 14};
	int tclasses_h;
    cout << "Enter total number of classes held: ";
    cin >> tclasses_h;
	int skip_classes[10];
    int tfine_amu[10];
	float per[10];
	int eligible = 0;
    int ineligible = 0;
	float totalAttendance = 0;
    float highest = 0;
    float lowest = 100;
    float averageAttendance;
	cout << "========================================\n";
    cout << "         ATTENDANCE SYSTEM\n";
    cout << "========================================\n";
	for(int i = 0; i < 10; i++)
    {
        skip_classes[i] = tclasses_h - classes_att[i];
		per[i] = (classes_att[i] * 100.0) / tclasses_h;
		tfine_amu[i] = skip_classes[i] * 200;
		totalAttendance += per[i];
		if(per[i] > highest)
			highest = per[i];
		if(per[i] < lowest)
            lowest = per[i];
		cout << "\n========================================\n";
        cout << "         STUDENT REPORT\n";
        cout << "========================================\n";
		cout << "Student Name      : " << st_name[i] << endl;
        cout << "Roll Number       : " << r_num[i] << endl;
        cout << "Classes Attended  : " << classes_att[i] << endl;
        cout << "Attendance %      : " << per[i] << "%" << endl;
		if(per[i] >= 75)
        {
            cout << "Eligibility       : Eligible\n";
            eligible++;
        }
        else
        {
            cout << "Eligibility       : Not Eligible\n";
            ineligible++;
        }
	if(per[i] >= 90)
            cout << "Status            : Excellent\n";
        else if(per[i] >= 75)
            cout << "Status            : Good\n";
        else if(per[i] >= 60)
            cout << "Status            : Average\n";
        else
            cout << "Status            : Poor\n";
		cout << "Skipped Classes   : "<< skip_classes[i] << endl;
		cout << "Fine Amount       : Rs."<< tfine_amu[i] << endl;
		}
	averageAttendance = totalAttendance / 10;
	cout << "\n\n";
    cout << "========================================\n";
    cout << "         COMPLETE CLASS RECORD\n";
    cout << "========================================\n";
    cout << left<< setw(12) << "Name"<< setw(12) << "Roll No"<< setw(12) << "Attend%"<< setw(12) << "Missed"<< setw(12) << "Fine"
         << endl;
	cout << "------------------------------------------------------------\n";
	for(int i = 0; i < 10; i++)
    {
        cout << left<< setw(12) << st_name[i]<< setw(12) << r_num[i]<< setw(12) << per[i]<< setw(12) << skip_classes[i]<< setw(12) << tfine_amu[i]
             << endl;
    }
	cout << "\n========================================\n";
    cout << "            CLASS SUMMARY\n";
    cout << "========================================\n";
	cout << "Total Students     : 10" << endl;
    cout << "Average Attendance : "<< averageAttendance << "%" << endl;
	cout << "Highest Attendance : "<< highest << "%" << endl;
	cout << "Lowest Attendance  : "<< lowest << "%" << endl;
	cout << "Eligible Students  : "<< eligible << endl;
	cout << "Ineligible Students: "<< ineligible << endl;
	cout << "========================================\n";
	return 0;
}
