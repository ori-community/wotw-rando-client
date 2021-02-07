package wotw.server.sync

import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.protobuf.*
import wotw.io.messages.sendMessage
import wotw.server.api.AggregationStrategyRegistry
import wotw.server.api.UberStateSyncStrategy
import wotw.server.database.model.Game
import wotw.server.database.model.GameState
import wotw.server.main.WotwBackendServer
import wotw.server.util.zerore
import java.util.*
import kotlin.to

class StateSynchronization(private val server: WotwBackendServer) {
    //TODO store coop flag in game so we can do this cleanly
    //gameId to syncing rules
    val aggregationStrategies: MutableMap<Long, AggregationStrategyRegistry> = Collections.synchronizedMap(hashMapOf())

    fun aggregateState(state: GameState, uberId: UberId, value: Float): AggregationResult {
        val data = state.uberStateData
        val oldValue = data[uberId.group to uberId.state]

        val strategy = aggregationStrategies.getOrPut(state.game.id.value) {
            state.generateStateAggregationForGame()
        }.getStrategy(uberId) ?:
            return AggregationResult(oldValue, oldValue, value, false)

        if (!strategy.trigger(oldValue, value))
            return AggregationResult(oldValue, oldValue, value, false)

        val newValue = oldValue?.let { strategy.aggregation(it, value) } ?: value
        data[uberId.group to uberId.state] = newValue

        state.uberStateData = data
        return AggregationResult(oldValue, newValue, value, true)
    }

    suspend fun syncState(gameId: Long, playerId: Long, uberId: UberId, aggregationResult: AggregationResult) {
        val strategy = aggregationStrategies[gameId]?.getStrategy(uberId) ?: return
        if (!aggregationResult.triggered || strategy.group == UberStateSyncStrategy.NotificaitonGroup.NONE)
            return

        val uberId = UberId(zerore(uberId.group), zerore(uberId.state))
        val echo = strategy.group == UberStateSyncStrategy.NotificaitonGroup.ALL
                || aggregationResult.sentValue != aggregationResult.newValue && strategy.group == UberStateSyncStrategy.NotificaitonGroup.DIFFERENT

        val team = strategy.group ==
                UberStateSyncStrategy.NotificaitonGroup.ALL ||
                aggregationResult.oldValue != aggregationResult.newValue &&
                (strategy.group == UberStateSyncStrategy.NotificaitonGroup.OTHERS ||
                        strategy.group == UberStateSyncStrategy.NotificaitonGroup.DIFFERENT)

        if (team) {
            server.connections.toTeam(gameId, playerId, echo) {
                sendMessage(
                    UberStateUpdateMessage(
                        uberId,
                        zerore(aggregationResult.newValue ?: 0f)
                    )
                )
            }
        } else if (echo) {
            server.connections.toPlayers(listOf(playerId), gameId) {
                sendMessage(
                    UberStateUpdateMessage(
                        uberId,
                        zerore(aggregationResult.newValue ?: 0f)
                    )
                )
            }
        }
    }

    suspend fun syncStates(gameId: Long, playerId: Long, updates: Map<UberId, AggregationResult>) {
        val triggered = updates.filter { it.value.triggered }
        val forPlayer = triggered.filter {
            val strategy = aggregationStrategies[gameId]?.getStrategy(it.key)
            strategy?.group == UberStateSyncStrategy.NotificaitonGroup.ALL
                    || it.value.sentValue != it.value.newValue && strategy?.group == UberStateSyncStrategy.NotificaitonGroup.DIFFERENT
        }
        val forTeam = triggered.filter {
            val strategy = aggregationStrategies[gameId]?.getStrategy(it.key)
            strategy?.group == UberStateSyncStrategy.NotificaitonGroup.ALL ||
                    it.value.oldValue != it.value.newValue &&
                    (strategy?.group == UberStateSyncStrategy.NotificaitonGroup.OTHERS ||
                            strategy?.group == UberStateSyncStrategy.NotificaitonGroup.DIFFERENT)
        }
        server.connections.toTeam(gameId, playerId, false) {
            sendMessage(
                UberStateBatchUpdateMessage(
                    forTeam.map { (uberId, result) ->
                        UberStateUpdateMessage(
                            UberId(zerore(uberId.group), zerore(uberId.state)),
                            zerore(result.newValue ?: 0f)
                        )
                    }
                )
            )
        }
        server.connections.toPlayers(listOf(playerId), gameId) {
            sendMessage(
                UberStateBatchUpdateMessage(
                    forPlayer.map { (uberId, result) ->
                        UberStateUpdateMessage(
                            UberId(zerore(uberId.group), zerore(uberId.state)),
                            zerore(result.newValue ?: 0f)
                        )
                    }
                )
            )
        }
    }

    suspend fun forceSyncStates(gameId: Long, playerId: Long, updates: Map<UberId, Float>) {
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
                val bingoPlayerData = board.getPlayerData(state.uberStateData)

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
            server.connections.toPlayers(players, gameId) { sendMessage(goalStateUpdate) }
            players.forEach { playerId ->
                server.connections.toObservers(gameId, playerId) { sendMessage(board) }
            }
        }

    }

    data class AggregationResult(
        val oldValue: Float?,
        val newValue: Float?,
        val sentValue: Float,
        val triggered: Boolean
    )
}