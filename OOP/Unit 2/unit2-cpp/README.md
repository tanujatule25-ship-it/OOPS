# OOP with C++ — Unit 2: Inheritance

Practical code book programs for **Unit 2: Inheritance**, from the course
*Object-Oriented Programming with C++* (ADPC303).

All 16 programs are standalone, compile cleanly with `-std=c++17 -Wall`, and
produce the documented expected output.

## Index

| # | File | Concept |
|---|------|---------|
| 1 | `01_basic_single_inheritance.cpp` | Base and derived classes |
| 2 | `02_protected_member_access.cpp` | `protected` access specifier |
| 3 | `03_public_vs_private_inheritance.cpp` | Inheritance modes |
| 4 | `04_multilevel_inheritance.cpp` | Three-level hierarchy |
| 5 | `05_hierarchical_inheritance.cpp` | One base, multiple derived classes |
| 6 | `06_multiple_inheritance.cpp` | Two base classes |
| 7 | `07_multiple_inheritance_ambiguity.cpp` | Scope-resolution operator |
| 8 | `08_constructor_destructor_order.cpp` | Object lifecycle |
| 9 | `09_parameterized_base_constructor.cpp` | Initializer list |
| 10 | `10_function_overriding.cpp` | `virtual` and `override` |
| 11 | `11_abstract_class.cpp` | Pure virtual function |
| 12 | `12_virtual_base_diamond_inheritance.cpp` | Diamond inheritance |
| 13 | `13_friend_class.cpp` | Special access permission |
| 14 | `14_nested_class.cpp` | Class inside another class |
| 15 | `15_vehicle_rental_project.cpp` | Mini-project: integrated inheritance |
| 16 | `16_employee_payroll_project.cpp` | Mini-project: abstract base and overriding |

## How to compile & run

**Linux / macOS**
```bash
g++ -std=c++17 01_basic_single_inheritance.cpp -o program
./program
```

**Windows (MinGW)**
```bash
g++ -std=c++17 01_basic_single_inheritance.cpp -o program.exe
program.exe
```

Replace the filename with any program from the index above.

## Topics covered

- Single, multilevel, hierarchical, and multiple inheritance
- Access specifiers (public/protected/private) and inheritance modes
- Constructor/destructor order in inheritance
- Function overriding (`virtual`, `override`)
- Abstract classes and pure virtual functions
- Virtual base classes and diamond inheritance
- Friend classes and nested classes
- Two integrated mini-projects (vehicle rental, employee payroll)

## License

Educational use.
