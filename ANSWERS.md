**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

Running, uninterruptable, interruptable, zombie, stopped

**2. What is a zombie process?**

Essentially a child process that has finished it's execution but still has an entry in the process table to report to it's parent that it will be terminated. Until the parent reads the exit status of the child the child will remain in memory

**3. How does a zombie process get created? How does one get destroyed?**

When a child process finishes executing but has not run an exit, had it's parent destroyed, or etc.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

Compiled code runs faster as a result of being compiled unlike something like Python which is dynamically run
