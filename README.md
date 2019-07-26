# printf2

Printf format string refers to a control parameter used by a class of 
functions in the input/output libraries of C.

## Format placeholder specification

Formatting takes place via placeholders within the format string. 
For example, if a program wanted to print out a person's age, it could 
present the output by prefixing it with "Your age is ". 
To denote that we want the integer for the age to be shown immediately 
after that message, we may use the format string: 

```sh
$ printf("Your age is %d", age);
```
