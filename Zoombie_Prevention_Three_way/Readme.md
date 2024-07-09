OUTPUT:

---

# Zombie Process Examples

This project contains programs demonstrating the creation and handling of zombie processes in C.

## Files

1. `zoombie_prev1.c`: Basic example of parent and child process creation.
2. `zoombie_prev2.c`: Enhanced example with improved process handling.
3. `zoombie_prev3.c`: Advanced example with additional process management features.

## Compilation and Execution

To compile and execute each example:

1. **zoombie_prev1.c**
    ```sh
    gcc zoombie_prev1.c -o zp1
    ./zp1
    ```
    Expected Output:
    ```
    i am child having pid [child_pid]
    my parent having pid [parent_pid]
    i am parent having pid [parent_pid]
    my child having pid [child_pid]
    ```

2. **zoombie_prev2.c**
    ```sh
    gcc zoombie_prev2.c -o zp2
    ./zp2
    ```
    Expected Output:
    ```
    i am child having pid [child_pid]
    my parent having pid [parent_pid]
    i am parent having pid [parent_pid]
    my child having pid [child_pid]
    ```

3. **zoombie_prev3.c**
    ```sh
    gcc zoombie_prev3.c -o zp3
    ./zp3
    ```
    Expected Output:
    ```
    i am child having pid [child_pid]
    my parent having pid [parent_pid]
    i am parent having pid [parent_pid]
    my child having pid [child_pid]
    ```

## Troubleshooting

- Ensure correct file names and paths during compilation and execution.
- If encountering `No such file or directory` errors, verify the file name and try again.

## Notes

- The examples show process IDs (PIDs) of child and parent processes.
- These examples help understand process management and zombie processes in Unix-like operating systems.

---

Feel free to modify as needed!
