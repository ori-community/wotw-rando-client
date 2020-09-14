package wotw.web.ui.bingo

import io.ktor.client.request.*
import io.ktor.client.statement.*
import io.ktor.http.*
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.css.*
import kotlinx.html.InputType
import kotlinx.html.js.onChangeFunction
import kotlinx.html.js.onClickFunction
import org.w3c.dom.HTMLInputElement
import react.RBuilder
import react.RComponent
import react.RState
import react.dom.button
import react.dom.div
import react.dom.input
import react.setState
import styled.css
import styled.styledDiv
import styled.styledP
import wotw.io.messages.protobuf.Packet
import wotw.io.messages.protobuf.PlayerInfo
import wotw.io.messages.protobuf.RequestUpdatesMessage
import wotw.io.messages.protobuf.SyncPlayersMessage
import wotw.web.main.Application


external interface BingoPlayerProps: GameIdProps{
    var width: LinearDimension?
    var height: LinearDimension?
}

external interface BingoPlayerState : RState {
    var players: List<PlayerInfo>
    var highlighted: Long?
}

class BingoPlayersComponent : RComponent<GameIdProps, BingoPlayerState>() {
    override fun BingoPlayerState.init() {
        players = emptyList()
        highlighted = null
    }

    override fun componentDidMount() {
        Application.eventBus.register(this, SyncPlayersMessage::class) {
            setState {
                players = it.players
            }
        }
    }

    override fun componentWillUnmount() {
        Application.eventBus.unregisterAll(this)
    }

    override fun RBuilder.render() {
        div {
            styledP {
                css {
                    textAlign = TextAlign.center
                    fontSize = 2.em
                    fontWeight = FontWeight.bold
                }
                +"Players"
            }
            state.players.sortedBy { it.rank }.forEach {
                styledDiv {
                    css {
                        backgroundColor = if (it.playerId == state.highlighted) Color.lightGray else Color.darkGray
                        color = if (it.playerId == state.highlighted) Color.darkGray else Color.lightGray
                    }
                    +"${it.name} ${it.score}"
                    attrs.onClickFunction = {_ ->
                        setState {
                            highlighted = it.playerId
                        }
                        GlobalScope.launch {
                            Application.eventBus.send(Packet.from(RequestUpdatesMessage(it.playerId)))
                        }
                    }
                }
            }
            child(JoinGameComponent::class){
                attrs {
                    gameId = props.gameId
                    afterJoin = {
                        setState {
                            highlighted = it
                        }
                    }
                }
            }
        }
    }

}

external interface JoinGameProps: GameIdProps{
    var afterJoin: (Long) -> Unit
}
external interface JoinGameState : RState {
    var playerId: Long?
}

class JoinGameComponent : RComponent<JoinGameProps, JoinGameState>() {
    override fun RBuilder.render() {
        input(InputType.number) {
            attrs {
                onChangeFunction = {
                    val value = (it.target as? HTMLInputElement)?.value?.toLongOrNull()
                    setState {
                        playerId = value
                    }
                }
            }
        }
        button {
            +"Join"
            attrs {
                disabled = state.playerId == null
                onClickFunction = {
                    state.playerId?.let {
                        GlobalScope.launch {
                            val response = Application.client.post<HttpResponse>(path = "bingo/${props.gameId}/players")//, body = it.toString()){                                contentType(ContentType.Application.Json)                            }
                            if(response.status == HttpStatusCode.OK || response.status == HttpStatusCode.Companion.Conflict){
                                Application.eventBus.send(Packet.from(RequestUpdatesMessage(it)))
                                props.afterJoin(it)
                            }else{
                                console.error("Nop")
                            }
                        }
                    }
                }
            }
        }
    }
}