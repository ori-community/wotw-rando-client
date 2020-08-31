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
        bool("Inkwater Marhs", 1, 1),
        bool("Baur's Reach", 1, 1),
        bool("Mouldwood", 1, 1),
        bool("The Wellspring", 1, 1),
        bool("Luma Pools", 1, 1),
        bool("Willow's End", 1, 1)
    ),
    bool("Go fish!", 1, 1),
    pool(
        "Spend Gorlek Ore",
        number("14", 1, 1, 14),
        number("32", 1, 1, 32),
        max = 1
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