package wotw.server.bingo

import wotw.io.messages.protobuf.UberId
import wotw.server.api.AggregationStrategyRegistry
import wotw.server.api.on
import wotw.server.api.sync

fun coopStates() = (
                tpIds.values + /*ksDoorIds.values +*/ safeMaxLevers + seedQuestStates + corruptedHeartIds.values +
                questIds.values + pickupIds.values + unsortedCoop
        )
fun multiStates() = (0..1500).map{UberId(12, it)}
val tpIds = mapOf(
    "savePedestalMidnightBurrows" to UberId(24922, 42531),
    "savePedestalInkwaterMarsh" to UberId(21786, 10185),
    "savePedestalHowlsDen" to UberId(11666, 61594),
    "savePedestalLumaPoolsA" to UberId(945, 58183),
    "waterLoweredNearLumaTP" to UberId(5377, 63173),
    "savePedestalLumaPoolsB" to UberId(945, 1370),
    "savePedestalWellspring" to UberId(53632, 18181),
    "savePedestalBaursReach" to UberId(28895, 54235),
    "savePedestalKwoloksHollow" to UberId(937, 26601),
    "kwoloksHollowBackupState" to UberId(6, 106),
    "savePedestalMouldwood" to UberId(18793, 38871),
    "savePedestalWillowsEnd" to UberId(16155, 41465),
    "savePedestalWillowsEndShriek" to UberId(16155, 50867),
    "savePedestalSilentWoodsA" to UberId(58674, 7071),
    "savePedestalSilentWoodsB" to UberId(58674, 1965),
    "savePedestalWindsweptWastesA" to UberId(58674, 10029),
    "savePedestalWindsweptWastesB" to UberId(20120, 49994),
    "savePedestalWindtornRuinsA" to UberId(20120, 41398),
    "savePedestalWindtornRuinsB" to UberId(10289, 4928),
    "savePedistalGladesTown" to UberId(42178, 42096),
)

val ksDoorIds = mapOf(
    "Light Burst Tree Door" to UberId(28895, 49900),
    "Reach Trial Door" to UberId(28895, 4290),
    "Regen Tree Door" to UberId(21786, 42309),
    "Howl's Den Door" to UberId(21786, 47445),
    "Luma Pools Door" to UberId(5377, 47621),
    "Eyestone Door" to UberId(937, 64003),
    "Eyes Placed Into Statue" to UberId(937, 1038),
    "Mouldwood Entry Door" to UberId(21786, 59990),
    "Mouldwood Lower Door" to UberId(18793, 10758),
    "Silent Woods West Door" to UberId(58674, 21500),
    "Silent Woods East Door" to UberId(18793, 41544),
    "Midnight Burrows Door" to UberId(18793, 3171),
    "Windswept Wastes Door" to UberId(20120, 28786),
)

val seedQuestStates = listOf(
    UberId(42178, 47651),
    UberId(42178, 16254),
    UberId(42178, 33011),
    UberId(42178, 64583),
    UberId(42178, 38393),
    UberId(42178, 40006),
)

val corruptedHeartIds = mapOf(
    "Wind Spinners" to UberId(16155,42976),
    "Spinning Lasers" to UberId(16155,54940),
    "Upper Heart" to UberId(16155, 24290),
    "Burrow Heart" to UberId(16155, 3588),
    "Laser Boss" to UberId(16155, 28478),
    "Redirect Puzzle" to UberId(16155, 65277),
    "Boulder Escape Heart" to UberId(16155, 41488),
    "Lower Left Heart" to UberId(16155, 60752),
)

val questIds = mapOf(
    "The Silent Teeth" to UberId(937, 34641),
    "The Missing Key " to UberId(48248, 51645),
    "Into the Burrows" to UberId(48248, 18458),
    "The Lost Compass" to UberId(14019, 20667),
    "A Little Braver" to UberId(14019, 15983),
    "Family Reunion" to UberId(14019, 27804),
    "The Tree Keeper" to UberId(14019, 59708),
    "A Diamond in the Rough" to UberId(14019, 61011),
    "Kwolok's Wisdom" to UberId(14019, 50597),
    "The Silent Map" to UberId(14019, 24683),
    "Breaking the Mould" to UberId(14019, 45931),
    "Lost in Paradise" to UberId(14019, 35087),
    "The Highest Reach" to UberId(14019, 8973),
    "Beneath Shifting Sands" to UberId(14019, 35399),
    "Hand to Hand" to UberId(14019, 26318),
    "Rebuilding the Glades" to UberId(14019, 44578),
    "Regrowing the Glades" to UberId(14019, 26394),
    "FindToad" to UberId(14019, 48794),
)
//    "Into The Darkness" to UberId(14019, 33776), bad to sync for reasons



val pickupIds = mapOf(
    "NotARealPickup.VoiceOfTheWoods" to UberId(46462, 59806),
    "MarshSpawn.RockHC" to UberId(21786, 60210),
    "MarshSpawn.FirstPickupEX" to UberId(21786, 49485),
    "MarshSpawn.GrappleHC" to UberId(21786, 25761),
    "MarshSpawn.BridgeEX" to UberId(21786, 6987),
    "MarshSpawn.ResilienceShard" to UberId(23987, 59173),
    "MarshSpawn.ResilienceOre" to UberId(21786, 29892),
    "MarshSpawn.BashEC" to UberId(21786, 7152),
    "MarshSpawn.PreLupoEX" to UberId(9593, 5929),
    "MarshSpawn.LupoMap" to UberId(48248, 18767),
    "MarshSpawn.RegenTree" to UberId(0, 77),
    "MarshSpawn.LeverEC" to UberId(21786, 17920),
    "MarshSpawn.LeftTokkEX" to UberId(21786, 59513),
    "MarshSpawn.FightRoomEX" to UberId(9593, 42047),
    "MarshSpawn.CaveKS" to UberId(21786, 64677),
    "MarshSpawn.TokkKeystoneQuest" to UberId(48248, 51645),
    "MarshSpawn.CaveOre" to UberId(9593, 23858),
    "MarshSpawn.LongSwimEX" to UberId(21786, 23154),
    "MarshSpawn.BurrowOre" to UberId(9593, 20382),
    "MarshSpawn.LifepactShard" to UberId(23987, 50415),
    "MarshSpawn.BurrowsApproachLedgeEX" to UberId(24922, 32076),
    "MarshSpawn.CrusherSwimEX" to UberId(24922, 62138),
    "MarshSpawn.TokkTabletQuest" to UberId(48248, 18458),
    "MarshSpawn.RecklessShard" to UberId(23987, 9864),
    "MarshSpawn.FangEC" to UberId(21786, 61706),
    "MarshSpawn.FangQI" to UberId(14019, 27539),
    "MarshSpawn.MokkFangQuest" to UberId(14019, 15983),
    "MarshSpawn.DamageTree" to UberId(0, 121),
    "MidnightBurrows.LeftKS" to UberId(24922, 60358),
    "MidnightBurrows.RightKS" to UberId(24922, 47244),
    "MidnightBurrows.UpperKS" to UberId(24922, 34250),
    "MidnightBurrows.LowerKS" to UberId(24922, 33535),
    "MidnightBurrows.LupoMap" to UberId(48248, 45538),
    "MidnightBurrows.DeflectorShard" to UberId(24922, 46311),
    "MidnightBurrows.TabletQI" to UberId(14019, 52747),
    "HowlsDen.UpperEX" to UberId(21786, 43668),
    "HowlsDen.RightHC" to UberId(21786, 28908),
    "HowlsDen.LeftHC" to UberId(9593, 61304),
    "HowlsDen.AboveDoorKS" to UberId(21786, 22068),
    "HowlsDen.MagnetShard" to UberId(21786, 63545),
    "HowlsDen.SwordTree" to UberId(0, 100),
    "HowlsDen.BoneOre" to UberId(21786, 2046),
    "HowlsDen.AboveTPEX" to UberId(21786, 16206),
    "HowlsDen.LaserKS" to UberId(21786, 2852),
    "HowlsDen.CombatShrine" to UberId(24922, 13993),
    "HowlsDen.DoubleJumpEX" to UberId(9593, 17818),
    "HowlsDen.StickyShard" to UberId(23987, 27134),
    "HowlsDen.DoubleJumpTree" to UberId(0, 5),
    "MarshPastOpher.TrialLeftEX" to UberId(9593, 5253),
    "MarshPastOpher.TrialOre" to UberId(9593, 25989),
    "MarshPastOpher.TrialEC" to UberId(9593, 27562),
    "MarshPastOpher.TrialHC" to UberId(21786, 20194),
    "MarshPastOpher.TrialRightEX" to UberId(21786, 10413),
    "MarshPastOpher.CombatShrine" to UberId(21786, 18109),
    "MarshPastOpher.SwingPoleEX" to UberId(9593, 59344),
    "MarshPastOpher.LeftEyestone" to UberId(21786, 27433),
    "MarshPastOpher.RightEyestone" to UberId(21786, 37225),
    "MarshPastOpher.BowEC" to UberId(21786, 10295),
    "MarshPastOpher.BowTree" to UberId(0, 97),
    "MarshPastOpher.CeilingEX" to UberId(21786, 50255),
    "MarshPastOpher.PoolsPathEC" to UberId(9593, 26457),
    "MarshPastOpher.PoolsPathEX" to UberId(945, 10833),
    "WestHollow.CrusherHC" to UberId(937, 61897),
    "WestHollow.FarLeftEX" to UberId(937, 16163),
    "WestHollow.RockPuzzleEX" to UberId(937, 2538),
    "WestHollow.HiddenEC" to UberId(937, 8518),
    "WestHollow.QuickshotShard" to UberId(23987, 61017),
    "WestHollow.SwimEC" to UberId(937, 24175),
    "WestHollow.LupoMap" to UberId(48248, 3638),
    "WestHollow.TrialHC" to UberId(937, 2463),
    "WestHollow.BelowLupoEX" to UberId(937, 48192),
    "WestHollow.AboveDashEX" to UberId(937, 61744),
    "WestHollow.DashRightEX" to UberId(937, 37926),
    "WestHollow.CrusherEX" to UberId(937, 50176),
    "WestHollow.DashTree" to UberId(0, 102),
    "EastHollow.HandToHandMap" to UberId(14019, 26318),
    "EastHollow.GladesApproachOre" to UberId(937, 10729),
    "EastHollow.HornBeetleFightEX" to UberId(937, 13413),
    "EastHollow.SpikeLanternEX" to UberId(937, 5568),
    "EastHollow.SecretRoofEX" to UberId(937, 45987),
    "EastHollow.MortarEX" to UberId(937, 19529),
    "EastHollow.BashEC" to UberId(937, 23772),
    "EastHollow.BashHC" to UberId(13428, 59730),
    "EastHollow.BashEX" to UberId(937, 30182),
    "EastHollow.BashTree" to UberId(0, 0),
    "EastHollow.KwolokAmuletQuest" to UberId(14019, 50597),
    "EastHollow.RightKwolokEX" to UberId(58674, 20983),
    "EastHollow.SilentSwimEC" to UberId(58674, 9583),
    "EastHollow.SplinterShard" to UberId(23987, 62973),
    "EastHollow.KwolokSwimOre" to UberId(46462, 37897),
    "EastHollow.KwolokSwimLeftEX" to UberId(46462, 29054),
    "EastHollow.KwolokSwimRightEX" to UberId(46462, 20780),
    "EastHollow.DepthsExteriorEX" to UberId(18793, 42980),
    "GladesTown.HandToHandPouch" to UberId(14019, 26318),
    "GladesTown.HandToHandLantern" to UberId(14019, 26318),
    "GladesTown.HandToHandCanteen" to UberId(14019, 26318),
    "GladesTown.HandToHandSoup" to UberId(14019, 26318),
    "GladesTown.FamilyReunionKey" to UberId(14019, 27804),
    "GladesTown.AcornQI" to UberId(14019, 2782),
    "GladesTown.MokiAcornQuest" to UberId(14019, 33776),
    "GladesTown.HoleHutEC" to UberId(42178, 52786),
    "GladesTown.AboveGromHC" to UberId(44310, 29043),
    "GladesTown.LupoSwimHC" to UberId(44310, 17523),
    "GladesTown.UpperOre" to UberId(42178, 27110),
    "GladesTown.LowerOre" to UberId(42178, 23125),
    "GladesTown.ArcingShard" to UberId(23987, 23015),
    "GladesTown.BountyShard" to UberId(23987, 14014),
    "GladesTown.LupoSoupEX" to UberId(42178, 51468),
    "GladesTown.BraveMokiHutEX" to UberId(42178, 13327),
    "GladesTown.MotayHutEX" to UberId(42178, 57455),
    "GladesTown.HoleHutEX" to UberId(42178, 30520),
    "GladesTown.UpperLeftEX" to UberId(42178, 59623),
    "GladesTown.LupoSwimMiddleEX" to UberId(42178, 9780),
    "GladesTown.CaveBurrowEX" to UberId(42178, 18448),
    "GladesTown.BelowHoleHutEX" to UberId(42178, 6117),
    "GladesTown.KeyMokiHutEX" to UberId(42178, 51934),
    "GladesTown.AboveTpEX" to UberId(42178, 42762),
    "GladesTown.AboveCaveEX" to UberId(42178, 30206),
    "GladesTown.LupoSwimLeftEX" to UberId(42178, 37028),
    "GladesTown.UpdraftCeilingEX" to UberId(42178, 63404),
    "GladesTown.LeafPileEX" to UberId(42178, 44748),
    "GladesTown.DamageTree" to UberId(0, 120),
    "GladesTown.RebuildTheGlades" to UberId(14019, 44578),
    "GladesTown.TwillenGemQuest" to UberId(23987, 14832),
    "GladesTown.RegrowTheGlades" to UberId(14019, 26394),
    "WestGlades.GrappleEX" to UberId(53632, 12019),
    "WestGlades.AbovePlantEX" to UberId(937, 31036),
    "WestGlades.LowerPoolEX" to UberId(937, 40657),
    "WestGlades.UpperPoolEX" to UberId(937, 45744),
    "WestGlades.SwimEC" to UberId(937, 17761),
    "WestGlades.LeftOre" to UberId(937, 6703),
    "WestGlades.RightOre" to UberId(937, 11846),
    "WestGlades.ShrineHC" to UberId(44310, 36911),
    "WestGlades.CombatShrine" to UberId(44310, 9902),
    "OuterWellspring.RightWallOre" to UberId(53632, 25556),
    "OuterWellspring.RightWallEC" to UberId(53632, 1911),
    "OuterWellspring.RightWallEX" to UberId(53632, 51706),
    "OuterWellspring.TrialOre" to UberId(37858, 58286),
    "OuterWellspring.UltraGrappleShard" to UberId(23987, 12104),
    "OuterWellspring.HiddenHC" to UberId(53632, 17403),
    "OuterWellspring.EntranceRoofEX" to UberId(53632, 42264),
    "OuterWellspring.WheelEX" to UberId(53632, 6500),
    "OuterWellspring.BasementEC" to UberId(53632, 6869),
    "OuterWellspring.LifeHarvestShard" to UberId(23987, 53934),
    "OuterWellspring.SwimEX" to UberId(53632, 62356),
    "OuterWellspring.SwimOre" to UberId(53632, 21124),
    "OuterWellspring.TheLostCompass" to UberId(14019, 20667),
    "InnerWellspring.ThornShard" to UberId(23987, 31426),
    "InnerWellspring.ThornEX" to UberId(37858, 22107),
    "InnerWellspring.ThreeWheelsEX" to UberId(37858, 45906),
    "InnerWellspring.WaterSwitchEX" to UberId(37858, 45656),
    "InnerWellspring.DrainHC" to UberId(37858, 25833),
    "InnerWellspring.DrainEX" to UberId(37858, 41380),
    "InnerWellspring.LaserOre" to UberId(37858, 58846),
    "InnerWellspring.LeverEC" to UberId(37858, 57552),
    "InnerWellspring.LupoEX" to UberId(37858, 41911),
    "InnerWellspring.LupoMap" to UberId(48248, 1590),
    "InnerWellspring.ShortcutWheelEX" to UberId(37858, 33063),
    "InnerWellspring.GrappleTreeEX" to UberId(37858, 31136),
    "InnerWellspring.GrappleTree" to UberId(0, 57),
    "InnerWellspring.AboveSpinArenaEX" to UberId(37858, 64086),
    "InnerWellspring.HandToHandHerbs" to UberId(14019, 26318),
    "InnerWellspring.RotateRoomEX" to UberId(37858, 52110),
    "InnerWellspring.RotateRoomOre" to UberId(37858, 47533),
    "InnerWellspring.NeedleQI" to UberId(53632, 41227),
    "InnerWellspring.LibraryEX" to UberId(37858, 59022),
    "InnerWellspring.AboveTpEX" to UberId(37858, 2797),
    "InnerWellspring.BlueMoonSeed" to UberId(14019, 24142),
    "InnerWellspring.SwimOre" to UberId(37858, 32932),
    "InnerWellspring.EscapeRevisitEX" to UberId(37858, 56444),
    "InnerWellspring.WaterEscape" to UberId(37858, 12379),
    "PoolsApproach.CurrentEX" to UberId(945, 10682),
    "PoolsApproach.AboveWheelEX" to UberId(945, 14530),
    "PoolsApproach.MillPathHC" to UberId(945, 37243),
    "PoolsApproach.MillPathEC" to UberId(945, 21334),
    "PoolsApproach.MillPathEX" to UberId(945, 58723),
    "PoolsApproach.BurrowsPathEX" to UberId(21786, 21727),
    "EastPools.RightOre" to UberId(5377, 34852),
    "EastPools.KwolokAmuletQI" to UberId(14019, 53103),
    "EastPools.TwoCrushersEX" to UberId(5377, 13832),
    "EastPools.CurrentEX" to UberId(5377, 17396),
    "EastPools.BelowLeverEX" to UberId(5377, 27204),
    "EastPools.AboveDoorOre" to UberId(5377, 19694),
    "EastPools.PurpleWallHC" to UberId(5377, 63201),
    "EastPools.HandToHandSpyglass" to UberId(14019, 26318),
    "EastPools.AboveTpEX" to UberId(5377, 7540),
    "EastPools.LupoOre" to UberId(5377, 12235),
    "EastPools.UltraBashShard" to UberId(23987, 25996),
    "EastPools.FightRoomHC" to UberId(5377, 45774),
    "EastPools.EnergyHarvestShard" to UberId(5377, 40328),
    "EastPools.LupoEX" to UberId(5377, 35440),
    "EastPools.LupoMap" to UberId(48248, 1557),
    "EastPools.BehindCrusherEX" to UberId(5377, 18345),
    "EastPools.GrassSeed" to UberId(14019, 28662),
    "UpperPools.LowerKS" to UberId(5377, 46926),
    "UpperPools.UpperLeftKS" to UberId(5377, 35091),
    "UpperPools.UpperMidKS" to UberId(5377, 16426),
    "UpperPools.UpperRightKS" to UberId(5377, 41881),
    "UpperPools.FishPoolEX" to UberId(5377, 33110),
    "UpperPools.FishPoolOre" to UberId(5377, 31434),
    "UpperPools.BubblesEC" to UberId(5377, 1600),
    "UpperPools.LeftBubblesEX" to UberId(5377, 628),
    "UpperPools.RightBubblesEX" to UberId(5377, 21860),
    "UpperPools.SwimDashTree" to UberId(0, 104),
    "UpperPools.CurrentEX" to UberId(5377, 52791),
    "UpperPools.RoofEX" to UberId(5377, 33180),
    "UpperPools.WaterfallEC" to UberId(5377, 32750),
    "WestPools.BurrowEX" to UberId(5377, 62180),
    "WestPools.BurrowOre" to UberId(5377, 65019),
    "WestPools.TpEX" to UberId(5377, 25391),
    "WestPools.EscapeRevisitEX" to UberId(5377, 44122),
    "WestPools.ForestsStrength" to UberId(945, 49747),
    "WoodsEntry.LastTreeBranch" to UberId(14019, 59708),
    "WoodsEntry.DollQI" to UberId(14019, 57399),
    "WoodsEntry.TreeSeed" to UberId(14019, 7470),
    "WoodsEntry.MudPitEX" to UberId(58674, 8487),
    "WoodsEntry.LedgeOre" to UberId(58674, 28710),
    "WoodsEntry.LeafPileEX" to UberId(58674, 22472),
    "WoodsEntry.TpEX" to UberId(58674, 59691),
    "WoodsEntry.LowerKS" to UberId(58674, 40073),
    "WoodsEntry.UpperKS" to UberId(58674, 11736),
    "WoodsMain.RightKS" to UberId(58674, 43033),
    "WoodsMain.UpperKS" to UberId(58674, 19769),
    "WoodsMain.LeftKS" to UberId(58674, 42531),
    "WoodsMain.LowerKS" to UberId(58674, 780),
    "WoodsMain.BehindWallOre" to UberId(58674, 26274),
    "WoodsMain.LowerLeafPileEX" to UberId(58674, 42158),
    "WoodsMain.MiddleLeafPileEX" to UberId(58674, 33893),
    "WoodsMain.UpperLeafPileEX" to UberId(58674, 30908),
    "WoodsMain.YellowWallEX" to UberId(58674, 59714),
    "WoodsMain.HiddenOre" to UberId(58674, 20713),
    "WoodsMain.HiddenEX" to UberId(58674, 54516),
    "WoodsMain.BelowKeystonesEX" to UberId(58674, 23186),
    "WoodsMain.BehindDoorRoofEX" to UberId(58674, 64057),
    "WoodsMain.PetrifiedHowlEX" to UberId(58674, 17974),
    "WoodsMain.OverflowShard" to UberId(23987, 25183),
    "WoodsMain.CombatShrine" to UberId(58674, 29265),
    "WoodsMain.ShrineEX" to UberId(58674, 32647),
    "WoodsMain.FeedingGroundsEX" to UberId(58674, 64484),
    "LowerReach.BelowBaurEX" to UberId(28895, 55384),
    "LowerReach.AboveBaurLowerEX" to UberId(28895, 24533),
    "LowerReach.AboveBaurUpperEX" to UberId(28895, 3777),
    "LowerReach.IcefallOre" to UberId(28895, 58675),
    "LowerReach.IcefallEX" to UberId(28895, 45337),
    "LowerReach.AboveDoorEX" to UberId(28895, 38143),
    "LowerReach.HiddenOre" to UberId(28895, 47529),
    "LowerReach.LupoMap" to UberId(48248, 29604),
    "LowerReach.MeltIceEX" to UberId(28895, 4301),
    "LowerReach.BurrowEX" to UberId(28895, 45066),
    "LowerReach.TPLeftEX" to UberId(28895, 36231),
    "LowerReach.BelowLupoEX" to UberId(28895, 38049),
    "LowerReach.BreakWallEX" to UberId(42178, 40609),
    "LowerReach.WindBottomEX" to UberId(28895, 35045),
    "LowerReach.WindHiddenEX" to UberId(28895, 54373),
    "LowerReach.HandToHandHat" to UberId(14019, 26318),
    "LowerReach.SnowballHC" to UberId(28895, 40744),
    "LowerReach.RoofLeftEX" to UberId(28895, 53283),
    "LowerReach.RoofRightEX" to UberId(28895, 46711),
    "LowerReach.FractureShard" to UberId(23987, 36359),
    "LowerReach.EscapeRevisitEX" to UberId(28895, 46404),
    "LowerReach.ForestsMemory" to UberId(28895, 25522),
    "LowerReach.RightKS" to UberId(28895, 29898),
    "LowerReach.UpperLeftKS" to UberId(28895, 10823),
    "LowerReach.MiddleLeftKS" to UberId(28895, 37444),
    "LowerReach.BottomLeftKS" to UberId(28895, 18358),
    "LowerReach.TrialEX" to UberId(28895, 22761),
    "LowerReach.CatalystShard" to UberId(23987, 897),
    "UpperReach.LifeForceShard" to UberId(23987, 19630),
    "UpperReach.LifeForceEX" to UberId(28287, 32414),
    "UpperReach.LowerKS" to UberId(28895, 1053),
    "UpperReach.UpperKS" to UberId(28895, 50368),
    "UpperReach.MiddleLeftKS" to UberId(28895, 22382),
    "UpperReach.MiddleRightKS" to UberId(28895, 9949),
    "UpperReach.SoupOre" to UberId(28895, 23795),
    "UpperReach.SwingPoleEX" to UberId(28895, 40089),
    "UpperReach.SwimEX" to UberId(28895, 40242),
    "UpperReach.LightBurstTree" to UberId(0, 51),
    "UpperReach.TreeOre" to UberId(28895, 39291),
    "UpperReach.WellEX" to UberId(28895, 7597),
    "UpperReach.SpringSeed" to UberId(14019, 32376),
    "UpperReach.HiddenEX" to UberId(28895, 2129),
    "UpperDepths.EntrySpikesEX" to UberId(18793, 19004),
    "UpperDepths.EntryRoofEX" to UberId(18793, 15396),
    "UpperDepths.EntryOre" to UberId(18793, 35351),
    "UpperDepths.RightEntryKS" to UberId(18793, 1914),
    "UpperDepths.LeftEntryKS" to UberId(18793, 58148),
    "UpperDepths.SwimEC" to UberId(18793, 26618),
    "UpperDepths.TeleporterEX" to UberId(18793, 29979),
    "UpperDepths.LeftHealthKS" to UberId(18793, 53953),
    "UpperDepths.RightHealthKS" to UberId(18793, 23986),
    "UpperDepths.LightcatcherSeed" to UberId(14019, 8192),
    "UpperDepths.BossPathEX" to UberId(18793, 18395),
    "UpperDepths.KeystoneHC" to UberId(18793, 42235),
    "UpperDepths.HiveEX" to UberId(18793, 6573),
    "UpperDepths.ForestsEyes" to UberId(18793, 63291),
    "LowerDepths.RaceStartHC" to UberId(18793, 62694),
    "LowerDepths.BelowDoorOre" to UberId(18793, 836),
    "LowerDepths.SpiritSurgeShard" to UberId(23987, 986),
    "LowerDepths.HandToHandSilk" to UberId(14019, 26318),
    "LowerDepths.CombatShrine" to UberId(18793, 31937),
    "LowerDepths.SwimEC" to UberId(18793, 28175),
    "LowerDepths.LupoMap" to UberId(48248, 48423),
    "LowerDepths.LeftEX" to UberId(18793, 2881),
    "LowerDepths.RightEX" to UberId(18793, 23799),
    "LowerDepths.FlashTree" to UberId(0, 62),
    "LowerWastes.WestTPOre" to UberId(7228, 54494),
    "LowerWastes.PurpleWallEX" to UberId(7228, 56821),
    "LowerWastes.SunsetViewEX" to UberId(7228, 52086),
    "LowerWastes.SandBridgeOre" to UberId(20120, 46919),
    "LowerWastes.EerieGemQI" to UberId(14019, 58342),
    "LowerWastes.MuncherTunnelEC" to UberId(20120, 11785),
    "LowerWastes.SandPotHC" to UberId(20120, 62264),
    "LowerWastes.SandPotEX" to UberId(20120, 57781),
    "LowerWastes.MuncherPitEX" to UberId(20120, 10397),
    "LowerWastes.BottomRightEX" to UberId(20120, 224),
    "LowerWastes.BottomRightHC" to UberId(20120, 12941),
    "LowerWastes.LastStandShard" to UberId(23987, 50364),
    "LowerWastes.LastStandEX" to UberId(20120, 33275),
    "LowerWastes.MuncherClimbEX" to UberId(20120, 57133),
    "LowerWastes.SkeetoHiveEX" to UberId(20120, 8910),
    "LowerWastes.HandToHandMapstone" to UberId(14019, 26318),
    "LowerWastes.LupoMap" to UberId(48248, 61146),
    "LowerWastes.BurrowTree" to UberId(0, 101),
    "LowerWastes.BurrowTreeEX" to UberId(20120, 19113),
    "LowerWastes.UpperPathEC" to UberId(20120, 50026),
    "LowerWastes.UpperPathEX" to UberId(20120, 48829),
    "LowerWastes.UpperPathHiddenEX" to UberId(20120, 17798),
    "LowerWastes.UpperPathHC" to UberId(20120, 59046),
    "LowerWastes.EastTPOre" to UberId(20120, 40245),
    "UpperWastes.LowerKS" to UberId(7228, 20282),
    "UpperWastes.UpperKS" to UberId(7228, 62117),
    "UpperWastes.TurmoilShard" to UberId(23987, 48605),
    "UpperWastes.KSDoorEX" to UberId(7228, 35329),
    "UpperWastes.LedgeEC" to UberId(20120, 22354),
    "UpperWastes.MissileSpawnEX" to UberId(20120, 30740),
    "UpperWastes.PurpleWallEX" to UberId(20120, 52812),
    "UpperWastes.PurpleWallHC" to UberId(20120, 18965),
    "UpperWastes.RoofEX" to UberId(20120, 2013),
    "UpperWastes.SpinLasersRightEX" to UberId(7228, 54275),
    "UpperWastes.SpinLasersMiddleEX" to UberId(7228, 48993),
    "UpperWastes.SpinLasersLowerEX" to UberId(7228, 61548),
    "UpperWastes.FlowersSeed" to UberId(14019, 20601),
    "UpperWastes.WallOre" to UberId(7228, 8370),
    "WindtornRuins.EscapeRevisitEC" to UberId(10289, 44555),
    "WindtornRuins.Seir" to UberId(10289, 22102),
    "WindtornRuins.HandToHandComplete" to UberId(14019, 26318),
    "WeepingRidge.Ore" to UberId(36153, 3013),
    "WeepingRidge.LaunchTree" to UberId(0, 8),
    "WeepingRidge.SpikeClimbEX" to UberId(36153, 36521),
    "WeepingRidge.PortalEX" to UberId(36153, 12077),
    "WillowsEnd.SpikesOre" to UberId(16155, 38979),
    "WillowsEnd.EntryEX" to UberId(16155, 49381),
    "WillowsEnd.PoisonfallHC" to UberId(16155, 46270),
    "WillowsEnd.LupoMap" to UberId(48248, 4045),
    "WillowsEnd.WindSpinOre" to UberId(16155, 9230),
    "WillowsEnd.RedirectEX" to UberId(16155, 55446),
    "WillowsEnd.UpperLeftEX" to UberId(36153, 23902),
    "WillowsEnd.UpperRightEX" to UberId(36153, 3662),
    "TwillenShop.Overcharge" to UberId(2, 1),
    "TwillenShop.TripleJump" to UberId(2, 2),
    "TwillenShop.Wingclip" to UberId(2, 3),
    "TwillenShop.Swap" to UberId(2, 5),
    "TwillenShop.LightHarvest" to UberId(2, 19),
    "TwillenShop.Vitality" to UberId(2, 22),
    "TwillenShop.Energy" to UberId(2, 26),
    "TwillenShop.Finesse" to UberId(2, 40),
    "OpherShop.WaterBreath" to UberId(1, 23),
    "OpherShop.Spike" to UberId(1, 74),
    "OpherShop.SpiritSmash" to UberId(1, 98),
    "OpherShop.Teleport" to UberId(1, 105),
    "OpherShop.SpiritStar" to UberId(1, 106),
    "OpherShop.Blaze" to UberId(1, 115),
    "OpherShop.Sentry" to UberId(1, 116),
)

val safeMaxLevers = listOf(
    UberId(26019, 23382),  // convertedSetupsGymGroup.leverAndDoor
    UberId(37858, 34433),  // waterMillStateGroupDescriptor.wheelLever
    UberId(37858, 31187),  // waterMillStateGroupDescriptor.recedingWater
    UberId(28895, 62198),  // baursReachGroup.leverSetup
    UberId(937, 22419),  // kwolokGroupDescriptor.leverDoor
    UberId(18793, 14503),  // mouldwoodDepthsGroup.leverAndDoorA
    UberId(937, 57028),  // kwolokGroupDescriptor.leverDoorA
    UberId(937, 59920),  // kwolokGroupDescriptor.switchDoorUberState
    UberId(21786, 50453),  // swampStateGroup.leverAndDoor
    UberId(5377, 14488),  // lumaPoolsStateGroup.leverAndDoor
    UberId(5377, 6398),  // lumaPoolsStateGroup.leverAndDoor
    UberId(20120, 48009),  // windsweptWastesGroupDescriptor.verticalPlatformLeverA
    UberId(20120, 12902),  // windsweptWastesGroupDescriptor.leverStateA
    UberId(10289, 41277),  // windtornRuinsGroup.lever
    UberId(937, 6778),  // kwolokGroupDescriptor.mokiGateOpened
)

val unsortedCoop = listOf(
    UberId(48248, 41666), // 4000 hint
    UberId(48248, 19396), // Glades hint
    UberId(48248, 57987), // Woods hint

    UberId(10289, 3804),      // windtornRuinsGroup.openedDesertRuins
    UberId(10289, 43103),      // windtornRuinsGroup.rootBreakPillarFall
    UberId(16155, 18906),      // willowsEndGroup.fallingPortal
    UberId(16155, 20672),      // willowsEndGroup.creepA
    UberId(16155, 21899),      // willowsEndGroup.breakableWallC
    UberId(16155, 2235),      // willowsEndGroup.fallingPortalB
    UberId(16155, 3096),      // willowsEndGroup.breakableWallA
    UberId(16155, 33738),      // willowsEndGroup.breakableWallC
    UberId(16155, 36353),      // willowsEndGroup.secretWall
    UberId(16155, 37558),      // willowsEndGroup.breakableWallB
    UberId(18793, 11676),      // mouldwoodDepthsGroup.creepB
    UberId(18793, 13349),      // mouldwoodDepthsGroup.shortcutWall
    UberId(18793, 15855),      // mouldwoodDepthsGroup.mouldwoodDepthsHBreakableWallB
    UberId(18793, 21022),      // mouldwoodDepthsGroup.breakableWallA
    UberId(18793, 21994),      // mouldwoodDepthsGroup.puzzleSolvedSequenceCompleted
    UberId(18793, 25789),      // mouldwoodDepthsGroup.mouldwoodGateOpen
    UberId(18793, 29066),      // mouldwoodDepthsGroup.creepA
    UberId(18793, 5315),      // mouldwoodDepthsGroup.secretWall
    UberId(18793, 64772),      // mouldwoodDepthsGroup.mouldwoodDepthsHBreakableWallA
    UberId(18793, 65202),      // mouldwoodDepthsGroup.secretWallA
    UberId(20120, 1348),      // windsweptWastesGroupDescriptor.bombableWallA
    UberId(20120, 16172),      // windsweptWastesGroupDescriptor.projectileBreakableWall
    UberId(20120, 33775),      // windsweptWastesGroupDescriptor.bombableWallB
    UberId(20120, 43231),      // windsweptWastesGroupDescriptor.bombableWall
    UberId(20120, 51985),      // windsweptWastesGroupDescriptor.bombableWallA
    UberId(20120, 55388),      // windsweptWastesGroupDescriptor.bombableWallE
    UberId(20120, 60960),      // windsweptWastesGroupDescriptor.bombableWallD
    UberId(20120, 9095),      // windsweptWastesGroupDescriptor.breakableWall
    UberId(21786, 10467),      // swampStateGroup.attackableSwitchA
    UberId(21786, 11343),      // swampStateGroup.breakableWallA
    UberId(21786, 22091),      // swampStateGroup.pushBlockState
    UberId(21786, 22570),      // swampStateGroup.breakableWallA
    UberId(21786, 23177),      // swampStateGroup.creepDoor
    UberId(21786, 25147),      // swampStateGroup.creepDoorA
    UberId(21786, 25291),      // swampStateGroup.creepDoorE
    UberId(21786, 29636),      // swampStateGroup.creepDoorB
    UberId(21786, 30928),      // swampStateGroup.breakableWallA
    UberId(21786, 33430),      // swampStateGroup.creepDoor
    UberId(21786, 34008),      // swampStateGroup.breakableWallB
    UberId(21786, 35166),      // swampStateGroup.creepDoorA
    UberId(21786, 35350),      // swampStateGroup.attackableSwitchC
    UberId(21786, 35598),      // swampStateGroup.enemyArenaComplete
    UberId(21786, 35925),      // swampStateGroup.breakableWallA
    UberId(21786, 40424),      // swampStateGroup.breakableWall
    UberId(21786, 41817),      // swampStateGroup.doorBState
    UberId(21786, 44253),      // swampStateGroup.secretWall
    UberId(21786, 45648),      // swampStateGroup.attackableSwitchB
    UberId(21786, 50691),      // swampStateGroup.doorAState
    UberId(21786, 53932),      // swampStateGroup.creepDoorA
    UberId(21786, 61900),      // swampStateGroup.stompableFloor
    UberId(21786, 6994),      // swampStateGroup.stompableFloor
    UberId(21786, 876),      // swampStateGroup.creepDoorD
    UberId(24922, 13349),      // howlsOriginGroup.bellPuzzleSolved
    UberId(24922, 2524),      // howlsOriginGroup.secretWallA
    UberId(24922, 59146),      // howlsOriginGroup.bellPuzzleBSolved
    UberId(26019, 1274),      // convertedSetupsGymGroup.secretWallA
    UberId(28895, 17510),      // baursReachGroup.breakableWallA
    UberId(28895, 20731),      // baursReachGroup.breakableRockWall
    UberId(28895, 27787),      // baursReachGroup.firePedestalBooleanUberState
    UberId(28895, 30566),      // baursReachGroup.firePedestalBooleanUberState
    UberId(28895, 30794),      // baursReachGroup.breakableWall
    UberId(28895, 34098),      // baursReachGroup.breakableWall
    UberId(28895, 37287),      // baursReachGroup.grenadeSwitchA
    UberId(28895, 38120),      // baursReachGroup.breakableRocksE
    UberId(28895, 42209),      // baursReachGroup.enemyArenaComplete
    UberId(28895, 43977),      // baursReachGroup.firePedestal
    UberId(28895, 48757),      // baursReachGroup.grenadeSwitchA
    UberId(28895, 49329),      // baursReachGroup.breakyBridge
    UberId(28895, 58337),      // baursReachGroup.doorOpened
    UberId(28895, 59394),      // baursReachGroup.grenadeSwitchA
    UberId(28895, 61789),      // baursReachGroup.firePedestalBooleanUberState
    UberId(28895, 7616),      // baursReachGroup.breakableRocksA
    UberId(28895, 8664),      // baursReachGroup.stompableFloorA
    UberId(28895, 8934),      // baursReachGroup.breakableWallB
    UberId(31136, 3441),      // weepingRidgeElevatorFightGroup.willowsEndGateOpened
    UberId(36153, 23584),      // corruptedPeakGroup.elevatorCompleteState
    UberId(36153, 60795),      // corruptedPeakGroup.breakableWall
    UberId(37858, 16604),      // waterMillStateGroupDescriptor.waterMillEntranceFallingDiscUberStateDescriptor
    UberId(37858, 21874),      // waterMillStateGroupDescriptor.waterMillSecretWallBDestroyed
    UberId(37858, 23644),      // waterMillStateGroupDescriptor.waterMillEntranceDoorUberStateDescriptor
    UberId(37858, 31104),      // waterMillStateGroupDescriptor.poleLowered
    UberId(37858, 31584),      // waterMillStateGroupDescriptor.wheelsActivated
    UberId(37858, 31962),      // waterMillStateGroupDescriptor.waterMillBEntranceTriggerUberStateDescriptor
    UberId(37858, 36070),      // waterMillStateGroupDescriptor.rotationState
    UberId(37858, 50902),      // waterMillStateGroupDescriptor.wheelAActive
    UberId(37858, 60716),      // waterMillStateGroupDescriptor.wheelBActive
    UberId(37858, 6338),      // waterMillStateGroupDescriptor.dashDoor
    UberId(37858, 64055),      // waterMillStateGroupDescriptor.wheelsActivatedEntry
    //UberId(37858, 8487),      // waterMillStateGroupDescriptor.rotatingEnemyArenaStates
    UberId(37858, 9487),      // waterMillStateGroupDescriptor.exitDoorOpen
    UberId(42178, 38905),      // hubUberStateGroup.pyreA
    UberId(42178, 5630),      // hubUberStateGroup.leafPileC
    UberId(42178, 5815),      // hubUberStateGroup.stompableFloorEnterHub
    UberId(44310, 47361),      // wellspringGladesGroup.blowableFlame
    UberId(44310, 55192),      // wellspringGladesGroup.stompableFloorA
    UberId(53632, 2522),      // wellspringGroupDescriptor.lanternAndCreepA
    UberId(53632, 3382),      // wellspringGroupDescriptor.secretWallB
    UberId(53632, 62781),      // wellspringGroupDescriptor.secretWallA
    UberId(53632, 9366),      // wellspringGroupDescriptor.secretWallC
    UberId(5377, 10782),      // lumaPoolsStateGroup.breakableWallB
    UberId(5377, 15402),      // lumaPoolsStateGroup.dashDoor
    UberId(5377, 15754),      // lumaPoolsStateGroup.bubbleMakerUnblockedA
    UberId(5377, 22978),      // lumaPoolsStateGroup.breakableWallB
    UberId(5377, 24765),      // lumaPoolsStateGroup.bubbleMakerUnblockedA
    UberId(5377, 26170),      // lumaPoolsStateGroup.breakableWallA
    UberId(5377, 29911),      // lumaPoolsStateGroup.loweringWaterState
    UberId(5377, 31145),      // lumaPoolsStateGroup.breakableWallA
    UberId(5377, 35751),      // lumaPoolsStateGroup.bubbleMakerUnblockedB
    UberId(5377, 3831),      // lumaPoolsStateGroup.breakableSecretWallA
    UberId(5377, 4463),      // lumaPoolsStateGroup.breakableWallB
    UberId(5377, 53480),      // lumaPoolsStateGroup.arenaBByteStateSerialized
    UberId(5377, 56302),      // lumaPoolsStateGroup.secretWallA
    UberId(5377, 57453),      // lumaPoolsStateGroup.bubbleMakerUnblocked
    UberId(5377, 58278),      // lumaPoolsStateGroup.bubbleMakerUnblockedB
    UberId(5377, 63922),      // lumaPoolsStateGroup.secretWallA
    UberId(5377, 64337),      // lumaPoolsStateGroup.breakableWall
    UberId(5377, 65413),      // lumaPoolsStateGroup.breakableWallA
    UberId(5377, 8451),      // lumaPoolsStateGroup.breakableWallA
    UberId(58674, 10877),      // _petrifiedForestGroup.leafPile
    UberId(58674, 11400),      // _petrifiedForestGroup.stompableFloor
    UberId(58674, 14313),      // _petrifiedForestGroup.hutDoorUnlocked
    UberId(58674, 17742),      // _petrifiedForestGroup.blowableFlame
    UberId(58674, 20143),      // _petrifiedForestGroup.leafPile
    UberId(58674, 29622),      // _petrifiedForestGroup.stompableFloor
    UberId(58674, 37037),      // _petrifiedForestGroup.leafPile
    UberId(58674, 39950),      // _petrifiedForestGroup.secretWallA
    UberId(58674, 44324),      // _petrifiedForestGroup.creepA
    UberId(58674, 48394),      // _petrifiedForestGroup.creebBulb
    UberId(58674, 49272),      // _petrifiedForestGroup.creepBall
    UberId(58674, 5285),      // _petrifiedForestGroup.blowableFlameA
    UberId(58674, 54686),      // _petrifiedForestGroup.breakableWall
    UberId(58674, 61616),      // _petrifiedForestGroup.petrifiedOwlState
    UberId(58674, 902),      // _petrifiedForestGroup.creepBlocker
    UberId(58674, 9239),      // _petrifiedForestGroup.leafPileB
    UberId(7228, 4034),      // desertAGroup.secretWall
    UberId(937, 10140),      // kwolokGroupDescriptor.secretWallA
    UberId(937, 22716),      // kwolokGroupDescriptor.pressurePlatePuzzle
    UberId(937, 32165),      // kwolokGroupDescriptor.door
    UberId(937, 40225),      // kwolokGroupDescriptor.stompableFloor
    UberId(937, 42245),      // kwolokGroupDescriptor.recedingWaterSetup
    UberId(937, 45349),      // kwolokGroupDescriptor.stompableFloorB
    UberId(937, 54236),      // kwolokGroupDescriptor.brokenWallA
    UberId(937, 59850),      // kwolokGroupDescriptor.doorA
    UberId(945, 12852),      // lagoonStateGroup.tentacleKilled
    UberId(945, 28631),      // lagoonStateGroup.breakableWallA
    UberId(945, 3487),      // lagoonStateGroup.secretWallA
    UberId(945, 39004),      // lagoonStateGroup.breakableWallB
    UberId(945, 43451),      // lagoonStateGroup.secretWallB
    UberId(945, 55795),      // lagoonStateGroup.breakableWallA
    UberId(9593, 17659),      // inkwaterMarshStateGroup.stompableFloor
    UberId(9593, 23319),      // inkwaterMarshStateGroup.breakableWall
    UberId(9593, 25130),      // inkwaterMarshStateGroup.lizardMultiWaveArenaInt
    UberId(9593, 26238),      // inkwaterMarshStateGroup.lanternAndCreepB
    UberId(9593, 34704),      // inkwaterMarshStateGroup.secretWallA
    UberId(9593, 47420),      // inkwaterMarshStateGroup.secretWallA
    UberId(9593, 59418),      // inkwaterMarshStateGroup.enemyRoom
    UberId(9593, 9229)      // inkwaterMarshStateGroup.lanternAndCreepA
 )

val coopAggregation by lazy {
    AggregationStrategyRegistry().apply {
        register(
            sync(tpIds.values),
            sync(safeMaxLevers),
            sync(seedQuestStates),
            sync(corruptedHeartIds.values),
            sync(questIds.values),
            sync(pickupIds.values),
            sync(unsortedCoop),
            sync(multiStates()),
            sync(37858, 8487).on(threshold = 5f), //Wellspring fight room
            sync(5377, 53480).on(threshold = 4f), // pools fight room 2
            sync(9593, 25130).on(threshold = 3f) // double jump lizard fight
        )
    }
}