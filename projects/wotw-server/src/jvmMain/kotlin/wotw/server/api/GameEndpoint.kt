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
import org.jetbrains.exposed.sql.and
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import org.jetbrains.exposed.sql.transactions.transaction
import wotw.io.messages.protobuf.InitBingoMessage
import wotw.io.messages.protobuf.PrintTextMessage
import wotw.io.messages.protobuf.UberId
import wotw.io.messages.protobuf.UberStateUpdateMessage
import wotw.io.messages.sendMessage
import wotw.server.database.model.PlayerData
import wotw.server.database.model.PlayerDataTable
import wotw.server.io.protocol
import wotw.server.main.WotwBackendServer
import wotw.server.util.logger

class GameEndpoint(server: WotwBackendServer) : Endpoint(server) {
    val logger = logger()
    override fun Route.initRouting() {
        post<UberStateUpdateMessage>("games/{game_id}/{player_id}/state") { message ->
            val gameId = call.parameters["game_id"]?.toLongOrNull() ?: throw BadRequestException("")
            val playerId = call.parameters["player_id"]?.toLongOrNull() ?: throw BadRequestException("")
            val game = newSuspendedTransaction {
                val playerData = PlayerData.find {
                    (PlayerDataTable.gameId eq gameId) and (PlayerDataTable.userId eq playerId)
                }.singleOrNull() ?: throw NotFoundException()
                val data = playerData.uberStateData
                data[message.uberId.group to message.uberId.state] = message.value
                playerData.uberStateData = data
                playerData.game.id.value
            }
            server.connections.onGameUpdate(game)
            call.respond(HttpStatusCode.NoContent)
        }

        authenticate(SESSION_AUTH) {
            webSocket("game_sync") {
                logger.info("socket connect start")
                val playerId = call.sessions.get<UserSession>()?.user ?: return@webSocket this.close(
                    CloseReason(CloseReason.Codes.VIOLATED_POLICY, "No session active!")
                )
                val playerDataId = newSuspendedTransaction {
                    PlayerData.find {
                        PlayerDataTable.userId eq playerId
                    }.sortedByDescending { it.id.value }.firstOrNull()?.id?.value
                } ?: return@webSocket this.close(
                    CloseReason(CloseReason.Codes.NORMAL, "Player is not part of an active game")
                )
                logger.info("socket connect; did not close")

                val initData = newSuspendedTransaction {
                    PlayerData.findById(playerDataId)?.game?.board?.goals?.flatMap { it.value.keys }
                        ?.map { UberId(it.first, it.second) }
                }
                outgoing.sendMessage(InitBingoMessage(initData?.distinct() ?: emptyList()))
                outgoing.sendMessage(PrintTextMessage(text = "Hello ", frames = 240, ypos = 3f))

                protocol {
                    onMessage(UberStateUpdateMessage::class) {
                        val game = newSuspendedTransaction {
                            val playerData = PlayerData.findById(playerDataId) ?: error("Inconsistent game state")
                            val data = playerData.uberStateData
                            data[uberId.group to uberId.state] = value
                            playerData.uberStateData = data
                            logger.info("(${uberId.group}, ${uberId.state}) -> $value")
                            playerData.game.id.value
                        }
                        server.connections.onGameUpdate(game)
                    }
                }
            }
        }
    }
}