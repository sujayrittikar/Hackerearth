'''
# Sample code to perform I/O:
 
name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT
 
# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''
 
# Write your code here
dist = input()
dist = int(dist)
oc, of, od = map(int, input().split())
cs, cb, cm, cd = map(int, input().split())
 
 
online = oc + (dist-of)*od;
classic = cb + (dist/cs)*cm + cd*dist;
 
if online<=classic:
    print("Online Taxi")
else:
    print("Classic Taxi")
