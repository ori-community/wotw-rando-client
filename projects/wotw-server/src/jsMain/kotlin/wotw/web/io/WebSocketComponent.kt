package wotw.web.io

import io.ktor.client.features.websocket.DefaultClientWebSocketSession
import io.ktor.client.features.websocket.ws
import io.ktor.client.request.accept
import io.ktor.http.ContentType
import io.ktor.http.cio.websocket.CloseReason
import io.ktor.http.cio.websocket.Frame
import io.ktor.http.cio.websocket.WebSocketSession
import io.ktor.http.cio.websocket.close
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.serialization.decodeFromByteArray
import kotlinx.serialization.dump
import kotlinx.serialization.encodeToByteArray
import kotlinx.serialization.load
import react.*
import wotw.io.messages.protobuf.Packet
import wotw.io.messages.protoBuf
import wotw.web.main.Application


external interface WebSocketProperties: RProps{
    var url: String
    var config: (suspend (DefaultClientWebSocketSession) -> Unit)?
}

class WebSocketComponent : RComponent<WebSocketProperties, RState>(){
    var currentSession: WebSocketSession? = null
    override fun componentDidMount() {
        GlobalScope.launch {
            Application.client.ws(props.url, {
                accept(ContentType.Application.ProtoBuf)
                accept(ContentType.Text.Any)
                accept(ContentType.Application.Json)
            }) {
                props.config?.invoke(this)
                currentSession = this
                Application.eventBus.register(this, Packet::class){
                    outgoing.send(Frame.Binary(true, protoBuf.encodeToByteArray(it)))
                }
                for(frame in incoming){
                    if(frame is Frame.Binary){
                        val packet: Packet = protoBuf.decodeFromByteArray(frame.data)
                        val message = packet.deserializeMessage()?.also {
                            Application.eventBus.send(it)
                        }
                        console.log("Received message", message)
                    }
                }
            }
        }
    }

    override fun componentWillUnmount() {
        currentSession?.let {
            Application.eventBus.unregisterAll(it)
            currentSession = null
            GlobalScope.launch {
                it.close(CloseReason(CloseReason.Codes.NORMAL, "Closing connection"))
            }
        }
        super.componentWillUnmount()
    }
    override fun RBuilder.render(){}
}