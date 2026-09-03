try:
  name = str(input("enter your value :"))

except Exception as e:

 with open("error.log","w") as f: 

    f.write(str(e) + "\n")