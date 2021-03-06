// Designates teams for ships/weapons, to prevent friendly fire.
#define TEAM_EMPIRE (-1)
#define TEAM_REBELS 1

// Bitmask values for arrow key inputs.
#define INPUT_UP 1
#define INPUT_DOWN 2
#define INPUT_LEFT 4
#define INPUT_RIGHT 8
#define INPUT_FIRE 16

#define EXPLOSION_IMAGES 25

// Indexes/IDs for ship types.
#define SHIP_FIGHTER     0
#define SHIP_BOMBER      1
#define SHIP_INTERCEPTER 2
#define SHIP_OPRESSOR    3
#define SHIP_AWING       4
#define SHIP_XWING       5
#define SHIP_TURRET      6
#define SHIP_COUNT       7


// Indexes/IDs for difficulty levels.
#define DIFFICULTY_EASY   0
#define DIFFICULTY_MEDIUM 1
#define DIFFICULTY_HARD   2
#define DIFFICULTY_COUNT  3
#define LEVEL_COUNT       15

// Stats for different ships at different difficulties.
int statsHealth[SHIP_COUNT][DIFFICULTY_COUNT] = { 
    { 100, 200, 300},
    {  50,  75, 150},
    { 200, 300, 400},
    { 300, 400, 500},
    {1000,1000,1000},
    { 800, 800, 800},
    {0,0,0}
};
int statsShields[SHIP_COUNT][DIFFICULTY_COUNT] = {
    { 100, 200, 300},
    { 150, 225, 350},
    {  50,  75, 150},
    { 100, 200, 300},
    {1000,1000,1000},
    { 750, 750, 750},
    {0,0,0}
};
int statsDamage[SHIP_COUNT][DIFFICULTY_COUNT] = {
    { 100, 175, 225},
    { 150, 250, 300},
    {   2,   6,   9},
    { 400, 500, 600},
    {  75,  75,  75},
    { 100, 100, 100},
    {10,25,50}
};
int statsShotfreq[SHIP_COUNT][DIFFICULTY_COUNT] = {
    {  10,  25,  40},
    {   5,   7,  10},
    { 100, 110, 120},
    {   7,  15,  25},
    {   5,   5,   5},
    {   7,   7,   7},
    {25,30,45}
};
float statsSpeed[SHIP_COUNT][DIFFICULTY_COUNT] = {
    { 0.75,  1.0,  1.5},
    { 0.5 , 0.75,  1.0},
    { 1.0 ,  2.0,  3.0},
    { 0.5 ,  1.0,  1.5},
    { 1.5 ,  1.5,  1.5},
    { 2.5 ,  2.5,  2.5},
    {3.0,3.0,3.0}
};

int statsScore[SHIP_COUNT][DIFFICULTY_COUNT] = {
    { 100, 100, 100},
    { 200, 200, 200},
    { 250, 250, 250},
    { 350, 350, 350},
    {-250,-200,-100},
    {-200,-150,-100},
    {0,0,0}
};

int statsLaserWidth[SHIP_COUNT][DIFFICULTY_COUNT] = {
    {   3,   3,   3},
    {   6,   6,   6},
    {   1,   1,   1},
    {  10,  10,  10},
    {   3,   3,   3},
    {   3,   3,   3},
    {4,4,4}
};

float statsEdgeLength[SHIP_COUNT] = {
	75.0,
	75.0,
	75.0,
	75.0,
	75.0,
	75.0,
	75.0
};
float statsHitboxRadius[SHIP_COUNT] = {
	40.0,
	40.0,
	40.0,
	40.0,
	40.0,
	40.0,
	10.0
};
float statsDodgeRadius[SHIP_COUNT][DIFFICULTY_COUNT] = {
    {   0,   0,  10},
    {   0,  10,  30},
    {   0,  10,  30},
    {   0,   0,   0},
    {  80,  80,  80},
    {  80,  80,  80},
    {   0,   0,   0}
};


// Death star settings
int chargemax = 5000;
int chargemin = -30000;
int cannonmax = 1000;
int beamwidth = 100;


// Screen settings
int xres = 800;
int yres = 600;
int pad = 500; // For empty space on sides of screen
int halfpad = 250;
