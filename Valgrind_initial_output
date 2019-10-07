

Output by running following command: valgrind --leak-check=full ./app/shell-app



==28794== Memcheck, a memory error detector
==28794== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==28794== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==28794== Command: ./app/shell-app
==28794== 
Averaged sensor reading: 10
==28794== Conditional jump or move depends on uninitialised value(s)
==28794==    at 0x401DC7: main (main.cpp:9)
==28794== 
==28794== 
==28794== HEAP SUMMARY:
==28794==     in use at exit: 72,748 bytes in 3 blocks
==28794==   total heap usage: 4 allocs, 1 frees, 73,772 bytes allocated
==28794== 
==28794== 44 (24 direct, 20 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 3
==28794==    at 0x4C2E0EF: operator new(unsigned long) (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==28794==    by 0x401EEA: AnalogSensor::Read() (AnalogSensor.cpp:16)
==28794==    by 0x401D9A: main (main.cpp:7)
==28794== 
==28794== LEAK SUMMARY:
==28794==    definitely lost: 24 bytes in 1 blocks
==28794==    indirectly lost: 20 bytes in 1 blocks
==28794==      possibly lost: 0 bytes in 0 blocks
==28794==    still reachable: 72,704 bytes in 1 blocks
==28794==         suppressed: 0 bytes in 0 blocks
==28794== Reachable blocks (those to which a pointer was found) are not shown.
==28794== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==28794== 
==28794== For counts of detected and suppressed errors, rerun with: -v
==28794== Use --track-origins=yes to see where uninitialised values come from
==28794== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

