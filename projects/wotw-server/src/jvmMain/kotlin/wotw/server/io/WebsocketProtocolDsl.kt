package wotw.server.io

import io.ktor.http.cio.websocket.Frame
import io.ktor.http.cio.websocket.WebSocketSession
import kotlinx.coroutines.channels.ClosedReceiveChannelException
import kotlinx.serialization.SerializationException
import wotw.io.messages.protobuf.Packet
import wotw.util.EventBus
import kotlin.reflect.KClass

class WebsocketProtocolBuilder(internal val eventBus: EventBus){
    var errorHandler: (suspend (Throwable) -> Unit)? = null
        private set
    var closeHandler: (suspend (ClosedReceiveChannelException) -> Unit)? = null
        private set

    fun onError(block: (suspend (Throwable) -> Unit)){
        errorHandler = block
    }

    fun onClose(block: suspend (ClosedReceiveChannelException) -> Unit){
        closeHandler = block
    }

    fun <T: Any> onMessage(type: KClass<T>, block: suspend T.() -> Unit){
        eventBus.register(this, type, block)
    }
}


suspend fun WebSocketSession.protocol(block: WebsocketProtocolBuilder.() -> Unit ) {

    val builder = WebsocketProtocolBuilder(EventBus())
    block(builder)
    try {
        for (frame in incoming) {
            if (frame is Frame.Binary) {
                try {
                    val message = Packet.deserialize(frame.data) ?: continue
                    builder.eventBus.send(message)
                } catch (e: SerializationException) {
                    builder.errorHandler?.invoke(e)
                }
            }
        }
    } catch (e: ClosedReceiveChannelException) {
        builder.closeHandler?.invoke(e)
    } catch (e: Throwable) {
        builder.errorHandler?.invoke(e)
    }
}