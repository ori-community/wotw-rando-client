package wotw.server.bingo

import kotlin.math.roundToInt
import kotlin.math.roundToLong
import kotlin.math.sqrt
import kotlin.random.Random

fun Collection<GeneratorWithConfig>.weightedRandom(random: Random): GeneratorWithConfig {
    return this.map { it to it.weight }.toMap().weightedRandom(random)
}

fun <T> Map<T, Int>.weightedRandom(random: Random): T {
    val totalWeight = values.sum().toDouble()
    if (totalWeight == 0.0)
        throw NoSuchElementException()

    var currentProbability = 0.0
    val probabilities = this.entries.sortedBy { it.value }.map { (item, weight) ->
        val newProbability = currentProbability + weight / totalWeight
        val foo = item to currentProbability..newProbability
        currentProbability = newProbability
        foo
    }

    val chosen = random.nextDouble()
    return probabilities.firstOrNull { chosen in it.second }?.first ?: probabilities.last().first
}

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

fun aggr(aggr: AggregationExpression.Aggregation, group: NumberStateGeneratorGroup)= NumberStateGenerator {
    val grp = group.invoke(it) ?: return@NumberStateGenerator null
    AggregationExpression(aggr, grp.map { it.first }, grp.map { it.second })
}

fun sum(group: NumberStateGeneratorGroup) = aggr(AggregationExpression.Aggregation.SUM, group)
fun product(group: NumberStateGeneratorGroup) = aggr(AggregationExpression.Aggregation.PRODUCT, group)
fun max(group: NumberStateGeneratorGroup) = aggr(AggregationExpression.Aggregation.MAX, group)
fun min(group: NumberStateGeneratorGroup) = aggr(AggregationExpression.Aggregation.MIN, group)

fun interface NumberStateGeneratorGroup {
    operator fun invoke(config: GeneratorConfig): Set<Pair<StateExpression, String>>?
}

fun interface NumberStateGenerator {
    operator fun invoke(config: GeneratorConfig): StateExpression?
    operator fun plus(other: NumberStateGenerator): NumberStateGenerator {
        return NumberStateGenerator {
            val otherResult = other(it) ?: return@NumberStateGenerator null
            this(it)?.plus(otherResult)
        }
    }

    operator fun minus(other: NumberStateGenerator): NumberStateGenerator {
        return NumberStateGenerator {
            val otherResult = other(it) ?: return@NumberStateGenerator null
            this(it)?.minus(otherResult)
        }
    }

    operator fun times(other: NumberStateGenerator): NumberStateGenerator {
        return NumberStateGenerator {
            val otherResult = other(it) ?: return@NumberStateGenerator null
            this(it)?.times(otherResult)
        }
    }
}

fun interface NumberGenerator : NumberStateGenerator {
    override fun invoke(config: GeneratorConfig): StateExpression? = get(config)?.let { ConstExpression(it) }
    fun get(generatorConfig: GeneratorConfig): Double?
}

fun interface GoalGenerator : (GeneratorConfig, Int) -> BingoGoal?

data class GeneratorWithConfig(val gen: GoalGenerator, val countOnly: Boolean = false, val weight: Int = 100) {
    fun weighted(weight: Int) = copy(weight = weight)
}

fun bool(title: String, group: Int, state: Int, countOnly: Boolean = false) = GeneratorWithConfig({ _, count ->
    when {
        count > 0 -> null
        else -> BoolGoal(title, group to state)
    }
}, countOnly)

fun fixed(number: Number) = NumberGenerator { number.toDouble() }
fun triag(min: Int, max: Int, mode: Int = (min + max) / 2) =
    NumberGenerator { it.random.nextTriangular(min, max, mode).toDouble() }

fun rand(min: Int, max: Int) = NumberGenerator { it.random.nextInt(min, max).toDouble() }

fun uber(group: Int, state: Int) = NumberStateGenerator {
    UberStateExpression(group, state)
}

fun difficulty(difficulties: Map<Difficulty, NumberStateGenerator>) = NumberStateGenerator { config ->
    difficulties[config.difficulty]?.invoke(config)
}

fun threshold(
    title: String,
    group: Int,
    state: Int,
    threshold: Int,
    hideValue: Boolean = false,
    countOnly: Boolean = false
) =
    threshold(title, uber(group, state), fixed(threshold), hideValue, countOnly)

fun threshold(
    title: String,
    group: Int,
    state: Int,
    threshold: NumberStateGenerator,
    hideValue: Boolean = false,
    countOnly: Boolean = false
) =
    threshold(title, uber(group, state), threshold, hideValue, countOnly)

fun threshold(
    title: String,
    number: NumberStateGenerator,
    threshold: NumberStateGenerator,
    hideValue: Boolean = false,
    countOnly: Boolean = false
): GeneratorWithConfig = GeneratorWithConfig(GoalGenerator { config, count ->
    when {
        count > 0 -> null
        else -> {
            val numberExp = number(config) ?: return@GoalGenerator null
            val thresholdExp = threshold(config) ?: return@GoalGenerator null
            NumberThresholdGoal(title, numberExp, thresholdExp, hideValue)
        }
    }
}, countOnly)

fun nof(n: Int, vararg goals: GeneratorWithConfig): GeneratorWithConfig {
    val unusedGoals = goals.toMutableList()
    return GeneratorWithConfig({ config, used ->
        when {
            used >= n -> null
            else -> {
                val goal = unusedGoals.weightedRandom(config.random)
                unusedGoals.remove(goal)
                goal.gen(config, 0)
            }
        }
    })
}

fun nof(n: Int, vararg states: Pair<NumberStateGenerator, String>): NumberStateGeneratorGroup {
    val unusedStates = states.toMutableList()
    return NumberStateGeneratorGroup { config ->
        val obtained: MutableSet<Pair<StateExpression, String>> = mutableSetOf()
        while(unusedStates.isNotEmpty() && obtained.size < n){
            val new = unusedStates.random(config.random)
            unusedStates.remove(new)
            val exp = new.first(config)
            if (exp != null)
                obtained += exp to new.second
        }
        if(obtained.size < n)
            return@NumberStateGeneratorGroup null
        return@NumberStateGeneratorGroup obtained
    }
}

fun oneof(vararg goals: GeneratorWithConfig) = nof(1, *goals)

fun group(
    text: String,
    vararg goals: GeneratorWithConfig,
    countGoal: ((Random) -> Int)? = null,
    subsetGoal: Boolean = true,
    orChance: Double = 0.5,
    maxRepeats: Int = 3
): GeneratorWithConfig {
    var countUsed = countGoal == null
    val remainingGoals = goals.toMutableList()
    return GeneratorWithConfig(GoalGenerator { config, used ->
        val (random, difficulty) = config
        val count = !countUsed && random.nextDouble() > 0.5
        when {
            used >= maxRepeats -> null
            count -> {
                countUsed = true
                CountGoal(
                    text,
                    countGoal!!.invoke(config.random),
                    goals.mapNotNull { it.gen(config, 0) }.toTypedArray(),
                    true
                )
            }
            subsetGoal -> {
                val maxAmount = when (difficulty) {
                    Difficulty.EASY -> 2
                    Difficulty.NORMAL -> 3
                    Difficulty.HARD -> 4
                }

                val goalAmount = random.nextInt(1, maxAmount + 1)
                val requiredAmount = when (difficulty) {
                    Difficulty.EASY -> 1
                    Difficulty.NORMAL -> if (random.nextDouble() > orChance) goalAmount else 1
                    Difficulty.HARD -> goalAmount
                }
                val generatedGoals = mutableListOf<BingoGoal>()

                while (generatedGoals.size < goalAmount) {
                    if (remainingGoals.size == 0)
                        return@GoalGenerator null

                    val genAndConfig = remainingGoals.weightedRandom(random)
                    if (!genAndConfig.countOnly) {
                        val generatedGoal = genAndConfig.gen(config, 0)
                        if (generatedGoal != null)
                            generatedGoals += generatedGoal
                    }
                    remainingGoals -= genAndConfig
                }
                CountGoal(text, requiredAmount, generatedGoals.toTypedArray())
            }
            else -> null
        }

    })
}