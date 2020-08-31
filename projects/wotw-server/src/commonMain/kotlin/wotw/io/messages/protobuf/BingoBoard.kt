package wotw.io.messages.protobuf

import kotlinx.serialization.*
import kotlinx.serialization.internal.StringDescriptor
import kotlinx.serialization.protobuf.ProtoId
import kotlin.math.max

//All fields have default values ^= protobuf optional
//We just send partial updates and merge state client-side

@Serializable
data class BingoData(val board: BingoBoard, val players: List<PlayerInfo>)

@Serializable
data class BingoBoard(
    @ProtoId(1) val squares: Map<Position, BingoSquare> = emptyMap(),
    @ProtoId(2) val size: Int = -1) {

    operator fun get(position: Position) = squares[position]
    fun merge(other: BingoBoard) =
        BingoBoard(squares + other.squares, max(size, other.size))
    operator fun plus(other: BingoBoard) = merge(other)
}

@Serializable
data class Position(
    @ProtoId(1) val x: Int,
    @ProtoId(2) val y: Int
)

infix fun Int.to (y: Int) = Position(this, y)

@Serializable
data class BingoSquare(
    @ProtoId(1) val text: String = "",
    @ProtoId(2) val completed: Boolean = false,
    @ProtoId(3) val goals: List<BingoGoal> = emptyList()
)

@Serializable
data class BingoGoal(
    @ProtoId(1) val text: String = "",
    @ProtoId(2) val completed: Boolean = false
)