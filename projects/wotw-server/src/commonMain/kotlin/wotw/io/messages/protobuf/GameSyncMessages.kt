package wotw.io.messages.protobuf

import kotlinx.serialization.Serializable
import kotlinx.serialization.protobuf.ProtoNumber

@Serializable
data class UberId(
    @ProtoNumber(1) val group: Int,
    @ProtoNumber(2) val state: Int
)

@Serializable
data class UberStateUpdateMessage(
    @ProtoNumber(1) val uberId: UberId,
    @ProtoNumber(2) val value: Float
)

@Serializable
data class InitBingoMessage(
    @ProtoNumber(1) val uberStates: List<UberId> = emptyList()
)

@Serializable
data class PrintTextMessage(
    @ProtoNumber(1) val text: String,
    @ProtoNumber(2) val Frames: Int = 200,
    @ProtoNumber(3) val y_pos: Float = 3f
)