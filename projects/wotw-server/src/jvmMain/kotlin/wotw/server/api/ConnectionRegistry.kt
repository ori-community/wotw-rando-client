package wotw.server.api

import io.ktor.http.cio.websocket.*
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.protobuf.SyncBoardMessage
import wotw.io.messages.protobuf.SyncPlayersMessage
import wotw.io.messages.protobuf.UberId
import wotw.io.messages.protobuf.UberStateUpdateMessage
import wotw.io.messages.sendMessage
import wotw.server.database.model.Game
import wotw.server.util.logger
import wotw.util.MultiMap
import java.util.*

class ConnectionRegistry {
    val logger = logger()

    data class PlayerConn(val socket: WebSocketSession, val gameId: Long?)
    private val bingoGameConns = MultiMap<Long, WebSocketSession>(Collections.synchronizedMap(hashMapOf()))
    private val bingoPlayerConns = MultiMap<Pair<Long, Long>, WebSocketSession>(Collections.synchronizedMap(hashMapOf()))
    val playerConns = Collections.synchronizedMap(hashMapOf<Long, PlayerConn>())

    fun registerBingoBoardConn(socket: WebSocketSession, gameId: Long, playerId: Long? = null) {
        bingoGameConns[gameId] += socket
        if (playerId != null)
            bingoPlayerConns[gameId to playerId] += socket
    }

    fun registerGameConn(socket: WebSocketSession, playerId: Long, gameId: Long? = null) =
        run { playerConns[playerId] = PlayerConn(socket, gameId) }

    fun unregisterGameConn(playerId: Long) = playerConns.remove(playerId)

    fun unregisterAllBingoBoardConns(socket: WebSocketSession, gameId: Long) {
        bingoGameConns[gameId] -= socket
        bingoPlayerConns.filterKeys { it.first == gameId }.forEach { bingoPlayerConns[it.key] -= socket }
    }

    fun unregisterBingoBoardConn(socket: WebSocketSession, gameId: Long, playerId: Long) {
        bingoPlayerConns[gameId to playerId] -= socket
    }

    //TODO: Move
    suspend fun onGameUpdate(gameId: Long) {
        val messages = mutableListOf<suspend () -> Unit>()

        newSuspendedTransaction {
            val game = Game.findById(gameId) ?: return@newSuspendedTransaction
            val info = game.playerInfo()

            bingoGameConns[gameId].forEach {
                messages += { it.outgoing.sendMessage(SyncPlayersMessage(info)) }
            }

            game.board?.let { board ->
            game.players.forEach { playerData ->

                val playerId = playerData.user.id.value
                if(playerConns[playerId] != null) {
                    val bingoPlayerData = board.getPlayerData(playerData.uberStateData)
                    messages += {
                        playerConns[playerId]!!.socket.outgoing.sendMessage(UberStateUpdateMessage(UberId(10, 0), bingoPlayerData.squares.toFloat()))
                        playerConns[playerId]!!.socket.outgoing.sendMessage(UberStateUpdateMessage(UberId(10, 1), bingoPlayerData.lines.toFloat()))
                        playerConns[playerId]!!.socket.outgoing.sendMessage(UberStateUpdateMessage(UberId(10, 2), bingoPlayerData.rank.toFloat()))
                    }
                }
                bingoPlayerConns[gameId to playerId].forEach {
                    val data = playerData.uberStateData
                    messages += {
                        it.outgoing.sendMessage(
                            SyncBoardMessage(
                                board.toBingoBoard(data),
                                true
                            ).also {
                                // println(it)
                                // this was too spammy -eiko
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