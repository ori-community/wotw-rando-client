package wotw.io.messages.protobuf

import kotlinx.serialization.Serializable
import kotlinx.serialization.protobuf.ProtoId

@Serializable
data class UberId(
    @ProtoId(1) val group: Int,
    @ProtoId(2) val state: Int
)

@Serializable
data class UberStateUpdateMessage(
    @ProtoId(1) val uberId: UberId,
    @ProtoId(2) val value: Float
)

@Serializable
data class InitBingoMessage(
    @ProtoId(1) val uberStates: List<UberId> = emptyList()
)