package wotw.io.messages

import io.ktor.http.cio.websocket.Frame
import io.ktor.utils.io.errors.IOException
import kotlinx.coroutines.channels.SendChannel
import kotlinx.serialization.ImplicitReflectionSerializer
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration
import kotlinx.serialization.protobuf.ProtoBuf
import wotw.io.messages.protobuf.Packet

@ImplicitReflectionSerializer
suspend fun <T: Any> SendChannel<Frame>.sendMessage(obj: T){
    val binaryData = Packet.serialize(obj) ?: throw IOException("Cannot serialize object: $obj | ${obj::class}")
    send(Frame.Binary(true, binaryData))
}

//kotlinx.serialization suggests a central configured ProtoBuf instance
val protoBuf = ProtoBuf(false)
val json = Json(JsonConfiguration.Stable.copy(prettyPrint = true, allowStructuredMapKeys = true))