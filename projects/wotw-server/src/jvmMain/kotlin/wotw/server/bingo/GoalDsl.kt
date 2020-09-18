package wotw.server.bingo

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

data class GeneratorConfig(val random: Random, val difficulty: Difficulty = Difficulty.NORMAL, val repeats: Int = 0)
enum class Difficulty {
    EASY, NORMAL, HARD
}

fun interface NumberStateGenerator{
    operator fun invoke(config: GeneratorConfig): StateExpression?
}

fun interface NumberGenerator : NumberStateGenerator {
    override fun invoke(config: GeneratorConfig): StateExpression? = get(config)?.let { ConstExpression(it) }
    fun get(generatorConfig: GeneratorConfig): Float?
}

fun interface GoalGenerator : (GeneratorConfig, Int) -> BingoGoal?

fun bool(title: String, group: Int, state: Int) = GoalGenerator { _, count ->
    when {
        count > 0 -> null
        else      -> BoolGoal(title, group to state)
    }
}

fun fixed(number: Number) = NumberGenerator { number.toFloat() }
fun triag(min: Int, max: Int, mode: Int = (min + max) / 2) =
    NumberGenerator { it.random.nextTriangular(min, max, mode).toFloat() }

fun rand(min: Int, max: Int) = NumberGenerator { it.random.nextInt(min, max).toFloat() }

fun uber(group: Int, state: Int) = NumberStateGenerator {
    UberStateExpression(group, state)
}

fun difficulty(difficulties: Map<Difficulty, NumberStateGenerator>) = NumberStateGenerator { config ->
    difficulties[config.difficulty]?.invoke(config)
}

fun threshold(title: String, group: Int, state: Int, threshold: Int, hideValue: Boolean = false) =
    threshold(title, uber(group, state), fixed(threshold), hideValue)

fun threshold(title: String, group: Int, state: Int, threshold: NumberStateGenerator, hideValue: Boolean = false) =
    threshold(title, uber(group, state), threshold, hideValue)

fun threshold(
    title: String,
    number: NumberStateGenerator,
    threshold: NumberStateGenerator,
    hideValue: Boolean = false
): GoalGenerator = GoalGenerator {config, count ->
    when {
        count > 0 -> null
        else -> {
            val numberExp = number(config) ?: return@GoalGenerator null
            val thresholdExp = threshold(config) ?: return@GoalGenerator null
            NumberThresholdGoal(title, numberExp, thresholdExp, hideValue)
        }
    }
}

fun group(
    text: String,
    vararg goals: GoalGenerator,
    countGoal: ((Random) -> Int)? = null,
    subsetGoal: Boolean = true,
    maxRepeats: Int = 3
): GoalGenerator {
    var countUsed = countGoal == null
    val remainingGoals = goals.toMutableList()
    return GoalGenerator { config, used ->
        val (random, difficulty) = config
        val count = !countUsed && random.nextDouble() > 0.5
        when {
            used >= maxRepeats -> null
            count -> {
                countUsed = true
                CountGoal(text, countGoal!!.invoke(config.random), goals.mapNotNull { it(config, 0) }.toTypedArray(), true)
            }
            subsetGoal -> {
                val maxAmount = when (difficulty) {
                    Difficulty.EASY -> 2
                    Difficulty.NORMAL -> 3
                    Difficulty.HARD -> 4
                }

//                val midpoint =  when (difficulty) {
//                    Difficulty.EASY -> 1
//                    Difficulty.NORMAL -> (1 + maxAmount)/2
//                    Difficulty.HARD -> maxAmount
//                }

                val goalAmount = random.nextInt(1, maxAmount+1)
                val requiredAmount = when (difficulty) {
                    Difficulty.EASY -> 1
                    Difficulty.NORMAL -> if (random.nextDouble() > 0.5) goalAmount else 1
                    Difficulty.HARD -> goalAmount
                }
                val generatedGoals = mutableListOf<BingoGoal>()

                while (generatedGoals.size < goalAmount) {
                    val goal = remainingGoals.randomOrNull(random) ?: return@GoalGenerator null
                    val generatedGoal = goal(config, 0)
                    if (generatedGoal != null)
                        generatedGoals += generatedGoal
                    remainingGoals -= goal
                }
                CountGoal(text, requiredAmount, generatedGoals.toTypedArray())
            }
            else -> null
        }

    }
}