package wotw.server.api

import io.ktor.application.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.http.cio.websocket.*
import io.ktor.request.*
import io.ktor.response.*
import io.ktor.routing.*
import io.ktor.sessions.*
import io.ktor.websocket.*
import kotlinx.serialization.json.buildJsonObject
import kotlinx.serialization.json.put
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.protobuf.BingoData
import wotw.io.messages.protobuf.RequestUpdatesMessage
import wotw.io.messages.protobuf.SyncBoardMessage
import wotw.io.messages.sendMessage
import wotw.server.bingo.BingoBoardGenerator
import wotw.server.bingo.UberStateMap
import wotw.server.database.model.*
import wotw.server.exception.AlreadyExistsException
import wotw.server.io.protocol
import wotw.server.main.WotwBackendServer

class BingoEndpoint(server: WotwBackendServer) : Endpoint(server) {
    override fun Route.initRouting() {
        get("bingo/{game_id}") {
            val gameId = call.parameters["game_id"]?.toLongOrNull() ?: throw BadRequestException("Cannot parse game_id")
            val boardData = newSuspendedTransaction {
                val game = Game.findById(gameId) ?: throw NotFoundException()
                val board = game.board ?: throw NotFoundException()
                val info = game.playerInfo()
                BingoData(board.toBingoBoard(UberStateMap.empty), info)
            }
            call.respond(boardData)
        }
        get("bingo") {
            val game = newSuspendedTransaction {
                Game.new {
                    board = BingoBoardGenerator().generateBoard()
                }
            }
            call.respond(HttpStatusCode.Created, buildJsonObject {
                put("id", game.id.value)
            })
        }
        post("bingo") {
            val game = newSuspendedTransaction {
                Game.new {
                    board = BingoBoardGenerator().generateBoard()
                }
            }

            call.respond(HttpStatusCode.Created, buildJsonObject {
                put("id", game.id.value)
            })

        }
        //FIXME
        post("bingo/{game_id}/players") {
            //FIXME
            val userId = call.receiveOrNull<Long>()
            val gameId = call.parameters["game_id"]?.toLongOrNull() ?: return@post call.respondText(
                "Cannot parse gameID",
                status = HttpStatusCode.BadRequest
            )
            val game = newSuspendedTransaction {
                val user = if (userId != null) {
                    User.findById(userId) ?: throw NotFoundException()
                } else {
                    //FIXME
                    val id = call.sessions.get<UserSession>()?.user ?: throw  NotFoundException()
                    //FIXME
                    User.findById(id) ?: throw  NotFoundException()
                }

                val existing = PlayerData.find(gameId, user.id.value)
                if (existing != null)
                    throw AlreadyExistsException()

                val game = Game.findById(gameId) ?: throw NotFoundException()

                PlayerData.new {
                    this.game = game
                    this.user = user
                    uberStateData = UberStateMap()
                }
                game.id.value
            }

            server.connections.onGameUpdate(game)

            call.respond(HttpStatusCode.OK)
        }
        bingoSyncWebsocket()
    }

    private fun Route.bingoSyncWebsocket() {
        webSocket(path = "/bingosync/{game_id}") {
            val gameId = call.parameters["game_id"]?.toLongOrNull() ?: return@webSocket this.close(
                CloseReason(
                    CloseReason.Codes.VIOLATED_POLICY,
                    "Game-ID is required"
                )
            )
            val (game, board) = newSuspendedTransaction {
                val game = Game.findById(gameId)
                game to game?.board
            }
            if (game == null || board == null)
                return@webSocket this.close(
                    CloseReason(
                        CloseReason.Codes.NORMAL,
                        "Requested Bingo-Game does not exist"
                    )
                )

            var playerId = -1L
            server.connections.register(this@webSocket, gameId)
            protocol {
                onMessage(RequestUpdatesMessage::class) {
                    if (this.playerId != playerId) {
                        server.connections.unregister(this@webSocket, gameId, playerId)
                        playerId = this.playerId
                        server.connections.register(this@webSocket, gameId, playerId)

                        val playerData = newSuspendedTransaction {
                            game.players.firstOrNull { it.user.id.value == playerId }?.uberStateData
                        }
                        outgoing.sendMessage(SyncBoardMessage(board.toBingoBoard(playerData), true))
                    }
                }
                onClose {
                    server.connections.unregister(this@webSocket, gameId)
                }
                onError {

                    server.connections.unregister(this@webSocket, gameId)
                }
                onMessage(Any::class) {
                    println("Incoming Message: $this")
                }
            }
        }
    }
}