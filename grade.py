m1=int(input("enter marks of m1"))
m2=int(input("enter marks of m2"))
m3=int(input("enter marks of m3"))
m4=int(input("enter marks of m4"))
m5=int(input("enter marks of m5"))
total_marks=int(input("enter total marks"))
per=((m1+m2+m3+m4+m5)/total_marks)*100
if per>=80:
    print("grade A")
elif per>=70 and per<80:
    print("grade B")
elif per>=60 and per<70:
    print("grade C")
elif per>=50 and per<60:
    print("grade D")
elif per>=35 and per<50:
    print("grade E")
else:
    print("grade F")
