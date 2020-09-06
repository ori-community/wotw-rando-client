package wotw.io.messages.protobuf

import kotlinx.serialization.Serializable
import kotlinx.serialization.protobuf.ProtoNumber

@Serializable
data class SyncBoardMessage(
    @ProtoNumber(1) val board: BingoBoard,
    @ProtoNumber(2) val replace: Boolean = false
)

@Serializable
data class PlayerInfo(
    @ProtoNumber(1) val playerId: Long,
    @ProtoNumber(2) val name: String,
    @ProtoNumber(3) val score: String,
    @ProtoNumber(4) val rank: Int? = null
)

@Serializable
data class SyncPlayersMessage(
    @ProtoNumber(1) val players: List<PlayerInfo>
)

@Serializable
data class RequestUpdatesMessage(
    @ProtoNumber(1) val playerId: Long
)