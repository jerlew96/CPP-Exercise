#include <iostream>
#include <fstream>
using namespace std;

class Student{
public:
    Student(const string& sn, char cg, int ia): name(sn), gender(cg), age(ia) {}

    void serialize(fstream& fs)const{
        size_t length = name.length();
        fs.write(reinterpret_cast<const char*>(&length), sizeof (length));
        fs.write(name.c_str(), length);

        fs.write(reinterpret_cast<const char*>(&gender), sizeof (gender));
        fs.write(reinterpret_cast<const char*>(&age), sizeof (age));
    }

    const string & getName()const{
        return name;
    }

    const char & getGender()const{
        return gender;
    }

    const int & getAge()const{
        return age;
    }

    static Student deserialize(fstream &fs){
        size_t length;
        fs.read(reinterpret_cast<char*>(&length), sizeof(length));
        string name(length,' ');
        fs.read(&name[0], length);

        char gender; int age;
        fs.read(reinterpret_cast<char*>(&gender), sizeof (gender));
        fs.read(reinterpret_cast<char*>(&age), sizeof (age));

        return Student(name,gender, age);

    }

private:
    string name;
    char gender;
    int age;
};


int main() {
    fstream fs("abc.binary", ios::in|ios::out|ios::trunc|ios::binary);
    if(!fs){
        cout<<"open error"<<endl;
    }

    Student stu[4] = {
            {"zhangsan", 'm', 23},
            {"lisi", 'm', 25},
            {"xija", 'w', 30},
            {"fwef", 'w', 34},
    };

    for(int i =0; i<sizeof (stu)/sizeof (stu[0]); i++){
        stu[i].serialize(fs);
    }

    fs.seekg(0, ios::beg);

    for(int i =0; i<sizeof (stu)/sizeof (stu[0]); i++){
        Student readed = Student::deserialize(fs);

        cout<<readed.getName()<<readed.getGender()<<readed.getAge()<<endl;
    }

    fs.close();

    return 0;
}
