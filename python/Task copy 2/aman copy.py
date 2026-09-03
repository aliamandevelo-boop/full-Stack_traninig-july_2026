import stdiomask


class Registration:
    def __init__(self, name, age, email, password):
        self.name = name
        self.age = age
        self.email = email
        self.password = password

 
class Display(Registration):

    def display(self):
        print("\n--- User Details ---")
        print("Name:", self.name)
        print("Age:", self.age)
        print("Email:", self.email)
        print("Password:", "*" * len(self.password))


class Update(Display):

    def update_password(self):
        new_password = input("Enter new password: ")
        self.password = new_password

        print("Password reset successful.")
        print("Updated password:", "*" * len(self.password))


class Delete(Update):

    def delete_account(self):
        self.name = None
        self.age = None
        self.email = None
        self.password = None

        print("\nUser record deleted successfully!")


def menu():
    user = None

    while True:
        print("\n==============================")
        print("          MAIN MENU")
        print("==============================")
        print("1. Register User")
        print("2. Display User Details")
        print("3. Update Password")
        print("4. Delete User Record")
        print("5. Exit")

        choice = input("Enter your choice (1-5): ")

        if choice == '1':

            name = input("Enter Name: ")
            age = input("Enter Age: ")
            email = stdiomask.getpass("Enter Email: ")
            password = stdiomask.getpass("Enter Password: ")

            
            user = Delete(name, age, email, password)

            print("\nRegistration Successful!")

        elif choice == '2':

            if user is not None:
                user.display()
            else:
                print("\nNo user record found!")

        elif choice == '3':

            if user is not None:
                user.update_password()
            else:
                print("\nNo user record found to update!")

        elif choice == '4':

            if user is not None:
                user.delete_account()
                user = None
            else:
                print("\nNo active user record to delete!")

        elif choice == '5':

            print("\nExiting program. Goodbye!")
            break

        else:
            print("\nInvalid choice! Please try again.")


menu()

