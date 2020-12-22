package wotw.server.api

import io.ktor.http.cio.websocket.*
import kotlinx.coroutines.channels.SendChannel
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.server.database.model.Team
import wotw.server.database.model.User
import wotw.server.util.logger
import wotw.util.MultiMap
import java.util.*

class ConnectionRegistry {
    val logger = logger()

    data class PlayerConn(val socket: WebSocketSession, val gameId: Long?)

    private val bingoGameConns = MultiMap<Long, WebSocketSession>(Collections.synchronizedMap(hashMapOf()))
    /*
    * A Map (GameId?, PlayerId) -> WebSocketSession
    * If GameId == null then Socket listens to newest
    * */
    private val bingoPlayerConns =
        MultiMap<Pair<Long?, Long>, WebSocketSession>(Collections.synchronizedMap(hashMapOf()))
    val playerConns = Collections.synchronizedMap(hashMapOf<Long, PlayerConn>())

    fun registerBingoBoardConn(socket: WebSocketSession, gameId: Long? = null, playerId: Long? = null) {
        if(gameId != null)
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

    fun unregisterBingoBoardConn(socket: WebSocketSession, gameId: Long? = null, playerId: Long) {
        bingoPlayerConns[gameId to playerId] -= socket
    }

    //------------------------Convenience sending functions-------------------------------
    suspend fun toTeam(teamId: Long, message: suspend SendChannel<Frame>.() -> Unit) =
        toTeam(teamId, *arrayOf(message))

    suspend fun toTeam(teamId: Long, vararg messages: suspend SendChannel<Frame>.() -> Unit) {
        val (players, gameId) = newSuspendedTransaction {
            val team = Team.findById(teamId) ?: return@newSuspendedTransaction null
            team.members.map { it.id.value } to team.game.id.value
        } ?: return
        toPlayers(players, gameId, *messages)
    }

    suspend fun toTeam(gameId: Long, playerId: Long, echo: Boolean = true, message: suspend SendChannel<Frame>.() -> Unit) =
        toTeam(gameId, playerId, echo, *arrayOf(message))

    suspend fun toTeam(gameId: Long, playerId: Long, echo: Boolean = true, vararg messages: suspend SendChannel<Frame>.() -> Unit) {
        var players = newSuspendedTransaction {
            Team.find(gameId, playerId)?.members?.map { it.id.value }
        } ?: return
        if(!echo)
            players = players.filter { it != playerId }
        toPlayers(if(echo) players else players.filter { it != playerId }, gameId, *messages)
    }

    suspend fun toPlayers(
        players: Iterable<Long>,
        gameId: Long? = null,
        message: suspend SendChannel<Frame>.() -> Unit
    ) =
        toPlayers(players, gameId, *arrayOf(message))

    suspend fun toPlayers(
        players: Iterable<Long>,
        gameId: Long? = null,
        vararg messages: suspend SendChannel<Frame>.() -> Unit
    ) {
        for (player in players) {
            playerConns[player]?.let { conn ->
                for (message in messages) {
                    try {
                        if (gameId == null || gameId == conn.gameId)
                            message(conn.socket.outgoing)
                    } catch (e: Throwable) {
                        println(e)
                    }
                }
            }
        }
    }

    suspend fun toObservers(gameId: Long, message: suspend SendChannel<Frame>.() -> Unit) =
        toObservers(gameId, *arrayOf(message))

    suspend fun toObservers(gameId: Long, vararg messages: suspend SendChannel<Frame>.() -> Unit) {
        bingoGameConns[gameId].forEach { conn ->
            for (message in messages) {
                try {
                    message(conn.outgoing)
                } catch (e: Throwable) {
                    println(e)
                }
            }
        }
    }

    suspend fun toObservers(gameId: Long, playerId: Long, message: suspend SendChannel<Frame>.() -> Unit) =
        toObservers(gameId, playerId, *arrayOf(message))

    suspend fun toObservers(gameId: Long, playerId: Long, vararg messages: suspend SendChannel<Frame>.() -> Unit) {
        var conns: Set<WebSocketSession> = bingoPlayerConns[gameId to playerId]
        if(newSuspendedTransaction {
            User.findById(playerId)?.latestBingoGame?.id?.value == gameId
        })
            conns = conns + bingoPlayerConns[null to playerId]

        conns.forEach { conn ->
            for (message in messages) {
                try {
                    message(conn.outgoing)
                } catch (e: Throwable) {
                    println(e)
                }
            }
        }
    }
}