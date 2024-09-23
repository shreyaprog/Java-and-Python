first=int(input("first number"))
operator=input("enter operator(+,-,*,/,%)")
second=int(input("second number"))

if operator=="+":
   print(first+second)
elif operator=="-":
   print(first-second)
elif operator=="*":
   print(first*second)
elif operator=="/":
   print(first/second)
elif operator=="%":
   print(first%second)
else:
    print("invalid")
