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

    fun aggregateState(state: GameState, uberId: UberId, value: Double): AggregationResult {
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
        if (!aggregationResult.triggered || strategy.group == UberStateSyncStrategy.NotificationGroup.NONE)
            return

        val uberId = UberId(zerore(uberId.group), zerore(uberId.state))
        val echo = strategy.group == UberStateSyncStrategy.NotificationGroup.ALL
                || aggregationResult.sentValue != aggregationResult.newValue && strategy.group == UberStateSyncStrategy.NotificationGroup.DIFFERENT

        val team = strategy.group ==
                UberStateSyncStrategy.NotificationGroup.ALL ||
                aggregationResult.oldValue != aggregationResult.newValue &&
                (strategy.group == UberStateSyncStrategy.NotificationGroup.OTHERS ||
                        strategy.group == UberStateSyncStrategy.NotificationGroup.DIFFERENT)

        if (team) {
            server.connections.toTeam(gameId, playerId, echo) {
                sendMessage(
                    UberStateUpdateMessage(
                        uberId,
                        zerore(aggregationResult.newValue ?: 0.0)
                    )
                )
            }
        } else if (echo) {
            server.connections.toPlayers(listOf(playerId), gameId) {
                sendMessage(
                    UberStateUpdateMessage(
                        uberId,
                        zerore(aggregationResult.newValue ?: 0.0)
                    )
                )
            }
        }
    }

    suspend fun syncStates(gameId: Long, playerId: Long, updates: Map<UberId, AggregationResult>) {
        val triggered = updates.filter { it.value.triggered }
        val forPlayer = triggered.filter {
            val strategy = aggregationStrategies[gameId]?.getStrategy(it.key)
            strategy?.group == UberStateSyncStrategy.NotificationGroup.ALL
                    || it.value.sentValue != it.value.newValue && strategy?.group == UberStateSyncStrategy.NotificationGroup.DIFFERENT
        }
        val forTeam = triggered.filter {
            val strategy = aggregationStrategies[gameId]?.getStrategy(it.key)
            strategy?.group == UberStateSyncStrategy.NotificationGroup.ALL ||
                    it.value.oldValue != it.value.newValue &&
                    (strategy?.group == UberStateSyncStrategy.NotificationGroup.OTHERS ||
                            strategy?.group == UberStateSyncStrategy.NotificationGroup.DIFFERENT)
        }
        server.connections.toTeam(gameId, playerId, false) {
            sendMessage(
                UberStateBatchUpdateMessage(
                    forTeam.map { (uberId, result) ->
                        UberStateUpdateMessage(
                            UberId(zerore(uberId.group), zerore(uberId.state)),
                            zerore(result.newValue ?: 0.0)
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
                            zerore(result.newValue ?: 0.0)
                        )
                    }
                )
            )
        }
    }

    suspend fun forceSyncStates(gameId: Long, playerId: Long, updates: Map<UberId, Double>) {
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
        val (playerInfo, spectatorBoard, stateUpdates) = newSuspendedTransaction {
            val game = Game.findById(gameId) ?: return@newSuspendedTransaction null
            game.board ?: return@newSuspendedTransaction null

            val info = game.playerInfo()
            val playerInfo = SyncBingoPlayersMessage(info)
            val teamUpdates = game.teams.map { team ->
                val bingoPlayerData = game.playerInfo(team)
                Triple(
                    team.members.map { it.id.value },
                    UberStateBatchUpdateMessage(
                        UberStateUpdateMessage(
                            UberId(10, 0),
                            bingoPlayerData.squares.toDouble()
                        ), UberStateUpdateMessage(
                            UberId(10, 1),
                            bingoPlayerData.lines.toDouble()
                        ), UberStateUpdateMessage(
                            UberId(10, 2),
                            bingoPlayerData.rank.toDouble()
                        )
                    ), SyncBoardMessage(
                        game.createSyncableBoard(team),
                        true
                    )
                )
            }

            Triple(playerInfo,SyncBoardMessage(
                game.createSyncableBoard(null, true),
                true
            ),  teamUpdates)
        } ?: return

        server.connections.toObservers(gameId) { sendMessage(playerInfo) }
        server.connections.toObservers(gameId, true) { sendMessage(spectatorBoard) }
        stateUpdates.forEach { (players, goalStateUpdate, board) ->
            server.connections.toPlayers(players, gameId) { sendMessage(goalStateUpdate) }
            players.forEach { playerId ->
                server.connections.toObservers(gameId, playerId) { sendMessage(board) }
            }
        }

    }

    data class AggregationResult(
        val oldValue: Double?,
        val newValue: Double?,
        val sentValue: Double,
        val triggered: Boolean
    )
}