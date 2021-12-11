# BAB 1

## Algorithm
think like a programmer

### implicit vs explicit

---
## Source Code Anatomy
learn to how read a source code
``` cpp
    #include <iostream>                 // HEADER
    #include <string>                   // HEADER
    using namespace std;                // HEADER

    int main()                          // FUNCTION -> RETURN TYPE FUNCTION_NAME()
    {                                   // STATEMENT BODY OPENING (OPEN CURLY BRACKET)
        string message = "Hello World"; // VARIABLE DECLARATION
        cout << message << endl;        // STATEMENT
        return 0;
    }                                   // STATEMENT BODY CLOSING (CLOSE CURLY BRACKET)

```

---
## Variable
1. Declaration

```
    DATA_TYPE VARIABLE_NAME = VALUE;
```

```cpp
    int studentCount = 30;
```
```cpp
    int     //integer;
    float   //floating point;
    bool    //boolean;

```
## Local Variable vs Global Variable
``` cpp
    #include <iostream>
    using namespace std;

    float gravity = 9.8;

    int main()
    {
        float mass = 12.5;
    }

```

## Operator
1. Math Operator


```cpp
    +   // additional
    -   // subtraction
    *   // multiplication
    /   // division

    int height = 5;
    int width = 10;
    int area_of_triangle = width * height / 2;
```
2. Comparison Operator
```cpp
    ==  // equal
    >   // greater than
    <   // less than
    >=  // greater than or equal to
    <=  // less than or equal to

    bool result = 5 > 3;

```

3. Logical Operator

```cpp
    !   // Not
    &&  // And
    ||  // Or
```


4. Boolean Algebra
```cpp
    bool A = true;
    bool B = false;
    bool C = true;

    bool solution = A && (B || C);

```



