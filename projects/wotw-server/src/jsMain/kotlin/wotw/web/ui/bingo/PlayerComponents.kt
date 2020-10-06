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
import wotw.io.messages.protobuf.*
import wotw.web.main.Application
import wotw.web.ui.TempHeaderComp


external interface BingoPlayerProps : GameIdProps {
    var width: LinearDimension?
    var height: LinearDimension?
}

external interface TeamListState : RState {
    var teams: List<TeamInfo>
    var user: Long?
}

external interface BingoListState : RState {
    var players: List<BingoPlayerInfo>
    var highlighted: Long?
}

class PlayersComponent : RComponent<GameIdProps, TeamListState>() {
    override fun TeamListState.init() {
        teams = emptyList()
    }
    override fun componentDidMount() {
        GlobalScope.launch {
            val gameInfo = Application.api.get<GameInfo>("/games/${props.gameId}/teams")
            console.log(gameInfo)
            setState {teams = gameInfo.teams }
        }

        GlobalScope.launch {
            val maybeInfo = Application.user.await()
            if (maybeInfo != null) {
                setState { user = maybeInfo.id }
            }
        }
    }

    override fun RBuilder.render() {
        console.log(state)
            div {
                child(TempHeaderComp::class) {}

                styledP {
                    css {
                        marginTop = 1.em
                        fontSize = 2.em
                    }
                    +"Teams: "
                }
                styledDiv {
                    css {
                        marginBottom = 1.em
                    }
                    state.teams.forEach {
                        styledDiv {
                            css {
                                backgroundColor = Color.white
                                color = Color.black
                            }
                            +"${it.leader.name}'s team "
                            if(state.user != it.leader.id)
                            child(JoinTeamComponent::class) {
                                attrs {
                                    gameId = props.gameId
                                    playerId = it.leader.id
                                    afterJoin = { componentDidMount() }
                                }
                            }
                        }
                    }
                }
                child(JoinGameComponent::class) {
                    attrs {
                        userId = state.user
                        gameId = props.gameId
                        afterJoin = { componentDidMount() }
                    }
                }

            }
    }


        }
class BingoPlayersComponent : RComponent<GameIdProps, BingoListState>() {
    override fun BingoListState.init() {
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

        Application.eventBus.register(this, SyncBingoPlayersMessage::class) {
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

            child(JoinBingoComponent::class) {
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

external interface JoinBingoProps : GameIdProps {
    var afterJoin: (Long) -> Unit
    var userId: Long?
}
external interface JoinGameProps : GameIdProps {
    var afterJoin: () -> Unit
    var userId: Long?
}

external interface JoinTeamProps : GameIdProps {
    var afterJoin: () -> Unit
    var playerId: Long
}

class JoinTeamComponent : RComponent<JoinTeamProps, RState>() {
    override fun RBuilder.render() {
        button {
            +"Join"
            attrs {
                onClickFunction = {
                    GlobalScope.launch {
                        val response = Application.api.post<HttpResponse>(path = "games/${props.gameId}/teams/${props.playerId}")
                        if (response.status == HttpStatusCode.OK || response.status == HttpStatusCode.Created || response.status == HttpStatusCode.Companion.Conflict) {
                            props.afterJoin()
                        } else {
                            console.error("failed to join team")
                        }
                    }
                }
            }
        }
    }
}
class JoinGameComponent : RComponent<JoinGameProps, RState>() {
    override fun RBuilder.render() {
        button {
            +"Join game on new team"
            attrs {
                onClickFunction = {
                    props.userId?.let {
                        GlobalScope.launch {
                            val response = Application.api.post<HttpResponse>(path = "games/${props.gameId}/teams")
                            if (response.status == HttpStatusCode.OK || response.status == HttpStatusCode.Created || response.status == HttpStatusCode.Companion.Conflict) {
                                props.afterJoin()
                            } else {
                                console.error("failed to join team")
                            }
                        }
                    }
                }
            }
        }
    }
}

class JoinBingoComponent : RComponent<JoinBingoProps, RState>() {
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
