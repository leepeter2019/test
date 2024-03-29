//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2019 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ------------------- Function Prototypes --------------------

void CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01_bad(void);
void CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01_good(void);
void goodB2G(void);
void goodG2B(void);
void printIntLine(int32_t intNumber);
void printLine(char * line);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // ebp
int32_t g2 = 0; // esp

// ------------------------ Functions -------------------------

// From module:   ../../testcasesupport/io.c
// Address range: 0x8048b9a - 0x8048bb7
// Line range:    11 - 17
void printLine(char * line) {
    // 0x8048b9a
    if (line != NULL) {
        // 0x8048ba6
        puts(line);
    }
}

// From module:   /home/vmware/test/Juliet_Test_Suite_v1.3_for_C_Cpp/testcases/CWE457_Use_of_Uninitialized_Variable/CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01.c
// Address range: 0x804893b - 0x80489ba
// Line range:    22 - 36
void CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01_bad(void) {
    int32_t v1 = __readgsdword(20); // 0x8048941
    int32_t v2 = g2 - 64; // 0x8048990
    for (int32_t i = 0; i < 10; i++) {
        // 0x804897f
        *(int32_t *)(v2 - 16) = *(int32_t *)(4 * i + (g2 - 49 & -16));
        printIntLine(i);
        v2 = g2 + 16;
    }
    // 0x80489a6
    if (__readgsdword(20) != v1) {
        // 0x80489b3
        __stack_chk_fail();
    }
}

// From module:   ../../testcasesupport/io.c
// Address range: 0x8048bd9 - 0x8048bf5
// Line range:    27 - 30
void printIntLine(int32_t intNumber) {
    // 0x8048bd9
    printf("%d\n", intNumber);
}

// From module:   /home/vmware/test/Juliet_Test_Suite_v1.3_for_C_Cpp/testcases/CWE457_Use_of_Uninitialized_Variable/CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01.c
// Address range: 0x80489ba - 0x8048a60
// Line range:    43 - 63
void goodG2B(void) {
    int32_t v1 = __readgsdword(20); // 0x80489c0
    int32_t v2 = g2 - 49 & -16; // 0x80489ec
    int32_t data = 0; // bp-28
    int32_t v3 = 0; // 0x80489fe
    *(int32_t *)(4 * v3 + v2) = v3;
    int32_t v4 = data + 1; // 0x8048a12
    data = v4;
    while (v4 <= 9) {
        // 0x80489fe
        v3 = v4;
        *(int32_t *)(4 * v3 + v2) = v3;
        v4 = data + 1;
        data = v4;
    }
    int32_t v5 = g2; // 0x8048a36
    for (int32_t i = 0; i < 10; i++) {
        // 0x8048a25
        *(int32_t *)(v5 - 16) = *(int32_t *)(4 * i + v2);
        printIntLine(i);
        v5 = g2 + 16;
    }
    // 0x8048a4c
    if (__readgsdword(20) != v1) {
        // 0x8048a59
        __stack_chk_fail();
    }
}

// From module:   /home/vmware/test/Juliet_Test_Suite_v1.3_for_C_Cpp/testcases/CWE457_Use_of_Uninitialized_Variable/CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01.c
// Address range: 0x8048a60 - 0x8048b06
// Line range:    66 - 87
void goodB2G(void) {
    int32_t v1 = __readgsdword(20); // 0x8048a66
    int32_t v2 = g2 - 49 & -16; // 0x8048a92
    int32_t data = 0; // bp-28
    int32_t v3 = 0; // 0x8048aa4
    *(int32_t *)(4 * v3 + v2) = v3;
    int32_t v4 = data + 1; // 0x8048ab8
    data = v4;
    while (v4 <= 9) {
        // 0x8048aa4
        v3 = v4;
        *(int32_t *)(4 * v3 + v2) = v3;
        v4 = data + 1;
        data = v4;
    }
    int32_t v5 = g2; // 0x8048adc
    for (int32_t i = 0; i < 10; i++) {
        // 0x8048acb
        *(int32_t *)(v5 - 16) = *(int32_t *)(4 * i + v2);
        printIntLine(i);
        v5 = g2 + 16;
    }
    // 0x8048af2
    if (__readgsdword(20) != v1) {
        // 0x8048aff
        __stack_chk_fail();
    }
}

// From module:   /home/vmware/test/Juliet_Test_Suite_v1.3_for_C_Cpp/testcases/CWE457_Use_of_Uninitialized_Variable/CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01.c
// Address range: 0x8048b06 - 0x8048b19
// Line range:    89 - 93
void CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01_good(void) {
    // 0x8048b06
    goodG2B();
    goodB2G();
}

// From module:   /home/vmware/test/Juliet_Test_Suite_v1.3_for_C_Cpp/testcases/CWE457_Use_of_Uninitialized_Variable/CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01.c
// Address range: 0x8048b19 - 0x8048b9a
// Line range:    104 - 119
int main(int argc, char ** argv) {
    // 0x8048b19
    srand(time(NULL));
    printLine("Calling good()...");
    CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01_good();
    printLine("Finished good()");
    printLine("Calling bad()...");
    CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_01_bad();
    printLine("Finished bad()");
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// void __stack_chk_fail(void);
// int printf(const char * restrict format, ...);
// int puts(const char * s);
// void srand(unsigned int seed);
// time_t time(time_t * timer);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (5.4.0)
// Detected language: C
// Detected functions: 7
// Decompilation date: 2019-09-06 10:33:49
