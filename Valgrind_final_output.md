

Output by running following command: valgrind --leak-check=full ./app/shell-app, after bug correction



==10167== Memcheck, a memory error detector
==10167== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==10167== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==10167== Command: ./app/shell-app
==10167== 
Averaged sensor reading: 10
DONE
==10167== 
==10167== HEAP SUMMARY:
==10167==     in use at exit: 72,704 bytes in 1 blocks
==10167==   total heap usage: 4 allocs, 3 frees, 73,772 bytes allocated
==10167== 
==10167== LEAK SUMMARY:
==10167==    definitely lost: 0 bytes in 0 blocks
==10167==    indirectly lost: 0 bytes in 0 blocks
==10167==      possibly lost: 0 bytes in 0 blocks
==10167==    still reachable: 72,704 bytes in 1 blocks
==10167==         suppressed: 0 bytes in 0 blocks
==10167== Reachable blocks (those to which a pointer was found) are not shown.
==10167== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==10167== 
==10167== For counts of detected and suppressed errors, rerun with: -v
==10167== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
