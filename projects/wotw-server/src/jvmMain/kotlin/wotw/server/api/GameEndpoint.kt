package wotw.server.api

import io.ktor.application.*
import io.ktor.auth.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.http.cio.websocket.CloseReason
import io.ktor.http.cio.websocket.close
import io.ktor.http.content.*
import io.ktor.response.*
import io.ktor.routing.*
import io.ktor.sessions.*
import io.ktor.websocket.webSocket
import org.jetbrains.exposed.sql.SizedCollection
import org.jetbrains.exposed.sql.SqlExpressionBuilder.eq
import org.jetbrains.exposed.sql.and
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.protobuf.*
import wotw.io.messages.sendMessage
import wotw.server.bingo.BingoBoardGenerator
import wotw.server.bingo.coopStates
import wotw.server.bingo.pickupIds
import wotw.server.database.model.*
import wotw.server.exception.AlreadyExistsException
import wotw.server.io.protocol
import wotw.server.main.WotwBackendServer
import wotw.server.util.logger
import kotlin.math.max
import kotlin.to

class GameEndpoint(server: WotwBackendServer) : Endpoint(server) {
    val logger = logger()
    override fun Route.initRouting() {
        post<UberStateUpdateMessage>("games/{game_id}/{player_id}/state") { message ->
            val gameId = call.parameters["game_id"]?.toLongOrNull() ?: throw BadRequestException("")
            val playerId = call.parameters["player_id"]?.toLongOrNull() ?: throw BadRequestException("")

            val newValue = newSuspendedTransaction {
                val game = Game.findById(gameId) ?: throw NotFoundException()
                val team = Team.find(gameId, playerId) ?: throw NotFoundException()
                val state = game.teamStates[team] ?: throw NotFoundException()

                aggregateState(state, message.uberId.group to message.uberId.state, message.value)
            }

            server.connections.onGameUpdate(gameId)
            server.connections.syncState(gameId, playerId, UberId(message.uberId.group, message.uberId.state), newValue, true)

            server.connections.onGameUpdate(gameId)
            call.respond(HttpStatusCode.NoContent)
        }

        authenticate(SESSION_AUTH) {
            post("games") {
                val game = newSuspendedTransaction {Game.new {} }
                call.respondText("${game.id.value}", status = HttpStatusCode.Created)
            }
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
                }
                val user = newSuspendedTransaction {  User.find{
                    Users.id eq playerId
                }.firstOrNull()?.name } ?: "Mystery User"

                outgoing.sendMessage(InitGameSyncMessage(coopStates().plus(initData.orEmpty())))
                outgoing.sendMessage(PrintTextMessage(text = "$user - Connected", frames = 600, ypos = 3f))

                fun rezero(n: Int) = if(n == -1) 0 else n
                protocol {
                    onMessage(UberStateUpdateMessage::class) {
                        val real_state = rezero(uberId.state)
                        val real_group = rezero(uberId.group)
                        val real_value = if(value == -1f) 0f else value
                        val (newValue, game) = newSuspendedTransaction {
                            logger.info("($real_group, $real_state) -> $real_value")
                            val playerData = GameState.findById(gameStateId) ?: error("Inconsistent game state")
                            aggregateState(playerData, real_group to real_state, real_value) to
                            playerData.game.id.value
                        }
                        val pc = server.connections.playerConns[playerId]!!
                        if(pc.gameId != game) {
                            server.connections.unregisterGameConn(playerId)
                            server.connections.registerGameConn(pc.socket, playerId, game)
                        }
                        server.connections.onGameUpdate(game)
                        server.connections.syncState(game, playerId, UberId(real_group, real_state), newValue)
                    }
                }
            }
        }
    }

    private fun aggregateState(state: GameState, uberId: Pair<Int, Int>, value: Float): Float{
        val data = state.uberStateData
        val newVal = when(state.team.members.count()){
            1L -> value
            else -> max(data[uberId] ?: 0f, value)
        }
        data[uberId] = newVal
        state.uberStateData = data
        return newVal
    }

}