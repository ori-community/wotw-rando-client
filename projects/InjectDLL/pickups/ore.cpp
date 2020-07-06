#include <common.h>
#include <interception_macros.h>
#include <pickups/pickups.h>
#include <uber_states/uber_state_helper.h>

// Taken from dump.cs
enum class WorldMapIconType : int32_t
{
    value__,
    Keystone = 0,
    Mapstone = 1,
    BreakableWall = 2,
    BreakableWallBroken = 3,
    StompableFloor = 4,
    StompableFloorBroken = 5,
    EnergyGateTwo = 6,
    EnergyGateOpen = 7,
    KeystoneDoorFour = 8,
    KeystoneDoorOpen = 9,
    AbilityPedestal = 10,
    HealthUpgrade = 11,
    EnergyUpgrade = 12,
    SavePedestal = 13,
    AbilityPoint = 14,
    KeystoneDoorTwo = 15,
    Invisible = 16,
    Experience = 17,
    MapstonePickup = 18,
    EnergyGateTwelve = 19,
    EnergyGateTen = 20,
    EnergyGateEight = 21,
    EnergyGateSix = 22,
    EnergyGateFour = 23,
    SpiritShard = 24,
    NPC = 25,
    QuestItem = 26,
    ShardSlotUpgrade = 27,
    Teleporter = 28,
    Ore = 29,
    HealthFragment = 33,
    EnergyFragment = 34,
    Seed = 35,
    QuestStart = 30,
    QuestEnd = 31,
    RaceStart = 32,
    RaceEnd = 36,
    Eyestone = 37,
    WatermillDoor = 40,
    TempleDoor = 41,
    SmallDoor = 42,
    Shrine = 43,
    Loremaster = 50,
    Weaponmaster = 51,
    Gardener = 52,
    Mapmaker = 53,
    Shardtrader = 54,
    Wanderer = 55,
    Treekeeper = 56,
    Builder = 57,
    Kwolok = 58,
    Statistician = 59,
    CreepHeart = 60,
    Miner = 61,
    Spiderling = 62,
    Moki = 63,
    MokiBrave = 64,
    MokiAdventurer = 65,
    MokiArtist = 66,
    MokiDarkness = 67,
    MokiFashionable = 68,
    MokiFisherman = 69,
    MokiFrozen = 70,
    MokiKwolokAmulet = 71,
    MokiSpyglass = 72,
    Ku = 73,
    IceFisher = 74,
    Siira = 75
};

INTERCEPT(4093520, int32_t, GameWorld__GetCollectedIconTypeCount, (app::GameWorld* this_ptr, app::WorldMapIconType__Enum type)) {
    auto value = GameWorld__GetCollectedIconTypeCount(this_ptr, type);
    if (static_cast<int32_t>(type) == static_cast<int32_t>(WorldMapIconType::Ore))
        value = get_ore();

    return value;
}

INTERCEPT(5814720, void, SeinPickupProcessor__OnCollectOrePickup, (app::SeinPickupProcessor* this_ptr, app::OrePickup* orePickup)) {
	collecting_pickup = true;
	SeinPickupProcessor__OnCollectOrePickup(this_ptr, orePickup);
    collecting_pickup = false;
}

INTERCEPT(8453568, void, SeinLevel__set_Ore, (app::SeinLevel* this_ptr, int32_t value)) {
	if(collecting_pickup)
		return;

	SeinLevel__set_Ore(this_ptr, value);
}
