package wotw.server.bingo

import kotlinx.serialization.Polymorphic
import kotlinx.serialization.Serializable
import kotlin.math.max
import kotlin.math.min

typealias GameState = UberStateMap //These have changed *4 times* now, I'm keeping the typealiases :D

@Serializable //Type-erasure forces a compiled class for type-safe serialization
class UberStateMap(private val map: MutableMap<Pair<Int, Int>, Float>): MutableMap<Pair<Int, Int>, Float> by map{
    constructor(): this(mutableMapOf())

    companion object{
        val empty = UberStateMap()
    }
}

@Polymorphic
@Serializable
sealed class BingoGoal {
    abstract val keys: Set<Pair<Int, Int>>
    abstract val title: String
    open val helpText: String? = null

    open fun printSubText(state: GameState): Iterable<Pair<String, Boolean>> = emptyList()
    abstract fun isCompleted(state: GameState): Boolean
}

sealed class CompositeGoal : BingoGoal() {
    abstract val goals: Array<out BingoGoal>
    override val keys: Set<Pair<Int, Int>> by lazy { goals.flatMap { it.keys }.toSet() }

    override fun printSubText(state: GameState) =
        goals.map { (listOf(it.title) + it.printSubText(state)).joinToString(" ") to it.isCompleted(state) }
}

@Serializable
data class CountGoal(
    private val text: String,
    val threshold: Int,
    override val goals: Array<out BingoGoal>,
    val hideChildren: Boolean = false
) : CompositeGoal() {
    override fun isCompleted(state: GameState): Boolean {
        return goals.count { it.isCompleted(state) } >= threshold
    }

    override fun printSubText(state: GameState) =
        if (hideChildren)
            listOf("${goals.count { it.isCompleted(state) }}/$threshold" to false)
        else
            super.printSubText(state)

    override fun equals(other: Any?): Boolean {
        if (this === other) return true
        if (javaClass != other?.javaClass) return false

        other as CountGoal

        if (text != other.text) return false
        if (threshold != other.threshold) return false
        if (!goals.contentEquals(other.goals)) return false
        if (hideChildren != other.hideChildren) return false
        if (title != other.title) return false

        return true
    }

    override fun hashCode(): Int {
        var result = text.hashCode()
        result = 31 * result + threshold
        result = 31 * result + goals.contentHashCode()
        result = 31 * result + hideChildren.hashCode()
        result = 31 * result + title.hashCode()
        return result
    }

    fun String.fixSuffix(plural: Boolean) = if(plural)
        this.replace("[s]", "s").replace("[es]", "es")
    else
        this.replace("[s]", "").replace("[es]", "")

    override val title: String = when {
        hideChildren -> text.replace(" #", "")
        threshold == goals.size -> text.replace("#", when(goals.size) {
            1 -> "THIS"
            2 -> "BOTH"
            else -> "THESE"
        })
        threshold > 1 -> text.replace("#", "$threshold")
        goals.size == 2 -> text.replace("#", "EITHER").fixSuffix(false)
        else -> text.replace("#", "ONE OF THESE").fixSuffix(true)
    }.fixSuffix(threshold > 1 )
}

@Serializable
data class BoolGoal(override val title: String, private val key: Pair<Int, Int>) : BingoGoal() {
    override val keys = setOf(key)
    override fun isCompleted(state: GameState) = state[key]?.equals(0.toFloat()) == false
}

@Serializable
data class NumberThresholdGoal(val text: String, private val expression: StateExpression, private val threshold: StateExpression, private val hide: Boolean = false) :
    BingoGoal() {
    override val keys = expression.keys + threshold.keys
    override fun isCompleted(state: GameState): Boolean {
        return expression.calc(state) >= threshold.calc(state)
    }

    override val title: String by lazy{
        val replacements = if(expression is AggregationExpression){
            expression.names ?: emptyList()
        }else emptyList()
        text.replace("<\\d*>".toRegex()){
            val index = it.groups[1]?.value?.toIntOrNull() ?: return@replace ""
            replacements.getOrNull(index) ?: ""
        }
    }

    override fun printSubText(state: GameState):  Iterable<Pair<String, Boolean>>{
        return if (hide)
            emptyList()
        else{
            listOf((expression.calc(state).toLong().toString() + " / " + threshold.calc(state).toLong().toString()) to false)
        }
    }
}

typealias Point = Pair<Int, Int>

data class PlayerBingoData(val lines: Int, val squares: Int, val rank: Int)

fun Boolean.int() = if(this) 1 else 0
operator fun Point.times(i: Int) = this.first*i to this.second*i
operator fun Point.plus(p: Point) = this.first + p.first to this.second + p.second
enum class Line(val label: String, val start: Point, val direction: Point) {
    COL_A("Column A", 1 to 1, 0 to 1),
    COL_B("Column B", 2 to 1, 0 to 1),
    COL_C("Column C", 3 to 1, 0 to 1),
    COL_D("Column D", 4 to 1, 0 to 1),
    COL_E("Column E", 5 to 1, 0 to 1),
    ROW_1("Row 1", 1 to 1, 1 to 0),
    ROW_2("Row 2", 1 to 2, 1 to 0),
    ROW_3("Row 3", 1 to 3, 1 to 0),
    ROW_4("Row 4", 1 to 4, 1 to 0),
    ROW_5("Row 5", 1 to 5, 1 to 0),
    X("TLBR", 1 to 1, 1 to 1),
    Y("TLBR", 1 to 5, 1 to -1);

    fun cards(size: Int) = (1..size).map { this.direction * (it-1) + this.start }
}
@Serializable
data class BingoCard(val goals: MutableMap<Point, BingoGoal> = hashMapOf(), val config: BingoConfig? = null) {
    fun Line.cards() = cards(size)
    val allKeys
        get() = goals.values.flatMap { it.keys }.toSet()
    val size = 5 // get() = goals.keys.maxByOrNull { it.first }
    fun goalCompleted(p: Point, gs: GameState?) = goals[p]?.isCompleted(gs ?: UberStateMap.empty) ?: false
    fun goalVisible(p: Point, gs: GameState?): Boolean {
        val first = config?.discovery
        if(first.isNullOrEmpty())
            return true

        //*why* am I doing this on every call? because here at mood studios we don't do simple!
        var current: Set<Point> = first
        var last: Set<Point>
        do {
            last = current
            current = (current + current.filter { goalCompleted(it, gs) }.flatMap { setOf(
                it + (1 to 0),
                it + (0 to -1),
                it + (-1 to 0),
                it + (0 to 1)) }).toSet()

            if(p in current)
                return true
        } while(last != current)

        return false
    }
}
@Serializable
data class BingoConfig(val lockout: Boolean = false,
                       val manualSquareCompletion: Boolean = false,
                       val discovery: Set<Point>? = null)

@Serializable
sealed class StateExpression{
    abstract fun calc(state: GameState) : Float
    abstract val keys: Set<Pair<Int, Int>>

    operator fun plus(other: StateExpression): StateExpression {
        return OperatorExpression(this, other, OperatorExpression.OPERATOR.PLUS)
    }

    operator fun minus(other: StateExpression): StateExpression {
        return OperatorExpression(this, other, OperatorExpression.OPERATOR.MINUS)
    }

    operator fun times(other: StateExpression): StateExpression {
        return OperatorExpression(this, other, OperatorExpression.OPERATOR.TIMES)
    }
}

@Serializable
class AggregationExpression(val aggr: Aggregation, val expressions: List<StateExpression>, val names: List<String>? = null): StateExpression(){
    enum class Aggregation{
        SUM, PRODUCT, MAX, MIN
    }

    override fun calc(state: GameState): Float {
        val children = expressions.map { it.calc(state) }
        val aggregationFunction: (Float, Float) -> Float = when(aggr){
            Aggregation.SUM -> {a, b -> a + b}
            Aggregation.PRODUCT -> {a, b -> a * b}
            Aggregation.MAX -> {a, b -> max(a,b) }
            Aggregation.MIN -> {a, b -> min(a,b) }
        }
        return children.reduce(aggregationFunction)
    }

    override val keys: Set<Pair<Int, Int>>
        get() = expressions.map { it.keys }.reduce{first, second -> first.union(second)}
}

@Serializable
class UberStateExpression(val uberId: Pair<Int, Int>): StateExpression() {
    constructor(group: Int, state: Int): this(group to state)

    override fun calc(state: GameState) : Float = state[uberId] ?: Float.NaN
    override val keys: Set<Pair<Int, Int>>
        get() = setOf(uberId)
}

@Serializable
class ConstExpression(val value: Float): StateExpression(){
    override fun calc(state: GameState): Float = value
    override val keys: Set<Pair<Int, Int>>
        get() = emptySet()
}

@Serializable
class OperatorExpression(val first: StateExpression, val second: StateExpression, val op: OPERATOR): StateExpression(){
    enum class OPERATOR{
        PLUS, MINUS, TIMES, DIV
    }

    override fun calc(state: GameState): Float {
        return when(op){
            OPERATOR.PLUS -> first.calc(state) + second.calc(state)
            OPERATOR.MINUS -> first.calc(state) - second.calc(state)
            OPERATOR.TIMES -> first.calc(state) * second.calc(state)
            OPERATOR.DIV -> first.calc(state) / second.calc(state)
        }
    }

    override val keys: Set<Pair<Int, Int>>
            get() = first.keys + second.keys
}