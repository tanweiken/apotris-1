#pragma once

namespace GameInfo{
    static constexpr int colors[7][3] = {
        {50,200,255},
        {50,70,237},
        {249,146,2},
        {249,221,2},
        {70,216,2},
        {170,50,250},
        {211,0,0},
    };

    static constexpr int tetraminos[7][4][4][4] = {
        {
            {
                {0,0,0,0},
                {1,1,1,1},
                {0,0,0,0},
                {0,0,0,0}
            },{
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0}
            },{
                {0,0,0,0},
                {0,0,0,0},
                {1,1,1,1},
                {0,0,0,0}
            },{
                {0,1,0,0},
                {0,1,0,0},
                {0,1,0,0},
                {0,1,0,0}
            }
        },
        {
            {
                {1,0,0,0},
                {1,1,1,0},
                {0,0,0,0},
                {0,0,0,0}
            },{
                {0,1,1,0},
                {0,1,0,0},
                {0,1,0,0},
                {0,0,0,0}
            },{
                {0,0,0,0},
                {1,1,1,0},
                {0,0,1,0},
                {0,0,0,0}
            },{
                {0,1,0,0},
                {0,1,0,0},
                {1,1,0,0},
                {0,0,0,0},
            }		
        },{
            {
                {0,0,1,0},
                {1,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {0,1,0,0},
                {0,1,1,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {1,1,1,0},
                {1,0,0,0},
                {0,0,0,0},
            },{
                {1,1,0,0},
                {0,1,0,0},
                {0,1,0,0},
                {0,0,0,0},
            }
        },{
            {
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            }	
        },{
            {
                {0,1,1,0},
                {1,1,0,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {0,1,1,0},
                {0,0,1,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {0,1,1,0},
                {1,1,0,0},
                {0,0,0,0},
            },{
                {1,0,0,0},
                {1,1,0,0},
                {0,1,0,0},
                {0,0,0,0},
            }	
        },
        {
            {
                {0,1,0,0},
                {1,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {0,1,1,0},
                {0,1,0,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {1,1,1,0},
                {0,1,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {1,1,0,0},
                {0,1,0,0},
                {0,0,0,0},
            }	
        },{
            {
                {1,1,0,0},
                {0,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,0,1,0},
                {0,1,1,0},
                {0,1,0,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {1,1,0,0},
                {0,1,1,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {1,1,0,0},
                {1,0,0,0},
                {0,0,0,0},
            }	
        }
    };

    static constexpr int classic[7][4][4][4] = {
        {
            {
                {0,0,0,0},
                {0,0,0,0},
                {1,1,1,1},
                {0,0,0,0}
            },{
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0}
            },{
                {0,0,0,0},
                {0,0,0,0},
                {1,1,1,1},
                {0,0,0,0}
            },{
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0}
            }
        },
        {
            {
                {0,0,0,0},
                {1,1,1,0},
                {0,0,1,0},
                {0,0,0,0}
            },{
                {0,1,0,0},
                {0,1,0,0},
                {1,1,0,0},
                {0,0,0,0},
            },{
                {1,0,0,0},
                {1,1,1,0},
                {0,0,0,0},
                {0,0,0,0}
            },{
                {0,1,1,0},
                {0,1,0,0},
                {0,1,0,0},
                {0,0,0,0}
            }
        },{
            {
                {0,0,0,0},
                {1,1,1,0},
                {1,0,0,0},
                {0,0,0,0},
            },{
                {1,1,0,0},
                {0,1,0,0},
                {0,1,0,0},
                {0,0,0,0},
            },{
                {0,0,1,0},
                {1,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {0,1,0,0},
                {0,1,1,0},
                {0,0,0,0},
            }
        },{
            {
                {0,0,0,0},
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
            }
        },{
            {
                {0,0,0,0},
                {0,1,1,0},
                {1,1,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {0,1,1,0},
                {0,0,1,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {0,1,1,0},
                {1,1,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {0,1,1,0},
                {0,0,1,0},
                {0,0,0,0},
            }
        },
        {
            {
                {0,0,0,0},
                {1,1,1,0},
                {0,1,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {1,1,0,0},
                {0,1,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {1,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {0,1,1,0},
                {0,1,0,0},
                {0,0,0,0},
            }
        },{
            {
                {0,0,0,0},
                {1,1,0,0},
                {0,1,1,0},
                {0,0,0,0},
            },{
                {0,0,1,0},
                {0,1,1,0},
                {0,1,0,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {1,1,0,0},
                {0,1,1,0},
                {0,0,0,0},
            },{
                {0,0,1,0},
                {0,1,1,0},
                {0,1,0,0},
                {0,0,0,0},
            }
        }
    };

    static constexpr int kickTwice[4][6][2]={
        {
            {0,0},
            {0,-1},
            {1,-1},
            {-1,-1},
            {1,0},
            {-1,0}
        },{
            {0,0},
            {1,0},
            {1,-2},
            {1,-1},
            {0,-2},
            {0,-1},
        },{
            {0,0},
            {0,-1},
            {-1,-1},
            {1,-1},
            {-1,0},
            {1,0}
        },{
            {0,0},
            {-1,0},
            {-1,-2},
            {-1,-1},
            {0,-2},
            {0,-1},
        }
    };

    static constexpr int kicks[2][2][4][5][2]={
        {//[Normal block or I block]
            {//[clockwise or counter clockwise]
                {//[rotation, start at 0][kick counter][dx,dy]
                    {0,0},
                    {-1,0},
                    {-1,-1},
                    {0,2},
                    {-1,2}
                },{
                    {0,0},
                    {1,0},
                    {1,1},
                    {0,-2},
                    {1,-2}
                },{
                    {0,0},
                    {1,0},
                    {1,-1},
                    {0,2},
                    {1,2}
                },{
                    {0,0},
                    {-1,0},
                    {-1,1},
                    {0,-2},
                    {-1,-2}
                }
            },{
                {
                    {0,0},
                    {1,0},
                    {1,-1},
                    {0,2},
                    {1,2}
                },{
                    {0,0},
                    {1,0},
                    {1,1},
                    {0,-2},
                    {1,-2}
                },{
                    {0,0},
                    {-1,0},
                    {-1,-1},
                    {0,2},
                    {-1,2}
                },{
                    {0,0},
                    {-1,0},
                    {-1,1},
                    {0,-2},
                    {-1,-2}
                }
            }
        },{
            {
                {
                    {0,0},
                    {-2,0},
                    {1,0},
                    {-2,1},
                    {1,-2}
                },{
                    {0,0},
                    {-1,0},
                    {2,0},
                    {-1,-2},
                    {2,1}
                },{
                    {0,0},
                    {2,0},
                    {-1,0},
                    {2,-1},
                    {-1,2}
                },{
                    {0,0},
                    {1,0},
                    {-2,0},
                    {1,2},
                    {-2,-1}
                }
            },{
                {
                    {0,0},
                    {-1,0},
                    {2,0},
                    {-1,-2},
                    {2,1}
                },{
                    {0,0},
                    {2,0},
                    {-1,0},
                    {2,-1},
                    {-1,2}
                },{
                    {0,0},
                    {1,0},
                    {-2,0},
                    {1,2},
                    {-2,-1}
                },{
                    {0,0},
                    {-2,0},
                    {1,0},
                    {-2,1},
                    {1,-2}
                }
            }
        }
    };

    static constexpr float gravity[19] = {
        0.01667,
        0.021017,
        0.026977,
        0.035256,
        0.04693,
        0.06361,
        0.0879,
        0.1236,
        0.1775,
        0.2598,
        0.388,
        0.59,
        0.92,
        1.46,
        2.36,
        3.91,
        6.61,
        11.43,
        20.0
    };

    static constexpr float classicGravity[30] = {
        0.0208,
        0.0232,
        0.0263,
        0.0303,
        0.0344,
        0.0555,
        0.0769,
        0.125,
        0.1667,
        0.2,
        0.2,
        0.2,
        0.25,
        0.25,
        0.25,
        0.333,
        0.333,
        0.333,
        0.5,
        0.5,
        0.5,
        0.5,
        0.5,
        0.5,
        0.5,
        0.5,
        0.5,
        0.5,
        1,
    };

    static constexpr float blitzGravity[15] = {
        0.0167,
        0.0259,
        0.0412,
        0.0670,
        0.111,
        0.189,
        0.330,
        0.588,
        1.08,
        2.01,
        3.87,
        7.62,
        15.4,
        20.0,
        20.0,
    };

    static constexpr int blitzLevels[15]={
        3,
        8,
        15,
        24,
        35,
        48,
        63,
        80,
        99,
        120,
        144,
        170,
        198,
        228,
        260,
    };

    static constexpr int scoring[17][3]={
        {//Single
            100,0,0
        },
        {//Double
            300,0,1
        },
        {//Triple
            500,0,2
        },
        {//Tetris
            800,1,4
        },
        {//T-Spin Mini no lines
            100,0,0
        },
        {//T-Spin Mini single
            200,1,0
        },
        {//T-Spin Mini Double
            400,1,1
        },
        {//T-Spin no lines
            400,0,0
        },
        {//T-Spin Single
            800,1,2
        },
        {//T-Spin Double
            1200,1,4
        },
        {//T-Spin Triple
            1600,1,6
        },{//Perfect Clear Single
            800,0,10
        },{//Perfect Clear Double
            1200,0,10
        },{//Perfect Clear Triple
            1800,0,10
        },{//Perfect Clear Tetris
            2000,0,10
        },{//Perfect Clear Back to Back Tetris  
            3200,0,10
        },
        {//Combo
            50,0,0
        }
    };

    static constexpr int classicScoring[4]={
        40,
        100,
        300,
        1200
    };

    
    static constexpr int comboTable[20]={
        0,1,1,2,2, 3,3,4,4,4,
        5,5,5,5,5, 5,5,5,5,5
    };

    //Left: 0, Right: 1, Das Left: 2, Das Right: 3, CW: 4, CCW: 5, Drop: 6, 180: 7
    static constexpr int finesse[7][4][10][4]={
        {//I
            {//0
                {2,7},
                {0,0,7},
                {0,7},
                {7},
                {1,7},
                {1,1,7},
                {3,7}
            },
            {//1
                {5,2,7},
                {2,5,7},
                {2,4,7},
                {0,5,7},
                {5,7},
                {4,7},
                {1,4,7},
                {3,5,7},
                {3,4,7},
                {4,3,7}
            }
        },{//j
            {//0,
                {2,7},
                {0,0,7},
                {0,7},
                {7},
                {1,7},
                {1,1,7},
                {3,0,7},
                {3,7},
            },{//1
                {4,2,7},
                {2,4,7},
                {4,0,0,7},
                {4,0,7},
                {4,7},
                {4,1,7},
                {4,1,1,7},
                {4,3,0,7},
                {3,4,7},
            },{//2
                {2,6,7},
                {0,0,6,7},
                {0,6,7},
                {6,7},
                {1,6,7},
                {1,1,6,7},
                {3,0,6,7},
                {3,6,7},
            },{//3
                {5,2,7},
                {5,0,0,7},
                {5,0,7},
                {5,7},
                {5,1,7},
                {5,1,1,7},
                {3,0,5,7},
                {3,5,7},
                {5,3,7},
            }
        },{//L
            {//0
                {2,7},
                {0,0,7},
                {0,7},
                {7},
                {1,7},
                {1,1,7},
                {3,0,7},
                {3,7},
            },{//1
                {4,2,7},
                {2,4,7},
                {4,0,0,7},
                {4,0,7},
                {4,7},
                {4,1,7},
                {4,1,1,7},
                {4,3,0,7},
                {3,4,7},
            },{//2
                {2,6,7},
                {0,0,6,7},
                {0,6,7},
                {6,7},
                {1,6,7},
                {1,1,6,7},
                {3,0,6,7},
                {3,6,7},
            },{//3
                {5,2,7},
                {5,0,0,7},
                {5,0,7},
                {5,7},
                {5,1,7},
                {5,1,1,7},
                {3,0,5,7},
                {3,5,7},
                {5,3,7},
            }
        },{//o
            {//0
                {2,7},
                {2,1,7},
                {0,0,7},
                {0,7},
                {7},
                {1,7},
                {1,1,7},
                {3,0,7},
                {3,7},
            }
        },{//s
            {//0
                {2,7},
                {0,0,7},
                {0,7},
                {7},
                {1,7},
                {1,1,7},
                {3,0,7},
                {3,7},
            },{//1
                {5,2,7},
                {2,4,7},
                {5,0,7},
                {5,7},
                {4,7},
                {4,1,7},
                {4,1,1,7},
                {3,5,7},
                {4,3,7},
            }
        },{//t
            {//0
                {2,7},
                {0,0,7},
                {0,7},
                {7},
                {1,7},
                {1,1,7},
                {3,0,7},
                {3,7},
            },{//1
                {4,2,7},
                {2,4,7},
                {4,0,0,7},
                {4,0,7},
                {4,7},
                {4,1,7},
                {4,1,1,7},
                {4,3,1,7},
                {3,4,7},
            },{//2
                {2,6,7},
                {0,0,6,7},
                {0,6,7},
                {6,7},
                {1,6,7},
                {1,1,6,7},
                {3,0,6,7},
                {3,6,7},
            },{//3
                {5,2,7},
                {5,0,0,7},
                {5,0,7},
                {5,7},
                {5,1,7},
                {5,1,1,7},
                {3,0,5,7},
                {3,5,7},
                {5,3,7},
            }
        },{//z
            {//0
                {2,7},
                {0,0,7},
                {0,7},
                {7},
                {1,7},
                {1,1,7},
                {3,0,7},
                {3,7},
            },{//1
                {5,2,7},
                {2,4,7},
                {5,0,7},
                {5,7},
                {4,7},
                {4,1,7},
                {4,1,1,7},
                {3,5,7},
                {4,3,7},
            }
        }
    };

}
