num=int(input("enter a number"))
sum=0
temp=num
while temp>0:
  dig=temp%10
  sum+=dig**3
  temp//=10
if (num==sum):
    print("armstrong no.")
else:
    print("not an armstrong no.")    
    

    
