/*ASR8 */
{ (unsigned char *) "asr8%.f %#,%C%F",                       0xF8FF003F, 0x282F000D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "asr8%.f %#,%u%F",                       0xF8FF003F, 0x286F000D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "asr8%.f%Q %#,%L%F",                     0xF8FF0FFF, 0x282F0F8D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "asr8%.f 0,%C%F",                        0xFFFF703F, 0x2E2F700D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "asr8%.f 0,%u%F",                        0xFFFF703F, 0x2E6F700D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "asr8%.f%Q 0,%L%F",                      0xFFFF7FFF, 0x2E2F7F8D, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*ASR16 */
{ (unsigned char *) "asr16%.f %#,%C%F",                      0xF8FF003F, 0x282F000C, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "asr16%.f %#,%u%F",                      0xF8FF003F, 0x286F000C, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "asr16%.f%Q %#,%L%F",                    0xF8FF0FFF, 0x282F0F8C, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "asr16%.f 0,%C%F",                       0xFFFF703F, 0x2E2F700C, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "asr16%.f 0,%u%F",                       0xFFFF703F, 0x2E6F700C, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "asr16%.f%Q 0,%L%F",                     0xFFFF7FFF, 0x2E2F7F8C, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FFS */
{ (unsigned char *) "ffs%.f %#,%u%F",                        0xF8FF003F, 0x286F0012, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ffs%.f 0,%u%F",                         0xFFFF703F, 0x2E6F7012, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ffs%.f %#,%C%F",                        0xF8FF003F, 0x282F0012, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ffs%.f%Q %#,%L%F",                      0xF8FF0FFF, 0x282F0F92, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ffs%.f 0,%C%F",                         0xFFFF703F, 0x2E2F7012, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ffs%.f%Q 0,%L%F",                       0xFFFF7FFF, 0x2E2F7F92, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FLS */
{ (unsigned char *) "fls%.f %#,%u%F",                        0xF8FF003F, 0x286F0013, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fls%.f 0,%u%F",                         0xFFFF703F, 0x2E6F7013, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fls%.f %#,%C%F",                        0xF8FF003F, 0x282F0013, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fls%.f%Q %#,%L%F",                      0xF8FF0FFF, 0x282F0F93, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fls%.f 0,%C%F",                         0xFFFF703F, 0x2E2F7013, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fls%.f%Q 0,%L%F",                       0xFFFF7FFF, 0x2E2F7F93, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*KFLAG */
{ (unsigned char *) "kflag %C",                              0xFFFFF03F, 0x20298000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "kflag %u",                              0xFFFFF03F, 0x20698000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "kflag %K",                              0xFFFFF000, 0x20A98000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "kflag%Q %L",                            0xFFFFFFFF, 0x20298F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "kflag%.q %C",                           0xFFFFF020, 0x20E98000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "kflag%.q %u",                           0xFFFFF020, 0x20E98020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "kflag%.q%Q %L",                         0xFFFFFFE0, 0x20E98F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LSL16 */
{ (unsigned char *) "lsl16%.f %#,%C%F",                      0xF8FF003F, 0x282F000A, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsl16%.f 0,%C%F",                       0xFFFF703F, 0x2E2F700A, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsl16%.f %#,%u%F",                      0xF8FF003F, 0x286F000A, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsl16%.f 0,%u%F",                       0xFFFF703F, 0x2E6F700A, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsl16%.f%Q %#,%L%F",                    0xF8FF0FFF, 0x282F0F8A, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsl16%.f%Q 0,%L%F",                     0xFFFF7FFF, 0x2E2F7F8A, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LSL8 */
{ (unsigned char *) "lsl8%.f %#,%C%F",                       0xF8FF003F, 0x282F000F, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsl8%.f 0,%C%F",                        0xFFFF703F, 0x2E2F700F, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsl8%.f %#,%u%F",                       0xF8FF003F, 0x286F000F, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsl8%.f 0,%u%F",                        0xFFFF703F, 0x2E6F700F, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsl8%.f%Q %#,%L%F",                     0xF8FF0FFF, 0x282F0F8F, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsl8%.f%Q 0,%L%F",                      0xFFFF7FFF, 0x2E2F7F8F, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LSR16 */
{ (unsigned char *) "lsr16%.f %#,%C%F",                      0xF8FF003F, 0x282F000B, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsr16%.f 0,%C%F",                       0xFFFF703F, 0x2E2F700B, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsr16%.f %#,%u%F",                      0xF8FF003F, 0x286F000B, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsr16%.f 0,%u%F",                       0xFFFF703F, 0x2E6F700B, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsr16%.f%Q %#,%L%F",                    0xF8FF0FFF, 0x282F0F8B, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsr16%.f%Q 0,%L%F",                     0xFFFF7FFF, 0x2E2F7F8B, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LSR8 */
{ (unsigned char *) "lsr8%.f %#,%C%F",                       0xF8FF003F, 0x282F000E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsr8%.f 0,%C%F",                        0xFFFF703F, 0x2E2F700E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsr8%.f %#,%u%F",                       0xF8FF003F, 0x286F000E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsr8%.f 0,%u%F",                        0xFFFF703F, 0x2E6F700E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsr8%.f%Q %#,%L%F",                     0xF8FF0FFF, 0x282F0F8E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lsr8%.f%Q 0,%L%F",                      0xFFFF7FFF, 0x2E2F7F8E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*ROL */
{ (unsigned char *) "rol%.f %#,%C%F",                        0xF8FF003F, 0x202F000D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol%.f 0,%C%F",                         0xFFFF703F, 0x262F700D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol%.f %#,%u%F",                        0xF8FF003F, 0x206F000D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol%.f 0,%u%F",                         0xFFFF703F, 0x266F700D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol8%.f %#,%C%F",                       0xF8FF003F, 0x282F0010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol8%.f 0,%C%F",                        0xFFFF703F, 0x2E2F7010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol8%.f %#,%u%F",                       0xF8FF003F, 0x286F0010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol8%.f 0,%u%F",                        0xFFFF703F, 0x2E6F7010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol%.f%Q %#,%L%F",                      0xF8FF0FFF, 0x202F0F8D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol%.f%Q 0,%L%F",                       0xFFFF7FFF, 0x262F7F8D, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol8%.f%Q %#,%L%F",                     0xF8FF0FFF, 0x282F0F90, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rol8%.f%Q 0,%L%F",                      0xFFFF7FFF, 0x2E2F7F90, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*ROR8 */
{ (unsigned char *) "ror8%.f %#,%C%F",                       0xF8FF003F, 0x282F0011, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ror8%.f 0,%C%F",                        0xFFFF703F, 0x2E2F7011, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ror8%.f %#,%u%F",                       0xF8FF003F, 0x286F0011, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ror8%.f 0,%u%F",                        0xFFFF703F, 0x2E6F7011, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ror8%.f%Q %#,%L%F",                     0xF8FF0FFF, 0x282F0F91, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ror8%.f%Q 0,%L%F",                      0xFFFF7FFF, 0x2E2F7F91, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SETEQ */
/* seteq<.cc><.f>    b,b,u6 	0010 0bbb 1111 1000 FBBB uuuu uu1Q QQQQ  */
{ (unsigned char *) "seteq%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20F80020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    b,b,s12 	0010 0bbb 1011 1000 FBBB ssss ssSS SSSS  */
{ (unsigned char *) "seteq%.f %#,%B,%K%F",                   0xF8FF0000, 0x20B80000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.cc><.f>    b,b,c 	0010 0bbb 1111 1000 FBBB CCCC CC0Q QQQQ  */
{ (unsigned char *) "seteq%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20F80000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.cc><.f>    b,b,limm 	0010 0bbb 1111 1000 FBBB 1111 100Q QQQQ  */
{ (unsigned char *) "seteq%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20F80F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    a,b,c   	0010 0bbb 0011 1000 FBBB CCCC CCAA AAAA  */
{ (unsigned char *) "seteq%.f %A,%B,%C%F",                   0xF8FF0000, 0x20380000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    a,limm,c 	0010 0110 0011 1000 F111 CCCC CCAA AAAA  */
{ (unsigned char *) "seteq%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x26387000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    a,b,u6  	0010 0bbb 0111 1000 FBBB uuuu uuAA AAAA  */
{ (unsigned char *) "seteq%.f %A,%B,%u%F",                   0xF8FF0000, 0x20780000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    a,b,limm 	0010 0bbb 0011 1000 FBBB 1111 10AA AAAA  */
{ (unsigned char *) "seteq%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x20380F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    a,limm,u6 	0010 0110 0111 1000 F111 uuuu uuAA AAAA  */
{ (unsigned char *) "seteq%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x26787000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    a,limm,limm 	0010 0110 0011 1000 F111 1111 10AA AAAA  */
{ (unsigned char *) "seteq%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x26387F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    0,b,c   	0010 0bbb 0011 1000 FBBB CCCC CC11 1110  */
{ (unsigned char *) "seteq%.f 0,%B,%C%F",                    0xF8FF003F, 0x2038003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    0,limm,c 	0010 0110 0011 1000 F111 CCCC CC11 1110  */
{ (unsigned char *) "seteq%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x2638703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    0,b,u6  	0010 0bbb 0111 1000 FBBB uuuu uu11 1110  */
{ (unsigned char *) "seteq%.f 0,%B,%u%F",                    0xF8FF003F, 0x2078003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    0,b,limm 	0010 0bbb 0011 1000 FBBB 1111 1011 1110  */
{ (unsigned char *) "seteq%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x20380FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    0,limm,u6 	0010 0110 0111 1000 F111 uuuu uu11 1110  */
{ (unsigned char *) "seteq%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x2678703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    0,limm,s12 	0010 0110 1011 1000 F111 ssss ssSS SSSS  */
{ (unsigned char *) "seteq%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x26B87000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.f>    0,limm,limm 	0010 0110 0011 1000 F111 1111 1011 1110  */
{ (unsigned char *) "seteq%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x26387FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.cc><.f>    0,limm,c 	0010 0110 1111 1000 F111 CCCC CC0Q QQQQ  */
{ (unsigned char *) "seteq%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26F87000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.cc><.f>    0,limm,u6 	0010 0110 1111 1000 F111 uuuu uu1Q QQQQ  */
{ (unsigned char *) "seteq%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26F87020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seteq<.cc><.f>    0,limm,limm 	0010 0110 1111 1000 F111 1111 100Q QQQQ  */
{ (unsigned char *) "seteq%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26F87F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SETNE */
/* setne<.f>    a,b,c   	0010 0bbb 0011 1001 FBBB CCCC CCAA AAAA  */
{ (unsigned char *) "setne%.f %A,%B,%C%F",                   0xF8FF0000, 0x20390000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    a,b,u6  	0010 0bbb 0111 1001 FBBB uuuu uuAA AAAA  */
{ (unsigned char *) "setne%.f %A,%B,%u%F",                   0xF8FF0000, 0x20790000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    a,limm,u6 	0010 0110 0111 1001 F111 uuuu uuAA AAAA  */
{ (unsigned char *) "setne%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x26797000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    0,b,u6  	0010 0bbb 0111 1001 FBBB uuuu uu11 1110  */
{ (unsigned char *) "setne%.f 0,%B,%u%F",                    0xF8FF003F, 0x2079003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    0,limm,u6 	0010 0110 0111 1001 F111 uuuu uu11 1110  */
{ (unsigned char *) "setne%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x2679703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    b,b,s12 	0010 0bbb 1011 1001 FBBB ssss ssSS SSSS  */
{ (unsigned char *) "setne%.f %#,%B,%K%F",                   0xF8FF0000, 0x20B90000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    0,limm,s12 	0010 0110 1011 1001 F111 ssss ssSS SSSS  */
{ (unsigned char *) "setne%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x26B97000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    0,b,c   	0010 0bbb 0011 1001 FBBB CCCC CC11 1110  */
{ (unsigned char *) "setne%.f 0,%B,%C%F",                    0xF8FF003F, 0x2039003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    0,limm,c 	0010 0110 0011 1001 F111 CCCC CC11 1110  */
{ (unsigned char *) "setne%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x2639703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    0,b,limm 	0010 0bbb 0011 1001 FBBB 1111 1011 1110  */
{ (unsigned char *) "setne%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x20390FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    0,limm,limm 	0010 0110 0011 1001 F111 1111 1011 1110  */
{ (unsigned char *) "setne%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x26397FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.cc><.f>    b,b,c 	0010 0bbb 1111 1001 FBBB CCCC CC0Q QQQQ  */
{ (unsigned char *) "setne%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20F90000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.cc><.f>    b,b,u6 	0010 0bbb 1111 1001 FBBB uuuu uu1Q QQQQ  */
{ (unsigned char *) "setne%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20F90020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.cc><.f>    0,limm,u6 	0010 0110 1111 1001 F111 uuuu uu1Q QQQQ  */
{ (unsigned char *) "setne%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26F97020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.cc><.f>    b,b,limm 	0010 0bbb 1111 1001 FBBB 1111 100Q QQQQ  */
{ (unsigned char *) "setne%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20F90F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.cc><.f>    0,limm,c 	0010 0110 1111 1001 F111 CCCC CC0Q QQQQ  */
{ (unsigned char *) "setne%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26F97000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.cc><.f>    0,limm,limm 	0010 0110 1111 1001 F111 1111 100Q QQQQ  */
{ (unsigned char *) "setne%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26F97F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    a,limm,c 	0010 0110 0011 1001 F111 CCCC CCAA AAAA  */
{ (unsigned char *) "setne%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x26397000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    a,b,limm 	0010 0bbb 0011 1001 FBBB 1111 10AA AAAA  */
{ (unsigned char *) "setne%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x20390F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setne<.f>    a,limm,limm 	0010 0110 0011 1001 F111 1111 10AA AAAA  */
{ (unsigned char *) "setne%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x26397F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SETLT */
/* setlt<.f>    a,b,c   	0010 0bbb 0011 1010 FBBB CCCC CCAA AAAA  */
{ (unsigned char *) "setlt%.f %A,%B,%C%F",                   0xF8FF0000, 0x203A0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    0,b,c   	0010 0bbb 0011 1010 FBBB CCCC CC11 1110  */
{ (unsigned char *) "setlt%.f 0,%B,%C%F",                    0xF8FF003F, 0x203A003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    a,b,u6  	0010 0bbb 0111 1010 FBBB uuuu uuAA AAAA  */
{ (unsigned char *) "setlt%.f %A,%B,%u%F",                   0xF8FF0000, 0x207A0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    a,limm,u6 	0010 0110 0111 1010 F111 uuuu uuAA AAAA  */
{ (unsigned char *) "setlt%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x267A7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    0,b,u6  	0010 0bbb 0111 1010 FBBB uuuu uu11 1110  */
{ (unsigned char *) "setlt%.f 0,%B,%u%F",                    0xF8FF003F, 0x207A003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    0,limm,u6 	0010 0110 0111 1010 F111 uuuu uu11 1110  */
{ (unsigned char *) "setlt%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x267A703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    b,b,s12 	0010 0bbb 1011 1010 FBBB ssss ssSS SSSS  */
{ (unsigned char *) "setlt%.f %#,%B,%K%F",                   0xF8FF0000, 0x20BA0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    0,limm,s12 	0010 0110 1011 1010 F111 ssss ssSS SSSS  */
{ (unsigned char *) "setlt%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x26BA7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.cc><.f>    b,b,c 	0010 0bbb 1111 1010 FBBB CCCC CC0Q QQQQ  */
{ (unsigned char *) "setlt%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20FA0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.cc><.f>    b,b,u6 	0010 0bbb 1111 1010 FBBB uuuu uu1Q QQQQ  */
{ (unsigned char *) "setlt%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20FA0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.cc><.f>    0,limm,u6 	0010 0110 1111 1010 F111 uuuu uu1Q QQQQ  */
{ (unsigned char *) "setlt%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26FA7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.cc><.f>    b,b,limm 	0010 0bbb 1111 1010 FBBB 1111 100Q QQQQ  */
{ (unsigned char *) "setlt%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20FA0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.cc><.f>    0,limm,c 	0010 0110 1111 1010 F111 CCCC CC0Q QQQQ  */
{ (unsigned char *) "setlt%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26FA7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.cc><.f>    0,limm,limm 	0010 0110 1111 1010 F111 1111 100Q QQQQ  */
{ (unsigned char *) "setlt%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26FA7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    a,limm,c 	0010 0110 0011 1010 F111 CCCC CCAA AAAA  */
{ (unsigned char *) "setlt%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x263A7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    a,b,limm 	0010 0bbb 0011 1010 FBBB 1111 10AA AAAA  */
{ (unsigned char *) "setlt%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x203A0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    a,limm,limm 	0010 0110 0011 1010 F111 1111 10AA AAAA  */
{ (unsigned char *) "setlt%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x263A7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    0,limm,c 	0010 0110 0011 1010 F111 CCCC CC11 1110  */
{ (unsigned char *) "setlt%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x263A703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    0,b,limm 	0010 0bbb 0011 1010 FBBB 1111 1011 1110  */
{ (unsigned char *) "setlt%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x203A0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlt<.f>    0,limm,limm 	0010 0110 0011 1010 F111 1111 1011 1110  */
{ (unsigned char *) "setlt%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x263A7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SETGT */
/* setgt<.f>    a,b,c   	0010 0bbb 0011 1111 FBBB CCCC CCAA AAAA  */
{ (unsigned char *) "setgt%.f %A,%B,%C%F",                   0xF8FF0000, 0x203F0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    0,b,c   	0010 0bbb 0011 1111 FBBB CCCC CC11 1110  */
{ (unsigned char *) "setgt%.f 0,%B,%C%F",                    0xF8FF003F, 0x203F003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    a,b,u6  	0010 0bbb 0111 1111 FBBB uuuu uuAA AAAA  */
{ (unsigned char *) "setgt%.f %A,%B,%u%F",                   0xF8FF0000, 0x207F0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    a,limm,u6 	0010 0110 0111 1111 F111 uuuu uuAA AAAA  */
{ (unsigned char *) "setgt%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x267F7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    0,b,u6  	0010 0bbb 0111 1111 FBBB uuuu uu11 1110  */
{ (unsigned char *) "setgt%.f 0,%B,%u%F",                    0xF8FF003F, 0x207F003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    0,limm,u6 	0010 0110 0111 1111 F111 uuuu uu11 1110  */
{ (unsigned char *) "setgt%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x267F703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    b,b,s12 	0010 0bbb 1011 1111 FBBB ssss ssSS SSSS  */
{ (unsigned char *) "setgt%.f %#,%B,%K%F",                   0xF8FF0000, 0x20BF0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    0,limm,s12 	0010 0110 1011 1111 F111 ssss ssSS SSSS  */
{ (unsigned char *) "setgt%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x26BF7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.cc><.f>    b,b,c 	0010 0bbb 1111 1111 FBBB CCCC CC0Q QQQQ  */
{ (unsigned char *) "setgt%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20FF0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.cc><.f>    b,b,u6 	0010 0bbb 1111 1111 FBBB uuuu uu1Q QQQQ  */
{ (unsigned char *) "setgt%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20FF0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.cc><.f>    0,limm,u6 	0010 0110 1111 1111 F111 uuuu uu1Q QQQQ  */
{ (unsigned char *) "setgt%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26FF7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.cc><.f>    b,b,limm 	0010 0bbb 1111 1111 FBBB 1111 100Q QQQQ  */
{ (unsigned char *) "setgt%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20FF0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.cc><.f>    0,limm,c 	0010 0110 1111 1111 F111 CCCC CC0Q QQQQ  */
{ (unsigned char *) "setgt%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26FF7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.cc><.f>    0,limm,limm 	0010 0110 1111 1111 F111 1111 100Q QQQQ  */
{ (unsigned char *) "setgt%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26FF7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    a,limm,c 	0010 0110 0011 1111 F111 CCCC CCAA AAAA  */
{ (unsigned char *) "setgt%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x263F7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    a,b,limm 	0010 0bbb 0011 1111 FBBB 1111 10AA AAAA  */
{ (unsigned char *) "setgt%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x203F0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    a,limm,limm 	0010 0110 0011 1111 F111 1111 10AA AAAA  */
{ (unsigned char *) "setgt%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x263F7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    0,limm,c 	0010 0110 0011 1111 F111 CCCC CC11 1110  */
{ (unsigned char *) "setgt%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x263F703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    0,b,limm 	0010 0bbb 0011 1111 FBBB 1111 1011 1110  */
{ (unsigned char *) "setgt%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x203F0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setgt<.f>    0,limm,limm 	0010 0110 0011 1111 F111 1111 1011 1110  */
{ (unsigned char *) "setgt%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x263F7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*SETGE */
/* setge<.f>    a,b,c   	0010 0bbb 0011 1011 FBBB CCCC CCAA AAAA  */
{ (unsigned char *) "setge%.f %A,%B,%C%F",                   0xF8FF0000, 0x203B0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    0,b,c   	0010 0bbb 0011 1011 FBBB CCCC CC11 1110  */
{ (unsigned char *) "setge%.f 0,%B,%C%F",                    0xF8FF003F, 0x203B003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    a,b,u6  	0010 0bbb 0111 1011 FBBB uuuu uuAA AAAA  */
{ (unsigned char *) "setge%.f %A,%B,%u%F",                   0xF8FF0000, 0x207B0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    a,limm,u6 	0010 0110 0111 1011 F111 uuuu uuAA AAAA  */
{ (unsigned char *) "setge%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x267B7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    0,b,u6  	0010 0bbb 0111 1011 FBBB uuuu uu11 1110  */
{ (unsigned char *) "setge%.f 0,%B,%u%F",                    0xF8FF003F, 0x207B003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    0,limm,u6 	0010 0110 0111 1011 F111 uuuu uu11 1110  */
{ (unsigned char *) "setge%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x267B703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    b,b,s12 	0010 0bbb 1011 1011 FBBB ssss ssSS SSSS  */
{ (unsigned char *) "setge%.f %#,%B,%K%F",                   0xF8FF0000, 0x20BB0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    0,limm,s12 	0010 0110 1011 1011 F111 ssss ssSS SSSS  */
{ (unsigned char *) "setge%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x26BB7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.cc><.f>    b,b,c 	0010 0bbb 1111 1011 FBBB CCCC CC0Q QQQQ  */
{ (unsigned char *) "setge%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20FB0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.cc><.f>    b,b,u6 	0010 0bbb 1111 1011 FBBB uuuu uu1Q QQQQ  */
{ (unsigned char *) "setge%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20FB0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.cc><.f>    0,limm,u6 	0010 0110 1111 1011 F111 uuuu uu1Q QQQQ  */
{ (unsigned char *) "setge%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26FB7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.cc><.f>    b,b,limm 	0010 0bbb 1111 1011 FBBB 1111 100Q QQQQ  */
{ (unsigned char *) "setge%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20FB0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.cc><.f>    0,limm,c 	0010 0110 1111 1011 F111 CCCC CC0Q QQQQ  */
{ (unsigned char *) "setge%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26FB7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.cc><.f>    0,limm,limm 	0010 0110 1111 1011 F111 1111 100Q QQQQ  */
{ (unsigned char *) "setge%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26FB7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    a,limm,c 	0010 0110 0011 1011 F111 CCCC CCAA AAAA  */
{ (unsigned char *) "setge%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x263B7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    a,b,limm 	0010 0bbb 0011 1011 FBBB 1111 10AA AAAA  */
{ (unsigned char *) "setge%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x203B0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    a,limm,limm 	0010 0110 0011 1011 F111 1111 10AA AAAA  */
{ (unsigned char *) "setge%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x263B7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    0,limm,c 	0010 0110 0011 1011 F111 CCCC CC11 1110  */
{ (unsigned char *) "setge%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x263B703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    0,b,limm 	0010 0bbb 0011 1011 FBBB 1111 1011 1110  */
{ (unsigned char *) "setge%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x203B0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setge<.f>    0,limm,limm 	0010 0110 0011 1011 F111 1111 1011 1110  */
{ (unsigned char *) "setge%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x263B7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*SETLO */
/* setlo<.f>    a,b,c   	0010 0bbb 0011 1100 FBBB CCCC CCAA AAAA  */
{ (unsigned char *) "setlo%.f %A,%B,%C%F",                   0xF8FF0000, 0x203C0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    0,b,c   	0010 0bbb 0011 1100 FBBB CCCC CC11 1110  */
{ (unsigned char *) "setlo%.f 0,%B,%C%F",                    0xF8FF003F, 0x203C003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    a,b,u6  	0010 0bbb 0111 1100 FBBB uuuu uuAA AAAA  */
{ (unsigned char *) "setlo%.f %A,%B,%u%F",                   0xF8FF0000, 0x207C0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    a,limm,u6 	0010 0110 0111 1100 F111 uuuu uuAA AAAA  */
{ (unsigned char *) "setlo%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x267C7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    0,b,u6  	0010 0bbb 0111 1100 FBBB uuuu uu11 1110  */
{ (unsigned char *) "setlo%.f 0,%B,%u%F",                    0xF8FF003F, 0x207C003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    0,limm,u6 	0010 0110 0111 1100 F111 uuuu uu11 1110  */
{ (unsigned char *) "setlo%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x267C703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    b,b,s12 	0010 0bbb 1011 1100 FBBB ssss ssSS SSSS  */
{ (unsigned char *) "setlo%.f %#,%B,%K%F",                   0xF8FF0000, 0x20BC0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    0,limm,s12 	0010 0110 1011 1100 F111 ssss ssSS SSSS  */
{ (unsigned char *) "setlo%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x26BC7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.cc><.f>    b,b,c 	0010 0bbb 1111 1100 FBBB CCCC CC0Q QQQQ  */
{ (unsigned char *) "setlo%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20FC0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.cc><.f>    b,b,u6 	0010 0bbb 1111 1100 FBBB uuuu uu1Q QQQQ  */
{ (unsigned char *) "setlo%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20FC0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.cc><.f>    0,limm,u6 	0010 0110 1111 1100 F111 uuuu uu1Q QQQQ  */
{ (unsigned char *) "setlo%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26FC7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.cc><.f>    b,b,limm 	0010 0bbb 1111 1100 FBBB 1111 100Q QQQQ  */
{ (unsigned char *) "setlo%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20FC0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.cc><.f>    0,limm,c 	0010 0110 1111 1100 F111 CCCC CC0Q QQQQ  */
{ (unsigned char *) "setlo%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26FC7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.cc><.f>    0,limm,limm 	0010 0110 1111 1100 F111 1111 100Q QQQQ  */
{ (unsigned char *) "setlo%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26FC7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    a,limm,c 	0010 0110 0011 1100 F111 CCCC CCAA AAAA  */
{ (unsigned char *) "setlo%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x263C7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    a,b,limm 	0010 0bbb 0011 1100 FBBB 1111 10AA AAAA  */
{ (unsigned char *) "setlo%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x203C0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    a,limm,limm 	0010 0110 0011 1100 F111 1111 10AA AAAA  */
{ (unsigned char *) "setlo%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x263C7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    0,limm,c 	0010 0110 0011 1100 F111 CCCC CC11 1110  */
{ (unsigned char *) "setlo%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x263C703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    0,b,limm 	0010 0bbb 0011 1100 FBBB 1111 1011 1110  */
{ (unsigned char *) "setlo%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x203C0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setlo<.f>    0,limm,limm 	0010 0110 0011 1100 F111 1111 1011 1110  */
{ (unsigned char *) "setlo%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x263C7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*SETHS */
/* seths<.f>    a,b,c   	0010 0bbb 0011 1101 FBBB CCCC CCAA AAAA  */
{ (unsigned char *) "seths%.f %A,%B,%C%F",                   0xF8FF0000, 0x203D0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    0,b,c   	0010 0bbb 0011 1101 FBBB CCCC CC11 1110  */
{ (unsigned char *) "seths%.f 0,%B,%C%F",                    0xF8FF003F, 0x203D003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    a,b,u6  	0010 0bbb 0111 1101 FBBB uuuu uuAA AAAA  */
{ (unsigned char *) "seths%.f %A,%B,%u%F",                   0xF8FF0000, 0x207D0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    a,limm,u6 	0010 0110 0111 1101 F111 uuuu uuAA AAAA  */
{ (unsigned char *) "seths%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x267D7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    0,b,u6  	0010 0bbb 0111 1101 FBBB uuuu uu11 1110  */
{ (unsigned char *) "seths%.f 0,%B,%u%F",                    0xF8FF003F, 0x207D003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    0,limm,u6 	0010 0110 0111 1101 F111 uuuu uu11 1110  */
{ (unsigned char *) "seths%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x267D703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    b,b,s12 	0010 0bbb 1011 1101 FBBB ssss ssSS SSSS  */
{ (unsigned char *) "seths%.f %#,%B,%K%F",                   0xF8FF0000, 0x20BD0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    0,limm,s12 	0010 0110 1011 1101 F111 ssss ssSS SSSS  */
{ (unsigned char *) "seths%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x26BD7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.cc><.f>    b,b,c 	0010 0bbb 1111 1101 FBBB CCCC CC0Q QQQQ  */
{ (unsigned char *) "seths%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20FD0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.cc><.f>    b,b,u6 	0010 0bbb 1111 1101 FBBB uuuu uu1Q QQQQ  */
{ (unsigned char *) "seths%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20FD0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.cc><.f>    0,limm,u6 	0010 0110 1111 1101 F111 uuuu uu1Q QQQQ  */
{ (unsigned char *) "seths%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26FD7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.cc><.f>    b,b,limm 	0010 0bbb 1111 1101 FBBB 1111 100Q QQQQ  */
{ (unsigned char *) "seths%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20FD0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.cc><.f>    0,limm,c 	0010 0110 1111 1101 F111 CCCC CC0Q QQQQ  */
{ (unsigned char *) "seths%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26FD7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.cc><.f>    0,limm,limm 	0010 0110 1111 1101 F111 1111 100Q QQQQ  */
{ (unsigned char *) "seths%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26FD7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    a,limm,c 	0010 0110 0011 1101 F111 CCCC CCAA AAAA  */
{ (unsigned char *) "seths%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x263D7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    a,b,limm 	0010 0bbb 0011 1101 FBBB 1111 10AA AAAA  */
{ (unsigned char *) "seths%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x203D0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    a,limm,limm 	0010 0110 0011 1101 F111 1111 10AA AAAA  */
{ (unsigned char *) "seths%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x263D7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    0,limm,c 	0010 0110 0011 1101 F111 CCCC CC11 1110  */
{ (unsigned char *) "seths%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x263D703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    0,b,limm 	0010 0bbb 0011 1101 FBBB 1111 1011 1110  */
{ (unsigned char *) "seths%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x203D0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* seths<.f>    0,limm,limm 	0010 0110 0011 1101 F111 1111 1011 1110  */
{ (unsigned char *) "seths%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x263D7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*SETLE */
/* setle<.f>    a,b,c   	0010 0bbb 0011 1110 FBBB CCCC CCAA AAAA  */
{ (unsigned char *) "setle%.f %A,%B,%C%F",                   0xF8FF0000, 0x203E0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    0,b,c   	0010 0bbb 0011 1110 FBBB CCCC CC11 1110  */
{ (unsigned char *) "setle%.f 0,%B,%C%F",                    0xF8FF003F, 0x203E003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    a,b,u6  	0010 0bbb 0111 1110 FBBB uuuu uuAA AAAA  */
{ (unsigned char *) "setle%.f %A,%B,%u%F",                   0xF8FF0000, 0x207E0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    a,limm,u6 	0010 0110 0111 1110 F111 uuuu uuAA AAAA  */
{ (unsigned char *) "setle%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x267E7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    0,b,u6  	0010 0bbb 0111 1110 FBBB uuuu uu11 1110  */
{ (unsigned char *) "setle%.f 0,%B,%u%F",                    0xF8FF003F, 0x207E003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    0,limm,u6 	0010 0110 0111 1110 F111 uuuu uu11 1110  */
{ (unsigned char *) "setle%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x267E703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    b,b,s12 	0010 0bbb 1011 1110 FBBB ssss ssSS SSSS  */
{ (unsigned char *) "setle%.f %#,%B,%K%F",                   0xF8FF0000, 0x20BE0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    0,limm,s12 	0010 0110 1011 1110 F111 ssss ssSS SSSS  */
{ (unsigned char *) "setle%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x26BE7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.cc><.f>    b,b,c 	0010 0bbb 1111 1110 FBBB CCCC CC0Q QQQQ  */
{ (unsigned char *) "setle%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20FE0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.cc><.f>    b,b,u6 	0010 0bbb 1111 1110 FBBB uuuu uu1Q QQQQ  */
{ (unsigned char *) "setle%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20FE0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.cc><.f>    0,limm,u6 	0010 0110 1111 1110 F111 uuuu uu1Q QQQQ  */
{ (unsigned char *) "setle%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26FE7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.cc><.f>    b,b,limm 	0010 0bbb 1111 1110 FBBB 1111 100Q QQQQ  */
{ (unsigned char *) "setle%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20FE0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.cc><.f>    0,limm,c 	0010 0110 1111 1110 F111 CCCC CC0Q QQQQ  */
{ (unsigned char *) "setle%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26FE7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.cc><.f>    0,limm,limm 	0010 0110 1111 1110 F111 1111 100Q QQQQ  */
{ (unsigned char *) "setle%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26FE7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    a,limm,c 	0010 0110 0011 1110 F111 CCCC CCAA AAAA  */
{ (unsigned char *) "setle%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x263E7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    a,b,limm 	0010 0bbb 0011 1110 FBBB 1111 10AA AAAA  */
{ (unsigned char *) "setle%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x203E0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    a,limm,limm 	0010 0110 0011 1110 F111 1111 10AA AAAA  */
{ (unsigned char *) "setle%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x263E7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    0,limm,c 	0010 0110 0011 1110 F111 CCCC CC11 1110  */
{ (unsigned char *) "setle%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x263E703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    0,b,limm 	0010 0bbb 0011 1110 FBBB 1111 1011 1110  */
{ (unsigned char *) "setle%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x203E0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* setle<.f>    0,limm,limm 	0010 0110 0011 1110 F111 1111 1011 1110  */
{ (unsigned char *) "setle%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x263E7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*SWI */
/* swi                  	0010 0010 0110 1111 0000 0000 0011 1111  */
{ (unsigned char *) "swi",                                  0xFFFFFFFF, 0x226F003F, ARC_MACH_ARC7 | ARC_MACH_ARCV2, 0, 0, 0, 0},
/* swi_s                	0111 1010 1110 0000  */
{ (unsigned char *) "swi_s",                                0xFFFF, 0x7AE0, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* sub_s    a,b,c               0100 1bbb ccc1 0aaa  */
{ (unsigned char *) "sub_s %a,%b,%c",                        0xF818, 0x4810, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*STH_S */
/* sth_s    c,[b,u6]            1011 0bbb cccu uuuu  */
{ (unsigned char *) "sth_s %c,[%b,%k]",                      0xF800, 0xB000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sth_s %c,[%b]",                         0xF800, 0xB000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SEXH */
{ (unsigned char *) "sexh%.f %#,%C%F",                       0xF8FF003F, 0x202F0006, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sexh%.f %#,%u%F",                       0xF8FF003F, 0x206F0006, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sexh%.f 0,%C%F",                        0xFFFF703F, 0x262F7006, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sexh%.f 0,%u%F",                        0xFFFF703F, 0x266F7006, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sexh%.f%Q %#,%L%F",                     0xF8FF0FFF, 0x202F0F86, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sexh%.f%Q 0,%L%F",                      0xFFFF7FFF, 0x262F7F86, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sexh_s %b,%c",                          0xF81F, 0x780E, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*EXTH */
{ (unsigned char *) "exth%.f %#,%C%F",                       0xF8FF003F, 0x202F0008, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "exth%.f %#,%u%F",                       0xF8FF003F, 0x206F0008, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "exth%.f%Q %#,%L%F",                     0xF8FF0FFF, 0x202F0F88, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "exth%.f 0,%C%F",                        0xFFFF703F, 0x262F7008, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "exth%.f 0,%u%F",                        0xFFFF703F, 0x266F7008, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "exth%.f%Q 0,%L%F",                      0xFFFF7FFF, 0x262F7F88, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "exth_s %b,%c",                          0xF81F, 0x7810, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*DIV */
{ (unsigned char *) "div%.f %A,%B,%C%F",                     0xF8FF0000, 0x28040000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f %A,%B,%u%F",                     0xF8FF0000, 0x28440000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f %#,%B,%K%F",                     0xF8FF0000, 0x28840000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f 0,%B,%C%F",                      0xF8FF003F, 0x2804003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f 0,%B,%u%F",                      0xF8FF003F, 0x2844003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f%Q %A,%L,%C%F",                   0xFFFF7000, 0x2E047000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f%Q %A,%L,%u%F",                   0xFFFF7000, 0x2E447000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f%Q %A,%B,%L%F",                   0xF8FF0FC0, 0x28040F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f%Q %A,%L,%L%F",                   0xFFFF7FC0, 0x2E047F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f%Q 0,%L,%C%F",                    0xFFFF703F, 0x2E04703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f%Q 0,%L,%u%F",                    0xFFFF703F, 0x2E44703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f%Q 0,%L,%K%F",                    0xFFFF7000, 0x2E847000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f%Q 0,%B,%L%F",                    0xF8FF0FFF, 0x28040FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.f%Q 0,%L,%L%F",                    0xFFFF7FFF, 0x2E047FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.q%.f %#,%B,%C%F",                  0xF8FF0020, 0x28C40000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.q%.f %#,%B,%u%F",                  0xF8FF0020, 0x28C40020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.q%.f%Q %#,%B,%L%F",                0xF8FF0FE0, 0x28C40F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.q%.f%Q 0,%L,%C%F",                 0xFFFF7020, 0x2EC47000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.q%.f%Q 0,%L,%u%F",                 0xFFFF7020, 0x2EC47020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "div%.q%.f%Q 0,%L,%L%F",                 0xFFFF7FE0, 0x2EC47F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*DIVU */
{ (unsigned char *) "divu%.f %A,%B,%C%F",                    0xF8FF0000, 0x28050000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f %A,%B,%u%F",                    0xF8FF0000, 0x28450000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f %#,%B,%K%F",                    0xF8FF0000, 0x28850000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f 0,%B,%C%F",                     0xF8FF003F, 0x2805003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f 0,%B,%u%F",                     0xF8FF003F, 0x2845003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f%Q %A,%L,%C%F",                  0xFFFF7000, 0x2E057000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f%Q %A,%L,%u%F",                  0xFFFF7000, 0x2E457000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f%Q %A,%B,%L%F",                  0xF8FF0FC0, 0x28050F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f%Q %A,%L,%L%F",                  0xFFFF7FC0, 0x2E057F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f%Q 0,%L,%C%F",                   0xFFFF703F, 0x2E05703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f%Q 0,%L,%u%F",                   0xFFFF703F, 0x2E45703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f%Q 0,%L,%K%F",                   0xFFFF7000, 0x2E857000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f%Q 0,%B,%L%F",                   0xF8FF0FFF, 0x28050FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.f%Q 0,%L,%L%F",                   0xFFFF7FFF, 0x2E057FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.q%.f %#,%B,%C%F",                 0xF8FF0020, 0x28C50000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.q%.f %#,%B,%u%F",                 0xF8FF0020, 0x28C50020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.q%.f%Q %#,%B,%L%F",               0xF8FF0FE0, 0x28C50F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.q%.f%Q 0,%L,%C%F",                0xFFFF7020, 0x2EC57000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.q%.f%Q 0,%L,%u%F",                0xFFFF7020, 0x2EC57020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "divu%.q%.f%Q 0,%L,%L%F",                0xFFFF7FE0, 0x2EC57F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BMSKN */
{ (unsigned char *) "bmskn%.f %A,%B,%u%F",                   0xF8FF0000, 0x206C0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x266C7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f 0,%B,%u%F",                    0xF8FF003F, 0x206C003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x266C703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f %#,%B,%K%F",                   0xF8FF0000, 0x20AC0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x26AC7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f %A,%B,%C%F",                   0xF8FF0000, 0x202C0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x262C7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x202C0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x262C7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f 0,%B,%C%F",                    0xF8FF003F, 0x202C003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x262C703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x202C0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x262C7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20EC0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20EC0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26EC7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20EC0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26EC7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bmskn%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26EC7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BI */
{ (unsigned char *) "bi [%C]",                               0xFFFFF03F, 0x20240000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BIH */
{ (unsigned char *) "bih [%C]",                              0xFFFFF03F, 0x20250000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*JEQ_S */
{ (unsigned char *) "jeq_s [%9]",                            0xFFFF, 0x7CE0, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*JNE_S */
{ (unsigned char *) "jne_s [%9]",                            0xFFFF, 0x7DE0, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*MPY_S */
{ (unsigned char *) "mpy_s %b,%b,%c",                        0xF81F, 0x780C, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*MPYM */
{ (unsigned char *) "mpym%.f %A,%B,%C%F",                    0xF8FF0000, 0x201B0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f 0,%B,%C%F",                     0xF8FF003F, 0x201B003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f %A,%B,%u%F",                    0xF8FF0000, 0x205B0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f%Q %A,%L,%u%F",                  0xFFFF7000, 0x265B7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f 0,%B,%u%F",                     0xF8FF003F, 0x205B003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f%Q 0,%L,%u%F",                   0xFFFF703F, 0x265B703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f %#,%B,%K%F",                    0xF8FF0000, 0x209B0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f%Q 0,%L,%K%F",                   0xFFFF7000, 0x269B7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.q%.f %#,%B,%C%F",                 0xF8FF0020, 0x20DB0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.q%.f %#,%B,%u%F",                 0xF8FF0020, 0x20DB0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.q%.f%Q %#,%B,%L%F",               0xF8FF0FE0, 0x20DB0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.q%.f%Q 0,%L,%C%F",                0xFFFF7020, 0x26DB7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.q%.f%Q 0,%L,%L%F",                0xFFFF7FE0, 0x26DB7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.q%.f%Q 0,%L,%u%F",                0xFFFF7020, 0x26DB7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f%Q %A,%L,%C%F",                  0xFFFF7000, 0x261B7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f%Q %A,%B,%L%F",                  0xF8FF0FC0, 0x201B0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f%Q %A,%L,%L%F",                  0xFFFF7FC0, 0x261B7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f%Q 0,%L,%C%F",                   0xFFFF703F, 0x261B703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f%Q 0,%B,%L%F",                   0xF8FF0FFF, 0x201B0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpym%.f%Q 0,%L,%L%F",                   0xFFFF7FFF, 0x261B7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*MPYMU */
{ (unsigned char *) "mpymu%.f %A,%B,%C%F",                   0xF8FF0000, 0x201C0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f 0,%B,%C%F",                    0xF8FF003F, 0x201C003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f %A,%B,%u%F",                   0xF8FF0000, 0x205C0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x265C7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f 0,%B,%u%F",                    0xF8FF003F, 0x205C003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x265C703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f %#,%B,%K%F",                   0xF8FF0000, 0x209C0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x269C7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20DC0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20DC0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20DC0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26DC7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26DC7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26DC7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x261C7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x201C0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x261C7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x261C703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x201C0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpymu%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x261C7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*MPYUW */
{ (unsigned char *) "mpyuw%.f %A,%B,%C%F",                   0xF8FF0000, 0x201F0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f 0,%B,%C%F",                    0xF8FF003F, 0x201F003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f %A,%B,%u%F",                   0xF8FF0000, 0x205F0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x265F7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f 0,%B,%u%F",                    0xF8FF003F, 0x205F003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x265F703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f %#,%B,%K%F",                   0xF8FF0000, 0x209F0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x269F7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x20DF0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x20DF0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x20DF0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x26DF7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x26DF7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x26DF7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x261F7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x201F0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x261F7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x261F703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x201F0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyuw%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x261F7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*MPYUW_S */
{ (unsigned char *) "mpyuw_s %b,%b,%c",                      0xF81F, 0x780A, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*MPYW_S */
{ (unsigned char *) "mpyw_s %b,%b,%c",                       0xF81F, 0x7809, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*MPYW */
{ (unsigned char *) "mpyw%.f %A,%B,%C%F",                    0xF8FF0000, 0x201E0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f 0,%B,%C%F",                     0xF8FF003F, 0x201E003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f %A,%B,%u%F",                    0xF8FF0000, 0x205E0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f%Q %A,%L,%u%F",                  0xFFFF7000, 0x265E7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f 0,%B,%u%F",                     0xF8FF003F, 0x205E003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f%Q 0,%L,%u%F",                   0xFFFF703F, 0x265E703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f %#,%B,%K%F",                    0xF8FF0000, 0x209E0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f%Q 0,%L,%K%F",                   0xFFFF7000, 0x269E7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.q%.f %#,%B,%C%F",                 0xF8FF0020, 0x20DE0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.q%.f %#,%B,%u%F",                 0xF8FF0020, 0x20DE0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.q%.f%Q %#,%B,%L%F",               0xF8FF0FE0, 0x20DE0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.q%.f%Q 0,%L,%C%F",                0xFFFF7020, 0x26DE7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.q%.f%Q 0,%L,%L%F",                0xFFFF7FE0, 0x26DE7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.q%.f%Q 0,%L,%u%F",                0xFFFF7020, 0x26DE7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f%Q %A,%L,%C%F",                  0xFFFF7000, 0x261E7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f%Q %A,%B,%L%F",                  0xF8FF0FC0, 0x201E0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f%Q %A,%L,%L%F",                  0xFFFF7FC0, 0x261E7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f%Q 0,%L,%C%F",                   0xFFFF703F, 0x261E703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f%Q 0,%B,%L%F",                   0xF8FF0FFF, 0x201E0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyw%.f%Q 0,%L,%L%F",                   0xFFFF7FFF, 0x261E7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*NORMH */
{ (unsigned char *) "normh%.f %#,%C%F",                      0xF8FF003F, 0x282F0008, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "normh%.f 0,%C%F",                       0xFFFF703F, 0x2E2F7008, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "normh%.f %#,%u%F",                      0xF8FF003F, 0x286F0008, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "normh%.f 0,%u%F",                       0xFFFF703F, 0x2E6F7008, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "normh%.f%Q %#,%L%F",                    0xF8FF0FFF, 0x282F0F88, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "normh%.f%Q 0,%L%F",                     0xFFFF7FFF, 0x2E2F7F88, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*REM */
{ (unsigned char *) "rem%.f %A,%B,%C%F",                     0xF8FF0000, 0x28080000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f 0,%B,%C%F",                      0xF8FF003F, 0x2808003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f %A,%B,%u%F",                     0xF8FF0000, 0x28480000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f%Q %A,%L,%u%F",                   0xFFFF7000, 0x2E487000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f 0,%B,%u%F",                      0xF8FF003F, 0x2848003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f%Q 0,%L,%u%F",                    0xFFFF703F, 0x2E48703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f %#,%B,%K%F",                     0xF8FF0000, 0x28880000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f%Q 0,%L,%K%F",                    0xFFFF7000, 0x2E887000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.q%.f %#,%B,%C%F",                  0xF8FF0020, 0x28C80000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.q%.f %#,%B,%u%F",                  0xF8FF0020, 0x28C80020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.q%.f%Q %#,%B,%L%F",                0xF8FF0FE0, 0x28C80F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.q%.f%Q 0,%L,%C%F",                 0xFFFF7020, 0x2EC87000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.q%.f%Q 0,%L,%L%F",                 0xFFFF7FE0, 0x2EC87F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.q%.f%Q 0,%L,%u%F",                 0xFFFF7020, 0x2EC87020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f%Q %A,%L,%C%F",                   0xFFFF7000, 0x2E087000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f%Q %A,%B,%L%F",                   0xF8FF0FC0, 0x28080F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f%Q %A,%L,%L%F",                   0xFFFF7FC0, 0x2E087F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f%Q 0,%L,%C%F",                    0xFFFF703F, 0x2E08703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f%Q 0,%B,%L%F",                    0xF8FF0FFF, 0x28080FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "rem%.f%Q 0,%L,%L%F",                    0xFFFF7FFF, 0x2E087FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*REMU */
{ (unsigned char *) "remu%.f %A,%B,%C%F",                    0xF8FF0000, 0x28090000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f 0,%B,%C%F",                     0xF8FF003F, 0x2809003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f %A,%B,%u%F",                    0xF8FF0000, 0x28490000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f%Q %A,%L,%u%F",                  0xFFFF7000, 0x2E497000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f 0,%B,%u%F",                     0xF8FF003F, 0x2849003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f%Q 0,%L,%u%F",                   0xFFFF703F, 0x2E49703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f %#,%B,%K%F",                    0xF8FF0000, 0x28890000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f%Q 0,%L,%K%F",                   0xFFFF7000, 0x2E897000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.q%.f %#,%B,%C%F",                 0xF8FF0020, 0x28C90000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.q%.f %#,%B,%u%F",                 0xF8FF0020, 0x28C90020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.q%.f%Q %#,%B,%L%F",               0xF8FF0FE0, 0x28C90F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.q%.f%Q 0,%L,%C%F",                0xFFFF7020, 0x2EC97000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.q%.f%Q 0,%L,%L%F",                0xFFFF7FE0, 0x2EC97F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.q%.f%Q 0,%L,%u%F",                0xFFFF7020, 0x2EC97020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f%Q %A,%L,%C%F",                  0xFFFF7000, 0x2E097000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f%Q %A,%B,%L%F",                  0xF8FF0FC0, 0x28090F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f%Q %A,%L,%L%F",                  0xFFFF7FC0, 0x2E097F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f%Q 0,%L,%C%F",                   0xFFFF703F, 0x2E09703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f%Q 0,%B,%L%F",                   0xF8FF0FFF, 0x28090FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "remu%.f%Q 0,%L,%L%F",                   0xFFFF7FFF, 0x2E097FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LDH_S */
{ (unsigned char *) "ldh_s %a,[%b,%c]",                      0xF818, 0x6010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldh_s %c,[%b,%k]",                      0xF800, 0x9000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldh_s %c,[%b]",                         0xF800, 0x9000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldh_s %4,[%5,%[L]",                     0xFE00, 0xCC00, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldh_s %4,[%5,%O]",                      0xFE00, 0xCC00, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldh_s %4,[%5]",                         0xFE00, 0xCC00, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldh_s.x %c,[%b,%k]",                    0xF800, 0x9800, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldh_s.x %c,[%b]",                       0xF800, 0x9800, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LR */
/* lr    b,[c]          	0010 0bbb 0010 1010 RBBB CCCC CCRR RRRR  */
{ (unsigned char *) "lr %#,[%C]",                            0xF8FF803F, 0x202A0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* lr    b,[u6]         	0010 0bbb 0110 1010 RBBB uuuu uu00 0000  */
{ (unsigned char *) "lr %#,[%u]",                            0xF8FF803F, 0x206A0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* lr    b,[s12]        	0010 0bbb 1010 1010 RBBB ssss ssSS SSSS  */
{ (unsigned char *) "lr %#,[%GC]",                           0xF8FF8000, 0x20AA0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lr %#,[%K]",                            0xF8FF8000, 0x20AA0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* lr    b,[limm]       	0010 0bbb 0010 1010 RBBB 1111 10RR RRRR  */
{ (unsigned char *) "lr%Q %#,[%L]",                          0xF8FF8FFF, 0x202A0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SR */
{ (unsigned char *) "sr %B,[%C]",                            0xF8FF803F, 0x202B0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sr %B,[%u]",                            0xF8FF803F, 0x206B0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sr %B,[%K]",                            0xF8FF8000, 0x20AB0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sr %B,[%GC]",                           0xF8FF8000, 0x20AB0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sr%Q %B,[%L]",                          0xF8FF8FFF, 0x202B0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sr%Q %L,[%C]",                          0xFFFFF03F, 0x262B7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sr%Q %L,[%u]",                          0xFFFFF03F, 0x266B7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sr%Q %L,[%K]",                          0xFFFFF000, 0x26AB7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sr%Q %L,[%GC]",                         0xFFFFF000, 0x26AB7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*AEX */
{ (unsigned char *) "aex %B,[%C]",                           0xF8FF803F, 0x20270000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "aex %B,[%u]",                           0xF8FF803F, 0x20670000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "aex %B,[%GC]",                          0xF8FF8000, 0x20A70000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "aex %B,[%K]",                           0xF8FF8000, 0x20A70000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "aex%Q %B,[%L]",                         0xF8FF8FFF, 0x20270F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "aex%.q %B,[%C]",                        0xF8FF8020, 0x20E70000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "aex%.q %B,[%GC]",                       0xF8FF8020, 0x20E70020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "aex%.q %B,[%u]",                        0xF8FF8020, 0x20E70020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "aex%.q%Q %B,[%L]",                      0xF8FF8FE0, 0x20E70F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*CLRI */
/* clri    c            	0010 0111 0010 1111 0000 CCCC CC11 1111  */
{ (unsigned char *) "clri %C",                             0xFFFFF03F, 0x272F003F, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* clri    u6           	0010 0111 0110 1111 0000 uuuu uu11 1111  */
{ (unsigned char *) "clri %u",                                0xFFFFF03F, 0x276F003F, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "clri",                                   0xFFFFFFFF, 0x276F003F, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LP */
{ (unsigned char *) "lp %Y",                                 0xFFFFF000, 0x20A80000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lp %y",                                 0xFFFFF03F, 0x20680000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lp%.q %y",                              0xFFFFF020, 0x20E80020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "lp%q %y",                               0xFFFFF020, 0x20E80020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SETI */
{ (unsigned char *) "seti %C",                                0xFFFFF03F, 0x262F003F, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "seti %u",                                0xFFFFF03F, 0x266F003F, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "seti",                                   0xFFFFFFFF, 0x266F003F, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*ADD_S */
/* add_s    a,b,c       	0110 0bbb ccc1 1aaa  */
{ (unsigned char *) "add_s %a,%b,%c",                        0xF818, 0x6018, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    b,b,h       	0111 0bbb hhh0 00HH  */
{ (unsigned char *) "add_s %b,%b,%�",                        0xF81C, 0x7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    h,h,s3      	0111 0sss hhh0 01HH  */
{ (unsigned char *) "add_s %�,%�,%�",                        0xF81C, 0x7004, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    b,sp,u7     	1100 0bbb 100u uuuu  */
{ (unsigned char *) "add_s %b,%6,%l",                        0xF8E0, 0xC080, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    b,b,u7      	1110 0bbb 0uuu uuuu  */
{ (unsigned char *) "add_s %b,%b,%j",                        0xF880, 0xE000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    c,b,u3      	0110 1bbb ccc0 0uuu  */
{ (unsigned char *) "add_s %c,%b,%e",                        0xF818, 0x6800, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    SP,SP,u7    	1100 0000 101u uuuu  */
{ (unsigned char *) "add_s %6,%6,%l",                        0xFFE0, 0xC0A0, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    R0,GP,s11   	1100 111s ssss ssss  */
{ (unsigned char *) "add_s %4,%5,%R",                        0xFE00, 0xCE00, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    R0,b,Au6    	0100 1bbb 0UUU 1uuu  */
{ (unsigned char *) "add_s %4,%b,%�",                        0xF888, 0x4808, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    R1,b,Au6    	0100 1bbb 1UUU 1uuu  */
{ (unsigned char *) "add_s %�,%b,%�",                        0xF888, 0x4888, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    0,limm,s3   	0111 0sss 1100 0111  */
{ (unsigned char *) "add_s%Q 0,%L,%�",                       0xF8FF, 0x70C7, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* add_s    b,b,limm    	0111 0bbb 1100 0011  */
{ (unsigned char *) "add_s%Q %b,%b,%L",                      0xF8FF, 0x70C3, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*CMP_S */
/* cmp_s    b,h         	0111 0bbb hhh1 00HH  */
{ (unsigned char *) "cmp_s %b,%�",                           0xF81C, 0x7010, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* cmp_s    h,s3        	0111 0sss hhh1 01HH  */
{ (unsigned char *) "cmp_s %�,%�",                           0xF81C, 0x7014, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* cmp_s    b,u7        	1110 0bbb 1uuu uuuu  */
{ (unsigned char *) "cmp_s %b,%j",                           0xF880, 0xE080, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* cmp_s    b,limm      	0111 0bbb 1101 0011  */
{ (unsigned char *) "cmp_s%Q %b,%L",                         0xF8FF, 0x70D3, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* cmp_s    limm,s3     	0111 0sss 1101 0111  */
{ (unsigned char *) "cmp_s%Q %L,%�",                         0xF8FF, 0x70D7, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*ENTER_S */
/* enter_s    Eu6       	1100 00UU 111u uuu0  */
{ (unsigned char *) "enter_s {%�}",                          0xFCE1, 0xC0E0, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*EI_S */
/* ei_s    u10          	0101 11uu uuuu uuuu  */
{ (unsigned char *) "ei_s %�",                               0xFC00, 0x5C00, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*JLI_S */
/* jli_s    u10         	0101 10uu uuuu uuuu  */
{ (unsigned char *) "jli_s %�",                              0xFC00, 0x5800, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LDI_S */
/* ldi_s    b,[Lu7]     	0101 0bbb UUUU 1uuu  */
{ (unsigned char *) "ldi_s %b,[%�]",                         0xF808, 0x5008, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LEAVE_S */
/* leave_s    u7        	1100 0UUU 110u uuu0  */
{ (unsigned char *) "leave_s {%�}",                          0xF8E1, 0xC0C0, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*MOV_S */
/* mov_s    h,s3        	0111 0sss hhh0 11HH  */
{ (unsigned char *) "mov_s %�,%�",                           0xF81C, 0x700C, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* mov_s    0,s3        	0111 0sss 1100 1111  */
{ (unsigned char *) "mov_s 0,%�",                            0xF8FF, 0x70CF, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* mov_s    b,u8        	1101 1bbb uuuu uuuu  */
{ (unsigned char *) "mov_s %b,%J",                           0xF800, 0xD800, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* mov_s    g,h         	0100 0ggg hhhG G0HH  */
{ (unsigned char *) "mov_s %�,%�",                           0xF804, 0x4000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* mov_s    g,limm      	0100 0ggg 110G G011  */
{ (unsigned char *) "mov_s%Q %�,%L",                         0xF8E7, 0x40C3, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* mov_s    0,h         	0100 0110 hhh1 10HH  */
{ (unsigned char *) "mov_s 0,%�",                            0xFF1C, 0x4618, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* mov_s    0,limm      	0100 0110 1101 1011  */
{ (unsigned char *) "mov_s%Q 0,%L",                          0xFFFF, 0x46DB, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* mov_s.ne    b,h      	0111 0bbb hhh1 11HH  */
{ (unsigned char *) "mov_s.ne %b,%�",                        0xF81C, 0x701C, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* mov_s.nz    b,h      	0111 0bbb hhh1 11HH  */
{ (unsigned char *) "mov_s.nz %b,%�",                        0xF81C, 0x701C, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* mov_s.ne    b, 0  This is a sub_s.ne b,b,b */
/*{ (unsigned char *) "mov_s.ne %b,0",                     0xF8FF, 0x78C0, ARC_MACH_ARCV2, 0, 0, 0, 0},*/
/* mov_s.ne    b,limm   	0111 0bbb 1101 1111  */
{ (unsigned char *) "mov_s.ne%Q %b,%L",                      0xF8FF, 0x70DF, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LDI */
{ (unsigned char *) "ldi %#,[%C]",                           0xF8FF803F, 0x20260000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldi 0,[%C]",                            0xFFFFF03F, 0x26267000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldi %#,[%u]",                           0xF8FF803F, 0x20660000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldi 0,[%u]",                            0xFFFFF03F, 0x26667000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldi %#,[%K]",                           0xF8FF8000, 0x20A60000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldi 0,[%K]",                            0xFFFFF000, 0x26A67000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldi%.q %#,[%u]",                        0xF8FF8020, 0x20E60020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldi%.q 0,[%u]",                         0xFFFFF020, 0x26E67020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldi%Q %#,[%L]",                         0xF8FF8FFF, 0x20260F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ldi%Q 0,[%L]",                          0xFFFFFFFF, 0x26267F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*ST_S */
/* st_s    R0,[GP,Ss11] 	0101 0SSS SSS1 0sss  */
{ (unsigned char *) "st_s %4,[%5,%[L]",                         0xF818, 0x5010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st_s %4,[%5,%�]",                       0xF818, 0x5010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st_s %4,[%5]",                             0xF818, 0x5010, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*ST */
{ (unsigned char *) "st%z%.w%.D %�,[%g]%0",                  0xF8FF8001, 0x18000001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st%z%.w%.D %�,[%g,%o]%0",               0xF8000001, 0x18000001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st%z%.w%.D %C,[%g]%0",                  0xF8FF8001, 0x18000000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st%z%.w%.D %C,[%g,%[L]%0",               0xF8000001, 0x18000000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st%z%.w%.D %C,[%g,%o]%0",               0xF8000001, 0x18000000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st%z%.D%Q %C,[%L]%0",                   0xFFFFF019, 0x1E007000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st%z%.w%.D%Q %�,[%L]%0",             0xFF007001, 0x1E007001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st%z%.w%.D%Q %�,[%L,%o]%0",             0xFF007001, 0x1E007001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st%z%.w%.D%Q %L,[%g]%0",                0xF8000FC1, 0x18000F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st%z%.w%.D%Q %L,[%g,%o]%0",             0xF8000FC1, 0x18000F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "st%z%.w%.D%Q %L,[%L,%o]%0",             0xFF007FC1, 0x1E007F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*LD_S */
/* ld_s    R0,[h,Lu5]   	0100 0U00 hhhu u1HH  */
{ (unsigned char *) "ld_s %4,[%�,%�]",                       0xFB04, 0x4004, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* ld_s    R1,[h,Lu5]   	0100 0U01 hhhu u1HH  */
{ (unsigned char *) "ld_s %�,[%�,%�]",                       0xFB04, 0x4104, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* ld_s    R2,[h,Lu5]   	0100 0U10 hhhu u1HH  */
{ (unsigned char *) "ld_s %�,[%�,%�]",                       0xFB04, 0x4204, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* ld_s    R3,[h,Lu5]   	0100 0U11 hhhu u1HH  */
{ (unsigned char *) "ld_s %�,[%�,%�]",                       0xFB04, 0x4304, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* ld_s<.aa>    a,[b,c] 	0100 1bbb ccc0 0aaa  */
{ (unsigned char *) "ld_s.as %a,[%b,%c]",                    0xF818, 0x4800, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* ld_s    R1,[GP,Ss11] 	0101 0SSS SSS0 0sss  */
{ (unsigned char *) "ld_s %�,[%5,%[L]",                         0xF818, 0x5000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ld_s %�,[%5,%�]",                       0xF818, 0x5000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "ld_s %�,[%5]",                             0xF818, 0x5000, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*J missing J [BLINK]*/
/* j    c               	0010 0RRR 0010 0000 RRRR CCCC CCRR RRRR  */
{ (unsigned char *) "j [%C]",                                0xFFFFF03F, 0x20200000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j    u6              	0010 0RRR 0110 0000 RRRR uuuu uuRR RRRR  */
{ (unsigned char *) "j %u",                                  0xFFFFF03F, 0x20600000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j    s12             	0010 0RRR 1010 0000 RRRR ssss ssSS SSSS  */
{ (unsigned char *) "j %K",                                  0xFFFFF000, 0x20A00000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j    limm            	0010 0RRR 0010 0000 RRRR 1111 10RR RRRR  */
{ (unsigned char *) "j%Q %L",                                0xFFFFFFFF, 0x20200F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j<.cc>    c          	0010 0RRR 1110 0000 RRRR CCCC CC0Q QQQQ  */
{ (unsigned char *) "j%q [%C]",                              0xFFFFF020, 0x20E00000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j<.cc>    u6         	0010 0RRR 1110 0000 RRRR uuuu uu1Q QQQQ  */
{ (unsigned char *) "j%q %u",                                0xFFFFF020, 0x20E00020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j<.cc>    limm       	0010 0RRR 1110 0000 RRRR 1111 100Q QQQQ  */
{ (unsigned char *) "j%q%Q %L",                              0xFFFFFFE0, 0x20E00F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j.D    c             	0010 0RRR 0010 0001 RRRR CCCC CCRR RRRR  */
{ (unsigned char *) "j.d [%C]",                              0xFFFFF03F, 0x20210000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j.D    u6            	0010 0RRR 0110 0001 RRRR uuuu uuRR RRRR  */
{ (unsigned char *) "j.d %u",                                0xFFFFF03F, 0x20610000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j.D    s12           	0010 0RRR 1010 0001 RRRR ssss ssSS SSSS  */
{ (unsigned char *) "j.d %K",                                0xFFFFF000, 0x20A10000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j<.cc>.D    c        	0010 0RRR 1110 0001 RRRR CCCC CC0Q QQQQ  */
{ (unsigned char *) "j%q.d [%C]",                            0xFFFFF020, 0x20E10000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* j<.cc>.D    u6       	0010 0RRR 1110 0001 RRRR uuuu uu1Q QQQQ  */
{ (unsigned char *) "j%q.d %u",                              0xFFFFF020, 0x20E10020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*JL */
/* jl    c              	0010 0RRR 0010 0010 RRRR CCCC CCRR RRRR  */
{ (unsigned char *) "jl [%C]",                               0xFFFFF03F, 0x20220000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl    u6             	0010 0RRR 0110 0010 RRRR uuuu uuRR RRRR  */
{ (unsigned char *) "jl %u",                                 0xFFFFF03F, 0x20620000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl    s12            	0010 0RRR 1010 0010 RRRR ssss ssSS SSSS  */
{ (unsigned char *) "jl %K",                                 0xFFFFF000, 0x20A20000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl    limm           	0010 0RRR 0010 0010 RRRR 1111 10RR RRRR  */
{ (unsigned char *) "jl%Q %L",                               0xFFFFFFFF, 0x20220F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl<.cc>    c         	0010 0RRR 1110 0010 RRRR CCCC CC0Q QQQQ  */
{ (unsigned char *) "jl%q [%C]",                             0xFFFFF020, 0x20E20000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl<.cc>    u6        	0010 0RRR 1110 0010 RRRR uuuu uu1Q QQQQ  */
{ (unsigned char *) "jl%q %u",                               0xFFFFF020, 0x20E20020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl<.cc>    limm      	0010 0RRR 1110 0010 RRRR 1111 100Q QQQQ  */
{ (unsigned char *) "jl%q%Q %L",                             0xFFFFFFE0, 0x20E20F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl.D    c            	0010 0RRR 0010 0011 RRRR CCCC CCRR RRRR  */
{ (unsigned char *) "jl.d [%C]",                             0xFFFFF03F, 0x20230000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl.D    u6           	0010 0RRR 0110 0011 RRRR uuuu uuRR RRRR  */
{ (unsigned char *) "jl.d %u",                               0xFFFFF03F, 0x20630000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl.D    s12          	0010 0RRR 1010 0011 RRRR ssss ssSS SSSS  */
{ (unsigned char *) "jl.d %K",                               0xFFFFF000, 0x20A30000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl<.cc>.D    c       	0010 0RRR 1110 0011 RRRR CCCC CC0Q QQQQ  */
{ (unsigned char *) "jl%q.d [%C]",                           0xFFFFF020, 0x20E30000, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* jl<.cc>.D    u6      	0010 0RRR 1110 0011 RRRR uuuu uu1Q QQQQ  */
{ (unsigned char *) "jl%q.d %u",                             0xFFFFF020, 0x20E30020, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BBIT0 */
{ (unsigned char *) "bbit0%.n%.� %B,%C,%d%�",                0xF8010017, 0x8010006, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit0%.n%.� %B,%u,%d%�",                0xF8010017, 0x8010016, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit0%.�%.n %B,%C,%d%�",                0xF8010017, 0x8010006, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit0%.�%.n %B,%u,%d%�",                0xF8010017, 0x8010016, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit0%.�%Q %B,%L,%d%�",                 0xF8010FF7, 0x8010F86, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit0%.�%Q %L,%C,%d%�",                 0xFF017037, 0xE017006, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit0%.�%Q %L,%u,%d%�",                 0xFF017037, 0xE017016, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit0%.�%Q %L,%L,%d%�",                 0xFF017FF7, 0xE017F86, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BBIT1 */
{ (unsigned char *) "bbit1%.n%.� %B,%C,%d%�",                0xF8010017, 0x8010007, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit1%.n%.� %B,%u,%d%�",                0xF8010017, 0x8010017, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit1%.�%.n %B,%C,%d%�",                0xF8010017, 0x8010007, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit1%.�%.n %B,%u,%d%�",                0xF8010017, 0x8010017, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit1%.�%Q %B,%L,%d%�",                 0xF8010FF7, 0x8010F87, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit1%.�%Q %L,%C,%d%�",                 0xFF017037, 0xE017007, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit1%.�%Q %L,%u,%d%�",                 0xFF017037, 0xE017017, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "bbit1%.�%Q %L,%L,%d%�",                 0xFF017FF7, 0xE017F87, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BREQ */
{ (unsigned char *) "breq%.n%.� %B,%C,%d%�",                 0xF8010017, 0x8010000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "breq%.n%.� %B,%u,%d%�",                 0xF8010017, 0x8010010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "breq%.�%.n %B,%C,%d%�",                 0xF8010017, 0x8010000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "breq%.�%.n %B,%u,%d%�",                 0xF8010017, 0x8010010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "breq%.�%Q %B,%L,%d%�",                  0xF8010FF7, 0x8010F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "breq%.�%Q %L,%C,%d%�",                  0xFF017037, 0xE017000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "breq%.�%Q %L,%u,%d%�",                  0xFF017037, 0xE017010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "breq%.�%Q %L,%L,%d%�",                  0xFF017FF7, 0xE017F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRNE */
{ (unsigned char *) "brne%.n%.� %B,%C,%d%�",                 0xF8010017, 0x8010001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brne%.n%.� %B,%u,%d%�",                 0xF8010017, 0x8010011, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brne%.�%.n %B,%C,%d%�",                 0xF8010017, 0x8010001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brne%.�%.n %B,%u,%d%�",                 0xF8010017, 0x8010011, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brne%.�%Q %B,%L,%d%�",                  0xF8010FF7, 0x8010F81, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brne%.�%Q %L,%C,%d%�",                  0xFF017037, 0xE017001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brne%.�%Q %L,%u,%d%�",                  0xFF017037, 0xE017011, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brne%.�%Q %L,%L,%d%�",                  0xFF017FF7, 0xE017F81, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRLT */
{ (unsigned char *) "brlt%.n%.� %B,%C,%d%�",                 0xF8010017, 0x8010002, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlt%.n%.� %B,%u,%d%�",                 0xF8010017, 0x8010012, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlt%.�%.n %B,%C,%d%�",                 0xF8010017, 0x8010002, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlt%.�%.n %B,%u,%d%�",                 0xF8010017, 0x8010012, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlt%.�%Q %B,%L,%d%�",                  0xF8010FF7, 0x8010F82, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlt%.�%Q %L,%C,%d%�",                  0xFF017037, 0xE017002, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlt%.�%Q %L,%u,%d%�",                  0xFF017037, 0xE017012, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlt%.�%Q %L,%L,%d%�",                  0xFF017FF7, 0xE017F82, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRGE */
{ (unsigned char *) "brge%.n%.� %B,%C,%d%�",                 0xF8010017, 0x8010003, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brge%.n%.� %B,%u,%d%�",                 0xF8010017, 0x8010013, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brge%.�%.n %B,%C,%d%�",                 0xF8010017, 0x8010003, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brge%.�%.n %B,%u,%d%�",                 0xF8010017, 0x8010013, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brge%.�%Q %B,%L,%d%�",                  0xF8010FF7, 0x8010F83, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brge%.�%Q %L,%C,%d%�",                  0xFF017037, 0xE017003, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brge%.�%Q %L,%u,%d%�",                  0xFF017037, 0xE017013, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brge%.�%Q %L,%L,%d%�",                  0xFF017FF7, 0xE017F83, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRLO */
{ (unsigned char *) "brlo%.n%.� %B,%C,%d%�",                 0xF8010017, 0x8010004, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlo%.n%.� %B,%u,%d%�",                 0xF8010017, 0x8010014, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlo%.�%.n %B,%C,%d%�",                 0xF8010017, 0x8010004, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlo%.�%.n %B,%u,%d%�",                 0xF8010017, 0x8010014, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlo%.�%Q %B,%L,%d%�",                  0xF8010FF7, 0x8010F84, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlo%.�%Q %L,%C,%d%�",                  0xFF017037, 0xE017004, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlo%.�%Q %L,%u,%d%�",                  0xFF017037, 0xE017014, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brlo%.�%Q %L,%L,%d%�",                  0xFF017FF7, 0xE017F84, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRHS */
{ (unsigned char *) "brhs%.n%.� %B,%C,%d%�",                 0xF8010017, 0x8010005, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brhs%.n%.� %B,%u,%d%�",                 0xF8010017, 0x8010015, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brhs%.�%.n %B,%C,%d%�",                 0xF8010017, 0x8010005, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brhs%.�%.n %B,%u,%d%�",                 0xF8010017, 0x8010015, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brhs%.�%Q %B,%L,%d%�",                  0xF8010FF7, 0x8010F85, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brhs%.�%Q %L,%C,%d%�",                  0xFF017037, 0xE017005, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brhs%.�%Q %L,%u,%d%�",                  0xFF017037, 0xE017015, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brhs%.�%Q %L,%L,%d%�",                  0xFF017FF7, 0xE017F85, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*Pseudo mnemonics for BRcc instruction */
/*BRGT b,c,s9 */
{ (unsigned char *) "brgt%.n%.� %C,%B,%d%�",                 0xF8010017, 0x8010002, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brgt%.�%.n %C,%B,%d%�",                 0xF8010017, 0x8010002, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRGT b,u6,s9*/
{ (unsigned char *) "brgt%.n%.� %B,%u,%d%�",                 0xF8010017, 0x8010013, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},
{ (unsigned char *) "brgt%.�%.n %B,%u,%d%�",                 0xF8010017, 0x8010013, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},
/*BRGT b,limm,s9*/
{ (unsigned char *) "brgt%.�%Q %C,%L,%d%�",                  0xFF017037, 0xE017002, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRGT limm,c,s9*/
{ (unsigned char *) "brgt%.�%Q %L,%B,%d%�",                  0xF8010FF7, 0x8010F82, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRGT limm,u6,s9*/
{ (unsigned char *) "brgt%.�%Q %L,%u,%d%�",                  0xFF017037, 0xE017013, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},

/*BRHI b,c,s9*/
{ (unsigned char *) "brhi%.n%.� %C,%B,%d%�",                 0xF8010017, 0x8010004, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brhi%.�%.n %C,%B,%d%�",                 0xF8010017, 0x8010004, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRHI b,u6,s9*/
{ (unsigned char *) "brhi%.n%.� %B,%u,%d%�",                 0xF8010017, 0x8010015, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},
{ (unsigned char *) "brhi%.�%.n %B,%u,%d%�",                 0xF8010017, 0x8010015, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},
/*BRHI b,limm,s9*/
{ (unsigned char *) "brhi%.�%Q %C,%L,%d%�",                  0xFF017037, 0xE017004, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRHI limm,c,s9*/
{ (unsigned char *) "brhi%.�%Q %L,%B,%d%�",                  0xF8010FF7, 0x8010F84, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRHI limm,u6,s9*/
{ (unsigned char *) "brhi%.�%Q %L,%u,%d%�",                  0xFF017037, 0xE017015, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},


/*BRLE b,c,s9*/
{ (unsigned char *) "brle%.n%.� %C,%B,%d%�",                 0xF8010017, 0x8010003, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brle%.�%.n %C,%B,%d%�",                 0xF8010017, 0x8010003, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRLE b,u6,s9*/
{ (unsigned char *) "brle%.n%.� %B,%u,%d%�",                 0xF8010017, 0x8010012, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},
{ (unsigned char *) "brle%.�%.n %B,%u,%d%�",                 0xF8010017, 0x8010012, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},
/*BRLE b,limm,s9*/
{ (unsigned char *) "brle%.�%Q %C,%L,%d%�",                  0xFF017037, 0xE017003, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRLE limm,c,s9*/
{ (unsigned char *) "brle%.�%Q %L,%B,%d%�",                  0xF8010FF7, 0x8010F83, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRLE limm,u6,s9*/
{ (unsigned char *) "brle%.�%Q %L,%u,%d%�",                  0xFF017037, 0xE017012, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},


/*BRLS b,c,s9*/
{ (unsigned char *) "brls%.n%.� %C,%B,%d%�",                 0xF8010017, 0x8010005, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "brls%.�%.n %C,%B,%d%�",                 0xF8010017, 0x8010005, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRLS b,u6,s9*/
{ (unsigned char *) "brls%.n%.� %B,%u,%d%�",                 0xF8010017, 0x8010014, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},
{ (unsigned char *) "brls%.�%.n %B,%u,%d%�",                 0xF8010017, 0x8010014, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},
/*BRLS b,limm,s9*/
{ (unsigned char *) "brls%.�%Q %C,%L,%d%�",                  0xFF017037, 0xE017005, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRLS limm,c,s9*/
{ (unsigned char *) "brls%.�%Q %L,%B,%d%�",                  0xF8010FF7, 0x8010F85, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*BRLS limm,u6,s9*/
{ (unsigned char *) "brls%.�%Q %L,%u,%d%�",                  0xFF017037, 0xE017014, ARC_MACH_ARCV2 | ARC_INCR_U6, 0, 0, 0, 0},

/*/*End*/

/*MPY */
{ (unsigned char *) "mpy%.f %A,%B,%C%F",                     0xF8FF0000, 0x201A0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f %A,%B,%u%F",                     0xF8FF0000, 0x205A0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f %#,%B,%K%F",                     0xF8FF0000, 0x209A0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f 0,%B,%C%F",                      0xF8FF003F, 0x201A003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f 0,%B,%u%F",                      0xF8FF003F, 0x205A003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f%Q %A,%L,%C%F",                   0xFFFF7000, 0x261A7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f%Q %A,%L,%u%F",                   0xFFFF7000, 0x265A7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f%Q %A,%B,%L%F",                   0xF8FF0FC0, 0x201A0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f%Q %A,%L,%L%F",                   0xFFFF7FC0, 0x261A7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f%Q 0,%L,%C%F",                    0xFFFF703F, 0x261A703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f%Q 0,%L,%u%F",                    0xFFFF703F, 0x265A703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f%Q 0,%L,%K%F",                    0xFFFF7000, 0x269A7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f%Q 0,%B,%L%F",                    0xF8FF0FFF, 0x201A0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.f%Q 0,%L,%L%F",                    0xFFFF7FFF, 0x261A7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.q%.f %#,%B,%C%F",                  0xF8FF0020, 0x20DA0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.q%.f %#,%B,%u%F",                  0xF8FF0020, 0x20DA0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.q%.f%Q %#,%B,%L%F",                0xF8FF0FE0, 0x20DA0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.q%.f%Q 0,%L,%C%F",                 0xFFFF7020, 0x26DA7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.q%.f%Q 0,%L,%u%F",                 0xFFFF7020, 0x26DA7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpy%.q%.f%Q 0,%L,%L%F",                 0xFFFF7FE0, 0x26DA7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*MPYU */
{ (unsigned char *) "mpyu%.f %A,%B,%C%F",                    0xF8FF0000, 0x201D0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f %A,%B,%u%F",                    0xF8FF0000, 0x205D0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f %#,%B,%K%F",                    0xF8FF0000, 0x209D0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f 0,%B,%C%F",                     0xF8FF003F, 0x201D003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f 0,%B,%u%F",                     0xF8FF003F, 0x205D003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f%Q %A,%L,%C%F",                  0xFFFF7000, 0x261D7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f%Q %A,%L,%u%F",                  0xFFFF7000, 0x265D7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f%Q %A,%B,%L%F",                  0xF8FF0FC0, 0x201D0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f%Q %A,%L,%L%F",                  0xFFFF7FC0, 0x261D7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f%Q 0,%L,%C%F",                   0xFFFF703F, 0x261D703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f%Q 0,%L,%u%F",                   0xFFFF703F, 0x265D703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f%Q 0,%L,%K%F",                   0xFFFF7000, 0x269D7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f%Q 0,%B,%L%F",                   0xF8FF0FFF, 0x201D0FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.f%Q 0,%L,%L%F",                   0xFFFF7FFF, 0x261D7FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.q%.f %#,%B,%C%F",                 0xF8FF0020, 0x20DD0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.q%.f %#,%B,%u%F",                 0xF8FF0020, 0x20DD0020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.q%.f%Q %#,%B,%L%F",               0xF8FF0FE0, 0x20DD0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.q%.f%Q 0,%L,%C%F",                0xFFFF7020, 0x26DD7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.q%.f%Q 0,%L,%u%F",                0xFFFF7020, 0x26DD7020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "mpyu%.q%.f%Q 0,%L,%L%F",                0xFFFF7FE0, 0x26DD7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*NORM */
{ (unsigned char *) "norm%.f %#,%C%F",                       0xF8FF003F, 0x282F0001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "norm%.f %#,%u%F",                       0xF8FF003F, 0x286F0001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "norm%.f 0,%C%F",                        0xFFFF703F, 0x2E2F7001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "norm%.f 0,%u%F",                        0xFFFF703F, 0x2E6F7001, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "norm%.f%Q %#,%L%F",                     0xF8FF0FFF, 0x282F0F81, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "norm%.f%Q 0,%L%F",                      0xFFFF7FFF, 0x2E2F7F81, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SWAP */
{ (unsigned char *) "swap%.f %#,%C%F",                       0xF8FF003F, 0x282F0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "swap%.f %#,%u%F",                       0xF8FF003F, 0x286F0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "swap%.f%Q %#,%L%F",                     0xF8FF0FFF, 0x282F0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "swap%.f 0,%C%F",                        0xFFFF703F, 0x2E2F7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "swap%.f 0,%u%F",                        0xFFFF703F, 0x2E6F7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "swap%.f%Q 0,%L%F",                      0xFFFF7FFF, 0x2E2F7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SWAPE */
{ (unsigned char *) "swape%.f %#,%C%F",                      0xF8FF003F, 0x282F0009, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "swape%.f %#,%u%F",                      0xF8FF003F, 0x286F0009, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "swape%.f%Q %#,%L%F",                    0xF8FF0FFF, 0x282F0F89, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "swape%.f 0,%C%F",                       0xFFFF703F, 0x2E2F7009, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "swape%.f 0,%u%F",                       0xFFFF703F, 0x2E6F7009, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "swape%.f%Q 0,%L%F",                     0xFFFF7FFF, 0x2E2F7F89, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*RTIE */
/* rtie                         0010 0100 0110 1111 0000 0000 0011 1111  */
{ (unsigned char *) "rtie",                                 0xFFFFFFFF, 0x246F003F, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SLEEP */
{ (unsigned char *) "sleep %C",                              0xFFFFF03F, 0x212F003F, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sleep %u",                              0xFFFFF03F, 0x216F003F, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sleep%Q %L",                            0xFFFFFFFF, 0x212F0FBF, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "sleep",                                 0xFFFFFFFF, 0x216F003F, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SCOND */
/* scond<.di>    b,[c]  	0010 0bbb 0010 1111 DBBB CCCC CC01 0001  */
{ (unsigned char *) "scond%.V %B,[%C]",                      0xF8FF003F, 0x202F0011, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* scond<.di>    b,[u6] 	0010 0bbb 0110 1111 DBBB uuuu uu01 0001  */
{ (unsigned char *) "scond%.V %B,[%u]",                      0xF8FF003F, 0x206F0011, ARC_MACH_ARCV2, 0, 0, 0, 0},
/* scond<.di>    b,[limm] 	0010 0bbb 0010 1111 DBBB 1111 1001 0001  */
{ (unsigned char *) "scond%.V%Q %B,[%L]",                    0xF8FF0FFF, 0x202F0F91, ARC_MACH_ARCV2, 0, 0, 0, 0},


/*BIC*/
{ (unsigned char *) "bic%.f%Q %A,%L,%L%F",                   0xFFFF7FC0, 0x26067F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*MAX/MIN*/
{ (unsigned char *) "max%.f%Q 0,%L,%L%F",                    0xFFFF7FFF, 0x26087FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "max%.q%.f%Q 0,%L,%L%F",                 0xFFFF7FE0, 0x26C87F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "min%.f%Q 0,%L,%L%F",                    0xFFFF7FFF, 0x26097FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "min%.q%.f%Q 0,%L,%L%F",                 0xFFFF7FE0, 0x26C97F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*SUB1/SUB3*/
{ (unsigned char *) "sub1%.f%Q %A,%L,%L%F",                  0xFFFF7FC0, 0x26177F80, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*LLOCK */
{ (unsigned char *) "llock%.V %B,[%C]",                        0xF8FF003F, 0x202F0010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "llock%.V%Q %B,[%L]",                      0xF8FF0FFF, 0x202F0F90, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "llock%.V 0,[%C]",                         0xFFFF703F, 0x262F7010, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "llock%.V%Q 0,[%L]",                       0xFFFF7FFF, 0x262F7F90, ARC_MACH_ARCV2, 0, 0, 0, 0},

/*XBFU */
{ (unsigned char *) "xbfu%.f %A,%B,%C%F",                    0xF8FF0000, 0x202D0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f %A,%B,%u%F",                    0xF8FF0000, 0x206D0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f %#,%B,%K%F",                    0xF8FF0000, 0x20AD0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f 0,%B,%C%F",                     0xF8FF003F, 0x202D003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f 0,%B,%u%F",                     0xF8FF003F, 0x206D003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f%Q %A,%L,%C%F",                  0xFFFF7000, 0x262D7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f%Q %A,%L,%u%F",                  0xFFFF7000, 0x266D7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f%Q %A,%B,%L%F",                  0xF8FF0FC0, 0x202D0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f%Q %A,%L,%L%F",                  0xFFFF7FC0, 0x262D7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f%Q 0,%L,%C%F",                   0xFFFF703F, 0x262D703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f%Q 0,%L,%u%F",                   0xFFFF703F, 0x266D703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f%Q 0,%L,%K%F",                   0xFFFF7000, 0x26AD7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f%Q 0,%B,%L%F",                   0xF8FF0FFF, 0x202D0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.f%Q 0,%L,%L%F",                   0xFFFF7FFF, 0x262D7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.q%.f %#,%B,%C%F",                 0xF8FF0020, 0x20ED0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.q%.f %#,%B,%u%F",                 0xF8FF0020, 0x20ED0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.q%.f%Q %#,%B,%L%F",               0xF8FF0FE0, 0x20ED0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.q%.f%Q 0,%L,%C%F",                0xFFFF7020, 0x26ED7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.q%.f%Q 0,%L,%u%F",                0xFFFF7020, 0x26ED7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "xbfu%.q%.f%Q 0,%L,%L%F",                0xFFFF7FE0, 0x26ED7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*LDD */
{ (unsigned char *) "ldd%.P%.V %=,[%g,%C]%1",                0xF83F0000, 0x20360000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.p%.v %=,[%g]%1",                   0xF8FF81C0, 0x10000180, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.p%.v %=,[%g,%o]%3",                0xF80001C0, 0x10000180, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.p%.v%Q %=,[%L,%o]%3",              0xFF0071C0, 0x16007180, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.P%.V%Q %=,[%g,%L]%3",              0xF83F0FC0, 0x20360F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.V%Q %=,[%L,%C]%3",                 0xFFFF7000, 0x26367000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.v%Q %=,[%L]%3",                    0xFFFFF7C0, 0x16007180, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.P%.V 0,[%g,%C]%3",                 0xF83F003F, 0x2036003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.p%.v 0,[%g]%3",                    0xF8FF81FF, 0x100001BE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.p%.v 0,[%g,%o]%3",                 0xF80001FF, 0x100001BE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.p%.v%Q 0,[%L,%o]%3",               0xFF0071FF, 0x160071BE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.P%.V%Q 0,[%g,%L]%3",               0xF83F0FFF, 0x20360FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.V%Q 0,[%L,%C]%3",                  0xFFFF703F, 0x2636703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "ldd%.v%Q 0,[%L]%3",                     0xFFFFF7FF, 0x160071BE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*STD */
{ (unsigned char *) "std%.w%.D %�,[%g]%0",                   0xF8FF8007, 0x18000007, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "std%.w%.D %�,[%g,%o]%0",                0xF8000007, 0x18000007, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "std%.w%.D %_,[%g]%0",                   0xF8FF8007, 0x18000006, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "std%.w%.D %_,[%g,%o]%0",                0xF8000007, 0x18000006, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "std%.D%Q %_,[%L]%0",                    0xFFFFF01F, 0x1E007006, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "std%.D%Q %�,[%L]%0",                    0xFFFFF01F, 0x1E007007, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "std%.w%.D%Q %�,[%L,%o]%0",              0xFF007007, 0x1E007007, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "std%.w%.D%Q %L,[%g,%o]%0",              0xF8000FC7, 0x18000F86, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "std%.w%.D%Q %L,[%L,%o]%0",              0xFF007FC7, 0x1E007F86, ARC_MACH_ARCV2HS, 0, 0, 0, 0},


/*DMACH */
{ (unsigned char *) "dmach%.f %A,%B,%C%F",                   0xF8FF0000, 0x28120000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f %A,%B,%u%F",                   0xF8FF0000, 0x28520000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f %#,%B,%K%F",                   0xF8FF0000, 0x28920000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f 0,%B,%C%F",                    0xF8FF003F, 0x2812003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f 0,%B,%u%F",                    0xF8FF003F, 0x2852003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x2E127000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x2E527000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x28120F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x2E127F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x2E12703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x2E52703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x2E927000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x28120FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x2E127FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x28D20000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x28D20020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x28D20F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x2ED27000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x2ED27020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmach%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x2ED27F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*DMACHU */
{ (unsigned char *) "dmachu%.f %A,%B,%C%F",                  0xF8FF0000, 0x28130000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f %A,%B,%u%F",                  0xF8FF0000, 0x28530000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f %#,%B,%K%F",                  0xF8FF0000, 0x28930000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f 0,%B,%C%F",                   0xF8FF003F, 0x2813003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f 0,%B,%u%F",                   0xF8FF003F, 0x2853003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f%Q %A,%L,%C%F",                0xFFFF7000, 0x2E137000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f%Q %A,%L,%u%F",                0xFFFF7000, 0x2E537000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f%Q %A,%B,%L%F",                0xF8FF0FC0, 0x28130F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f%Q %A,%L,%L%F",                0xFFFF7FC0, 0x2E137F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f%Q 0,%L,%C%F",                 0xFFFF703F, 0x2E13703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f%Q 0,%L,%u%F",                 0xFFFF703F, 0x2E53703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f%Q 0,%L,%K%F",                 0xFFFF7000, 0x2E937000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f%Q 0,%B,%L%F",                 0xF8FF0FFF, 0x28130FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.f%Q 0,%L,%L%F",                 0xFFFF7FFF, 0x2E137FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.q%.f %#,%B,%C%F",               0xF8FF0020, 0x28D30000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.q%.f %#,%B,%u%F",               0xF8FF0020, 0x28D30020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.q%.f%Q %#,%B,%L%F",             0xF8FF0FE0, 0x28D30F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.q%.f%Q 0,%L,%C%F",              0xFFFF7020, 0x2ED37000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.q%.f%Q 0,%L,%u%F",              0xFFFF7020, 0x2ED37020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmachu%.q%.f%Q 0,%L,%L%F",              0xFFFF7FE0, 0x2ED37F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*DMPYH */
{ (unsigned char *) "dmpyh%.f %A,%B,%C%F",                   0xF8FF0000, 0x28100000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f %A,%B,%u%F",                   0xF8FF0000, 0x28500000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f %#,%B,%K%F",                   0xF8FF0000, 0x28900000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f 0,%B,%C%F",                    0xF8FF003F, 0x2810003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f 0,%B,%u%F",                    0xF8FF003F, 0x2850003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f%Q %A,%L,%C%F",                 0xFFFF7000, 0x2E107000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f%Q %A,%L,%u%F",                 0xFFFF7000, 0x2E507000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f%Q %A,%L,%L%F",                 0xFFFF7FC0, 0x2E107F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f%Q %A,%B,%L%F",                 0xF8FF0FC0, 0x28100F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x2E10703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x2E50703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x2E907000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x28100FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x2E107FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x28D00000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x28D00020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x28D00F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x2ED07000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x2ED07020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyh%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x2ED07F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*DMPYHU */
{ (unsigned char *) "dmpyhu%.f %A,%B,%C%F",                  0xF8FF0000, 0x28110000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f %A,%B,%u%F",                  0xF8FF0000, 0x28510000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f %#,%B,%K%F",                  0xF8FF0000, 0x28910000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f 0,%B,%C%F",                   0xF8FF003F, 0x2811003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f 0,%B,%u%F",                   0xF8FF003F, 0x2851003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f%Q %A,%L,%C%F",                0xFFFF7000, 0x2E117000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f%Q %A,%L,%u%F",                0xFFFF7000, 0x2E517000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f%Q %A,%B,%L%F",                0xF8FF0FC0, 0x28110F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f%Q %A,%L,%L%F",                0xFFFF7FC0, 0x2E117F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f%Q 0,%L,%C%F",                 0xFFFF703F, 0x2E11703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f%Q 0,%L,%u%F",                 0xFFFF703F, 0x2E51703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f%Q 0,%L,%K%F",                 0xFFFF7000, 0x2E917000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f%Q 0,%B,%L%F",                 0xF8FF0FFF, 0x28110FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.f%Q 0,%L,%L%F",                 0xFFFF7FFF, 0x2E117FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.q%.f %#,%B,%C%F",               0xF8FF0020, 0x28D10000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.q%.f %#,%B,%u%F",               0xF8FF0020, 0x28D10020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.q%.f%Q %#,%B,%L%F",             0xF8FF0FE0, 0x28D10F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.q%.f%Q 0,%L,%C%F",              0xFFFF7020, 0x2ED17000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.q%.f%Q 0,%L,%u%F",              0xFFFF7020, 0x2ED17020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpyhu%.q%.f%Q 0,%L,%L%F",              0xFFFF7FE0, 0x2ED17F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*MAC */
{ (unsigned char *) "mac%.f %A,%B,%C%F",                     0xF8FF0000, 0x280E0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f %A,%B,%u%F",                     0xF8FF0000, 0x284E0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f %#,%B,%K%F",                     0xF8FF0000, 0x288E0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f 0,%B,%C%F",                      0xF8FF003F, 0x280E003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f 0,%B,%u%F",                      0xF8FF003F, 0x284E003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f%Q %A,%L,%C%F",                   0xFFFF7000, 0x2E0E7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f%Q %A,%L,%u%F",                   0xFFFF7000, 0x2E4E7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f%Q %A,%B,%L%F",                   0xF8FF0FC0, 0x280E0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f%Q %A,%L,%L%F",                   0xFFFF7FC0, 0x2E0E7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f%Q 0,%L,%C%F",                    0xFFFF703F, 0x2E0E703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f%Q 0,%L,%u%F",                    0xFFFF703F, 0x2E4E703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f%Q 0,%L,%K%F",                    0xFFFF7000, 0x2E8E7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f%Q 0,%B,%L%F",                    0xF8FF0FFF, 0x280E0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.f%Q 0,%L,%L%F",                    0xFFFF7FFF, 0x2E0E7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.q%.f %#,%B,%C%F",                  0xF8FF0020, 0x28CE0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.q%.f %#,%B,%u%F",                  0xF8FF0020, 0x28CE0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.q%.f%Q %#,%B,%L%F",                0xF8FF0FE0, 0x28CE0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.q%.f%Q 0,%L,%C%F",                 0xFFFF7020, 0x2ECE7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.q%.f%Q 0,%L,%u%F",                 0xFFFF7020, 0x2ECE7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mac%.q%.f%Q 0,%L,%L%F",                 0xFFFF7FE0, 0x2ECE7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*MACU */
{ (unsigned char *) "macu%.f %A,%B,%C%F",                    0xF8FF0000, 0x280F0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f %A,%B,%u%F",                    0xF8FF0000, 0x284F0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f %#,%B,%K%F",                    0xF8FF0000, 0x288F0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f 0,%B,%C%F",                     0xF8FF003F, 0x280F003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f 0,%B,%u%F",                     0xF8FF003F, 0x284F003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f%Q %A,%L,%C%F",                  0xFFFF7000, 0x2E0F7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f%Q %A,%L,%u%F",                  0xFFFF7000, 0x2E4F7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f%Q %A,%B,%L%F",                  0xF8FF0FC0, 0x280F0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f%Q %A,%L,%L%F",                  0xFFFF7FC0, 0x2E0F7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f%Q 0,%L,%C%F",                   0xFFFF703F, 0x2E0F703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f%Q 0,%L,%u%F",                   0xFFFF703F, 0x2E4F703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f%Q 0,%L,%K%F",                   0xFFFF7000, 0x2E8F7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f%Q 0,%B,%L%F",                   0xF8FF0FFF, 0x280F0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.f%Q 0,%L,%L%F",                   0xFFFF7FFF, 0x2E0F7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.q%.f %#,%B,%C%F",                 0xF8FF0020, 0x28CF0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.q%.f %#,%B,%u%F",                 0xF8FF0020, 0x28CF0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.q%.f%Q %#,%B,%L%F",               0xF8FF0FE0, 0x28CF0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.q%.f%Q 0,%L,%C%F",                0xFFFF7020, 0x2ECF7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.q%.f%Q 0,%L,%u%F",                0xFFFF7020, 0x2ECF7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macu%.q%.f%Q 0,%L,%L%F",                0xFFFF7FE0, 0x2ECF7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VADDSUB2H */
{ (unsigned char *) "vaddsub2h %A,%B,%C",                    0xF8FF8000, 0x28160000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h %A,%B,%u",                    0xF8FF8000, 0x28560000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h %#,%B,%K",                    0xF8FF8000, 0x28960000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h 0,%B,%C",                     0xF8FF803F, 0x2816003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h 0,%B,%u",                     0xF8FF803F, 0x2856003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%Q %A,%L,%C",                  0xFFFFF000, 0x2E167000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%Q %A,%L,%u",                  0xFFFFF000, 0x2E567000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%Q %A,%B,%L",                  0xF8FF8FC0, 0x28160F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%Q %A,%L,%L",                  0xFFFFFFC0, 0x2E167F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%Q 0,%L,%C",                   0xFFFFF03F, 0x2E16703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%Q 0,%L,%u",                   0xFFFFF03F, 0x2E56703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%Q 0,%L,%K",                   0xFFFFF000, 0x2E967000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%Q 0,%B,%L",                   0xF8FF8FFF, 0x28160FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%Q 0,%L,%L",                   0xFFFFFFFF, 0x2E167FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%.q %#,%B,%C",                 0xF8FF8020, 0x28D60000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%.q %#,%B,%u",                 0xF8FF8020, 0x28D60020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%.q%Q %#,%B,%L",               0xF8FF8FE0, 0x28D60F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%.q%Q 0,%L,%C",                0xFFFFF020, 0x2ED67000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%.q%Q 0,%L,%u",                0xFFFFF020, 0x2ED67020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub2h%.q%Q 0,%L,%L",                0xFFFFFFE0, 0x2ED67F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*VSUB2H */
{ (unsigned char *) "vsub2h %A,%B,%C",                       0xF8FF8000, 0x28150000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h %A,%B,%u",                       0xF8FF8000, 0x28550000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h %#,%B,%K",                       0xF8FF8000, 0x28950000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h 0,%B,%C",                        0xF8FF803F, 0x2815003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h 0,%B,%u",                        0xF8FF803F, 0x2855003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%Q %A,%L,%C",                     0xFFFFF000, 0x2E157000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%Q %A,%L,%u",                     0xFFFFF000, 0x2E557000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%Q %A,%B,%L",                     0xF8FF8FC0, 0x28150F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%Q %A,%L,%L",                     0xFFFFFFC0, 0x2E157F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%Q 0,%L,%C",                      0xFFFFF03F, 0x2E15703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%Q 0,%L,%u",                      0xFFFFF03F, 0x2E55703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%Q 0,%L,%K",                      0xFFFFF000, 0x2E957000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%Q 0,%B,%L",                      0xF8FF8FFF, 0x28150FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%Q 0,%L,%L",                      0xFFFFFFFF, 0x2E157FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%.q %#,%B,%C",                    0xF8FF8020, 0x28D50000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%.q %#,%B,%u",                    0xF8FF8020, 0x28D50020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%.q%Q %#,%B,%L",                  0xF8FF8FE0, 0x28D50F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%.q%Q 0,%L,%C",                   0xFFFFF020, 0x2ED57000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%.q%Q 0,%L,%u",                   0xFFFFF020, 0x2ED57020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2h%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x2ED57F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VSUBADD2H */
{ (unsigned char *) "vsubadd2h %A,%B,%C",                    0xF8FF8000, 0x28170000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h %A,%B,%u",                    0xF8FF8000, 0x28570000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h %#,%B,%K",                    0xF8FF8000, 0x28970000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h 0,%B,%C",                     0xF8FF803F, 0x2817003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h 0,%B,%u",                     0xF8FF803F, 0x2857003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%Q %A,%L,%C",                  0xFFFFF000, 0x2E177000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%Q %A,%L,%u",                  0xFFFFF000, 0x2E577000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%Q %A,%B,%L",                  0xF8FF8FC0, 0x28170F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%Q %A,%L,%L",                  0xFFFFFFC0, 0x2E177F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%Q 0,%L,%C",                   0xFFFFF03F, 0x2E17703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%Q 0,%L,%u",                   0xFFFFF03F, 0x2E57703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%Q 0,%L,%K",                   0xFFFFF000, 0x2E977000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%Q 0,%B,%L",                   0xF8FF8FFF, 0x28170FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%Q 0,%L,%L",                   0xFFFFFFFF, 0x2E177FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%.q %#,%B,%C",                 0xF8FF8020, 0x28D70000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%.q %#,%B,%u",                 0xF8FF8020, 0x28D70020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%.q%Q %#,%B,%L",               0xF8FF8FE0, 0x28D70F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%.q%Q 0,%L,%C",                0xFFFFF020, 0x2ED77000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%.q%Q 0,%L,%u",                0xFFFFF020, 0x2ED77020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd2h%.q%Q 0,%L,%L",                0xFFFFFFE0, 0x2ED77F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*DMACWH */
{ (unsigned char *) "dmacwh%.f %=,%;,%C%F",                  0xF8FF0000, 0x28360000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f %=,%;,%u%F",                  0xF8FF0000, 0x28760000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f %#,%;,%K%F",                  0xF8FF0000, 0x28B60000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f 0,%;,%C%F",                   0xF8FF003F, 0x2836003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f 0,%;,%u%F",                   0xF8FF003F, 0x2876003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f%Q %=,%L,%C%F",                0xFFFF7000, 0x2E367000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f%Q %=,%L,%u%F",                0xFFFF7000, 0x2E767000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f%Q %=,%;,%L%F",                0xF8FF0FC0, 0x28360F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f%Q %=,%L,%L%F",                0xFFFF7FC0, 0x2E367F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f%Q 0,%L,%C%F",                 0xFFFF703F, 0x2E36703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f%Q 0,%L,%u%F",                 0xFFFF703F, 0x2E76703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f%Q 0,%L,%K%F",                 0xFFFF7000, 0x2EB67000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f%Q 0,%;,%L%F",                 0xF8FF0FFF, 0x28360FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.f%Q 0,%L,%L%F",                 0xFFFF7FFF, 0x2E367FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.q%.f %#,%;,%C%F",               0xF8FF0020, 0x28F60000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.q%.f %#,%;,%u%F",               0xF8FF0020, 0x28F60020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.q%.f%Q %#,%;,%L%F",             0xF8FF0FE0, 0x28F60F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.q%.f%Q 0,%L,%C%F",              0xFFFF7020, 0x2EF67000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.q%.f%Q 0,%L,%u%F",              0xFFFF7020, 0x2EF67020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwh%.q%.f%Q 0,%L,%L%F",              0xFFFF7FE0, 0x2EF67F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*DMACWHU */
{ (unsigned char *) "dmacwhu%.f %=,%;,%C%F",                 0xF8FF0000, 0x28370000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f %=,%;,%u%F",                 0xF8FF0000, 0x28770000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f %#,%;,%K%F",                 0xF8FF0000, 0x28B70000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f 0,%;,%C%F",                  0xF8FF003F, 0x2837003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f 0,%;,%u%F",                  0xF8FF003F, 0x2877003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f%Q %=,%L,%C%F",               0xFFFF7000, 0x2E377000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f%Q %=,%L,%u%F",               0xFFFF7000, 0x2E777000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f%Q %=,%;,%L%F",               0xF8FF0FC0, 0x28370F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f%Q %=,%L,%L%F",               0xFFFF7FC0, 0x2E377F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f%Q 0,%L,%C%F",                0xFFFF703F, 0x2E37703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f%Q 0,%L,%u%F",                0xFFFF703F, 0x2E77703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f%Q 0,%L,%K%F",                0xFFFF7000, 0x2EB77000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f%Q 0,%;,%L%F",                0xF8FF0FFF, 0x28370FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.f%Q 0,%L,%L%F",                0xFFFF7FFF, 0x2E377FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.q%.f %#,%;,%C%F",              0xF8FF0020, 0x28F70000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.q%.f %#,%;,%u%F",              0xF8FF0020, 0x28F70020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.q%.f%Q %#,%;,%L%F",            0xF8FF0FE0, 0x28F70F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.q%.f%Q 0,%L,%C%F",             0xFFFF7020, 0x2EF77000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.q%.f%Q 0,%L,%u%F",             0xFFFF7020, 0x2EF77020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmacwhu%.q%.f%Q 0,%L,%L%F",             0xFFFF7FE0, 0x2EF77F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*DMPYWH */
{ (unsigned char *) "dmpywh%.f %=,%;,%C%F",                  0xF8FF0000, 0x28320000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f %=,%;,%u%F",                  0xF8FF0000, 0x28720000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f %#,%;,%K%F",                  0xF8FF0000, 0x28B20000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f 0,%;,%C%F",                   0xF8FF003F, 0x2832003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f 0,%;,%u%F",                   0xF8FF003F, 0x2872003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f%Q %=,%L,%C%F",                0xFFFF7000, 0x2E327000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f%Q %=,%L,%u%F",                0xFFFF7000, 0x2E727000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f%Q %=,%;,%L%F",                0xF8FF0FC0, 0x28320F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f%Q %=,%L,%L%F",                0xFFFF7FC0, 0x2E327F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f%Q 0,%L,%C%F",                 0xFFFF703F, 0x2E32703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f%Q 0,%L,%u%F",                 0xFFFF703F, 0x2E72703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f%Q 0,%L,%K%F",                 0xFFFF7000, 0x2EB27000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f%Q 0,%;,%L%F",                 0xF8FF0FFF, 0x28320FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.f%Q 0,%L,%L%F",                 0xFFFF7FFF, 0x2E327FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.q%.f %#,%;,%C%F",               0xF8FF0020, 0x28F20000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.q%.f %#,%;,%u%F",               0xF8FF0020, 0x28F20020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.q%.f%Q %#,%;,%L%F",             0xF8FF0FE0, 0x28F20F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.q%.f%Q 0,%L,%C%F",              0xFFFF7020, 0x2EF27000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.q%.f%Q 0,%L,%u%F",              0xFFFF7020, 0x2EF27020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywh%.q%.f%Q 0,%L,%L%F",              0xFFFF7FE0, 0x2EF27F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*DMPYWHU */
{ (unsigned char *) "dmpywhu%.f %=,%;,%C%F",                 0xF8FF0000, 0x28330000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f %=,%;,%u%F",                 0xF8FF0000, 0x28730000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f %#,%;,%K%F",                 0xF8FF0000, 0x28B30000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f 0,%;,%C%F",                  0xF8FF003F, 0x2833003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f 0,%;,%u%F",                  0xF8FF003F, 0x2873003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f%Q %=,%L,%C%F",               0xFFFF7000, 0x2E337000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f%Q %=,%L,%u%F",               0xFFFF7000, 0x2E737000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f%Q %=,%;,%L%F",               0xF8FF0FC0, 0x28330F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f%Q %=,%L,%L%F",               0xFFFF7FC0, 0x2E337F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f%Q 0,%L,%C%F",                0xFFFF703F, 0x2E33703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f%Q 0,%L,%u%F",                0xFFFF703F, 0x2E73703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f%Q 0,%L,%K%F",                0xFFFF7000, 0x2EB37000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f%Q 0,%;,%L%F",                0xF8FF0FFF, 0x28330FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.f%Q 0,%L,%L%F",                0xFFFF7FFF, 0x2E337FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.q%.f %#,%;,%C%F",              0xF8FF0020, 0x28F30000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.q%.f %#,%;,%u%F",              0xF8FF0020, 0x28F30020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.q%.f%Q %#,%;,%L%F",            0xF8FF0FE0, 0x28F30F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.q%.f%Q 0,%L,%C%F",             0xFFFF7020, 0x2EF37000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.q%.f%Q 0,%L,%u%F",             0xFFFF7020, 0x2EF37020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "dmpywhu%.q%.f%Q 0,%L,%L%F",             0xFFFF7FE0, 0x2EF37F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*MACD */
{ (unsigned char *) "macd%.f %=,%B,%C%F",                    0xF8FF0000, 0x281A0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f %=,%B,%u%F",                    0xF8FF0000, 0x285A0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f %#,%B,%K%F",                    0xF8FF0000, 0x289A0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f 0,%B,%C%F",                     0xF8FF003F, 0x281A003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f 0,%B,%u%F",                     0xF8FF003F, 0x285A003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f%Q %=,%L,%C%F",                  0xFFFF7000, 0x2E1A7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f%Q %=,%L,%u%F",                  0xFFFF7000, 0x2E5A7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f%Q %=,%B,%L%F",                  0xF8FF0FC0, 0x281A0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f%Q %=,%L,%L%F",                  0xFFFF7FC0, 0x2E1A7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f%Q 0,%L,%C%F",                   0xFFFF703F, 0x2E1A703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f%Q 0,%L,%u%F",                   0xFFFF703F, 0x2E5A703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f%Q 0,%L,%K%F",                   0xFFFF7000, 0x2E9A7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f%Q 0,%B,%L%F",                   0xF8FF0FFF, 0x281A0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.f%Q 0,%L,%L%F",                   0xFFFF7FFF, 0x2E1A7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.q%.f %#,%B,%C%F",                 0xF8FF0020, 0x28DA0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.q%.f %#,%B,%u%F",                 0xF8FF0020, 0x28DA0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.q%.f%Q %#,%B,%L%F",               0xF8FF0FE0, 0x28DA0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.q%.f%Q 0,%L,%C%F",                0xFFFF7020, 0x2EDA7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.q%.f%Q 0,%L,%u%F",                0xFFFF7020, 0x2EDA7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macd%.q%.f%Q 0,%L,%L%F",                0xFFFF7FE0, 0x2EDA7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*MACDU */
{ (unsigned char *) "macdu%.f %=,%B,%C%F",                   0xF8FF0000, 0x281B0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f %=,%B,%u%F",                   0xF8FF0000, 0x285B0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f %#,%B,%K%F",                   0xF8FF0000, 0x289B0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f 0,%B,%C%F",                    0xF8FF003F, 0x281B003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f 0,%B,%u%F",                    0xF8FF003F, 0x285B003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f%Q %=,%L,%C%F",                 0xFFFF7000, 0x2E1B7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f%Q %=,%L,%u%F",                 0xFFFF7000, 0x2E5B7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f%Q %=,%B,%L%F",                 0xF8FF0FC0, 0x281B0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f%Q %=,%L,%L%F",                 0xFFFF7FC0, 0x2E1B7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x2E1B703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x2E5B703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x2E9B7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x281B0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x2E1B7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x28DB0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x28DB0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x28DB0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x2EDB7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x2EDB7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "macdu%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x2EDB7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*MPYD */
{ (unsigned char *) "mpyd%.f %=,%B,%C%F",                    0xF8FF0000, 0x28180000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f %=,%B,%u%F",                    0xF8FF0000, 0x28580000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f %#,%B,%K%F",                    0xF8FF0000, 0x28980000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f 0,%B,%C%F",                     0xF8FF003F, 0x2818003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f 0,%B,%u%F",                     0xF8FF003F, 0x2858003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f%Q %=,%L,%C%F",                  0xFFFF7000, 0x2E187000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f%Q %=,%L,%u%F",                  0xFFFF7000, 0x2E587000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f%Q %=,%B,%L%F",                  0xF8FF0FC0, 0x28180F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f%Q %=,%L,%L%F",                  0xFFFF7FC0, 0x2E187F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f%Q 0,%L,%C%F",                   0xFFFF703F, 0x2E18703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f%Q 0,%L,%u%F",                   0xFFFF703F, 0x2E58703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f%Q 0,%L,%K%F",                   0xFFFF7000, 0x2E987000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f%Q 0,%B,%L%F",                   0xF8FF0FFF, 0x28180FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.f%Q 0,%L,%L%F",                   0xFFFF7FFF, 0x2E187FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.q%.f %#,%B,%C%F",                 0xF8FF0020, 0x28D80000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.q%.f %#,%B,%u%F",                 0xF8FF0020, 0x28D80020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.q%.f%Q %#,%B,%L%F",               0xF8FF0FE0, 0x28D80F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.q%.f%Q 0,%L,%C%F",                0xFFFF7020, 0x2ED87000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.q%.f%Q 0,%L,%u%F",                0xFFFF7020, 0x2ED87020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpyd%.q%.f%Q 0,%L,%L%F",                0xFFFF7FE0, 0x2ED87F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*MPYDU */
{ (unsigned char *) "mpydu%.f %=,%B,%C%F",                   0xF8FF0000, 0x28190000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f %=,%B,%u%F",                   0xF8FF0000, 0x28590000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f %#,%B,%K%F",                   0xF8FF0000, 0x28990000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f 0,%B,%C%F",                    0xF8FF003F, 0x2819003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f 0,%B,%u%F",                    0xF8FF003F, 0x2859003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f%Q %=,%L,%C%F",                 0xFFFF7000, 0x2E197000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f%Q %=,%L,%u%F",                 0xFFFF7000, 0x2E597000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f%Q %=,%B,%L%F",                 0xF8FF0FC0, 0x28190F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f%Q %=,%L,%L%F",                 0xFFFF7FC0, 0x2E197F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f%Q 0,%L,%C%F",                  0xFFFF703F, 0x2E19703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x2E59703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x2E997000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f%Q 0,%B,%L%F",                  0xF8FF0FFF, 0x28190FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x2E197FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.q%.f %#,%B,%C%F",                0xF8FF0020, 0x28D90000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.q%.f %#,%B,%u%F",                0xF8FF0020, 0x28D90020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.q%.f%Q %#,%B,%L%F",              0xF8FF0FE0, 0x28D90F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.q%.f%Q 0,%L,%C%F",               0xFFFF7020, 0x2ED97000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x2ED97020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "mpydu%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x2ED97F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*QMACH */
{ (unsigned char *) "qmach%.f %=,%;,%_%F",                   0xF8FF0000, 0x28340000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f %=,%;,%u%F",                   0xF8FF0000, 0x28740000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f %#,%;,%K%F",                   0xF8FF0000, 0x28B40000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f 0,%;,%_%F",                    0xF8FF003F, 0x2834003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f 0,%;,%u%F",                    0xF8FF003F, 0x2874003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f%Q %=,%L,%_%F",                 0xFFFF7000, 0x2E347000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f%Q %=,%L,%u%F",                 0xFFFF7000, 0x2E747000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f%Q %=,%;,%L%F",                 0xF8FF0FC0, 0x28340F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f%Q %=,%L,%L%F",                 0xFFFF7FC0, 0x2E347F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f%Q 0,%L,%_%F",                  0xFFFF703F, 0x2E34703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x2E74703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x2EB47000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f%Q 0,%;,%L%F",                  0xF8FF0FFF, 0x28340FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x2E347FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.q%.f %#,%;,%_%F",                0xF8FF0020, 0x28F40000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.q%.f %#,%;,%u%F",                0xF8FF0020, 0x28F40020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.q%.f%Q %#,%;,%L%F",              0xF8FF0FE0, 0x28F40F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.q%.f%Q 0,%L,%_%F",               0xFFFF7020, 0x2EF47000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x2EF47020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmach%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x2EF47F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*QMACHU */
{ (unsigned char *) "qmachu%.f %=,%;,%_%F",                  0xF8FF0000, 0x28350000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f %=,%;,%u%F",                  0xF8FF0000, 0x28750000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f %#,%;,%K%F",                  0xF8FF0000, 0x28B50000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f 0,%;,%_%F",                   0xF8FF003F, 0x2835003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f 0,%;,%u%F",                   0xF8FF003F, 0x2875003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f%Q %=,%L,%_%F",                0xFFFF7000, 0x2E357000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f%Q %=,%L,%u%F",                0xFFFF7000, 0x2E757000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f%Q %=,%;,%L%F",                0xF8FF0FC0, 0x28350F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f%Q %=,%L,%L%F",                0xFFFF7FC0, 0x2E357F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f%Q 0,%L,%_%F",                 0xFFFF703F, 0x2E35703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f%Q 0,%L,%u%F",                 0xFFFF703F, 0x2E75703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f%Q 0,%L,%K%F",                 0xFFFF7000, 0x2EB57000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f%Q 0,%;,%L%F",                 0xF8FF0FFF, 0x28350FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.f%Q 0,%L,%L%F",                 0xFFFF7FFF, 0x2E357FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.q%.f %#,%;,%_%F",               0xF8FF0020, 0x28F50000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.q%.f %#,%;,%u%F",               0xF8FF0020, 0x28F50020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.q%.f%Q %#,%;,%L%F",             0xF8FF0FE0, 0x28F50F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.q%.f%Q 0,%L,%_%F",              0xFFFF7020, 0x2EF57000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.q%.f%Q 0,%L,%u%F",              0xFFFF7020, 0x2EF57020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmachu%.q%.f%Q 0,%L,%L%F",              0xFFFF7FE0, 0x2EF57F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*QMPYH */
{ (unsigned char *) "qmpyh%.f %=,%;,%_%F",                   0xF8FF0000, 0x28300000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f %=,%;,%u%F",                   0xF8FF0000, 0x28700000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f %#,%;,%K%F",                   0xF8FF0000, 0x28B00000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f 0,%;,%_%F",                    0xF8FF003F, 0x2830003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f 0,%;,%u%F",                    0xF8FF003F, 0x2870003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f%Q %=,%L,%_%F",                 0xFFFF7000, 0x2E307000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f%Q %=,%L,%u%F",                 0xFFFF7000, 0x2E707000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f%Q %=,%;,%L%F",                 0xF8FF0FC0, 0x28300F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f%Q %=,%L,%L%F",                 0xFFFF7FC0, 0x2E307F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f%Q 0,%L,%_%F",                  0xFFFF703F, 0x2E30703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f%Q 0,%L,%u%F",                  0xFFFF703F, 0x2E70703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f%Q 0,%L,%K%F",                  0xFFFF7000, 0x2EB07000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f%Q 0,%;,%L%F",                  0xF8FF0FFF, 0x28300FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.f%Q 0,%L,%L%F",                  0xFFFF7FFF, 0x2E307FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.q%.f %#,%;,%_%F",                0xF8FF0020, 0x28F00000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.q%.f %#,%;,%u%F",                0xF8FF0020, 0x28F00020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.q%.f%Q %#,%;,%L%F",              0xF8FF0FE0, 0x28F00F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.q%.f%Q 0,%L,%_%F",               0xFFFF7020, 0x2EF07000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.q%.f%Q 0,%L,%u%F",               0xFFFF7020, 0x2EF07020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyh%.q%.f%Q 0,%L,%L%F",               0xFFFF7FE0, 0x2EF07F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*QMPYHU */
{ (unsigned char *) "qmpyhu%.f %=,%;,%_%F",                  0xF8FF0000, 0x28310000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f %=,%;,%u%F",                  0xF8FF0000, 0x28710000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f %#,%;,%K%F",                  0xF8FF0000, 0x28B10000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f 0,%;,%_%F",                   0xF8FF003F, 0x2831003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f 0,%;,%u%F",                   0xF8FF003F, 0x2871003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f%Q %=,%L,%_%F",                0xFFFF7000, 0x2E317000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f%Q %=,%L,%u%F",                0xFFFF7000, 0x2E717000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f%Q %=,%;,%L%F",                0xF8FF0FC0, 0x28310F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f%Q %=,%L,%L%F",                0xFFFF7FC0, 0x2E317F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f%Q 0,%L,%_%F",                 0xFFFF703F, 0x2E31703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f%Q 0,%L,%u%F",                 0xFFFF703F, 0x2E71703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f%Q 0,%L,%K%F",                 0xFFFF7000, 0x2EB17000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f%Q 0,%;,%L%F",                 0xF8FF0FFF, 0x28310FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.f%Q 0,%L,%L%F",                 0xFFFF7FFF, 0x2E317FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.q%.f %#,%;,%_%F",               0xF8FF0020, 0x28F10000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.q%.f %#,%;,%u%F",               0xF8FF0020, 0x28F10020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.q%.f%Q %#,%;,%L%F",             0xF8FF0FE0, 0x28F10F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.q%.f%Q 0,%L,%_%F",              0xFFFF7020, 0x2EF17000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.q%.f%Q 0,%L,%u%F",              0xFFFF7020, 0x2EF17020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "qmpyhu%.q%.f%Q 0,%L,%L%F",              0xFFFF7FE0, 0x2EF17F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VADD2 */
{ (unsigned char *) "vadd2 %=,%;,%_",                        0xF8FF8000, 0x283C0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2 %=,%;,%u",                        0xF8FF8000, 0x287C0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2 %#,%;,%K",                        0xF8FF8000, 0x28BC0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2 0,%;,%_",                         0xF8FF803F, 0x283C003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2 0,%;,%u",                         0xF8FF803F, 0x287C003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%Q %=,%L,%_",                      0xFFFFF000, 0x2E3C7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%Q %=,%L,%u",                      0xFFFFF000, 0x2E7C7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%Q %=,%;,%L",                      0xF8FF8FC0, 0x283C0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%Q %=,%L,%L",                      0xFFFFFFC0, 0x2E3C7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%Q 0,%L,%_",                       0xFFFFF03F, 0x2E3C703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%Q 0,%L,%u",                       0xFFFFF03F, 0x2E7C703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%Q 0,%L,%K",                       0xFFFFF000, 0x2EBC7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%Q 0,%;,%L",                       0xF8FF8FFF, 0x283C0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%Q 0,%L,%L",                       0xFFFFFFFF, 0x2E3C7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%.q %#,%;,%_",                     0xF8FF8020, 0x28FC0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%.q %#,%;,%u",                     0xF8FF8020, 0x28FC0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%.q%Q %#,%;,%L",                   0xF8FF8FE0, 0x28FC0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%.q%Q 0,%L,%_",                    0xFFFFF020, 0x2EFC7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%.q%Q 0,%L,%u",                    0xFFFFF020, 0x2EFC7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2%.q%Q 0,%L,%L",                    0xFFFFFFE0, 0x2EFC7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VADD4H */
{ (unsigned char *) "vadd4h %=,%;,%_",                       0xF8FF8000, 0x28380000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h %=,%;,%u",                       0xF8FF8000, 0x28780000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h %#,%;,%K",                       0xF8FF8000, 0x28B80000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h 0,%;,%_",                        0xF8FF803F, 0x2838003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h 0,%;,%u",                        0xF8FF803F, 0x2878003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%Q %=,%L,%_",                     0xFFFFF000, 0x2E387000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%Q %=,%L,%u",                     0xFFFFF000, 0x2E787000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%Q %=,%;,%L",                     0xF8FF8FC0, 0x28380F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%Q %=,%L,%L",                     0xFFFFFFC0, 0x2E387F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%Q 0,%L,%_",                      0xFFFFF03F, 0x2E38703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%Q 0,%L,%u",                      0xFFFFF03F, 0x2E78703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%Q 0,%L,%K",                      0xFFFFF000, 0x2EB87000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%Q 0,%;,%L",                      0xF8FF8FFF, 0x28380FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%Q 0,%L,%L",                      0xFFFFFFFF, 0x2E387FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%.q %#,%;,%_",                    0xF8FF8020, 0x28F80000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%.q %#,%;,%u",                    0xF8FF8020, 0x28F80020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%.q%Q %#,%;,%L",                  0xF8FF8FE0, 0x28F80F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%.q%Q 0,%L,%_",                   0xFFFFF020, 0x2EF87000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%.q%Q 0,%L,%u",                   0xFFFFF020, 0x2EF87020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd4h%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x2EF87F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VADDSUB */
{ (unsigned char *) "vaddsub %=,%;,%_",                      0xF8FF8000, 0x283E0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub %=,%;,%u",                      0xF8FF8000, 0x287E0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub %#,%;,%K",                      0xF8FF8000, 0x28BE0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub 0,%;,%_",                       0xF8FF803F, 0x283E003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub 0,%;,%u",                       0xF8FF803F, 0x287E003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%Q %=,%L,%_",                    0xFFFFF000, 0x2E3E7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%Q %=,%L,%u",                    0xFFFFF000, 0x2E7E7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%Q %=,%;,%L",                    0xF8FF8FC0, 0x283E0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%Q %=,%L,%L",                    0xFFFFFFC0, 0x2E3E7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%Q 0,%L,%_",                     0xFFFFF03F, 0x2E3E703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%Q 0,%L,%u",                     0xFFFFF03F, 0x2E7E703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%Q 0,%L,%K",                     0xFFFFF000, 0x2EBE7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%Q 0,%;,%L",                     0xF8FF8FFF, 0x283E0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%Q 0,%L,%L",                     0xFFFFFFFF, 0x2E3E7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%.q %#,%;,%_",                   0xF8FF8020, 0x28FE0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%.q %#,%;,%u",                   0xF8FF8020, 0x28FE0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%.q%Q %#,%;,%L",                 0xF8FF8FE0, 0x28FE0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%.q%Q 0,%L,%_",                  0xFFFFF020, 0x2EFE7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%.q%Q 0,%L,%u",                  0xFFFFF020, 0x2EFE7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub%.q%Q 0,%L,%L",                  0xFFFFFFE0, 0x2EFE7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VADDSUB4H */
{ (unsigned char *) "vaddsub4h %=,%;,%_",                    0xF8FF8000, 0x283A0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h %=,%;,%u",                    0xF8FF8000, 0x287A0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h %#,%;,%K",                    0xF8FF8000, 0x28BA0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h 0,%;,%_",                     0xF8FF803F, 0x283A003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h 0,%;,%u",                     0xF8FF803F, 0x287A003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%Q %=,%L,%_",                  0xFFFFF000, 0x2E3A7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%Q %=,%L,%u",                  0xFFFFF000, 0x2E7A7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%Q %=,%;,%L",                  0xF8FF8FC0, 0x283A0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%Q %=,%L,%L",                  0xFFFFFFC0, 0x2E3A7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%Q 0,%L,%_",                   0xFFFFF03F, 0x2E3A703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%Q 0,%L,%u",                   0xFFFFF03F, 0x2E7A703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%Q 0,%L,%K",                   0xFFFFF000, 0x2EBA7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%Q 0,%;,%L",                   0xF8FF8FFF, 0x283A0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%Q 0,%L,%L",                   0xFFFFFFFF, 0x2E3A7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%.q %#,%;,%_",                 0xF8FF8020, 0x28FA0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%.q %#,%;,%u",                 0xF8FF8020, 0x28FA0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%.q%Q %#,%;,%L",               0xF8FF8FE0, 0x28FA0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%.q%Q 0,%L,%_",                0xFFFFF020, 0x2EFA7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%.q%Q 0,%L,%u",                0xFFFFF020, 0x2EFA7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vaddsub4h%.q%Q 0,%L,%L",                0xFFFFFFE0, 0x2EFA7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VMPY2H */
{ (unsigned char *) "vmpy2h %=,%B,%C",                       0xF8FF8000, 0x281C0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h %=,%B,%u",                       0xF8FF8000, 0x285C0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h %#,%B,%K",                       0xF8FF8000, 0x289C0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h 0,%B,%C",                        0xF8FF803F, 0x281C003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h 0,%B,%u",                        0xF8FF803F, 0x285C003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%Q %=,%L,%C",                     0xFFFFF000, 0x2E1C7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%Q %=,%L,%u",                     0xFFFFF000, 0x2E5C7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%Q %=,%B,%L",                     0xF8FF8FC0, 0x281C0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%Q %=,%L,%L",                     0xFFFFFFC0, 0x2E1C7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%Q 0,%L,%C",                      0xFFFFF03F, 0x2E1C703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%Q 0,%L,%u",                      0xFFFFF03F, 0x2E5C703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%Q 0,%L,%K",                      0xFFFFF000, 0x2E9C7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%Q 0,%B,%L",                      0xF8FF8FFF, 0x281C0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%Q 0,%L,%L",                      0xFFFFFFFF, 0x2E1C7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%.q %#,%B,%C",                    0xF8FF8020, 0x28DC0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%.q %#,%B,%u",                    0xF8FF8020, 0x28DC0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%.q%Q %#,%B,%L",                  0xF8FF8FE0, 0x28DC0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%.q%Q 0,%L,%C",                   0xFFFFF020, 0x2EDC7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%.q%Q 0,%L,%u",                   0xFFFFF020, 0x2EDC7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2h%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x2EDC7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VMPY2HU */
{ (unsigned char *) "vmpy2hu %=,%B,%C",                      0xF8FF8000, 0x281D0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu %=,%B,%u",                      0xF8FF8000, 0x285D0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu %#,%B,%K",                      0xF8FF8000, 0x289D0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu 0,%B,%C",                       0xF8FF803F, 0x281D003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu 0,%B,%u",                       0xF8FF803F, 0x285D003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%Q %=,%L,%C",                    0xFFFFF000, 0x2E1D7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%Q %=,%L,%u",                    0xFFFFF000, 0x2E5D7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%Q %=,%B,%L",                    0xF8FF8FC0, 0x281D0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%Q %=,%L,%L",                    0xFFFFFFC0, 0x2E1D7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%Q 0,%L,%C",                     0xFFFFF03F, 0x2E1D703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%Q 0,%L,%u",                     0xFFFFF03F, 0x2E5D703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%Q 0,%L,%K",                     0xFFFFF000, 0x2E9D7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%Q 0,%B,%L",                     0xF8FF8FFF, 0x281D0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%Q 0,%L,%L",                     0xFFFFFFFF, 0x2E1D7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%.q %#,%B,%C",                   0xF8FF8020, 0x28DD0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%.q %#,%B,%u",                   0xF8FF8020, 0x28DD0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%.q%Q %#,%B,%L",                 0xF8FF8FE0, 0x28DD0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%.q%Q 0,%L,%C",                  0xFFFFF020, 0x2EDD7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%.q%Q 0,%L,%u",                  0xFFFFF020, 0x2EDD7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmpy2hu%.q%Q 0,%L,%L",                  0xFFFFFFE0, 0x2EDD7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VSUB2 */
{ (unsigned char *) "vsub2 %=,%;,%_",                        0xF8FF8000, 0x283D0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2 %=,%;,%u",                        0xF8FF8000, 0x287D0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2 %#,%;,%K",                        0xF8FF8000, 0x28BD0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2 0,%;,%_",                         0xF8FF803F, 0x283D003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2 0,%;,%u",                         0xF8FF803F, 0x287D003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%Q %=,%L,%_",                      0xFFFFF000, 0x2E3D7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%Q %=,%L,%u",                      0xFFFFF000, 0x2E7D7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%Q %=,%;,%L",                      0xF8FF8FC0, 0x283D0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%Q %=,%L,%L",                      0xFFFFFFC0, 0x2E3D7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%Q 0,%L,%_",                       0xFFFFF03F, 0x2E3D703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%Q 0,%L,%u",                       0xFFFFF03F, 0x2E7D703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%Q 0,%L,%K",                       0xFFFFF000, 0x2EBD7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%Q 0,%;,%L",                       0xF8FF8FFF, 0x283D0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%Q 0,%L,%L",                       0xFFFFFFFF, 0x2E3D7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%.q %#,%;,%_",                     0xF8FF8020, 0x28FD0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%.q %#,%;,%u",                     0xF8FF8020, 0x28FD0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%.q%Q %#,%;,%L",                   0xF8FF8FE0, 0x28FD0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%.q%Q 0,%L,%_",                    0xFFFFF020, 0x2EFD7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%.q%Q 0,%L,%u",                    0xFFFFF020, 0x2EFD7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub2%.q%Q 0,%L,%L",                    0xFFFFFFE0, 0x2EFD7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VSUB4H */
{ (unsigned char *) "vsub4h %=,%;,%_",                       0xF8FF8000, 0x28390000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h %=,%;,%u",                       0xF8FF8000, 0x28790000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h %#,%;,%K",                       0xF8FF8000, 0x28B90000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h 0,%;,%_",                        0xF8FF803F, 0x2839003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h 0,%;,%u",                        0xF8FF803F, 0x2879003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%Q %=,%L,%_",                     0xFFFFF000, 0x2E397000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%Q %=,%L,%u",                     0xFFFFF000, 0x2E797000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%Q %=,%;,%L",                     0xF8FF8FC0, 0x28390F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%Q %=,%L,%L",                     0xFFFFFFC0, 0x2E397F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%Q 0,%L,%_",                      0xFFFFF03F, 0x2E39703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%Q 0,%L,%u",                      0xFFFFF03F, 0x2E79703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%Q 0,%L,%K",                      0xFFFFF000, 0x2EB97000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%Q 0,%;,%L",                      0xF8FF8FFF, 0x28390FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%Q 0,%L,%L",                      0xFFFFFFFF, 0x2E397FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%.q %#,%;,%_",                    0xF8FF8020, 0x28F90000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%.q %#,%;,%u",                    0xF8FF8020, 0x28F90020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%.q%Q %#,%;,%L",                  0xF8FF8FE0, 0x28F90F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%.q%Q 0,%L,%_",                   0xFFFFF020, 0x2EF97000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%.q%Q 0,%L,%u",                   0xFFFFF020, 0x2EF97020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsub4h%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x2EF97F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VSUBADD */
{ (unsigned char *) "vsubadd %=,%;,%_",                      0xF8FF8000, 0x283F0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd %=,%;,%u",                      0xF8FF8000, 0x287F0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd %#,%;,%K",                      0xF8FF8000, 0x28BF0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd 0,%;,%_",                       0xF8FF803F, 0x283F003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd 0,%;,%u",                       0xF8FF803F, 0x287F003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%Q %=,%L,%_",                    0xFFFFF000, 0x2E3F7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%Q %=,%L,%u",                    0xFFFFF000, 0x2E7F7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%Q %=,%;,%L",                    0xF8FF8FC0, 0x283F0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%Q %=,%L,%L",                    0xFFFFFFC0, 0x2E3F7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%Q 0,%L,%_",                     0xFFFFF03F, 0x2E3F703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%Q 0,%L,%u",                     0xFFFFF03F, 0x2E7F703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%Q 0,%L,%K",                     0xFFFFF000, 0x2EBF7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%Q 0,%;,%L",                     0xF8FF8FFF, 0x283F0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%Q 0,%L,%L",                     0xFFFFFFFF, 0x2E3F7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%.q %#,%;,%_",                   0xF8FF8020, 0x28FF0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%.q %#,%;,%u",                   0xF8FF8020, 0x28FF0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%.q%Q %#,%;,%L",                 0xF8FF8FE0, 0x28FF0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%.q%Q 0,%L,%_",                  0xFFFFF020, 0x2EFF7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%.q%Q 0,%L,%u",                  0xFFFFF020, 0x2EFF7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd%.q%Q 0,%L,%L",                  0xFFFFFFE0, 0x2EFF7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VSUBADD4H */
{ (unsigned char *) "vsubadd4h %=,%;,%_",                    0xF8FF8000, 0x283B0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h %=,%;,%u",                    0xF8FF8000, 0x287B0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h %#,%;,%K",                    0xF8FF8000, 0x28BB0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h 0,%;,%_",                     0xF8FF803F, 0x283B003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h 0,%;,%u",                     0xF8FF803F, 0x287B003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%Q %=,%L,%_",                  0xFFFFF000, 0x2E3B7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%Q %=,%L,%u",                  0xFFFFF000, 0x2E7B7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%Q %=,%;,%L",                  0xF8FF8FC0, 0x283B0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%Q %=,%L,%L",                  0xFFFFFFC0, 0x2E3B7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%Q 0,%L,%_",                   0xFFFFF03F, 0x2E3B703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%Q 0,%L,%u",                   0xFFFFF03F, 0x2E7B703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%Q 0,%L,%K",                   0xFFFFF000, 0x2EBB7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%Q 0,%;,%L",                   0xF8FF8FFF, 0x283B0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%Q 0,%L,%L",                   0xFFFFFFFF, 0x2E3B7FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%.q %#,%;,%_",                 0xF8FF8020, 0x28FB0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%.q %#,%;,%u",                 0xF8FF8020, 0x28FB0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%.q%Q %#,%;,%L",               0xF8FF8FE0, 0x28FB0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%.q%Q 0,%L,%_",                0xFFFFF020, 0x2EFB7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%.q%Q 0,%L,%u",                0xFFFFF020, 0x2EFB7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vsubadd4h%.q%Q 0,%L,%L",                0xFFFFFFE0, 0x2EFB7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*VADD2H */
{ (unsigned char *) "vadd2h %A,%B,%C",                       0xF8FF8000, 0x28140000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h %A,%B,%u",                       0xF8FF8000, 0x28540000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h %#,%B,%K",                       0xF8FF8000, 0x28940000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h 0,%B,%C",                        0xF8FF803F, 0x2814003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h 0,%B,%u",                        0xF8FF803F, 0x2854003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%Q %A,%L,%C",                     0xFFFFF000, 0x2E147000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%Q %A,%L,%u",                     0xFFFFF000, 0x2E547000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%Q %A,%B,%L",                     0xF8FF8FC0, 0x28140F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%Q %A,%L,%L",                     0xFFFFFFC0, 0x2E147F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%Q 0,%L,%C",                      0xFFFFF03F, 0x2E14703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%Q 0,%L,%u",                      0xFFFFF03F, 0x2E54703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%Q 0,%L,%K",                      0xFFFFF000, 0x2E947000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%Q 0,%B,%L",                      0xF8FF8FFF, 0x28140FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%Q 0,%L,%L",                      0xFFFFFFFF, 0x2E147FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%.q %#,%B,%C",                    0xF8FF8020, 0x28D40000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%.q %#,%B,%u",                    0xF8FF8020, 0x28D40020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%.q%Q %#,%B,%L",                  0xF8FF8FE0, 0x28D40F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%.q%Q 0,%L,%C",                   0xFFFFF020, 0x2ED47000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%.q%Q 0,%L,%u",                   0xFFFFF020, 0x2ED47020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vadd2h%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x2ED47F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FCVT32 */
{ (unsigned char *) "fcvt32 %A,%B,%C",                       0xF8FF8000, 0x30080000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32 %A,%B,%u",                       0xF8FF8000, 0x30480000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32 %#,%B,%K",                       0xF8FF8000, 0x30880000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32 0,%B,%C",                        0xF8FF803F, 0x3008003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32 0,%B,%u",                        0xF8FF803F, 0x3048003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%Q %A,%L,%C",                     0xFFFFF000, 0x36087000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%Q %A,%L,%u",                     0xFFFFF000, 0x36487000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%Q %A,%B,%L",                     0xF8FF8FC0, 0x30080F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%Q %A,%L,%L",                     0xFFFFFFC0, 0x36087F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%Q 0,%L,%C",                      0xFFFFF03F, 0x3608703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%Q 0,%L,%u",                      0xFFFFF03F, 0x3648703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%Q 0,%L,%K",                      0xFFFFF000, 0x36887000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%Q 0,%B,%L",                      0xF8FF8FFF, 0x30080FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%Q 0,%L,%L",                      0xFFFFFFFF, 0x36087FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%.q %#,%B,%C",                    0xF8FF8020, 0x30C80000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%.q %#,%B,%u",                    0xF8FF8020, 0x30C80020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%.q%Q %#,%B,%L",                  0xF8FF8FE0, 0x30C80F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%.q%Q 0,%L,%C",                   0xFFFFF020, 0x36C87000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%.q%Q 0,%L,%u",                   0xFFFFF020, 0x36C87020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x36C87F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FSADD */
{ (unsigned char *) "fsadd %A,%B,%C",                        0xF8FF8000, 0x30010000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd %A,%B,%u",                        0xF8FF8000, 0x30410000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd %#,%B,%K",                        0xF8FF8000, 0x30810000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd 0,%B,%C",                         0xF8FF803F, 0x3001003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd 0,%B,%u",                         0xF8FF803F, 0x3041003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%Q %A,%L,%C",                      0xFFFFF000, 0x36017000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%Q %A,%L,%u",                      0xFFFFF000, 0x36417000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%Q %A,%B,%L",                      0xF8FF8FC0, 0x30010F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%Q %A,%L,%L",                      0xFFFFFFC0, 0x36017F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%Q 0,%L,%C",                       0xFFFFF03F, 0x3601703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%Q 0,%L,%u",                       0xFFFFF03F, 0x3641703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%Q 0,%L,%K",                       0xFFFFF000, 0x36817000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%Q 0,%B,%L",                       0xF8FF8FFF, 0x30010FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%Q 0,%L,%L",                       0xFFFFFFFF, 0x36017FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%.q %#,%B,%C",                     0xF8FF8020, 0x30C10000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%.q %#,%B,%u",                     0xF8FF8020, 0x30C10020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%.q%Q %#,%B,%L",                   0xF8FF8FE0, 0x30C10F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%.q%Q 0,%L,%C",                    0xFFFFF020, 0x36C17000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%.q%Q 0,%L,%u",                    0xFFFFF020, 0x36C17020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsadd%.q%Q 0,%L,%L",                    0xFFFFFFE0, 0x36C17F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FSCMP */
{ (unsigned char *) "fscmp %#,%C",                           0xF8FF803F, 0x30038000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp %#,%u",                           0xF8FF803F, 0x30438000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp %#,%K",                           0xF8FF8000, 0x30838000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%Q %L,%C",                         0xFFFFF03F, 0x3603F000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%Q %L,%u",                         0xFFFFF03F, 0x3643F000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%Q %L,%K",                         0xFFFFF000, 0x3683F000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%Q %#,%L",                         0xF8FF8FFF, 0x30038F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%Q %L,%L",                         0xFFFFFFFF, 0x3603FF80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%.q %#,%C",                        0xF8FF8020, 0x30C38000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%.q %#,%u",                        0xF8FF8020, 0x30C38020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%.q%Q %#,%L",                      0xF8FF8FE0, 0x30C38F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%.q%Q %L,%C",                      0xFFFFF020, 0x36C3F000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%.q%Q %L,%u",                      0xFFFFF020, 0x36C3F020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmp%.q%Q %L,%L",                      0xFFFFFFE0, 0x36C3FF80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FSCMPF */
{ (unsigned char *) "fscmpf %#,%C",                          0xF8FF803F, 0x30048000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf %#,%u",                          0xF8FF803F, 0x30448000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf %#,%K",                          0xF8FF8000, 0x30848000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%Q %L,%C",                        0xFFFFF03F, 0x3604F000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%Q %L,%u",                        0xFFFFF03F, 0x3644F000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%Q %L,%K",                        0xFFFFF000, 0x3684F000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%Q %#,%L",                        0xF8FF8FFF, 0x30048F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%Q %L,%L",                        0xFFFFFFFF, 0x3604FF80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%.q %#,%C",                       0xF8FF8020, 0x30C48000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%.q %#,%u",                       0xF8FF8020, 0x30C48020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%.q%Q %#,%L",                     0xF8FF8FE0, 0x30C48F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%.q%Q %L,%C",                     0xFFFFF020, 0x36C4F000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%.q%Q %L,%u",                     0xFFFFF020, 0x36C4F020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fscmpf%.q%Q %L,%L",                     0xFFFFFFE0, 0x36C4FF80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FSDIV */
{ (unsigned char *) "fsdiv %A,%B,%C",                        0xF8FF8000, 0x30070000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv %A,%B,%u",                        0xF8FF8000, 0x30470000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv %#,%B,%K",                        0xF8FF8000, 0x30870000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv 0,%B,%C",                         0xF8FF803F, 0x3007003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv 0,%B,%u",                         0xF8FF803F, 0x3047003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%Q %A,%L,%C",                      0xFFFFF000, 0x36077000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%Q %A,%L,%u",                      0xFFFFF000, 0x36477000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%Q %A,%B,%L",                      0xF8FF8FC0, 0x30070F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%Q %A,%L,%L",                      0xFFFFFFC0, 0x36077F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%Q 0,%L,%C",                       0xFFFFF03F, 0x3607703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%Q 0,%L,%u",                       0xFFFFF03F, 0x3647703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%Q 0,%L,%K",                       0xFFFFF000, 0x36877000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%Q 0,%B,%L",                       0xF8FF8FFF, 0x30070FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%Q 0,%L,%L",                       0xFFFFFFFF, 0x36077FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%.q %#,%B,%C",                     0xF8FF8020, 0x30C70000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%.q %#,%B,%u",                     0xF8FF8020, 0x30C70020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%.q%Q %#,%B,%L",                   0xF8FF8FE0, 0x30C70F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%.q%Q 0,%L,%C",                    0xFFFFF020, 0x36C77000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%.q%Q 0,%L,%u",                    0xFFFFF020, 0x36C77020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsdiv%.q%Q 0,%L,%L",                    0xFFFFFFE0, 0x36C77F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FSMADD */
{ (unsigned char *) "fsmadd %A,%B,%C",                       0xF8FF8000, 0x30050000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd %A,%B,%u",                       0xF8FF8000, 0x30450000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd %#,%B,%K",                       0xF8FF8000, 0x30850000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd 0,%B,%C",                        0xF8FF803F, 0x3005003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd 0,%B,%u",                        0xF8FF803F, 0x3045003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%Q %A,%L,%C",                     0xFFFFF000, 0x36057000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%Q %A,%B,%L",                     0xF8FF8FC0, 0x30050F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%Q %A,%L,%L",                     0xFFFFFFC0, 0x36057F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%Q 0,%L,%C",                      0xFFFFF03F, 0x3605703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%Q 0,%B,%L",                      0xF8FF8FFF, 0x30050FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%Q 0,%L,%L",                      0xFFFFFFFF, 0x36057FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%Q %A,%L,%u",                     0xFFFFF000, 0x36457000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%Q 0,%L,%u",                      0xFFFFF03F, 0x3645703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%Q 0,%L,%K",                      0xFFFFF000, 0x36857000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%.q %#,%B,%C",                    0xF8FF8020, 0x30C50000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%.q %#,%B,%u",                    0xF8FF8020, 0x30C50020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%.q%Q %#,%B,%L",                  0xF8FF8FE0, 0x30C50F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%.q%Q 0,%L,%C",                   0xFFFFF020, 0x36C57000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%.q%Q 0,%L,%u",                   0xFFFFF020, 0x36C57020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmadd%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x36C57F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FSMSUB */
{ (unsigned char *) "fsmsub %A,%B,%C",                       0xF8FF8000, 0x30060000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub %A,%B,%u",                       0xF8FF8000, 0x30460000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub %#,%B,%K",                       0xF8FF8000, 0x30860000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub 0,%B,%C",                        0xF8FF803F, 0x3006003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub 0,%B,%u",                        0xF8FF803F, 0x3046003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%Q %A,%L,%C",                     0xFFFFF000, 0x36067000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%Q %A,%B,%L",                     0xF8FF8FC0, 0x30060F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%Q %A,%L,%L",                     0xFFFFFFC0, 0x36067F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%Q 0,%L,%C",                      0xFFFFF03F, 0x3606703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%Q 0,%B,%L",                      0xF8FF8FFF, 0x30060FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%Q 0,%L,%L",                      0xFFFFFFFF, 0x36067FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%Q %A,%L,%u",                     0xFFFFF000, 0x36467000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%Q 0,%L,%u",                      0xFFFFF03F, 0x3646703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%Q 0,%L,%K",                      0xFFFFF000, 0x36867000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%.q %#,%B,%C",                    0xF8FF8020, 0x30C60000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%.q %#,%B,%u",                    0xF8FF8020, 0x30C60020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%.q%Q %#,%B,%L",                  0xF8FF8FE0, 0x30C60F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%.q%Q 0,%L,%C",                   0xFFFFF020, 0x36C67000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%.q%Q 0,%L,%u",                   0xFFFFF020, 0x36C67020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmsub%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x36C67F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FSMUL */
{ (unsigned char *) "fsmul %A,%B,%C",                        0xF8FF8000, 0x30000000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul %A,%B,%u",                        0xF8FF8000, 0x30400000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul %#,%B,%K",                        0xF8FF8000, 0x30800000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul 0,%B,%C",                         0xF8FF803F, 0x3000003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul 0,%B,%u",                         0xF8FF803F, 0x3040003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%Q %A,%L,%C",                      0xFFFFF000, 0x36007000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%Q %A,%L,%u",                      0xFFFFF000, 0x36407000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%Q %A,%B,%L",                      0xF8FF8FC0, 0x30000F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%Q %A,%L,%L",                      0xFFFFFFC0, 0x36007F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%Q 0,%L,%C",                       0xFFFFF03F, 0x3600703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%Q 0,%L,%u",                       0xFFFFF03F, 0x3640703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%Q 0,%L,%K",                       0xFFFFF000, 0x36807000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%Q 0,%B,%L",                       0xF8FF8FFF, 0x30000FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%Q 0,%L,%L",                       0xFFFFFFFF, 0x36007FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%.q %#,%B,%C",                     0xF8FF8020, 0x30C00000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%.q %#,%B,%u",                     0xF8FF8020, 0x30C00020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%.q%Q %#,%B,%L",                   0xF8FF8FE0, 0x30C00F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%.q%Q 0,%L,%C",                    0xFFFFF020, 0x36C07000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%.q%Q 0,%L,%u",                    0xFFFFF020, 0x36C07020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fsmul%.q%Q 0,%L,%L",                    0xFFFFFFE0, 0x36C07F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FSSQRT */
{ (unsigned char *) "fssqrt %#,%C",                          0xF8FF803F, 0x302F0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssqrt %#,%u",                          0xF8FF803F, 0x306F0000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssqrt 0,%C",                           0xFFFFF03F, 0x362F7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssqrt 0,%u",                           0xFFFFF03F, 0x366F7000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssqrt%Q %#,%L",                        0xF8FF8FFF, 0x302F0F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssqrt%Q 0,%L",                         0xFFFFFFFF, 0x362F7F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FSSUB */
{ (unsigned char *) "fssub %A,%B,%C",                        0xF8FF8000, 0x30020000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub %A,%B,%u",                        0xF8FF8000, 0x30420000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub %#,%B,%K",                        0xF8FF8000, 0x30820000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub 0,%B,%C",                         0xF8FF803F, 0x3002003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub 0,%B,%u",                         0xF8FF803F, 0x3042003E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%Q %A,%L,%C",                      0xFFFFF000, 0x36027000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%Q %A,%L,%u",                      0xFFFFF000, 0x36427000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%Q %A,%B,%L",                      0xF8FF8FC0, 0x30020F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%Q %A,%L,%L",                      0xFFFFFFC0, 0x36027F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%Q 0,%L,%C",                       0xFFFFF03F, 0x3602703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%Q 0,%L,%u",                       0xFFFFF03F, 0x3642703E, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%Q 0,%L,%K",                       0xFFFFF000, 0x36827000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%Q 0,%B,%L",                       0xF8FF8FFF, 0x30020FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%Q 0,%L,%L",                       0xFFFFFFFF, 0x36027FBE, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%.q %#,%B,%C",                     0xF8FF8020, 0x30C20000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%.q %#,%B,%u",                     0xF8FF8020, 0x30C20020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%.q%Q %#,%B,%L",                   0xF8FF8FE0, 0x30C20F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%.q%Q 0,%L,%C",                    0xFFFFF020, 0x36C27000, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%.q%Q 0,%L,%u",                    0xFFFFF020, 0x36C27020, ARC_MACH_ARCV2, 0, 0, 0, 0},
{ (unsigned char *) "fssub%.q%Q 0,%L,%L",                    0xFFFFFFE0, 0x36C27F80, ARC_MACH_ARCV2, 0, 0, 0, 0},
/*FCVT32_64 */
{ (unsigned char *) "fcvt32_64 %=,%B,%C",                    0xF8FF8000, 0x30090000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64 %=,%B,%u",                    0xF8FF8000, 0x30490000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64 %#,%;,%K",                    0xF8FF8000, 0x30890000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64 0,%B,%C",                     0xF8FF803F, 0x3009003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64 0,%B,%u",                     0xF8FF803F, 0x3049003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%Q %=,%L,%C",                  0xFFFFF000, 0x36097000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%Q %=,%L,%u",                  0xFFFFF000, 0x36497000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%Q %=,%B,%L",                  0xF8FF8FC0, 0x30090F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%Q %=,%L,%L",                  0xFFFFFFC0, 0x36097F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%Q 0,%L,%C",                   0xFFFFF03F, 0x3609703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%Q 0,%L,%u",                   0xFFFFF03F, 0x3649703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%Q 0,%L,%K",                   0xFFFFF000, 0x36897000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%Q 0,%B,%L",                   0xF8FF8FFF, 0x30090FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%Q 0,%L,%L",                   0xFFFFFFFF, 0x36097FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%.q %#,%;,%C",                 0xF8FF8020, 0x30C90000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%.q %#,%;,%u",                 0xF8FF8020, 0x30C90020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%.q%Q %#,%;,%L",               0xF8FF8FE0, 0x30C90F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%.q%Q 0,%L,%C",                0xFFFFF020, 0x36C97000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%.q%Q 0,%L,%u",                0xFFFFF020, 0x36C97020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt32_64%.q%Q 0,%L,%L",                0xFFFFFFE0, 0x36C97F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FCVT64 */
{ (unsigned char *) "fcvt64 %=,%;,%C",                       0xF8FF8000, 0x30380000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64 %=,%;,%u",                       0xF8FF8000, 0x30780000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64 %#,%;,%K",                       0xF8FF8000, 0x30B80000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64 0,%;,%C",                        0xF8FF803F, 0x3038003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64 0,%;,%u",                        0xF8FF803F, 0x3078003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%Q %=,%L,%C",                     0xFFFFF000, 0x36387000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%Q %=,%L,%u",                     0xFFFFF000, 0x36787000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%Q %=,%;,%L",                     0xF8FF8FC0, 0x30380F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%Q %=,%L,%L",                     0xFFFFFFC0, 0x36387F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%Q 0,%L,%C",                      0xFFFFF03F, 0x3638703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%Q 0,%L,%u",                      0xFFFFF03F, 0x3678703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%Q 0,%L,%K",                      0xFFFFF000, 0x36B87000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%Q 0,%;,%L",                      0xF8FF8FFF, 0x30380FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%Q 0,%L,%L",                      0xFFFFFFFF, 0x36387FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%.q %#,%;,%C",                    0xF8FF8020, 0x30F80000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%.q %#,%;,%u",                    0xF8FF8020, 0x30F80020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%.q%Q %#,%;,%L",                  0xF8FF8FE0, 0x30F80F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%.q%Q 0,%L,%C",                   0xFFFFF020, 0x36F87000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%.q%Q 0,%L,%u",                   0xFFFFF020, 0x36F87020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x36F87F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FCVT64_32 */
{ (unsigned char *) "fcvt64_32 %A,%;,%C",                    0xF8FF8000, 0x30390000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32 %A,%;,%u",                    0xF8FF8000, 0x30790000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32 %#,%;,%K",                    0xF8FF8000, 0x30B90000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32 0,%;,%C",                     0xF8FF803F, 0x3039003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32 0,%;,%u",                     0xF8FF803F, 0x3079003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%Q %A,%L,%C",                  0xFFFFF000, 0x36397000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%Q %A,%L,%u",                  0xFFFFF000, 0x36797000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%Q %A,%;,%L",                  0xF8FF8FC0, 0x30390F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%Q %A,%L,%L",                  0xFFFFFFC0, 0x36397F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%Q 0,%L,%C",                   0xFFFFF03F, 0x3639703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%Q 0,%L,%u",                   0xFFFFF03F, 0x3679703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%Q 0,%L,%K",                   0xFFFFF000, 0x36B97000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%Q 0,%;,%L",                   0xF8FF8FFF, 0x30390FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%Q 0,%L,%L",                   0xFFFFFFFF, 0x36397FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%.q %#,%;,%C",                 0xF8FF8020, 0x30F90000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%.q %#,%;,%u",                 0xF8FF8020, 0x30F90020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%.q%Q %#,%;,%L",               0xF8FF8FE0, 0x30F90F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%.q%Q 0,%L,%C",                0xFFFFF020, 0x36F97000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%.q%Q 0,%L,%u",                0xFFFFF020, 0x36F97020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fcvt64_32%.q%Q 0,%L,%L",                0xFFFFFFE0, 0x36F97F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FDADD */
{ (unsigned char *) "fdadd %=,%;,%_",                        0xF8FF8000, 0x30310000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd %=,%;,%u",                        0xF8FF8000, 0x30710000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd %#,%;,%K",                        0xF8FF8000, 0x30B10000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd 0,%;,%_",                         0xF8FF803F, 0x3031003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd 0,%;,%u",                         0xF8FF803F, 0x3071003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%Q %=,%L,%_",                      0xFFFFF000, 0x36317000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%Q %=,%L,%u",                      0xFFFFF000, 0x36717000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%Q %=,%;,%L",                      0xF8FF8FC0, 0x30310F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%Q %=,%L,%L",                      0xFFFFFFC0, 0x36317F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%Q 0,%L,%_",                       0xFFFFF03F, 0x3631703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%Q 0,%L,%u",                       0xFFFFF03F, 0x3671703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%Q 0,%L,%K",                       0xFFFFF000, 0x36B17000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%Q 0,%;,%L",                       0xF8FF8FFF, 0x30310FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%Q 0,%L,%L",                       0xFFFFFFFF, 0x36317FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%.q %#,%;,%_",                     0xF8FF8020, 0x30F10000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%.q %#,%;,%u",                     0xF8FF8020, 0x30F10020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%.q%Q %#,%;,%L",                   0xF8FF8FE0, 0x30F10F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%.q%Q 0,%L,%_",                    0xFFFFF020, 0x36F17000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%.q%Q 0,%L,%u",                    0xFFFFF020, 0x36F17020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdadd%.q%Q 0,%L,%L",                    0xFFFFFFE0, 0x36F17F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FDDIV */
{ (unsigned char *) "fddiv %=,%;,%_",                        0xF8FF8000, 0x30370000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv %=,%;,%u",                        0xF8FF8000, 0x30770000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv %#,%;,%K",                        0xF8FF8000, 0x30B70000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv 0,%;,%_",                         0xF8FF803F, 0x3037003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv 0,%;,%u",                         0xF8FF803F, 0x3077003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%Q %=,%L,%_",                      0xFFFFF000, 0x36377000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%Q %=,%L,%u",                      0xFFFFF000, 0x36777000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%Q %=,%;,%L",                      0xF8FF8FC0, 0x30370F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%Q %=,%L,%L",                      0xFFFFFFC0, 0x36377F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%Q 0,%L,%_",                       0xFFFFF03F, 0x3637703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%Q 0,%L,%u",                       0xFFFFF03F, 0x3677703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%Q 0,%L,%K",                       0xFFFFF000, 0x36B77000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%Q 0,%;,%L",                       0xF8FF8FFF, 0x30370FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%Q 0,%L,%L",                       0xFFFFFFFF, 0x36377FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%.q %#,%;,%_",                     0xF8FF8020, 0x30F70000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%.q %#,%;,%u",                     0xF8FF8020, 0x30F70020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%.q%Q %#,%;,%L",                   0xF8FF8FE0, 0x30F70F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%.q%Q 0,%L,%_",                    0xFFFFF020, 0x36F77000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%.q%Q 0,%L,%u",                    0xFFFFF020, 0x36F77020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fddiv%.q%Q 0,%L,%L",                    0xFFFFFFE0, 0x36F77F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FDMADD */
{ (unsigned char *) "fdmadd %=,%;,%_",                       0xF8FF8000, 0x30350000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd %=,%;,%u",                       0xF8FF8000, 0x30750000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd %#,%;,%K",                       0xF8FF8000, 0x30B50000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd 0,%;,%_",                        0xF8FF803F, 0x3035003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd 0,%;,%u",                        0xF8FF803F, 0x3075003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%Q %=,%L,%_",                     0xFFFFF000, 0x36357000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%Q %=,%L,%u",                     0xFFFFF000, 0x36757000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%Q %=,%;,%L",                     0xF8FF8FC0, 0x30350F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%Q %=,%L,%L",                     0xFFFFFFC0, 0x36357F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%Q 0,%L,%_",                      0xFFFFF03F, 0x3635703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%Q 0,%L,%u",                      0xFFFFF03F, 0x3675703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%Q 0,%L,%K",                      0xFFFFF000, 0x36B57000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%Q 0,%;,%L",                      0xF8FF8FFF, 0x30350FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%Q 0,%L,%L",                      0xFFFFFFFF, 0x36357FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%.q %#,%;,%_",                    0xF8FF8020, 0x30F50000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%.q %#,%;,%u",                    0xF8FF8020, 0x30F50020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%.q%Q %#,%;,%L",                  0xF8FF8FE0, 0x30F50F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%.q%Q 0,%L,%_",                   0xFFFFF020, 0x36F57000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%.q%Q 0,%L,%u",                   0xFFFFF020, 0x36F57020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmadd%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x36F57F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FDMSUB */
{ (unsigned char *) "fdmsub %=,%;,%_",                       0xF8FF8000, 0x30360000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub %=,%;,%u",                       0xF8FF8000, 0x30760000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub %#,%;,%K",                       0xF8FF8000, 0x30B60000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub 0,%;,%_",                        0xF8FF803F, 0x3036003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub 0,%;,%u",                        0xF8FF803F, 0x3076003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%Q %=,%L,%_",                     0xFFFFF000, 0x36367000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%Q %=,%L,%u",                     0xFFFFF000, 0x36767000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%Q %=,%;,%L",                     0xF8FF8FC0, 0x30360F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%Q %=,%L,%L",                     0xFFFFFFC0, 0x36367F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%Q 0,%L,%_",                      0xFFFFF03F, 0x3636703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%Q 0,%L,%u",                      0xFFFFF03F, 0x3676703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%Q 0,%L,%K",                      0xFFFFF000, 0x36B67000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%Q 0,%;,%L",                      0xF8FF8FFF, 0x30360FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%Q 0,%L,%L",                      0xFFFFFFFF, 0x36367FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%.q %#,%;,%_",                    0xF8FF8020, 0x30F60000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%.q %#,%;,%u",                    0xF8FF8020, 0x30F60020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%.q%Q %#,%;,%L",                  0xF8FF8FE0, 0x30F60F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%.q%Q 0,%L,%_",                   0xFFFFF020, 0x36F67000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%.q%Q 0,%L,%u",                   0xFFFFF020, 0x36F67020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmsub%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x36F67F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FDMUL */
{ (unsigned char *) "fdmul %=,%;,%_",                        0xF8FF8000, 0x30300000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul %=,%;,%u",                        0xF8FF8000, 0x30700000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul %#,%;,%K",                        0xF8FF8000, 0x30B00000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul 0,%;,%_",                         0xF8FF803F, 0x3030003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul 0,%;,%u",                         0xF8FF803F, 0x3070003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%Q %=,%L,%_",                      0xFFFFF000, 0x36307000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%Q %=,%L,%u",                      0xFFFFF000, 0x36707000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%Q %=,%;,%L",                      0xF8FF8FC0, 0x30300F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%Q %=,%L,%L",                      0xFFFFFFC0, 0x36307F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%Q 0,%L,%_",                       0xFFFFF03F, 0x3630703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%Q 0,%L,%u",                       0xFFFFF03F, 0x3670703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%Q 0,%L,%K",                       0xFFFFF000, 0x36B07000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%Q 0,%;,%L",                       0xF8FF8FFF, 0x30300FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%Q 0,%L,%L",                       0xFFFFFFFF, 0x36307FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%.q %#,%;,%_",                     0xF8FF8020, 0x30F00000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%.q %#,%;,%u",                     0xF8FF8020, 0x30F00020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%.q%Q %#,%;,%L",                   0xF8FF8FE0, 0x30F00F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%.q%Q 0,%L,%_",                    0xFFFFF020, 0x36F07000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%.q%Q 0,%L,%u",                    0xFFFFF020, 0x36F07020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdmul%.q%Q 0,%L,%L",                    0xFFFFFFE0, 0x36F07F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FDSUB */
{ (unsigned char *) "fdsub %=,%;,%_",                        0xF8FF8000, 0x30320000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub %=,%;,%u",                        0xF8FF8000, 0x30720000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub %#,%;,%K",                        0xF8FF8000, 0x30B20000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub 0,%;,%_",                         0xF8FF803F, 0x3032003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub 0,%;,%u",                         0xF8FF803F, 0x3072003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%Q %=,%L,%_",                      0xFFFFF000, 0x36327000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%Q %=,%L,%u",                      0xFFFFF000, 0x36727000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%Q %=,%;,%L",                      0xF8FF8FC0, 0x30320F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%Q %=,%L,%L",                      0xFFFFFFC0, 0x36327F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%Q 0,%L,%_",                       0xFFFFF03F, 0x3632703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%Q 0,%L,%u",                       0xFFFFF03F, 0x3672703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%Q 0,%L,%K",                       0xFFFFF000, 0x36B27000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%Q 0,%;,%L",                       0xF8FF8FFF, 0x30320FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%Q 0,%L,%L",                       0xFFFFFFFF, 0x36327FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%.q %#,%;,%_",                     0xF8FF8020, 0x30F20000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%.q %#,%;,%u",                     0xF8FF8020, 0x30F20020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%.q%Q %#,%;,%L",                   0xF8FF8FE0, 0x30F20F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%.q%Q 0,%L,%_",                    0xFFFFF020, 0x36F27000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%.q%Q 0,%L,%u",                    0xFFFFF020, 0x36F27020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsub%.q%Q 0,%L,%L",                    0xFFFFFFE0, 0x36F27F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FDCMP */
{ (unsigned char *) "fdcmp %#,%_",                           0xF8FF803F, 0x30338000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp %#,%u",                           0xF8FF803F, 0x30738000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp %#,%K",                           0xF8FF8000, 0x30B38000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%Q %L,%_",                         0xFFFFF03F, 0x3633F000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%Q %L,%u",                         0xFFFFF03F, 0x3673F000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%Q %L,%K",                         0xFFFFF000, 0x36B3F000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%Q %#,%L",                         0xF8FF8FFF, 0x30338F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%Q %L,%L",                         0xFFFFFFFF, 0x3633FF80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%.q %#,%_",                        0xF8FF8020, 0x30F38000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%.q %#,%u",                        0xF8FF8020, 0x30F38020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%.q%Q %#,%L",                      0xF8FF8FE0, 0x30F38F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%.q%Q %L,%_",                      0xFFFFF020, 0x36F3F000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%.q%Q %L,%u",                      0xFFFFF020, 0x36F3F020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmp%.q%Q %L,%L",                      0xFFFFFFE0, 0x36F3FF80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FDCMPF */
{ (unsigned char *) "fdcmpf %#,%_",                          0xF8FF803F, 0x30348000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf %#,%u",                          0xF8FF803F, 0x30748000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf %#,%K",                          0xF8FF8000, 0x30B48000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%Q %L,%_",                        0xFFFFF03F, 0x3634F000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%Q %L,%u",                        0xFFFFF03F, 0x3674F000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%Q %L,%K",                        0xFFFFF000, 0x36B4F000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%Q %#,%L",                        0xF8FF8FFF, 0x30348F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%Q %L,%L",                        0xFFFFFFFF, 0x3634FF80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%.q %#,%_",                       0xF8FF8020, 0x30F48000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%.q %#,%u",                       0xF8FF8020, 0x30F48020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%.q%Q %#,%L",                     0xF8FF8FE0, 0x30F48F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%.q%Q %L,%_",                     0xFFFFF020, 0x36F4F000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%.q%Q %L,%u",                     0xFFFFF020, 0x36F4F020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdcmpf%.q%Q %L,%L",                     0xFFFFFFE0, 0x36F4FF80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/*FDSQRT */
{ (unsigned char *) "fdsqrt %#,%_",                          0xF8FF803F, 0x302F0001, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsqrt %#,%u",                          0xF8FF803F, 0x306F0001, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsqrt 0,%_",                           0xFFFFF03F, 0x362F7001, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsqrt 0,%u",                           0xFFFFF03F, 0x366F7001, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsqrt%Q %#,%L",                        0xF8FF8FFF, 0x302F0F81, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "fdsqrt%Q 0,%L",                         0xFFFFFFFF, 0x362F7F81, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*PREALLOC */
/* prealloc<.aa>    [b,c]        0010 0bbb aa11 0001 0BBB CCCC CC11 1110  */
{ (unsigned char *) "prealloc%.P [%g,%C]%3",                    0xF83F803F, 0x2031003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prealloc<.aa>    [b,s9]       0001 0bbb ssss ssss SBBB 0aa0 0111 1110  */
{ (unsigned char *) "prealloc%.p [%g,%o]%3",                    0xF80009FF, 0x1000007E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prealloc<.aa>    [b,limm]     0010 0bbb aa11 0001 0BBB 1111 1011 1110  */
{ (unsigned char *) "prealloc%.P%Q [%g,%L]%3",                  0xF83F8FFF, 0x20310FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prealloc    [limm,c]          0010 0110 RR11 0001 0111 CCCC CC11 1110  */
{ (unsigned char *) "prealloc%Q [%L,%C]%1",                     0xFFFFF03F, 0x2631703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prealloc    [limm,s9]         0001 0110 ssss ssss S111 0RR0 0111 1110  */
{ (unsigned char *) "prealloc%Q [%L,%o]%1",                     0xFF007FFF, 0x1600707E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prealloc    [limm]            0001 0110 0000 0000 0111 0RR0 0111 1110  */
{ (unsigned char *) "prealloc%Q [%L]%1",                        0xFFFFFFFF, 0x1600707E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*VMAC2H */
{ (unsigned char *) "vmac2h %=,%B,%C",                       0xF8FF8000, 0x281E0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h %=,%B,%u",                       0xF8FF8000, 0x285E0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h %#,%B,%K",                       0xF8FF8000, 0x289E0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h 0,%B,%C",                        0xF8FF803F, 0x281E003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h 0,%B,%u",                        0xF8FF803F, 0x285E003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%Q %=,%L,%C",                     0xFFFFF000, 0x2E1E7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%Q %=,%L,%u",                     0xFFFFF000, 0x2E5E7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%Q %=,%B,%L",                     0xF8FF8FC0, 0x281E0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%Q %=,%L,%L",                     0xFFFFFFC0, 0x2E1E7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%Q 0,%L,%C",                      0xFFFFF03F, 0x2E1E703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%Q 0,%L,%u",                      0xFFFFF03F, 0x2E5E703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%Q 0,%L,%K",                      0xFFFFF000, 0x2E9E7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%Q 0,%B,%L",                      0xF8FF8FFF, 0x281E0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%Q 0,%L,%L",                      0xFFFF8FFF, 0x2E1E0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%.q %#,%B,%C",                    0xF8FF8020, 0x28DE0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%.q %#,%B,%u",                    0xF8FF8020, 0x28DE0020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%.q%Q %#,%B,%L",                  0xF8FF8FE0, 0x28DE0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%.q%Q 0,%L,%C",                   0xFFFFF020, 0x2EDE7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%.q%Q 0,%L,%u",                   0xFFFFF020, 0x2EDE7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2h%.q%Q 0,%L,%L",                   0xFFFFFFE0, 0x2EDE7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*VMAC2HU */
{ (unsigned char *) "vmac2hu %=,%B,%C",                      0xF8FF8000, 0x281F0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu %=,%B,%u",                      0xF8FF8000, 0x285F0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu %#,%B,%K",                      0xF8FF8000, 0x289F0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu 0,%B,%C",                       0xF8FF803F, 0x281F003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu 0,%B,%u",                       0xF8FF803F, 0x285F003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%Q %=,%L,%C",                    0xFFFFF000, 0x2E1F7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%Q %=,%L,%u",                    0xFFFFF000, 0x2E5F7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%Q %=,%B,%L",                    0xF8FF8FC0, 0x281F0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%Q %=,%L,%L",                    0xFFFFFFC0, 0x2E1F7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%Q 0,%L,%C",                     0xFFFFF03F, 0x2E1F703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%Q 0,%L,%u",                     0xFFFFF03F, 0x2E5F703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%Q 0,%L,%K",                     0xFFFFF000, 0x2E9F7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%Q 0,%B,%L",                     0xF8FF8FFF, 0x281F0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%Q 0,%L,%L",                     0xFFFF8FFF, 0x2E1F0FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%.q %#,%B,%C",                   0xF8FF8020, 0x28DF0000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%.q%Q %#,%B,%L",                 0xF8FF8FE0, 0x28DF0F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%.q%Q 0,%L,%C",                  0xFFFFF020, 0x2EDF7000, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%.q%Q 0,%L,%u",                  0xFFFFF020, 0x2EDF7020, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
{ (unsigned char *) "vmac2hu%.q%Q 0,%L,%L",                  0xFFFFFFE0, 0x2EDF7F80, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*WEVT */
/* wevt    c                    0010 0000 0010 1111 0001 CCCC CC11 1111  */
{ (unsigned char *) "wevt %C",                               0xFFFFF03F, 0x202F103F, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* wevt    u6                   0010 0000 0110 1111 0001 uuuu uu11 1111  */
{ (unsigned char *) "wevt %u",                               0xFFFFF03F, 0x206F103F, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*WLFC */
/* wlfc    c                    0010 0001 0010 1111 0001 CCCC CC11 1111  */
{ (unsigned char *) "wlfc %C",                               0xFFFFF03F, 0x212F103F, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* wlfc    u6                   0010 0001 0110 1111 0001 uuuu uu11 1111  */
{ (unsigned char *) "wlfc %u",                               0xFFFFF03F, 0x216F103F, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*DSYNC */
/* dsync                        0010 0010 0110 1111 0001 RRRR RR11 1111  */
{ (unsigned char *) "dsync",                                 0xFFFFFFFF, 0x226F103F, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*DMB */
/* dmb    u3                    0010 0011 0110 1111 0001 RRRu uu11 1111  */
{ (unsigned char *) "dmb %~",                                0xFFFFFE3F, 0x236F103F, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*PREFETCHW */
/* prefetchw<.aa>    b          0001 0bbb 0000 0000 0BBB 1RR0 0011 1110  */
{ (unsigned char *) "prefetchw%.p [%g]%3",                   0xF80009FF, 0x1000083E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchw<.aa>    b,c        0010 0bbb aa11 0000 1BBB CCCC CC11 1110  */
{ (unsigned char *) "prefetchw%.P [%g,%C]%3",                0xF83F803F, 0x2030803E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchw<.aa>    b,s9       0001 0bbb ssss ssss SBBB 1aa0 0011 1110  */
{ (unsigned char *) "prefetchw%.p [%g,%o]%3",                0xF80009FF, 0x1000083E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchw<.aa>    b,limm     0010 0bbb aa11 0000 1BBB 1111 1011 1110  */
{ (unsigned char *) "prefetchw%.P%Q [%g,%L]%3",              0xF83F8FFF, 0x20308FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchw    limm,c          0010 0110 RR11 0000 1111 CCCC CC11 1110  */
{ (unsigned char *) "prefetchw%Q [%L,%C]%1",                 0xFFFFF03F, 0x2630F03E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchw    limm,s9         0001 0110 ssss ssss S111 1RR0 0011 1110  */
{ (unsigned char *) "prefetchw%Q [%L,%o]%1",                 0xFF007FFF, 0x1600783E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchw    limm            0001 0110 0000 0000 0111 1RR0 0011 1110  */
{ (unsigned char *) "prefetchw%Q [%L]%1",                    0xFFFFFFFF, 0x1600783E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

/*PREFETCHL2 */
/* prefetchl2<.aa>    b,c       0010 0bbb aa11 0010 0BBB CCCC CC11 1110  */
{ (unsigned char *) "prefetch.l2%.P [%g,%C]%3",                   0xF83F803F, 0x2032003E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchl2<.aa>    b,s9      0001 0bbb ssss ssss SBBB 0aa0 1011 1110  */
{ (unsigned char *) "prefetch.l2%.p [%g,%o]%3",              0xF80009FF, 0x100000BE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchl2<.aa>    b,limm    0010 0bbb aa11 0010 0BBB 1111 1011 1110  */
{ (unsigned char *) "prefetch.l2%.P%Q [%g,%L]%3",                 0xF83F8FFF, 0x20320FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchl2<.aa>    limm,c    0010 0110 aa11 0000 0111 CCCC CC11 1110  */
{ (unsigned char *) "prefetchl2%.P%Q [%L,%C]%3",                 0xFF3FF03F, 0x2630703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchl2<.aa>    limm,s9   0001 0110 ssss ssss S111 0aa0 0011 1110  */
{ (unsigned char *) "prefetch.l2%.P%Q [%L,%o]%3",            0xFF0079FF, 0x1600703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchl2<.aa>    limm,limm         0010 0110 aa11 0000 0111 1111 1011 1110  */
{ (unsigned char *) "prefetch.l2%.P%Q [%L,%L]%3",                 0xFF3FFFFF, 0x26307FBE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchl2    limm,c         0010 0110 RR11 0010 0111 CCCC CC11 1110  */
{ (unsigned char *) "prefetch.l2%Q [%L,%C]%3",                    0xFFFFF03F, 0x2632703E, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchl2    limm,s9        0001 0110 ssss ssss S111 0RR0 1011 1110  */
{ (unsigned char *) "prefetch.l2%Q [%L,%o]%3",               0xFF007FFF, 0x160070BE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},
/* prefetchl2    limm           0001 0110 0000 0000 0111 0RR0 1011 1110  */
{ (unsigned char *) "prefetch.l2%Q [%L]%3",                       0xFFFFFFFF, 0x160070BE, ARC_MACH_ARCV2HS, 0, 0, 0, 0},

