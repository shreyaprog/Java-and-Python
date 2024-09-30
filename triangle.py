s1=int(input("enter length"))
s2=int(input("enter length"))
s3=int(input("enter length"))
if(s1==s2) and (s2==s3):
    print("equilateral triangle")
elif((s1==s2)or(s2==s3)or(s1==s3)):
    print("isosceles triangle")
else:
    print("scalene triangle")
