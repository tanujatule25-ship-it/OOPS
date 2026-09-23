# OOP with C++ — Unit 3: Polymorphism

Practical code book programs for **Unit 3: Polymorphism**, from the course
*Object-Oriented Programming with C++* (S.Y. B.Tech. AI & DS, Sem III, ADPC303).

Compiled by Mr. Chandan Prasad. All 16 programs are standalone, compile
cleanly with `-std=c++17 -Wall`, and produce the documented expected output.

## Index

| # | File | Concept |
|---|------|---------|
| 1 | `01_function_overloading.cpp` | Compile-time polymorphism |
| 2 | `02_area_calculator.cpp` | Function overloading with different parameters |
| 3 | `03_unary_minus_operator.cpp` | Unary operator overloading |
| 4 | `04_prefix_postfix_increment.cpp` | Unary operator overloading (prefix/postfix) |
| 5 | `05_complex_number_addition.cpp` | Binary `+` operator overloading |
| 6 | `06_relational_operator_overloading.cpp` | Relational operator overloading |
| 7 | `07_friend_operator_overloading.cpp` | Operator overloading via friend function |
| 8 | `08_base_pointer_without_virtual.cpp` | Static binding demonstration |
| 9 | `09_base_pointer_with_virtual.cpp` | Run-time polymorphism |
| 10 | `10_base_reference_with_virtual.cpp` | Dynamic binding through references |
| 11 | `11_abstract_class_pure_virtual.cpp` | Pure virtual function |
| 12 | `12_polymorphic_shape_collection.cpp` | Polymorphic processing |
| 13 | `13_virtual_destructor.cpp` | Safe deletion through base pointer |
| 14 | `14_object_slicing.cpp` | Why references/pointers are needed |
| 15 | `15_payment_processing_system.cpp` | Abstract interface, real-world example |
| 16 | `16_employee_payroll_project.cpp` | Integrated polymorphism application |

## How to compile & run

**Linux / macOS**
```bash
g++ -std=c++17 01_function_overloading.cpp -o program
./program
```

**Windows (MinGW)**
```bash
g++ -std=c++17 01_function_overloading.cpp -o program.exe
program.exe
```

Replace the filename with any program from the index above.

## Topics covered

- Introduction to polymorphism & its types
- Function overloading
- Operator overloading (unary, binary, friend-based)
- Run-time polymorphism, base-class pointers/references
- Virtual functions, pure virtual functions, virtual tables
- Virtual destructors, object slicing
- Abstract base classes

## License

Educational use.
