package wotw.server.bingo

import java.time.Instant
import kotlin.math.min
import kotlin.math.roundToInt
import kotlin.math.roundToLong
import kotlin.math.sqrt
import kotlin.random.Random

fun Random.nextTriangular(min: Int, max: Int, mode: Int): Int =
    nextTriangular(min.toDouble(), max.toDouble(), mode.toDouble()).roundToInt()

fun Random.nextTriangular(min: Long, max: Long, mode: Long): Long =
    nextTriangular(min.toDouble(), max.toDouble(), mode.toDouble()).roundToLong()

fun Random.nextTriangular(min: Double, max: Double, mode: Double): Double {
    var rand = nextDouble()
    while (rand == 0.0)
        rand = nextDouble() //smh

    return if (rand < (mode - min) / (max - min))
        min + sqrt(rand * (max - min) * (mode - min))
    else
        min + sqrt((1 - rand) * (max - min) * (max - mode))
}

typealias GoalGenerator = (Random) -> BingoGoal

private fun pool(
    text: String,
    vararg pool: GoalGenerator,
    max: Int = 4,
    min: Int = 1,
    mode: Int = 2,
    hide: Boolean = false
) = pool(text, pool.toMutableList(), max)

private fun pool(
    text: String,
    pool: MutableList<GoalGenerator>,
    max: Int = 4,
    min: Int = 1,
    mode: Int = 2,
    hide: Boolean = false
): GoalGenerator = { random ->
    val goalAmount = if (hide) pool.size else random.nextTriangular(1, min(pool.size, max), 2)
    val requiredAmount =
        if (hide) random.nextTriangular(min, max, mode)
        else random.nextInt(min, goalAmount + 1)
    val goals = mutableListOf<GoalGenerator>()

    while (goals.size < goalAmount) {
        val goal = pool.random(random)
        goals += goal
        pool -= goal
    }

    val bingoGoals = goals.map { it(random) }.toTypedArray()
    CountGoal(text, requiredAmount, bingoGoals)
}

private fun bool(group: Int, state: Int): GoalGenerator =
    { BoolGoal("", group to state) }

private fun bool(text: String, group: Int, state: Int): GoalGenerator =
    { BoolGoal(text, group to state) }

private fun number(text: String, group: Int, state: Int, threshold: Number): GoalGenerator =
    { NumberThresholdGoal(text, group to state, threshold.toDouble()) }

private fun number(text: String, group: Int, state: Int, min: Int, max: Int, mode: Int): GoalGenerator =
    { NumberThresholdGoal(text, group to state, it.nextTriangular(min, max, mode).toDouble()) }

fun generatePool() = mutableListOf(
    pool(
        "Buy # maps",
        bool("Inkwater Marsh", 48248, 18767),
        bool("Midnight Burrows", 48248, 45538),
        bool("Kwoloks Hollow", 48248, 3638),
        bool("The Wellspring", 48248, 1590),
        bool("Luma Pools", 48248, 1557),
        bool("Baurs Reach", 48248, 29604),
        bool("Mouldwood Depths", 48248, 48423),
        bool("Windswept Wastes", 48248, 61146),
        bool("Willows End", 48248, 4045)
        ),
    bool("Go fish!", 1, 1),
    pool(
        "Spend Gorlek Ore",
        number("14", 1, 1, 14),
        number("32", 1, 1, 32),
        max = 1
    ),
    pool(
        "Collect Wisps",
        bool("Strength", 945, 49747),
        bool("Memory", 28895, 25522),
        bool("Eyes", 18793, 63291),
        bool("Heart", 10289, 22102),
        bool("Voice", 46462, 59806)
    ),
    pool(
        "Complete Combat Shrines",
        bool("Howl's Den", 24922, 13993),
        bool("Inkwater Marsh", 21786, 18109),
        bool("Wellspring Glades", 44310, 9902),
        bool("Silent Woods", 58674, 29265),
        bool("Mouldwood Depths", 18793, 31937)
    ),
    pool(
        "Complete Quests",
        number("The Silent Teeth", 937, 34641, 4),
        number("Beneath Shifting Sands", 14019, 35399, 3),
        number("Lost in Paradise", 14019, 35087, 3),
        number("Breaking the Mould", 14019, 45931, 3),
        number("The Highest Reach", 14019, 8973, 3),
        number("The Missing Key ", 48248, 51645, 3),
        number("Into the Burrows", 48248, 18458, 4),
        number("The Lost Compass", 14019, 20667, 3),
        number("A Little Braver", 14019, 15983, 3),
        number("Family Reunion", 14019, 27804, 4),
        number("The Tree Keeper", 14019, 59708, 3),
        number("A Diamond in the Rough", 14019, 61011, 5),
        number("Hand to Hand", 14019, 26318, 11),
        number("Into The Darkness", 14019, 33776, 3),
        number("Kwolok's Wisdom", 14019, 50597, 4),
        number("The Silent Map", 14019, 24683, 5),
        number("Rebuilding the Glades", 14019, 44578, 2),
        number("Regrowing the Glades", 14019, 26394, 2),
        max = 4
    ),
    number("Store Spirit Light", 1, 1, 2000, 6000, 4000),
    number("Spend Spirit Light", 1, 1, 2000, 6000, 3000)
).also {
    it += (1..30).map { bool("Test Goal $it", it, it) }
}

class BingoBoardGenerator() {
    fun generateBoard(seed: String? = null): BingoCard {
        val random = Random(seed?.hashCode() ?: Instant.now().epochSecond.toInt())
        val pool = generatePool()

        val card = BingoCard()
        for (x in 1..5)
            for (y in 1..5) {
                val goal = pool.random(random)
                pool -= goal
                card.goals[x to y] = goal(random)
            }

        return card
    }
}