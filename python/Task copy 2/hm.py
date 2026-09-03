from abc import ABC, abstractmethod


class SecretSystem(ABC):

    def connect(self):
        print("System connected")

    @abstractmethod
    def access(self):
        pass


class Member(SecretSystem):

    def access(self):
        print("Member access granted")


m = Member()

m.connect()
m.access()