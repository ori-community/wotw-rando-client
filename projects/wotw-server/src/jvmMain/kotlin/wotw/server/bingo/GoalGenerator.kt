package wotw.server.bingo

import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json
import wotw.io.messages.json
import java.time.Instant
import kotlin.random.Random

fun generatePool() = mutableListOf(
    group(
        "Buy # maps",
        bool("Inkwater Marsh", 48248, 18767),
        bool("Midnight Burrows", 48248, 45538),
        bool("Kwoloks Hollow", 48248, 3638),
        bool("The Wellspring", 48248, 1590),
        bool("Luma Pools", 48248, 1557),
        bool("Baurs Reach", 48248, 29604),
        bool("Mouldwood Depths", 48248, 48423),
        bool("Windswept Wastes", 48248, 61146),
        bool("Willows End", 48248, 4045),
        countGoal = { it.nextTriangular(2, 8, 5) },
        maxRepeats = 2
        ),
    group(
        "Buy Weapon Upgrades",
        bool("Exploding Spike", 1, 1074),
        bool("Shock Smash", 1, 1098),
        bool("Static Star", 1, 1106),
        bool("Charge Blaze", 1, 1115),
        bool("Rapid Sentry", 1, 1116),
        maxRepeats = 1
    ),
    group(
        "Get Trees",
        bool("Sword", 0, 100),
        bool("Double Jump", 0, 5),
        bool("Regenerate", 0, 77),
        bool("Bow", 0, 97),
        bool("Dash", 0, 102),
        bool("Bash", 0, 0),
        bool("Grapple", 0, 57),
        bool("Water Dash", 0, 104),
        bool("Flash", 0, 62),
        bool("Light Burst", 0, 51),
        bool("Burrow", 0, 101),
        bool("Launch", 0, 8),
        bool("Ancestral Light (Glades)", 0, 120),
        bool("Ancestral Light (Burrows)", 0, 121),
        countGoal = { it.nextTriangular(3, 11, 6) },
    ),
    bool("Find Bash", 6, 1000),
    bool("Find Feather", 6, 1014),
    bool("Find Light Burst", 6, 1051),
    bool("Find Flash", 6, 1062),
    bool("Find Burrow", 6, 1101),
    bool("Find Water Dash", 6, 1104),
    bool("Find Flap", 6, 1118),
    bool("Find Clean Water", 6, 2000),
    group(
        "Collect Wisps",
        bool("Strength", 945, 49747),
        bool("Memory", 28895, 25522),
        bool("Eyes", 18793, 63291),
        bool("Heart", 10289, 22102),
        bool("Voice", 46462, 59806),
        maxRepeats = 2
    ),
    group(
        "Complete Combat Shrines",
        bool("Howl's Den", 24922, 13993),
        bool("Inkwater Marsh", 21786, 18109),
        bool("Wellspring Glades", 44310, 9902),
        bool("Silent Woods", 58674, 29265),
        bool("Mouldwood Depths", 18793, 31937)
    ),
    group("Plant Seeds",
        threshold("Bash Bulbs", 42178, 47651, 3, hideValue = true),
        threshold("Sela Flowers", 42178, 16254, 3, hideValue = true),
        threshold("Blue Moss", 42178, 64583, 3, hideValue = true),
        threshold("Grapple Bulbs", 42178, 33011, 3, hideValue = true),
        threshold("Jump Pads", 42178, 38393, 3, hideValue = true),
        threshold("The Lost Seed", 42178, 40006, 3, hideValue = true),
    ),
    group( "Pickups from Health Frags",
        bool("MarshSpawn.RockHC", 21786, 60210),
        bool("MarshSpawn.GrappleHC", 21786, 25761),
        bool("HowlsDen.RightHC", 21786, 28908),
        bool("HowlsDen.LeftHC", 9593, 61304),
        bool("MarshPastOpher.TrialHC", 21786, 20194),
        bool("WestHollow.CrusherHC", 937, 61897),
        bool("WestHollow.TrialHC", 937, 2463),
        bool("EastHollow.BashHC", 13428, 59730),
        bool("GladesTown.AboveGromHC", 44310, 29043),
        bool("GladesTown.LupoSwimHC", 44310, 17523),
        bool("WestGlades.ShrineHC", 44310, 36911),
        bool("OuterWellspring.HiddenHC", 53632, 17403),
        bool("InnerWellspring.DrainHC", 37858, 25833),
        bool("PoolsApproach.MillPathHC", 945, 37243),
        bool("EastPools.PurpleWallHC", 5377, 63201),
        bool("EastPools.FightRoomHC", 5377, 45774),
        bool("LowerReach.SnowballHC", 28895, 40744),
        bool("UpperDepths.KeystoneHC", 18793, 42235),
        bool("LowerDepths.RaceStartHC", 18793, 62694),
        bool("LowerWastes.SandPotHC", 20120, 62264),
        bool("LowerWastes.BottomRightHC", 20120, 12941),
        bool("LowerWastes.UpperPathHC", 20120, 59046),
        bool("UpperWastes.PurpleWallHC", 20120, 18965),
        bool("WillowsEnd.PoisonfallHC", 16155, 46270),
        countGoal = { it.nextTriangular(6, 20, 10)},
        maxRepeats = 1
    ),
    group(
        "Complete Quests",
        threshold("The Silent Teeth", 937, 34641, 4, hideValue = true),
        threshold("Beneath Shifting Sands", 14019, 35399, 3, hideValue = true),
        threshold("Lost in Paradise", 14019, 35087, 3, hideValue = true),
        threshold("Breaking the Mould", 14019, 45931, 3, hideValue = true),
        threshold("The Highest Reach", 14019, 8973, 3, hideValue = true),
        threshold("The Missing Key ", 48248, 51645, 3, hideValue = true),
        threshold("Into the Burrows", 48248, 18458, 4, hideValue = true),
        threshold("The Lost Compass", 14019, 20667, 3, hideValue = true),
        threshold("A Little Braver", 14019, 15983, 3, hideValue = true),
        threshold("Family Reunion", 14019, 27804, 4, hideValue = true),
        threshold("The Tree Keeper", 14019, 59708, 3, hideValue = true),
        threshold("A Diamond in the Rough", 14019, 61011, 5, hideValue = true),
        threshold("Hand to Hand", 14019, 26318, 11, hideValue = true),
        threshold("Into The Darkness", 14019, 33776, 3, hideValue = true),
        threshold("Kwolok's Wisdom", 14019, 50597, 4, hideValue = true),
        threshold("The Silent Map", 14019, 24683, 5, hideValue = true),
        threshold("Rebuilding the Glades", 14019, 44578, 2, hideValue = true),
        threshold("Regrowing the Glades", 14019, 26394, 2, hideValue = true),
    ),
    threshold("Collect Items", 6, 2, triag(60, 300, 140)),
    threshold("Collect Keystones", 6, 0, triag(4, 24, 10)),
    threshold("Collect Ore", 6, 5, triag(6, 35, 16)),
    threshold("Spend Ore", 6, 5, triag(6, 35, 16)),
    threshold("Collect SL", 6, 3, triag(2000, 6000, 4000)),
    threshold("Spend SL", 6, 4, triag(2000, 6000, 3000)),
)

class BingoBoardGenerator() {
    fun generateBoard(seed: String? = null): BingoCard {
        val random = Random(seed?.hashCode() ?: Instant.now().epochSecond.toInt())
        val pool = generatePool()
        val counts = (pool.map {it to 0}).toMap().toMutableMap()

        val config = GeneratorConfig(random)

        val card = BingoCard()
        for (x in 1..5)
            for (y in 1..5) {
                var generatedGoal: BingoGoal? = null
                while(generatedGoal == null){
                    val goal = pool.random(random)
                    generatedGoal = goal(config, counts[goal] ?: 0)
                    if(generatedGoal == null) {
                        pool -= goal
                    }  else {
                        counts[goal] = 1 + (counts[goal] ?: 0)
                    }
                }
                card.goals[x to y] = generatedGoal
            }

        return card
    }
}

fun main(){
    println(Json{allowStructuredMapKeys = true}.encodeToString(BingoBoardGenerator().generateBoard("roastbeef")))
}