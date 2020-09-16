package wotw.server.api

import io.ktor.http.cio.websocket.*
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import org.jetbrains.exposed.sql.transactions.transaction
import wotw.io.messages.protobuf.SyncBoardMessage
import wotw.io.messages.protobuf.SyncPlayersMessage
import wotw.io.messages.sendMessage
import wotw.server.database.model.Game
import wotw.util.MultiMap
import java.util.*

class ConnectionRegistry {
    private val gameConnections = MultiMap<Long, WebSocketSession>(Collections.synchronizedMap(hashMapOf()))
    private val playerConnections =
        MultiMap<Pair<Long, Long>, WebSocketSession>(Collections.synchronizedMap(hashMapOf()))

    fun register(socket: WebSocketSession, gameId: Long, playerId: Long? = null) {
        gameConnections[gameId] += socket
        if (playerId != null)
            playerConnections[gameId to playerId] += socket
    }

    fun unregister(socket: WebSocketSession, gameId: Long) {
        gameConnections[gameId] -= socket
        playerConnections.filterKeys { it.first == gameId }.forEach { playerConnections[it.key] -= socket }
    }

    fun unregister(socket: WebSocketSession, gameId: Long, playerId: Long) {
        playerConnections[gameId to playerId] -= socket
    }

    //TODO: Move
    suspend fun onGameUpdate(gameId: Long) {
        val messages = mutableListOf<suspend () -> Unit>()

        newSuspendedTransaction {
            val game = Game.findById(gameId) ?: return@newSuspendedTransaction
            val info = game.playerInfo()
            gameConnections[gameId].forEach {
                messages += { it.outgoing.sendMessage(SyncPlayersMessage(info)) }
            }

            game.board?.let { board ->
                game.players.forEach { playerData ->
                    val playerId = playerData.user.id.value
                    playerConnections[gameId to playerId].forEach {
                        val data = playerData.uberStateData
                        messages += {
                            it.outgoing.sendMessage(
                                SyncBoardMessage(
                                    board.toBingoBoard(data),
                                    true
                                ).also {
                                    // println(it)
                                    // this is too spammy -eiko
                                }
                            )
                        }
                    }
                }
            }
        }

        messages.forEach {
            try {
                it.invoke()
            } catch (e: Throwable) {
                println(e)
            }
        }
    }

}