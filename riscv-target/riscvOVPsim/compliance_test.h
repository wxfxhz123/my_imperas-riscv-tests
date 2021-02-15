// RISC-V Compliance Test Header File
// Copyright (c) 2017, Codasip Ltd. All Rights Reserved.
// See LICENSE for license details.
//
// Description: Common header file for RV32I tests

#ifndef _COMPLIANCE_TEST_H
#define _COMPLIANCE_TEST_H

#include "riscv_test.h"

//-----------------------------------------------------------------------
// RV Compliance Macros
//-----------------------------------------------------------------------

#define RV_COMPLIANCE_HALT                                                            RVTEST_PASS                                                           
#define RV_COMPLIANCE_RV32M                                                           RVTEST_RV32M                                                          
#define RV_COMPLIANCE_RV32F                                                           RVTEST_RV32UF                                                         
#define RV_COMPLIANCE_RV64F                                                           RVTEST_RV64UF                                                         
#define RV_COMPLIANCE_RV32D                                                           RVTEST_RV32D                                                          
#define RV_COMPLIANCE_RV64D                                                           RVTEST_RV64D                                                          
#define RV_COMPLIANCE_RV64M                                                           RVTEST_RV64M                                                          
#define RV_COMPLIANCE_RV64V                                                           RVTEST_RV64V                                                          
#define RV_COMPLIANCE_RV32V                                                          RVTEST_RV64V                                                          
#define RV_COMPLIANCE_CODE_BEGIN                                                      RVTEST_CODE_BEGIN                                                     
#define RV_COMPLIANCE_CODE_END                                                        RVTEST_CODE_END                                                       
#define RV_COMPLIANCE_DATA_BEGIN                                                      RVTEST_DATA_BEGIN                                                     
#define RV_COMPLIANCE_DATA_END                                                        RVTEST_DATA_END                                                       

#endif
