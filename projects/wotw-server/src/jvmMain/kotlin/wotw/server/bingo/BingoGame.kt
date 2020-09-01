package wotw.server.bingo

import kotlinx.serialization.Polymorphic
import kotlinx.serialization.Serializable
import wotw.io.messages.protobuf.BingoBoard
import wotw.io.messages.protobuf.BingoSquare
import wotw.io.messages.protobuf.Position

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
        return goals.count { it.isCompleted(state) } > threshold
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

    override val title: String = when {
        hideChildren -> text
        threshold == goals.size -> text.replace("#", "THESE")
        threshold > 1 -> text.replace("#", "AT LEAST $threshold")
        else -> text.replace("#", "ANY")
    }
}


@Serializable
data class BoolGoal(override val title: String, private val key: Pair<Int, Int>) : BingoGoal() {
    override val keys = setOf(key)
    override fun isCompleted(state: GameState) = state[key]?.equals(0.toFloat()) == false
}

@Serializable
data class NumberThresholdGoal(override val title: String, private val key: Pair<Int, Int>, private val threshold: Double) :
    BingoGoal() {
    override val keys = setOf(key)
    override fun isCompleted(state: GameState): Boolean {
        return (state[key] ?: Float.MIN_VALUE).compareTo(threshold) >= 0
    }

    override fun printSubText(state: GameState) =
        listOf((state[key] ?: 0).toString() + " / " + threshold.toString() to false)
}

typealias Point = Pair<Int, Int>

@Serializable
data class BingoCard(val goals: MutableMap<Point, BingoGoal> = hashMapOf()) {
    val allKeys
        get() = goals.values.flatMap { it.keys }.toSet()

    fun toBingoBoard(gameState: GameState?): BingoBoard {
        val gameState = gameState ?: UberStateMap.empty
        return BingoBoard(goals.map { (position, goal) ->
            Position(position.first, position.second) to BingoSquare(
                goal.title,
                goal.isCompleted(gameState),
                goal.printSubText(gameState)
                    .map { (text, completed) -> wotw.io.messages.protobuf.BingoGoal(text, completed) }
            )
        }.toMap(), 5)
    }
}