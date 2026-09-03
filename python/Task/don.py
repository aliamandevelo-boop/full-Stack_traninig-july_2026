class Student:

    def __init__(self, name, age, roll_number, password, course):
        self.name = name
        self.age = age
        self.__roll_number = roll_number
        self.__password = password
        self.course = course

    def display(self):
        print("Name:", self.name)
        print("Age:", self.age)
        print("Roll Number:", "*" * len(str(self.__roll_number)))
        print("Password:", "*" * len(self.__password))
        print("Course:", self.course)


student1 = Student("Aman", 19, 101, "pass123", "B.Sc")

student1.display()

