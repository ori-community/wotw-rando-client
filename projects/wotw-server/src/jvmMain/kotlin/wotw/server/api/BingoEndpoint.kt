package wotw.server.api

import io.ktor.application.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.http.cio.websocket.*
import io.ktor.response.*
import io.ktor.routing.*
import io.ktor.websocket.*
import kotlinx.serialization.json.buildJsonObject
import kotlinx.serialization.json.put
import org.jetbrains.exposed.sql.and
import org.jetbrains.exposed.sql.transactions.transaction
import wotw.io.messages.protobuf.BingoData
import wotw.io.messages.protobuf.RequestUpdatesMessage
import wotw.io.messages.protobuf.SyncBoardMessage
import wotw.io.messages.sendMessage
import wotw.server.bingo.BingoBoardGenerator
import wotw.server.bingo.UberStateMap
import wotw.server.database.model.Game
import wotw.server.database.model.PlayerData
import wotw.server.database.model.PlayerDataTable
import wotw.server.database.model.User
import wotw.server.exception.AlreadyExistsException
import wotw.server.io.protocol
import wotw.server.main.WotwBackendServer

class BingoEndpoint(server: WotwBackendServer) : Endpoint(server) {
    override fun Route.initRouting() {
        get("bingo/{game_id}"){
            val gameId = call.parameters["game_id"]?.toLongOrNull() ?: throw BadRequestException("Cannot parse game_id")
            val boardData = transaction {
                val game = Game.findById(gameId) ?: throw NotFoundException()
                val board = game.board ?: throw NotFoundException()
                val info = game.playerInfo()
                BingoData(board.toBingoBoard(UberStateMap.empty), info)
            }
            call.respond(boardData)
        }

        post("bingo") {
            val game = transaction {
                Game.new {
                    board = BingoBoardGenerator().generateBoard()
                }
            }

            call.respond(HttpStatusCode.Created, buildJsonObject {
                put("id", game.id.value)
            })
        }
        post<Long>("bingo/{game_id}/players") { userId ->

            val gameId = call.parameters["game_id"]?.toLongOrNull() ?: return@post call.respondText(
                "Cannot parse gameID",
                status = HttpStatusCode.BadRequest
            )
            val game = transaction {
                val existing = PlayerData.find {
                    (PlayerDataTable.gameId eq gameId) and
                            (PlayerDataTable.userId eq userId)
                }
                if(!existing.empty())
                    throw AlreadyExistsException()

                val game = Game.findById(gameId) ?: throw NotFoundException()
                val user = User.findById(userId) ?: throw NotFoundException()

                PlayerData.new {
                    this.game = game
                    this.user = user
                    uberStateData = UberStateMap()
                }
                game
            }

            server.connections.onGameUpdate(game)

            call.respond(HttpStatusCode.OK)
        }
        bingoSyncWebsocket()
    }

    private fun Route.bingoSyncWebsocket() {
        webSocket(path = "/bingosync/{game_id}") {
            val gameId = call.parameters["game_id"]?.toLongOrNull() ?: return@webSocket this.close(CloseReason(CloseReason.Codes.VIOLATED_POLICY, "Game-ID is required"))
            val (game, board) = transaction {
                val game = Game.findById(gameId)
                game to game?.board
            }
            if (game == null || board == null)
                return@webSocket this.close(CloseReason(CloseReason.Codes.NORMAL, "Requested Bingo-Game does not exist"))

            var playerId = -1L
            server.connections.register(this@webSocket, gameId)
            protocol {
                onMessage(RequestUpdatesMessage::class) {
                    if(this.playerId != playerId){
                        server.connections.unregister(this@webSocket, gameId, playerId)
                        playerId = this.playerId
                        server.connections.register(this@webSocket, gameId, playerId)

                        val playerData = transaction {
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