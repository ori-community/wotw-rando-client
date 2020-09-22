package wotw.web.ui.bingo

import io.ktor.client.request.*
import io.ktor.client.statement.*
import io.ktor.http.*
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.css.*
import kotlinx.html.js.onClickFunction
import react.RBuilder
import react.RComponent
import react.RState
import react.dom.button
import react.dom.div
import react.setState
import styled.css
import styled.styledDiv
import styled.styledP
import wotw.io.messages.protobuf.Packet
import wotw.io.messages.protobuf.PlayerInfo
import wotw.io.messages.protobuf.RequestUpdatesMessage
import wotw.io.messages.protobuf.SyncPlayersMessage
import wotw.web.main.Application
import wotw.web.ui.TempHeaderComp


external interface BingoPlayerProps : GameIdProps {
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
        GlobalScope.launch {
            val maybeInfo = Application.user.await()
            if(maybeInfo != null) {
                setState { highlighted = maybeInfo.id }
                Application.eventBus.send(Packet.from(RequestUpdatesMessage(maybeInfo.id)))
            }
        }

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
            child(TempHeaderComp::class) {}

            styledP {
                css {
                    marginTop = 1.em
                    textAlign = TextAlign.center
                    fontSize = 2.em
                    fontWeight = FontWeight.bold
                }
                +"Players"
            }
            styledDiv{
                css {
                    marginBottom = 1.em
                }
                state.players.sortedBy { it.rank }.forEach {
                    styledDiv {
                        css {
                            backgroundColor = if (it.playerId == state.highlighted) Color.lightGray else Color.white
                            color = Color.black
                            fontWeight = if (it.playerId == state.highlighted) FontWeight.bold else FontWeight.normal
                        }
                        +"${it.name} ${it.score}"
                        attrs.onClickFunction = { _ ->
                            setState {
                                highlighted = it.playerId
                            }
                            GlobalScope.launch {
                                Application.eventBus.send(Packet.from(RequestUpdatesMessage(it.playerId)))
                            }
                        }
                    }
                }
            }

            child(JoinGameComponent::class) {
                attrs {
                    userId = state.highlighted
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

external interface JoinGameProps : GameIdProps {
    var afterJoin: (Long) -> Unit
    var userId: Long?
}


class JoinGameComponent : RComponent<JoinGameProps, RState>() {
    override fun RBuilder.render() {
        button {
            +"Join"
            attrs {
                onClickFunction = {
                    props.userId?.let {
                        GlobalScope.launch {
                            val response = Application.api.post<HttpResponse>(path = "bingo/${props.gameId}/players")
                            if (response.status == HttpStatusCode.OK || response.status == HttpStatusCode.Companion.Conflict) {
                                Application.eventBus.send(Packet.from(RequestUpdatesMessage(it)))
                                props.afterJoin(it)
                            } else {
                                console.error("Nop")
                            }
                        }
                    }
                }
            }
        }
    }
}