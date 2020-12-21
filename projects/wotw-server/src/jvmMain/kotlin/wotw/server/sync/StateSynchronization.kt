package wotw.server.sync

import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.protobuf.*
import wotw.io.messages.sendMessage
import wotw.server.api.uberAggregateFunction
import wotw.server.database.model.Game
import wotw.server.database.model.GameState
import wotw.server.main.WotwBackendServer
import kotlin.to

class StateSynchronization(private val server: WotwBackendServer) {
    fun aggregateState(state: GameState, uberId: UberId, value: Float): Float {
        val data = state.uberStateData
        val newValue = if (state.team.members.count() == 1L)
            value
        else data[uberId.group to uberId.state]?.let { uberId.uberAggregateFunction(it, value) } ?: value

        data[uberId.group to uberId.state] = newValue
        state.uberStateData = data
        return newValue
    }

    suspend fun syncState(gameId: Long, playerId: Long, uberId: UberId, value: Float, echo: Boolean = false) {
        server.connections.toTeam(gameId, playerId, echo) {
            sendMessage(
                UberStateUpdateMessage(
                    uberId,
                    value
                )
            )
        }
    }

    suspend fun syncStates(gameId: Long, playerId: Long, updates: Map<UberId, Float>) {
        server.connections.toTeam(gameId, playerId) {
            sendMessage(
                UberStateBatchUpdateMessage(
                    updates.map { (uberId, value) ->
                        UberStateUpdateMessage(
                            uberId,
                            value
                        )
                    }
                )
            )
        }
    }

    suspend fun syncGameProgress(gameId: Long) {
        val (playerInfo, stateUpdates) = newSuspendedTransaction {
            val game = Game.findById(gameId) ?: return@newSuspendedTransaction null
            val board = game.board ?: return@newSuspendedTransaction null

            val info = game.playerInfo()
            val playerInfo = SyncBingoPlayersMessage(info)
            val teamUpdates = game.teams.mapNotNull {
                val state = game.teamStates[it] ?: return@mapNotNull null
                val bingoPlayerData = board.getPlayerData(state.uberStateData) ?: return@mapNotNull null

                Triple(
                    it.members.map { it.id.value }, UberStateBatchUpdateMessage(
                        UberStateUpdateMessage(
                            UberId(10, 0),
                            bingoPlayerData.squares.toFloat()
                        ), UberStateUpdateMessage(
                            UberId(10, 1),
                            bingoPlayerData.lines.toFloat()
                        ), UberStateUpdateMessage(
                            UberId(10, 2),
                            bingoPlayerData.rank.toFloat()
                        )
                    ), SyncBoardMessage(
                        board.toBingoBoard(state.uberStateData),
                        true
                    )
                )
            }

            playerInfo to teamUpdates
        } ?: return

        server.connections.toObservers(gameId) { sendMessage(playerInfo) }
        stateUpdates.forEach { (players, goalStateUpdate, board) ->
            server.connections.toPlayers(players) { sendMessage(goalStateUpdate) }
            players.forEach { playerId ->
                server.connections.toObservers(gameId, playerId) { sendMessage(board) }
            }
        }

    }
}