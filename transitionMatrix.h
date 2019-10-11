#define ID_1 111
#define ID_2 222
#define ID_3 333
                                /*O,    a,  b,  type*/
    int TM[][4] =  {/*State O*/  {0,    0,  0,  0},
                    /*State 1*/  {0,    2,  3,  0},
                    /*State 2*/  {0,   11,  4,  ID_1},
                    /*State 3*/  {0,   12, 12,  ID_1},
                    /*State 4*/  {0,    6,  5,  0},
                    /*State 5*/  {0,    7,  5,  0},
                    /*State 6*/  {0,    8, 12,  ID_3},
                    /*State 7*/  {0,   12, 12,  ID_2},
                    /*State 8*/  {0,   12,  9,  0},
                    /*State 9*/  {0,   10, 12,  0},
                    /*State 10*/ {0,    8, 12,  ID_3},
                    /*State 11*/ {0,   12, 12,  ID_2},
                    /*State 12*/ {0,   12, 12,  0/*Dead State*/}
                    }; 