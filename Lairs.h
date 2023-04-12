#ifndef __LAIRS_H__
#define __LAIRS_H__

#include "Random.h"
#include "World.h"

#include <fstream>

using namespace std;

#define NUMBER_OF_LAIRS   420
#define NUMBER_OF_SPRITES 205
#define MONSTER_LAIR_DATA_ADDRESS 0xBA0D


enum class ActID : unsigned char {
    ACT_1 = 0,
    ACT_2,
    ACT_3,
    ACT_4,
    ACT_5,
    ACT_6,
    ACT_7,
    ACT_MAX
};

enum class LairType : unsigned short {
    LAIR_ONE_BY_ONE      = 0xF3A6,
    LAIR_MULTISPAWN      = 0x1BA7,
    LAIR_ONE_BY_ONE_PROX = 0x13A8,
    LAIR_TWO_UP_TWO_DOWN = 0xD2A7,
    LAIR_ALREADY_THERE   = 0x52A7
};

enum class OrientationType : unsigned char {
    DOWN  = 0x00,
    LEFT  = 0x40,
    RIGHT = 0x80,
    UP    = 0xC0
};

enum class EnemyType : unsigned char {
    NO_ENEMY           = 0x00,
    SOLID_ARM          = 0x1F,
    ACT1_GOBLIN        = 0x20,
    ACT1_IMP           = 0x21,
    ACT1_FLY           = 0x22,
    ACT1_PLANT         = 0x23,
    ACT1_SLIME         = 0x24,
    ACT1_TORCH         = 0x25,
    ACT1_ARMOR         = 0x26,
    ACT1_SPIKEY        = 0x27,
    ACT1_BIRD          = 0x28,
    ACT1_TORCH2        = 0x29,
    ACT1_BLOCK         = 0x2E,
    ACT2_WATER_DRAGON  = 0x2C,
    ACT2_MUDMAN        = 0x2D,
    ACT2_BUSH          = 0x2E,
    ACT2_STATUE        = 0x2F,
    ACT2_FLOWER        = 0x30,
    ACT2_FIRE_SPIRIT   = 0x33,
    ACT2_GHOST         = 0x35,
    ACT2_LIZARDMAN     = 0x37,
    ACT2_TP_LIZARDMAN  = 0x38,
    ELEMENTAL_STATUE   = 0x3D,
    ACT2_FIREMAN       = 0x48,
    ACT2_SCORPION      = 0x49,
    ACT3_URCHIN        = 0x32,
    ACT3_JELLYFISH     = 0x34,
    ACT3_CRAB          = 0x35,
    ACT3_RAY           = 0x36,
    ACT3_SEAHORSE      = 0x37,
    ACT3_PALM_TREE     = 0x3A,
    ACT3_ROCK          = 0x3B,
    ACT3_FISH          = 0x3C,
    ACT3_GORILLA       = 0x3D,
    ACT3_METAL_GORILLA = 0x3E,
    ACT3_EAGLE         = 0x3F,
    FLOATING_SKULL     = 0x41,
    ACT4_RAT           = 0x2D,
    ACT4_MOOSE         = 0x2E,
    ACT4_YETI          = 0x2F,
    ACT4_BAT           = 0x30,
    ACT4_SNOWBALL      = 0x31,
    ACT4_PURPLE_WIZARD = 0x32,
    ACT4_RED_WIZARD    = 0x33,
    ACT4_ICE_HEAD      = 0x34,
    ACT4_ICE_BLOCK     = 0x35,
    ACT4_CIRCLING_BAT  = 0x36,
    ACT4_SLIME         = 0x37,
    POSEIDON           = 0x38,
    TIN_DOLL           = 0x1E,
    ACT5_METAL_MOUSE   = 0x1F,
    ACT5_BULLDOZER     = 0x20,
    ACT5_HELICOPTER    = 0x21,
    ACT5_WORM          = 0x22,
    ACT5_ROBOT         = 0x24,
    ACT5_MINI_KNIGHT   = 0x25,
    ACT5_MINI_ARCHER   = 0x26,
    ACT5_MINI_HORSEMAN = 0x27,
    ACT5_CATAPULT      = 0x28,
    ACT5_TOWER         = 0x29,
    DEMON_BIRD         = 0x09,
    ACT6_SKULL         = 0x0B,
    ACT6_ORB           = 0x0C,
    ACT6_GHOST         = 0x0D,
    ACT6_SNAKE         = 0x0E,
    ACT6_FIRE          = 0x0F,
    ACT6_SKELETON      = 0x10,
    ACT6_PURPLE_KNIGHT = 0x11,
    ACT6_RED_KNIGHT    = 0x12,
    ACT6_FIRE2         = 0x13,
    ACT6_SKULL2        = 0x14,
    ACT6_MIMIC         = 0x15,
    ACT6_DOLL          = 0x16,
    ACT6_CHESS_KNIGHT  = 0x17,
    ACT7_DEMON         = 0x0A,
    ACT7_FLY           = 0x0B,
    ACT7_BRICK         = 0x0C,
    DREAM_NO_ENEMY     = 0xFF,
};


class Lair {
public:
    Lair();
    ~Lair();

    Lair& operator= (const Lair& OtherLair);
    bool NoFishLairPosition(void);
    bool NoMetalLairPosition(void);
    bool NoGhostLairPosition(void);
    bool MustBeMetalLairPosition(void);
    bool MustBeGhostLairPosition(void);
    bool MustNotRandomizeLairPosition(void);
    bool MustNotBeUpwardsLairPosition(void);

    bool isMetal ();
    bool isSpirit ();
    bool isSoul ();
    const char* enemyName ();

    static bool canRandomizeOrientation (ActID act, EnemyType enemy);

    void log ();
    void logCsv ();

    ActID         act;          /* 0A */
    int           address;      // For sprites
    unsigned char area;         // these three were formerly PositionData
    unsigned char x;
    unsigned char y;
    LairType      spawnType;    /* from 10 to 11 */
    unsigned char numEnemies;   /* 13 */
    unsigned char spawnRate;    /* 14 */
    EnemyType     enemy;        /* 15 */
    unsigned char orientation;  /* 17 */
};

class LairList {
public:
    LairList ();
    ~LairList ();

    static Lair originalLairs[NUMBER_OF_LAIRS];
    Lair lairList[NUMBER_OF_LAIRS];

    static void readOriginalLairs (fstream &ROMFile);
    void copyOriginalLairs ();
    void logLairs ();
    void lairStats ();
};

class LairProfile {
public:
    LairProfile ();
    ~LairProfile ();

    virtual void roll (Lair& lair, Lair& originalLair);
};

class LairProfileA : public LairProfile {
public:
    LairProfileA (WorldFlags& flags);
    ~LairProfileA ();

    WorldFlags* worldFlags;
    Random::WeightedPicker* normalTypePicker;
    Random::WeightedPicker* upDownTypePicker;
    Random::WeightedPicker* singleCountPicker;
    Random::WeightedPicker* multiCountPicker;
    Random::WeightedPicker* multiCountReducedPicker;
    Random::WeightedPicker* spawnRatePickers[4];

    // Reduce the multispawn count to reduce lag or make some areas faster
    bool reduced;
    // Force a lair to be proximity spawn, probably to reduce lag
    bool forceProx;

    void roll (Lair& lair, Lair& originalLair);
};

class LairProfileClassic : public LairProfile {
public:
    LairProfileClassic ();
    ~LairProfileClassic ();

    Random::WeightedPicker* typePicker;
    Random::WeightedPicker* typePicker2;

    void roll (Lair& lair, Lair& originalLair);
};

class LairProfileTwo : public LairProfile {
public:
    LairProfileTwo ();
    ~LairProfileTwo ();

    void roll (Lair& lair, Lair& originalLair);
};

class LairProfileSprite : public LairProfile {
public:
    LairProfileSprite ();
    ~LairProfileSprite ();

    void roll (Lair& lair, Lair& originalLair);
};

void readOriginalSprites (Lair sprites[], std::fstream &ROMFile);

#endif // __LAIRS_H__
