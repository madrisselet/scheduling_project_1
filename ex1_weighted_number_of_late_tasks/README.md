# scheduling_project_1

## Exercice 1

Minimizing the weighted number of late tasks, 1 | | \sum w_i u_i

### Usage

```
>> make
gcc -c -Wall -Wextra -Werror -pedantic main.c -o main.o
gcc -c -Wall -Wextra -Werror -pedantic load_display_data.c -o load_display_data.o
gcc  main.o load_display_data.o -o schedule
>> ./schedule 
Please specify a data file as first argument.
>> ./schedule instances/i6.dat
Data file instances/i6.dat loaded; n: 6; w_max: 6.
>> ./schedule instances/i100a.dat 
Data file instances/i100a.dat loaded; n: 100; w_max: 42007.
```
