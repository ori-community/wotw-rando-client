// ReSharper disable once CppMissingIncludeGuard

/**
 * Macro instructions:
 * - GROUP_ID, GROUP_NAME and REGISTER_GROUP:
 *   GROUP_ID and GROUP_NAME set the numeric group ID and the group name for the following definitions.
 *   REGISTER_GROUP must be placed directly after setting GROUP_ID and GROUP_NAME.
 * - DEFINE_NAMED_STATE:
 *   Defines a named uber state. The type cannot be virtual or a linking error will occur (intentional).
 * - DEFINE_NAMED_VIRTUAL_STATE:
 *   Defines a named virtual uber state. The type must be virtual (duh).
 *   The virtual uber state must be registered in register_virtual_uber_states() in
 *   randomizer_uber_states.cpp. This is checked at runtime when running a debug build.
 * - REGISTER_STATES_AT_RUNTIME:
 *   Instead of using DEFINE_NAMED_STATE to define states statically, this can be used to register states
 *   at runtime. This is used for states that are not directly used in the client code and that clutter
 *   the states list (e.g. map segments). Defining the states at runtime has the disatvantage that these
 *   states are not available as StaticUberState, so they are slightly more expensive to fetch and are not
 *   typesafe. The advantage is that they don't clutter the StaticUberState list.
 *   If you use this, a function register_uber_states<"GROUP_NAME"> must exist in randomizer_uber_states.cpp for
 *   the group.
 */

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 0
#define GROUP_NAME "trees"
REGISTER_GROUP
DEFINE_NAMED_STATE(0, "bash", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(5, "doubleJump", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(8, "launch", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(51, "grenade", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(57, "grapple", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(62, "flash", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(77, "regenerate", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(97, "bow", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(100, "sword", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(101, "burrow", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(102, "dash", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(104, "waterDash", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(120, "gladesAncestralLight", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(121, "marshAncestralLight", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 1
#define GROUP_NAME "opherShop"
REGISTER_GROUP
DEFINE_NAMED_STATE(23, "waterBreath", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(74, "spear", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(98, "hammer", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(105, "fastTravel", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(106, "shuriken", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(115, "blaze", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(116, "sentry", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(1074, "explodingSpear", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(1098, "hammerShockwave", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(1106, "staticShuriken", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(1115, "chargeBlaze", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(1116, "rapidSentry", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 2
#define GROUP_NAME "twillenShop"
REGISTER_GROUP
DEFINE_NAMED_STATE(1, "overcharge", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(2, "tripleJump", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(3, "wingclip", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(5, "swap", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(19, "lightHarvest", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(22, "vitality", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(26, "energy", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(40, "finesse", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 3
#define GROUP_NAME "map"
REGISTER_GROUP
DEFINE_NAMED_VIRTUAL_STATE(1, "focusedArea", ReadOnlyVirtualIntUberState)
DEFINE_NAMED_VIRTUAL_STATE(2, "filter", VirtualIntUberState)
DEFINE_NAMED_STATE(12, "inLogicFilterAvailable", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(100, "spoilerFilterAvailable", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(600, "darkenTopLeftCorner", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 4
#define GROUP_NAME "bonusUpgrades"
REGISTER_GROUP
DEFINE_NAMED_STATE(0, "hammerSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(1, "swordSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(2, "blazeCost", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(3, "chargeBlazeCost", SerializedFloatUberState, 2.0)
DEFINE_NAMED_STATE(4, "spearCost", SerializedFloatUberState, 2.0)
DEFINE_NAMED_STATE(5, "shurikenCost", SerializedFloatUberState, 0.5)
DEFINE_NAMED_STATE(6, "sentryCost", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(7, "bowCost", SerializedFloatUberState, 0.25)
DEFINE_NAMED_STATE(8, "chargeBowCost", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(9, "regenerateCost", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(10, "flashCostInitial", SerializedFloatUberState, 0.4)
DEFINE_NAMED_STATE(11, "flashCostPerSecond", SerializedFloatUberState, 0.1)
DEFINE_NAMED_STATE(12, "grenadeCost", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(13, "quickshotIntervalDurationMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(14, "spearSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(35, "maxDoubleJumps", SerializedByteUberState, 1)
DEFINE_NAMED_STATE(36, "maxAirDashes", SerializedByteUberState, 1)
DEFINE_NAMED_STATE(37, "maxSentries", SerializedByteUberState, 3)
DEFINE_NAMED_STATE(38, "maxShurikens", SerializedByteUberState, 1)
DEFINE_NAMED_STATE(39, "maxLaunches", SerializedByteUberState, 1)
DEFINE_NAMED_STATE(40, "maxGrenades", SerializedByteUberState, 1)
DEFINE_NAMED_STATE(41, "grenadesExplodeOnCollision", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(42, "unchargedGrenadesBashable", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(43, "grenadesChargeWhileAirborne", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(44, "grenadeChargeDurationMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(45, "splinterGrenadeCount", SerializedByteUberState, 0)
DEFINE_NAMED_STATE(46, "sentryShotsPerBurst", SerializedByteUberState, 3)
DEFINE_NAMED_STATE(47, "sentryFireRateMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(48, "splinterShurikenCount", SerializedByteUberState, 0)
DEFINE_NAMED_STATE(49, "splinterShurikenAngle", SerializedFloatUberState, 35.0)
DEFINE_NAMED_STATE(70, "meltingBow", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(71, "meltingBlaze", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(72, "meltingSword", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(73, "meltingHammer", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(74, "meltingSpear", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(75, "meltingShuriken", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(80, "launchSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(81, "dashDistanceMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(82, "bashSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(83, "burrowSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(84, "burrowDashSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(85, "swimSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(86, "waterDashSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(87, "jumpHeightMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(88, "wallJumpSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(89, "doubleJumpSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(90, "grappleSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(91, "regenerateSpeedMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(92, "shurikenDamageMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(93, "flashDamageMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(94, "flashDamageIntervalDurationMultiplier", SerializedFloatUberState, 1.0)
DEFINE_NAMED_STATE(95, "shurikenBashable", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(96, "flapDamage", SerializedFloatUberState, 0.0)
DEFINE_NAMED_STATE(97, "splinterLongerRange", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 5
#define GROUP_NAME "player"
REGISTER_GROUP
DEFINE_NAMED_VIRTUAL_STATE(0, "spiritLight", VirtualIntUberState)
DEFINE_NAMED_VIRTUAL_STATE(1, "gorlekOre", VirtualIntUberState)
DEFINE_NAMED_VIRTUAL_STATE(2, "keystones", VirtualIntUberState)
DEFINE_NAMED_VIRTUAL_STATE(3, "shardSlots", VirtualIntUberState)
DEFINE_NAMED_VIRTUAL_STATE(10, "baseMaxHealth", VirtualIntUberState)
DEFINE_NAMED_VIRTUAL_STATE(11, "maxHealth", ReadOnlyVirtualIntUberState)
DEFINE_NAMED_VIRTUAL_STATE(12, "health", VirtualFloatUberState)
DEFINE_NAMED_VIRTUAL_STATE(20, "baseMaxEnergy", VirtualFloatUberState)
DEFINE_NAMED_VIRTUAL_STATE(21, "maxEnergy", ReadOnlyVirtualFloatUberState)
DEFINE_NAMED_VIRTUAL_STATE(22, "energy", VirtualFloatUberState)
DEFINE_NAMED_VIRTUAL_STATE(40, "positionX", VirtualFloatUberState)
DEFINE_NAMED_VIRTUAL_STATE(41, "positionY", VirtualFloatUberState)
DEFINE_NAMED_VIRTUAL_STATE(50, "area", ReadOnlyVirtualIntUberState)
DEFINE_NAMED_VIRTUAL_STATE(100, "isTeleporting", ReadOnlyVirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(200, "mouseWorldPositionX", VirtualFloatUberState)
DEFINE_NAMED_VIRTUAL_STATE(201, "mouseWorldPositionY", VirtualFloatUberState)
DEFINE_NAMED_VIRTUAL_STATE(300, "wheelOpen", VirtualBooleanUberState)
DEFINE_NAMED_STATE(1000, "inputLocked", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 6
#define GROUP_NAME "modifications"
REGISTER_GROUP
DEFINE_NAMED_STATE(0, "enableShriekBarrier", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(1, "disableTeleporterMapActivation", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(8, "disablePickupCollision", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(9, "stompThroughPortals", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(10, "stompIntoWater", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(11, "disableKuInHollow", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(13, "fixMeetKwolokUnderwaterOOB", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(14, "fixTeleporterChainOOB", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(15, "fixBelowPoolsEscapeStartSoftlock", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(16, "fixShopAnywhere", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(17, "patch2Knockback", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(18, "fastTravelUnderwater", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(19, "fastTravelDuringCombatShrine", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(20, "disableWillowHeartCutscenes", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(21, "fastTravelAtMapstone", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(22, "showShriekHealthDuringEscape", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(23, "fixCatAndMouseSoftlock", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(37, "fixPauseFloat", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(38, "fixMoraTriggerSkip", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(40, "disableEastWoodsTrunkSlowZone", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(41, "disableEastWoodsTrunkSlowZoneStateActive", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(50, "disableMeetKwolokUnderwaterSlowZone", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(100, "disableShriekEscapeSand", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(101, "disableWeepingRidgeEntranceSand", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(102, "knockKnockWellspring", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(103, "disableDespawningNearbyEnemies", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(200, "showSmallEntrances", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(300, "spawnTuley", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(301, "spawnTuleyStateActive", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(310, "spawnOpherEverywhere", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(311, "spawnOpherEverywhereStateActive", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(320, "spawnTwillenEverywhere", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(321, "spawnTwillenEverywhereStateActive", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(400, "stormLiftedInMarsh", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(401, "stormLiftedInMarshStateActive", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(410, "regenerateTreeDrained", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(411, "regenerateTreeDrainedStateActive", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(420, "baurSneezeWithBlaze", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(421, "baurSneezeWithFlash", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(500, "canOpenMokiFatherHut", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(501, "canOpenMokiFatherHutStateActive", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(510, "canOpenEyestoneDoor", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(511, "canOpenEyestoneDoorStateActive", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(600, "disableRepairTheSpiritWellCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(601, "disableRoofsOverHeadsCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(602, "disableOnwardsAndUpwardsCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(603, "disableDwellingRepairsCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(604, "disableThornySituationCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(605, "disableClearTheCaveEntranceCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(606, "disableTheGorlekTouchCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(610, "disableLightcatchersCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(611, "disableSelaFlowersCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(612, "disableBlueMoonCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(613, "disableStickyGrassCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(614, "disableSpringPlantsCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(615, "disableLastTreeCutscene", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(701, "bell1", SerializedByteUberState, 1)
DEFINE_NAMED_STATE(702, "bell2", SerializedByteUberState, 2)
DEFINE_NAMED_STATE(703, "bell3", SerializedByteUberState, 3)
DEFINE_NAMED_STATE(704, "bell4", SerializedByteUberState, 3)
DEFINE_NAMED_STATE(705, "bell5", SerializedByteUberState, 1)
DEFINE_NAMED_STATE(706, "bell6", SerializedByteUberState, 2)
DEFINE_NAMED_STATE(707, "bell7", SerializedByteUberState, 1)
DEFINE_NAMED_STATE(708, "bell8", SerializedByteUberState, 0)
DEFINE_NAMED_STATE(709, "bell9", SerializedByteUberState, 0)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 8
#define GROUP_NAME "customBooleans"
REGISTER_GROUP
REGISTER_STATES_AT_RUNTIME

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 9
#define GROUP_NAME "customIntegers"
REGISTER_GROUP
REGISTER_STATES_AT_RUNTIME

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 10
#define GROUP_NAME "customFloats"
REGISTER_GROUP
REGISTER_STATES_AT_RUNTIME

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 11
#define GROUP_NAME "bingo"
REGISTER_GROUP
DEFINE_NAMED_STATE(0, "squares", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1, "lines", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(2, "rank", SerializedIntUberState, 0)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 12
#define GROUP_NAME "multiworld"
REGISTER_GROUP
REGISTER_STATES_AT_RUNTIME

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 13
#define GROUP_NAME "bosses"
REGISTER_GROUP
DEFINE_NAMED_VIRTUAL_STATE(800, "howlFightActive", ReadOnlyVirtualBooleanUberState)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 14
#define GROUP_NAME "stats"
REGISTER_GROUP
DEFINE_NAMED_STATE(0, "pickupsCollected", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1, "pickupsTotal", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(2, "keystonesCollected", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(3, "spiritLightCollected", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(4, "spiritLightSpent", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(5, "oreCollected", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(6, "oreSpent", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(10, "kills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(11, "swordKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(12, "hammerKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(13, "bowKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(14, "spearKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(15, "sentryKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(16, "blazeKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(17, "grenadeKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(19, "shurikenKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(20, "launchKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(21, "flashKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(22, "bashKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(23, "drownedEnemies", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(40, "minerKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(41, "flierKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(42, "tentacleKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(43, "slimeKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(44, "fishKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(45, "exploderKills", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1000, "pickupsCollectedMarsh", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1001, "pickupsCollectedHollow", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1002, "pickupsCollectedGlades", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1003, "pickupsCollectedWellspring", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1004, "pickupsCollectedWoods", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1005, "pickupsCollectedReach", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1006, "pickupsCollectedDepths", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1007, "pickupsCollectedPools", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1008, "pickupsCollectedWastes", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1009, "pickupsCollectedRuins", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1010, "pickupsCollectedWillow", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1011, "pickupsCollectedBurrows", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1012, "pickupsCollectedShop", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1100, "pickupsTotalMarsh", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1101, "pickupsTotalHollow", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1102, "pickupsTotalGlades", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1103, "pickupsTotalWellspring", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1104, "pickupsTotalWoods", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1105, "pickupsTotalReach", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1106, "pickupsTotalDepths", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1107, "pickupsTotalPools", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1108, "pickupsTotalWastes", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1109, "pickupsTotalRuins", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1110, "pickupsTotalWillow", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1111, "pickupsTotalBurrows", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1112, "pickupsTotalShop", SerializedIntUberState, 0)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 15
#define GROUP_NAME "lupoShop"
REGISTER_GROUP
DEFINE_NAMED_STATE(19396, "hcMapIcons", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(41666, "shardMapIcons", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(57987, "ecMapIcons", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 16
#define GROUP_NAME "worldEvents"
REGISTER_GROUP
DEFINE_NAMED_STATE(2000, "cleanWater", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 17
#define GROUP_NAME "gromShop"
REGISTER_GROUP
DEFINE_NAMED_STATE(15068, "theGorlekTouch", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(16586, "clearTheCaveEntrance", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(16825, "repairTheSpiritWell", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(18751, "thornySituation", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(23607, "roofsOverHeads", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(40448, "onwardsAndUpwards", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(51230, "dwellingRepairs", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 18
#define GROUP_NAME "debugRenderer"
REGISTER_GROUP
DEFINE_NAMED_VIRTUAL_STATE(1, "enabled", VirtualBooleanUberState)
DEFINE_NAMED_STATE(2, "positionTriggers", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 19
#define GROUP_NAME "shrines"
REGISTER_GROUP
DEFINE_NAMED_STATE(0, "gladesWave", IntUberState, 0)
DEFINE_NAMED_STATE(1, "marshWave", IntUberState, 0)
DEFINE_NAMED_STATE(2, "howlsDenWave", IntUberState, 0)
DEFINE_NAMED_STATE(3, "depthsWave", IntUberState, 0)
DEFINE_NAMED_STATE(4, "woodsWave", IntUberState, 0)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 20
#define GROUP_NAME "tuleyShop"
REGISTER_GROUP
DEFINE_NAMED_STATE(16254, "selaFlowers", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(33011, "blueMoon", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(38393, "springPlants", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(40006, "lastTree", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(47651, "lightcatchers", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(64583, "stickyGrass", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 21
#define GROUP_NAME "gladesProjects"
REGISTER_GROUP
DEFINE_NAMED_STATE(15068, "theGorlekTouch", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(16254, "selaFlowersPlanted", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(16586, "clearTheCaveEntrance", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(16825, "repairTheSpiritWell", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(18751, "thornySituation", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(23607, "roofsOverHeads", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(33011, "blueMoonPlanted", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(38393, "springPlantsPlanted", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(40006, "lastTreePlanted", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(40448, "onwardsAndUpwards", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(47651, "lightcatchersPlanted", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(51230, "dwellingRepairs", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(64583, "stickyGrassPlanted", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 22
#define GROUP_NAME "mapSegments"
REGISTER_GROUP
REGISTER_STATES_AT_RUNTIME

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 23
#define GROUP_NAME "tracker"
REGISTER_GROUP
DEFINE_NAMED_STATE(1, "launchFragmentsCollected", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(2, "launchFragmentsRequired", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(100, "treesCollected", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(101, "treesRequired", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(102, "wispsCollected", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(103, "wispsRequired", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(104, "questsFinished", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(105, "questsRequired", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(106, "relicsCollected", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(107, "relicsRequired", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(200, "showVisitedEntranceCount", SerializedBooleanUberState, false)
DEFINE_NAMED_STATE(500, "currentAreaHasUncollectedRelic", SerializedBooleanUberState, false)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 24
#define GROUP_NAME "skills"
REGISTER_GROUP
DEFINE_NAMED_VIRTUAL_STATE(0, "bash", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(3, "wallJump", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(5, "doubleJump", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(8, "launch", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(14, "glide", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(15, "spiritFlame", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(23, "waterBreath", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(31, "resilience", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(32, "healthEfficiency", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(39, "energyEfficiency", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(51, "grenade", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(57, "grapple", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(62, "flash", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(74, "spear", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(77, "regenerate", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(97, "bow", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(98, "hammer", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(99, "torch", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(100, "sword", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(101, "burrow", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(102, "dash", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(104, "waterDash", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(106, "shuriken", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(108, "seir", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(109, "bowCharge", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(112, "spiritMagnet", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(115, "blaze", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(116, "sentry", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(118, "flap", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(119, "weaponCharge", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(120, "gladesAncestralLight", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(121, "marshAncestralLight", VirtualBooleanUberState)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 25
#define GROUP_NAME "shards"
REGISTER_GROUP
DEFINE_NAMED_VIRTUAL_STATE(1, "overcharge", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(2, "tripleJump", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(3, "wingclip", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(4, "bounty", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(5, "swap", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(6, "crescentShotDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(7, "pierce", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(8, "magnet", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(9, "splinter", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(10, "blazeDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(11, "frostDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(12, "lifeLeechDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(13, "reckless", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(14, "quickshot", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(15, "explosiveDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(16, "ricochet", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(17, "climbDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(18, "resilience", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(19, "spiritLightHarvest", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(20, "compassDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(21, "waterbreathingDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(22, "vitality", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(23, "lifeHarvest", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(24, "spiritWellShieldDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(25, "energyHarvest", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(26, "energy", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(27, "lifePact", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(28, "lastStand", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(29, "harvestOfLightDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(30, "sense", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(31, "underwaterEfficiencyDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(32, "ultraBash", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(33, "ultraGrapple", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(34, "overflow", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(35, "thorn", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(36, "catalyst", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(37, "supressor", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(38, "turmoil", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(39, "sticky", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(40, "finesse", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(41, "spiritSurge", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(42, "overchargeDeprecated", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(43, "lifeforce", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(44, "deflector", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(45, "stinger", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(46, "fracture", VirtualBooleanUberState)
DEFINE_NAMED_VIRTUAL_STATE(47, "arcing", VirtualBooleanUberState)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 27
#define GROUP_NAME "entrances"
REGISTER_GROUP
DEFINE_NAMED_STATE(1, "lupoShopOutside", SerializedIntUberState, 2)
DEFINE_NAMED_STATE(2, "lupoShopInside", SerializedIntUberState, 1)
DEFINE_NAMED_STATE(3, "lastHutOutside", SerializedIntUberState, 4)
DEFINE_NAMED_STATE(4, "lastHutInside", SerializedIntUberState, 3)
DEFINE_NAMED_STATE(5, "hutAboveMotayOutside", SerializedIntUberState, 6)
DEFINE_NAMED_STATE(6, "hutAboveMotayInside", SerializedIntUberState, 5)
DEFINE_NAMED_STATE(7, "treeHutOutside", SerializedIntUberState, 8)
DEFINE_NAMED_STATE(8, "treeHutInside", SerializedIntUberState, 7)
DEFINE_NAMED_STATE(9, "mokiFatherHutOutside", SerializedIntUberState, 10)
DEFINE_NAMED_STATE(10, "mokiFatherHutInside", SerializedIntUberState, 9)
DEFINE_NAMED_STATE(11, "storageHutOutside", SerializedIntUberState, 12)
DEFINE_NAMED_STATE(12, "storageHutInside", SerializedIntUberState, 11)
DEFINE_NAMED_STATE(13, "caveOutside", SerializedIntUberState, 14)
DEFINE_NAMED_STATE(14, "caveInside", SerializedIntUberState, 13)
DEFINE_NAMED_STATE(15, "wellspring1stFloorBottomOutside", SerializedIntUberState, 16)
DEFINE_NAMED_STATE(16, "wellspring1stFloorBottomInside", SerializedIntUberState, 15)
DEFINE_NAMED_STATE(17, "wellspring1stFloorTopOutside", SerializedIntUberState, 18)
DEFINE_NAMED_STATE(18, "wellspring1stFloorTopInside", SerializedIntUberState, 17)
DEFINE_NAMED_STATE(19, "wellspring2ndFloorOutside", SerializedIntUberState, 20)
DEFINE_NAMED_STATE(20, "wellspring2ndFloorInside", SerializedIntUberState, 19)
DEFINE_NAMED_STATE(21, "wellspring3rdFloorOutside", SerializedIntUberState, 22)
DEFINE_NAMED_STATE(22, "wellspring3rdFloorInside", SerializedIntUberState, 21)
DEFINE_NAMED_STATE(23, "reachSeedOutside", SerializedIntUberState, 24)
DEFINE_NAMED_STATE(24, "reachSeedInside", SerializedIntUberState, 23)
DEFINE_NAMED_STATE(25, "teddyHutOutside", SerializedIntUberState, 26)
DEFINE_NAMED_STATE(26, "teddyHutInside", SerializedIntUberState, 25)
DEFINE_NAMED_STATE(27, "ruinsOutside", SerializedIntUberState, 28)
DEFINE_NAMED_STATE(28, "ruinsInside", SerializedIntUberState, 27)
DEFINE_NAMED_STATE(29, "willowBottomOutside", SerializedIntUberState, 30)
DEFINE_NAMED_STATE(30, "willowBottomInside", SerializedIntUberState, 29)
DEFINE_NAMED_STATE(31, "willowTopOutside", SerializedIntUberState, 32)
DEFINE_NAMED_STATE(32, "willowTopInside", SerializedIntUberState, 31)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 28
#define GROUP_NAME "entrancesKnown"
REGISTER_GROUP
DEFINE_NAMED_STATE(1, "lupoShopOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(2, "lupoShopInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(3, "lastHutOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(4, "lastHutInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(5, "hutAboveMotayOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(6, "hutAboveMotayInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(7, "treeHutOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(8, "treeHutInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(9, "mokiFatherHutOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(10, "mokiFatherHutInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(11, "storageHutOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(12, "storageHutInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(13, "caveOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(14, "caveInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(15, "wellspring1stFloorBottomOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(16, "wellspring1stFloorBottomInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(17, "wellspring1stFloorTopOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(18, "wellspring1stFloorTopInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(19, "wellspring2ndFloorOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(20, "wellspring2ndFloorInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(21, "wellspring3rdFloorOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(22, "wellspring3rdFloorInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(23, "reachSeedOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(24, "reachSeedInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(25, "teddyHutOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(26, "teddyHutInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(27, "ruinsOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(28, "ruinsInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(29, "willowBottomOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(30, "willowBottomInside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(31, "willowTopOutside", SerializedBooleanUberState, true)
DEFINE_NAMED_STATE(32, "willowTopInside", SerializedBooleanUberState, true)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 29
#define GROUP_NAME "settings"
REGISTER_GROUP
DEFINE_NAMED_VIRTUAL_STATE(0, "randomCurrencyNames", VirtualBooleanUberState)

#undef GROUP_ID
#undef GROUP_NAME
#define GROUP_ID 31
#define GROUP_NAME "rng"
REGISTER_GROUP
DEFINE_NAMED_STATE(0, "seed", SerializedIntUberState, 0)
DEFINE_NAMED_STATE(1, "seedStateActive", SerializedBooleanUberState, false)
DEFINE_NAMED_VIRTUAL_STATE(10, "randomInteger", ReadOnlyVirtualIntUberState)
DEFINE_NAMED_VIRTUAL_STATE(11, "randomFloat", ReadOnlyVirtualFloatUberState)
DEFINE_NAMED_VIRTUAL_STATE(12, "randomBoolean", ReadOnlyVirtualBooleanUberState)
