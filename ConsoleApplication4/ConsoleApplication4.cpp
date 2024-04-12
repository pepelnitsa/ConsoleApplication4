#include <iostream>
#include <string>

using namespace std;

class PersonalInfo {
public:
    string firstname;
    string surname;
    string lastname;
    string country;
    string region;
    string city;
    string street;
    int house_number;
    char korpus;
    int birth_day;
    int birth_month;
    int birth_year;
};

class AcademicInfo {
public:
    int start_day;
    int start_month;
    int start_year;
    int kurs;
    string group_name;
    string specialization;
    int students_count;
};

class AssessmentInfo {
public:
    int* dz_rates;
    int* practice_rates;
    int* exam_rates;
    int* zachet_rates;
    int dz_count;
    int practice_count;
    int exam_count;
    int zachet_count;
};

class Address {
public:
    string country;
    string region;
    string city;
    string street;
    int house_number;
    char korpus;
};

class Birthdate {
public:
    int birth_day;
    int birth_month;
    int birth_year;
    string znak_zodiaka;
};

class Student {
public:
    PersonalInfo personal_info;
    AcademicInfo academic_info;
    AssessmentInfo assessment_info;
    Address address;
    Birthdate birthdate;
};

int main() {
    Student student;
    // Initialize and use student object
    return 0;
}
