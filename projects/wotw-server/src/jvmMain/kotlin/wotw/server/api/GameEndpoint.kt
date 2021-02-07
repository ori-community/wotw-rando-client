package wotw.server.api

import io.ktor.application.*
import io.ktor.auth.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.http.cio.websocket.CloseReason
import io.ktor.http.cio.websocket.close
import io.ktor.response.*
import io.ktor.routing.*
import io.ktor.sessions.*
import io.ktor.websocket.webSocket
import org.jetbrains.exposed.sql.SizedCollection
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.protobuf.*
import wotw.io.messages.sendMessage
import wotw.server.bingo.coopStates
import wotw.server.database.model.*
import wotw.server.exception.AlreadyExistsException
import wotw.server.io.protocol
import wotw.server.main.WotwBackendServer
import wotw.server.util.logger
import wotw.server.util.rezero
import wotw.server.util.zerore
import kotlin.to

class GameEndpoint(server: WotwBackendServer) : Endpoint(server) {
    val logger = logger()
    override fun Route.initRouting() {
        post<UberStateUpdateMessage>("games/{game_id}/{player_id}/state") { message ->
            val gameId = call.parameters["game_id"]?.toLongOrNull() ?: throw BadRequestException("")
            val playerId = call.parameters["player_id"]?.toLongOrNull() ?: throw BadRequestException("")

            val result = newSuspendedTransaction {
                val game = Game.findById(gameId) ?: throw NotFoundException()
                val team = Team.find(gameId, playerId) ?: throw NotFoundException()
                val state = game.teamStates[team] ?: throw NotFoundException()
                server.sync.aggregateState(state, message.uberId, message.value)
            }

            server.sync.syncState(gameId, playerId, message.uberId, result)
            server.sync.syncGameProgress(gameId)
            call.respond(HttpStatusCode.NoContent)
        }
        post("games") {
            val game = newSuspendedTransaction {Game.new {} }
            call.respondText("${game.id.value}", status = HttpStatusCode.Created)
        }
        authenticate(SESSION_AUTH) {
            post("games/{game_id}/teams"){
                val gameId = call.parameters["game_id"]?.toLongOrNull() ?: throw BadRequestException("Unparsable GameID")
                newSuspendedTransaction {
                    val player = sessionInfo()
                    val game = Game.findById(gameId) ?: throw NotFoundException("Game does not exist!")

                    val existingTeam = Team.find(gameId, player.id.value)
                    if(existingTeam != null)
                        throw AlreadyExistsException("You are already in a Team!")

                    Team.new(game, player)
                }
                call.respond(HttpStatusCode.Created)
            }
            get("games/{game_id}/teams/{team_id}"){
                val gameId = call.parameters["game_id"]?.toLongOrNull() ?: throw BadRequestException("Unparsable GameID")
                val teamId = call.parameters["team_id"]?.toLongOrNull() ?: throw BadRequestException("Unparsable TeamID")
                val (team, members) = newSuspendedTransaction {
                    val game = Game.findById(gameId) ?: throw NotFoundException("Game does not exist!")
                    val team = game.teams.firstOrNull { it.id.value == teamId } ?: throw NotFoundException("Team does not exist!")
                    team to team.members.map { UserInfo(it.id.value, it.name) }
                }
                println(members)
                call.respond(TeamInfo(teamId, team.name, members.first(), members.drop(1)))
            }
            get("games/{game_id}/teams"){
                val gameId = call.parameters["game_id"]?.toLongOrNull() ?: throw BadRequestException("Unparsable GameID")
                val teams = newSuspendedTransaction {
                    val game = Game.findById(gameId) ?: throw NotFoundException("Game does not exist!")
                    game.teams.map {
                        val members = it.members.map { m -> UserInfo(m.id.value, m.name) }
                        TeamInfo(it.id.value, it.name, members.first(), members.drop(1))
                    }
                }
                println(teams)
                call.respond(GameInfo(teams))
            }

            post("games/{game_id}/teams/{team_id}"){
                val gameId = call.parameters["game_id"]?.toLongOrNull() ?: throw BadRequestException("Unparsable GameID")
                val teamId = call.parameters["team_id"]?.toLongOrNull() ?: throw BadRequestException("Unparsable TeamID")
                newSuspendedTransaction {
                    val player = sessionInfo()
                    val game = Game.findById(gameId) ?: throw NotFoundException("Game does not exist!")
                    val team = game.teams.firstOrNull { it.id.value == teamId } ?: throw NotFoundException("Team does not exist!")
                    team.members = SizedCollection(team.members + player)
                }
                server.sync.aggregationStrategies.remove(gameId)

                call.respond(HttpStatusCode.OK)
            }

            webSocket("game_sync") {
                val playerId = call.sessions.get<UserSession>()?.user ?: return@webSocket this.close(
                    CloseReason(CloseReason.Codes.VIOLATED_POLICY, "No session active!")
                )

                val (gameStateId, gameId) = newSuspendedTransaction {
                    val team = TeamMembership.find {
                        TeamMemberships.playerId eq playerId
                    }.sortedByDescending { it.id.value }.firstOrNull()?.team
                    team?.game?.teamStates?.get(team)?.id?.value?.let { it to team.game.id.value }
                } ?: return@webSocket this.close(
                    CloseReason(CloseReason.Codes.NORMAL, "Player is not part of an active game")
                )

                server.connections.registerGameConn(this, playerId, gameId)

                val initData = newSuspendedTransaction {
                    GameState.findById(gameStateId)?.game?.board?.goals?.flatMap { it.value.keys }
                        ?.map { UberId(it.first, it.second) }
                }.orEmpty()
                val isCoop = newSuspendedTransaction {
                    GameState.findById(gameStateId)?.team?.members?.count() ?:1 > 1
                }
                val user = newSuspendedTransaction {  User.find{
                    Users.id eq playerId
                }.firstOrNull()?.name } ?: "Mystery User"

                val states = if(isCoop) coopStates().plus(initData) else initData // don't sync new data 
                outgoing.sendMessage(InitGameSyncMessage(states.map {
                    UberId(zerore(it.group), zerore(it.state))
                }))
                outgoing.sendMessage(PrintTextMessage(text = "$user - Connected", frames = 240, ypos = 3f))

                protocol {
                    onMessage(UberStateUpdateMessage::class){
                        updateUberState(gameStateId, playerId)
                    }
                    onMessage(UberStateBatchUpdateMessage::class){
                        updateUberStates(gameStateId, playerId)
                    }
                }
            }
        }
    }

    private suspend fun UberStateUpdateMessage.updateUberState(gameStateId: Long, playerId: Long) {
        val uberGroup = rezero(uberId.group)
        val uberState = rezero(uberId.state)
        val sentValue = rezero(value)
        val (result, game) = newSuspendedTransaction {
            logger.debug("($uberGroup, $uberState) -> $sentValue")
            val playerData = GameState.findById(gameStateId) ?: error("Inconsistent game state")
            server.sync.aggregateState(playerData, UberId(uberGroup, uberState), sentValue) to
                    playerData.game.id.value

        }
        val pc = server.connections.playerConns[playerId]!!
        if(pc.gameId != game) {
            server.connections.unregisterGameConn(playerId)
            server.connections.registerGameConn(pc.socket, playerId, game)
        }
        server.sync.syncGameProgress(game)
        server.sync.syncState(game, playerId, UberId(uberGroup, uberState), result)
    }

    private suspend fun UberStateBatchUpdateMessage.updateUberStates(gameStateId: Long, playerId: Long) {
        val updates = updates.map {
            UberId(rezero(it.uberId.group), rezero(it.uberId.state)) to if(it.value == -1f) 0f else it.value
        }.toMap()

        val (results, game) = newSuspendedTransaction {
            val playerData = GameState.findById(gameStateId) ?: error("Inconsistent game state")
            updates.mapValues { (uberId, value) ->
                server.sync.aggregateState(playerData, uberId, value)
            } to playerData.game.id.value
        }

        val pc = server.connections.playerConns[playerId]!!
        if(pc.gameId != game) {
            server.connections.unregisterGameConn(playerId)
            server.connections.registerGameConn(pc.socket, playerId, game)
        }
        server.sync.syncGameProgress(game)

        server.sync.syncStates(game, playerId, results)
    }


}