package wotw.io.messages.protobuf

import kotlinx.serialization.Serializable
import kotlinx.serialization.protobuf.ProtoId

@Serializable
data class SyncBoardMessage(
    @ProtoId(1) val board: BingoBoard,
    @ProtoId(2) val replace: Boolean = false
)

@Serializable
data class PlayerInfo(
    @ProtoId(1) val playerId: Long,
    @ProtoId(2) val name: String,
    @ProtoId(3) val score: String,
    @ProtoId(4) val rank: Int? = null
)

@Serializable
data class SyncPlayersMessage(
    @ProtoId(1) val players: List<PlayerInfo>
)

@Serializable
data class RequestUpdatesMessage(
    @ProtoId(1) val playerId: Long
)