syntax of awk:-

awk 'pattern {action}' <file>


suppose A file have this data: 
Sunil 25 Developer
Rahul 24 Tester


running the command:
 
awk '{print $1}' <file>

will print: 

Sunil 
Rahul

The first column of the text file
