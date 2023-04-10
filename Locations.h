#ifndef __LOCATIONS_H__
#define __LOCATIONS_H__

#include "ItemPool.h"

#define ALL_LOCATIONS_SIZE 300
#define MAX_LOCATION_NAME_LENGTH 60

/*
    This is an index into some lists of ROM address data used
    to insert the items and update text.
*/
enum class NpcItemIndex : unsigned int {
    ITEM_TOOL_SHOP_OWNER = 0,
    ITEM_EMBLEM_A,
    ITEM_GOAT_PEN,
    ITEM_TEDDY,
    ITEM_PASS,
    ITEM_SECRET_CAVE_TILE,
    ITEM_VILLAGE_CHIEF,
    ITEM_MAGICIAN,
    ITEM_CRYSTAL_RECOVERY_SWORD,
    ITEM_CRYSTAL_GRASS_VALLEY,
    ITEM_CRYSTAL_UNDERGROUND_CASTLE,
    ITEM_BIRD_RED_HOT_MIRROR,
    ITEM_CRYSTAL_MAGIC_BELL,
    ITEM_WOODSTIN_TRIO,
    ITEM_GREENWOODS_GUARDIAN,
    ITEM_GREENWOOD_LEAVES,
    ITEM_MOLE_SHIELD_BRACELET,
    ITEM_SQUIRREL_PSYCHO_SWORD,
    ITEM_SQUIRREL_EMBLEM_C,
    ITEM_WATER_SHRINE_TILE,
    ITEM_CRYSTAL_LIGHT_ARROW,
    ITEM_CRYSTAL_LOST_MARSH,
    ITEM_CRYSTAL_WATER_SHRINE,
    ITEM_CRYSTAL_FIRE_SHRINE,
    ITEM_MOUNTAIN_KING,
    ITEM_BOY_MUSHROOM_SHOES,
    ITEM_NOME,
    ITEM_SNAIL_EMBLEM_E,
    ITEM_EMBLEM_F,
    ITEM_CRYSTAL_MOUNTAIN_OF_SOULS,
    ITEM_CRYSTAL_LUNE,
    ITEM_EMBLEM_G,
    ITEM_CHEST_OF_DRAWERS_MYSTIC_ARMOR,
    ITEM_PLANT_HERB,
    ITEM_CAT_DOOR_KEY,
    ITEM_PLANT_ACTINIDIA_LEAVES,
    ITEM_CHEST_OF_DRAWERS_HERB,
    ITEM_MARIE,
    ITEM_MOUSE_SPARK_BOMB,
    ITEM_CRYSTAL_LEOS_LAB_BASEMENT,
    ITEM_CRYSTAL_MODEL_TOWN,
    ITEM_CRYSTAL_POWER_PLANT,
    ITEM_SOLDIER_ELEMENTAL_MAIL,
    ITEM_SUPER_BRACELET,
    ITEM_QUEEN_MAGRIDD,
    ITEM_SOLDIER_PLATINUM_CARD,
    ITEM_MAID_HERB,
    ITEM_EMBLEM_H,
    ITEM_KING_MAGRIDD,
    ITEM_DR_LEO,
    ITEM_HARP_STRING,
    ITEM_MERMAID_HERB,
    ITEM_MERMAID_BUBBLE_ARMOR,
    ITEM_MERMAID_MAGIC_FLARE,
    ITEM_MERMAID_QUEEN,
    ITEM_MERMAID_RED_HOT_STICK,
    ITEM_LUE,
    ITEM_CRYSTAL_ROCKBIRD,
    ITEM_CRYSTAL_SEABED_NEAR_BLESTER,
    ITEM_CRYSTAL_SEABED_NEAR_DUREAN
};

/*
    A purely internal id that we can use to refer to locations
    in logic and management code.
*/
enum class LocationID : unsigned int {
    CHEST_FIRST_SWORD = 0,
    CHEST_GRASS_VALLEY_HYPE_LEFT,
    CHEST_GRASS_VALLEY_HYPE_RIGHT,
    CHEST_UNDERGROUND_CASTLE_FIRST,
    CHEST_UNDERGROUND_CASTLE_SECOND,
    CHEST_UNDERGROUND_CASTLE_THIRD,
    CHEST_UNDERGROUND_CASTLE_LISA,
    CHEST_LEOS_PAINTING_FIRST,
    CHEST_LEOS_PAINTING_METAL,

    NPC_TOOL_SHOP_OWNER,
    SECRET_SOUTHEAST_IVY,
    SECRET_GOAT_PEN,
    NPC_TEDDY,
    SECRET_UNDER_TULIP,
    SECRET_HIDEOUT,
    NPC_VILLAGE_CHIEF,
    NPC_TRIAL_MAGICIAN,
    CRYSTAL_HIDEOUT,
    CRYSTAL_GRASS_VALLEY_HYPE,
    CRYSTAL_UNDERGROUND_CASTLE,

    LAIR_UNDERGROUND_CASTLE_1,
    LAIR_UNDERGROUND_CASTLE_2,
    LAIR_UNDERGROUND_CASTLE_3,
    LAIR_UNDERGROUND_CASTLE_4,
    LAIR_UNDERGROUND_CASTLE_5,
    LAIR_UNDERGROUND_CASTLE_6,
    LAIR_UNDERGROUND_CASTLE_ELEVATOR_TOP,
    LAIR_UNDERGROUND_CASTLE_PART2_1,
    LAIR_UNDERGROUND_CASTLE_PART2_2,
    LAIR_UNDERGROUND_CASTLE_PART2_3,
    LAIR_UNDERGROUND_CASTLE_PART2_4,
    LAIR_UNDERGROUND_CASTLE_PART2_5,
    LAIR_UNDERGROUND_CASTLE_PART2_6,
    LAIR_UNDERGROUND_CASTLE_PART2_7,
    LAIR_UNDERGROUND_CASTLE_PART2_8,
    LAIR_UNDERGROUND_CASTLE_PART2_9,
    LAIR_UNDERGROUND_CASTLE_PART2_LISA,
    LAIR_LEOS_PAINTING1_1,
    LAIR_LEOS_PAINTING1_2,
    LAIR_LEOS_PAINTING2_1,
    LAIR_LEOS_PAINTING3_1,
    LAIR_LEOS_PAINTING3_2,
    LAIR_LEOS_PAINTING3_3,
    LAIR_LEOS_PAINTING3_METAL,
    LAIR_LEOS_PAINTING4_1,
    LAIR_LEOS_PAINTING4_METAL,
    LAIR_LEOS_PAINTING_BOSS,

    CHEST_GREENWOOD_ICE_ARMOR,
    CHEST_GREENWOOD_MONMO_TUNNEL,
    CHEST_WATER_SHRINE_FLOOR1_FAR_SIDE,
    CHEST_WATER_SHRINE_FLOOR2_WATERFALL,
    CHEST_WATER_SHRINE_FLOOR2_SPEARS,
    CHEST_WATER_SHRINE_FLOOR3_SOUTHWEST,
    CHEST_WATER_SHRINE_FLOOR3_SOUTHEAST,
    CHEST_FIRE_SHRINE_FLOOR1,
    CHEST_FIRE_SHRINE_FLOOR2_DISAPPEARING,
    CHEST_FIRE_SHRINE_FLOOR2_METAL,
    CHEST_FIRE_SHRINE_FLOOR3_FIRST,
    CHEST_FIRE_SHRINE_FLOOR3_SECOND,
    CHEST_LIGHT_SHRINE_FLOOR1_SPIRIT,

    NPC_RED_HOT_BIRD,
    CRYSTAL_EMBLEM_TRADE,
    NPC_WOODSTIN_TRIO,
    NPC_GREENWOOD_GUARDIAN,
    SECRET_TURBOS_GRAVE,
    NPC_RIBBON_TRADE_MOLE,
    NPC_NUT_SQUIRREL_TRADE,
    NPC_NUT_SQUIRREL_ROOMMATE,
    SECRET_WATER_SHRINE_BASEMENT,
    CRYSTAL_FIRE_SHRINE_BASEMENT,
    CRYSTAL_LOST_MARSH_END,
    CRYSTAL_WATER_SHRINE2_SPEARS,
    CRYSTAL_FIRE_SHRINE_FLOOR1_METAL,

    LAIR_LOST_MARSH_BEFORE_WATER_1,
    LAIR_LOST_MARSH_BEFORE_WATER_2,
    LAIR_LOST_MARSH_BETWEEN_WATER_AND_FIRE,
    LAIR_LOST_MARSH_AFTER_FIRE_1,
    LAIR_LOST_MARSH_AFTER_FIRE_2,

    LAIR_WATER_SHRINE_B1_CENTER,
    LAIR_WATER_SHRINE_B2_1,
    LAIR_WATER_SHRINE_B2_SPEARS,
    LAIR_WATER_SHRINE_B3_1,
    LAIR_WATER_SHRINE_B3_STATUE_1,
    LAIR_WATER_SHRINE_B3_STATUE_2,
    LAIR_WATER_SHRINE_B2_BACK,

    LAIR_FIRE_SHRINE_B1,
    LAIR_FIRE_SHRINE_B2_SOUTHEAST,
    LAIR_FIRE_SHRINE_B2_SOUTH,
    LAIR_FIRE_SHRINE_B2_NORTHWEST,
    LAIR_FIRE_SHRINE_B2_BACK,
    LAIR_FIRE_SHRINE_B3_1,
    LAIR_FIRE_SHRINE_B3_2,
    LAIR_FIRE_SHRINE_B3_3,
    LAIR_FIRE_SHRINE_B3_4,
    LAIR_FIRE_SHRINE_B3_5,
    LAIR_FIRE_SHRINE_B3_METAL,

    LAIR_LIGHT_SHRINE_B1,
    LAIR_LIGHT_SHRINE_B2_1,
    LAIR_LIGHT_SHRINE_B2_2,
    LAIR_LIGHT_SHRINE_B2_SPIRIT,
    LAIR_LIGHT_SHRINE_STATUE_BOSS,

    CHEST_ST_ELLES_COMMON_HOUSE,
    CHEST_ST_ELLES_LEFT_DOLPHIN,
    CHEST_SEABED_SECRET_TOP_LEFT,
    CHEST_SEABED_SECRET_TOP_RIGHT,
    CHEST_SEABED_SECRET_BOTTOM_LEFT,
    CHEST_SEABED_SECRET_BOTTOM_RIGHT,
    CHEST_SOUTHERTA,
    CHEST_ROCKBIRD_RIGHT,
    CHEST_ROCKBIRD_LEFT,
    CHEST_DUREAN_LAVA,
    CHEST_DUREAN_RIGHT_SIDE,
    CHEST_GHOST_SHIP_ON_SHIP,
    CHEST_GHOST_SHIP_SEABED_PATH,

    NPC_NORTHEAST_HOUSE_MERMAID,
    NPC_COMMON_HOUSE_BOTTOM_MERMAID,
    NPC_COMMON_HOUSE_LEFT_MERMAID,
    NPC_MERMAID_QUEEN,
    NPC_RED_HOT_MERMAID,
    NPC_LUE,
    CRYSTAL_ROCKBIRD,
    CRYSTAL_BLESTER_SEABED_PATH,
    CRYSTAL_DUREAN_SEABED_PATH,

    LAIR_SOUTHERTA_1,
    LAIR_SOUTHERTA_2,
    LAIR_SOUTHERTA_3,
    LAIR_SOUTHERTA_4,
    LAIR_SOUTHERTA_5,
    LAIR_SOUTHERTA_BACK,

    LAIR_SEABED_TO_ROCKBIRD,
    LAIR_SEABED_TO_DUREAN,
    LAIR_SEABED_TO_BLESTER_1,
    LAIR_SEABED_TO_BLESTER_2,
    LAIR_SEABED_TO_BLESTER_3,
    LAIR_SEABED_TO_GHOST_SHIP_1,
    LAIR_SEABED_TO_GHOST_SHIP_2,

    LAIR_ROCKBIRD_LEFT_1,
    LAIR_ROCKBIRD_LEFT_2,
    LAIR_ROCKBIRD_CENTER_1,
    LAIR_ROCKBIRD_CENTER_2,

    LAIR_DUREAN_SOUTH,
    LAIR_DUREAN_WEST,
    LAIR_DUREAN_NORTH,
    LAIR_DUREAN_NORTHEAST,
    LAIR_DUREAN_TIER2_METAL,
    LAIR_DUREAN_TIER2_NORTHWEST,
    LAIR_DUREAN_TIER2_NORTHEAST,
    LAIR_DUREAN_TIER3,
    
    LAIR_BLESTER_BOTTOM_LEFT,
    LAIR_BLESTER_BOTTOM_RIGHT,
    LAIR_BLESTER_MIDDLE_LEFT,
    LAIR_BLESTER_MIDDLE_RIGHT,
    LAIR_BLESTER_TOP_LEFT,

    LAIR_GHOST_SHIP_SKULL_BOSS,

    CHEST_MOUNTAIN_SCREEN1,
    CHEST_MOUNTAIN_HYPE_LEFTMOST,
    CHEST_MOUNTAIN_HYPE_2ND_FROM_LEFT,
    CHEST_MOUNTAIN_HYPE_2ND_FROM_RIGHT,
    CHEST_MOUNTAIN_HYPE_RIGHTMOST,
    CHEST_LAYNOLE_LUCKY_BLADE,
    CHEST_LUNE_PATH_LEFT,
    CHEST_LUNE_PATH_RIGHT,

    NPC_DANCING_GRANDMAS,
    NPC_MOUNTAIN_MIDDLE_LAKE_BOY,
    NPC_NOME,
    NPC_SNAIL_SECRET_ROOM,
    SECRET_LUNE_MUSHROOM_DREAM,
    CRYSTAL_MOUNTAIN_SUMMIT,
    CRYSTAL_LUNE,

    LAIR_MOUNTAIN_SLOPE_LOWER_1,
    LAIR_MOUNTAIN_SLOPE_LOWER_2,
    LAIR_MOUNTAIN_SLOPE_LOWER_3,
    LAIR_MOUNTAIN_SLOPE_MIDDLE_PATH_LEFT,
    LAIR_MOUNTAIN_SLOPE_MIDDLE_PATH_RIGHT,
    LAIR_MOUNTAIN_SLOPE_MIDDLE_TOP,
    LAIR_MOUNTAIN_SLOPE_SUMMIT_1,
    LAIR_MOUNTAIN_SLOPE_SUMMIT_2,
    LAIR_MOUNTAIN_SLOPE_SUMMIT_ICE,

    LAIR_ICE_HILL_1,
    LAIR_ICE_HILL_2,
    LAIR_ICE_HILL_3,
    LAIR_ICE_HILL_4,
    LAIR_ICE_HILL_5,
    LAIR_ICE_HILL_6,

    LAIR_LAYNOLE_1,
    LAIR_LAYNOLE_2,
    LAIR_LAYNOLE_3,
    LAIR_LAYNOLE_4,
    LAIR_LAYNOLE_5,

    LAIR_LUNE_PATH_1,
    LAIR_LUNE_PATH_2,
    LAIR_LUNE_BOTTOM,
    LAIR_LUNE_MIDDLE_LEFT,
    LAIR_LUNE_MIDDLE_RIGHT,
    LAIR_LUNE_MUSHROOM_DREAM,
    LAIR_LUNE_POSEIDON_BOSS,

    CHEST_LEOS_LAB_IN_DOOR,
    CHEST_LEOS_LAB_POWER_PLANT,
    CHEST_MODEL_TOWN1_SOUTH,
    CHEST_MODEL_TOWN1_NORTH_LEFT,
    CHEST_MODEL_TOWN1_NORTH_RIGHT,
    CHEST_MODEL_TOWN2_TOP,
    CHEST_MODEL_TOWN2_BOTTOM,

    SECRET_UNDER_DRAWERS_LOCKED_ROOM,
    NPC_DRAWERS_LOCKED_ROOM,
    NPC_PLANT_THROUGH_MOUSEHOLE,
    NPC_LEOS_CAT_DREAM,
    NPC_UPSTAIRS_PLANT,
    NPC_ATTIC_DRAWERS,
    NPC_MARIE,
    NPC_MOUSE_IN_MOUSEHOLE,
    CRYSTAL_LEOS_BASEMENT,
    CRYSTAL_MODEL_TOWN1,
    CRYSTAL_POWER_PLANT,

    LAIR_LEOS_BASEMENT_B1_UP_FIRST_PIPE,
    LAIR_LEOS_BASEMENT_B1_NORTHWEST,
    LAIR_LEOS_BASEMENT_B1_SOUTHWEST,
    LAIR_LEOS_BASEMENT_B1_BUILD_PIPE_RIGHT,
    LAIR_LEOS_BASEMENT_B1_SMALL_ISLAND_RIGHT,
    LAIR_LEOS_BASEMENT_B1_RIGHT_SIDE_TOP,
    LAIR_LEOS_BASEMENT_B1_RIGHT_SIDE_BOTTOM,
    LAIR_LEOS_BASEMENT_B1_TOP,

    LAIR_LEOS_BASEMENT_B2_RIGHT_FIRE_PIPES,
    LAIR_LEOS_BASEMENT_B2_INSIDE_PIPE,
    LAIR_LEOS_BASEMENT_B2_LEFT_SIDE_1,
    LAIR_LEOS_BASEMENT_B2_LEFT_SIDE_2,
    LAIR_LEOS_BASEMENT_B2_LEFT_SIDE_3,

    LAIR_MODEL_TOWN_1_SOUTHWEST,
    LAIR_MODEL_TOWN_1_FAR_WEST,
    LAIR_MODEL_TOWN_1_WEST_POPUP_LEFT,
    LAIR_MODEL_TOWN_1_WEST_POPUP_RIGHT,
    LAIR_MODEL_TOWN_1_WEST_FIELD,
    LAIR_MODEL_TOWN_1_EAST_POPUP_LEFT,
    LAIR_MODEL_TOWN_1_EAST_POPUP_RIGHT,
    LAIR_MODEL_TOWN_1_SOUTHEAST,

    LAIR_MODEL_TOWN_2_SOUTHWEST,
    LAIR_MODEL_TOWN_2_CENTER_WEST,
    LAIR_MODEL_TOWN_2_NORTHWEST,
    LAIR_MODEL_TOWN_2_NORTHEAST,
    LAIR_MODEL_TOWN_2_SOUTHEAST,

    LAIR_POWER_PLANT,
    LAIR_POWER_PLANT_TIN_DOLL_BOSS,
   
    CHEST_TORTURE_CHAMBER1_LEFT,
    CHEST_TORTURE_CHAMBER1_TOP_RIGHT,
    CHEST_TORTURE_CHAMBER2_NORTH_INVISIBLE,
    CHEST_TORTURE_CHAMBER2_SOUTHWEST_INVISIBLE,
    CHEST_TORTURE_CHAMBER2_MIDDLE_INVISIBLE,
    CHEST_TORTURE_CHAMBER3_NORTHWEST,
    CHEST_RIGHT_TOWER2_LEFT,
    CHEST_RIGHT_TOWER2_RIGHT,
    CHEST_RIGHT_TOWER3_TOP_LEFT,
    CHEST_RIGHT_TOWER3_BOTTOM_RIGHT,

    NPC_SLEEPING_SOLDIER,
    NPC_QUEEN_MAGRIDD,
    SECRET_UNDER_QUEEN_MAGRIDD,
    SECRET_CONCERT_HALL_SOLDIER,
    NPC_SOUTHEAST_MAID_BEHIND_COUNTER,
    SECRET_OUTSIDE_CASTLE,
    NPC_KING_MAGRIDD,
    NPC_LEO_CUTSCENE,
    SECRET_TORTURE_CHAMBER1_TOP_RIGHT,

    LAIR_TORTURE_CHAMBER1_CENTER,
    LAIR_TORTURE_CHAMBER1_NORTHWEST,
    LAIR_TORTURE_CHAMBER2_RIGHT_1,
    LAIR_TORTURE_CHAMBER2_RIGHT_2,
    LAIR_TORTURE_CHAMBER2_RIGHT_3,
    LAIR_TORTURE_CHAMBER2_LEFT_1,
    LAIR_TORTURE_CHAMBER2_LEFT_2,
    LAIR_TORTURE_CHAMBER2_LEFT_3,
    LAIR_TORTURE_CHAMBER3_LEFT,
    LAIR_TORTURE_CHAMBER3_CENTER_LOWER,
    LAIR_TORTURE_CHAMBER3_CENTER_UPPER,
    LAIR_TORTURE_CHAMBER3_RIGHT_TOP,
    LAIR_TORTURE_CHAMBER3_RIGHT_BOTTOM,

    LAIR_LEFT_TOWER_FLOOR1,
    LAIR_LEFT_TOWER_FLOOR2_LEFT,
    LAIR_LEFT_TOWER_FLOOR2_RIGHT,
    LAIR_LEFT_TOWER_FLOOR3_SOUTHEAST,
    LAIR_LEFT_TOWER_FLOOR3_PRISON_SOUTHWEST,
    LAIR_LEFT_TOWER_FLOOR3_PRISON_NORTHEAST,
    LAIR_LEFT_TOWER_FLOOR3_PRISON_NORTHWEST,

    LAIR_RIGHT_TOWER_FLOOR1_NORTHWEST,
    LAIR_RIGHT_TOWER_FLOOR1_SOUTHEAST,
    LAIR_RIGHT_TOWER_FLOOR1_CENTER,
    LAIR_RIGHT_TOWER_FLOOR2_RIGHT,
    LAIR_RIGHT_TOWER_FLOOR2_CENTER_SECRET,
    LAIR_RIGHT_TOWER_FLOOR3,
    LAIR_RIGHT_TOWER_DEMON_BIRD_BOSS,

    CHEST_WORLD_OF_EVIL1_LEFT,
    CHEST_WORLD_OF_EVIL1_RIGHT,
    CHEST_WORLD_OF_EVIL1_TELEPORTER,
    CHEST_WORLD_OF_EVIL2_RIGHT,
    CHEST_WORLD_OF_EVIL3_RIGHT,
    CHEST_WORLD_OF_EVIL3_LEFT
};

struct Location {
    // Type flags
    bool isLair;
    bool isChest;
    bool isNpc;

    // other flags
    bool isMissable;   // Queen's item or chest in fire shrine B2
    bool mustBeUnique; // Mountain King's item

    // randomization results
    ItemIndex itemIndex; // ItemPool entry

    // original and tracking data
    // for chests, index into chest list (ROMData ItemList)
    unsigned char chestId;
    // index used with ROM data for NPC or secret locations
    NpcItemIndex npcItemIndex;
    // For npc revivals the NpcId is in the ItemPool entry
    ItemIndex origItemIndex;
    char name[MAX_LOCATION_NAME_LENGTH];
};

class Locations {
public:
    Locations();
    ~Locations();

    static Location allLocations[ALL_LOCATIONS_SIZE];
    static int allLocationsCount;
    // Make maps for npc id or chest id to location, useful later
    static LocationID npcIdMap[NPC_ID_MAX];
    static LocationID chestIdMap[66];

    static bool NPCOriginallyGivesEXP(LocationID locationIndex);
    static void populateLair (LocationID locationIndex, ItemIndex origItemIndex, Location* flags, const char* name);
    static void populateNpcItem (LocationID locationIndex, ItemIndex origItemIndex, Location* flags, const char* name, NpcItemIndex npcItemIndex);
    static void populateChest (LocationID locationIndex, ItemIndex origItemIndex, Location* flags, const char* name, unsigned char chestId);
    static void populate ();
    static Location* getLocation (LocationID locationId);
    static int itemLocation (ItemIndex itemIndex);
    static void logLocation (const Location& location);
    static void logAllLocations ();
};

void resetFlags (Location& flags);

#endif // __LOCATIONS_H__
