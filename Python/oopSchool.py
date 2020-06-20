class SchoolMember:
    __populationSchool = 0

    def __init__(self,name,age,type):
        self.name = name
        self.age = age
        self.type = type
        SchoolMember.__populationSchool +=1

    def tell(self):
        print("My name is {0}, My age is {1} and I'm a {2}".format(self.name,self.age,self.type))

    @classmethod
    def get_schoolPop(cls):
        print(f"School Population is {cls.__populationSchool}")
        



class Student(SchoolMember):
    __studentPopulation = 0
    def __init__(self,name,age,marks,fee):
        SchoolMember.__init__(self,name,age,"Student")
        self.__marks = 80
        self.fee = fee
        Student.__studentPopulation += 1


    def studentInfo(self):
        print(f"Student name is {self.name} and his marks is {self.__marks}")

    @classmethod
    def get_studentPop(cls):
        print(f"Student Population is {cls.__studentPopulation}")



if(__name__ == "__main__"):
    s1 = Student("Honey",27,80,90000)
    s2 = Student("Shubhi",27,80,920000)
    s3 = Student("Stu3",27,80,90000)
    s3.get_studentPop()
    s1.tell()
    s1.studentInfo()
