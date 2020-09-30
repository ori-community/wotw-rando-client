package wotw.io.messages.protobuf

import kotlinx.serialization.*
import kotlinx.serialization.protobuf.ProtoNumber
import kotlin.math.max

//All fields have default values ^= protobuf optional
//We just send partial updates and merge state client-side

@Serializable
data class BingoData(val board: BingoBoard, val players: List<BingoPlayerInfo>)

@Serializable
data class BingoBoard(
    @ProtoNumber(1) val squares: Map<Position, BingoSquare> = emptyMap(),
    @ProtoNumber(2) val size: Int = -1) {

    operator fun get(position: Position) = squares[position]
    fun merge(other: BingoBoard) =
        BingoBoard(squares + other.squares, max(size, other.size))
    operator fun plus(other: BingoBoard) = merge(other)
}

@Serializable
data class Position(
    @ProtoNumber(1) val x: Int,
    @ProtoNumber(2) val y: Int
)

infix fun Int.to (y: Int) = Position(this, y)

@Serializable
data class BingoSquare(
    @ProtoNumber(1) val text: String = "",
    @ProtoNumber(2) val completed: Boolean = false,
    @ProtoNumber(3) val goals: List<BingoGoal> = emptyList()
)

@Serializable
data class BingoGoal(
    @ProtoNumber(1) val text: String = "",
    @ProtoNumber(2) val completed: Boolean = false
)