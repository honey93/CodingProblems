class Person:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    
    
    def printData(self):
        print("Person name is " + self.name + ". Age is " + str(self.age))
        
        
class Student(Person):
    def __init__(self,name,age,passYear):
        Person.__init__(self,name,age)
        self.passYear = passYear
        
    def printDetails(self):
        print("Person name is " + self.name + ". Age is " + str(self.age)+ "Pass Year is "+ str(self.passYear))

p1 = Person("Honey",26)
p1.printData()
s1 = Student("Honey Thakuria",26,2015) 
s1.printDetails()
try:
    print(x)
except:
    print("An exception happened")
finally:
    def result_calc():
        return lambda a,b:a+b
    new_res = result_calc()
    print(new_res(2,5))
