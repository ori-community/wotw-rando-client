package wotw.io.messages

import io.ktor.http.cio.websocket.Frame
import io.ktor.utils.io.errors.IOException
import kotlinx.coroutines.channels.SendChannel
import kotlinx.serialization.json.Json
import kotlinx.serialization.modules.EmptySerializersModule
import kotlinx.serialization.protobuf.ProtoBuf
import wotw.io.messages.protobuf.Packet

suspend inline fun <reified T: Any> SendChannel<Frame>.sendMessage(obj: T){
    val binaryData = Packet.serialize(obj) ?: throw IOException("Cannot serialize object: $obj | ${obj::class}")
    send(Frame.Binary(true, binaryData))
}

//kotlinx.serialization suggests a central configured ProtoBuf instance
val protoBuf = ProtoBuf {
    encodeDefaults = false;
    serializersModule = EmptySerializersModule
}
val json = Json{
    prettyPrint = true
    allowStructuredMapKeys = true
}