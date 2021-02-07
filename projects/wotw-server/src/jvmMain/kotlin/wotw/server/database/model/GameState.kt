package wotw.server.database.model

import kotlinx.serialization.InternalSerializationApi
import kotlinx.serialization.serializer
import org.jetbrains.exposed.dao.LongEntity
import org.jetbrains.exposed.dao.LongEntityClass
import org.jetbrains.exposed.dao.id.EntityID
import org.jetbrains.exposed.dao.id.LongIdTable
import org.jetbrains.exposed.sql.and
import wotw.io.messages.protobuf.UberId
import wotw.server.api.*
import wotw.server.api.UberStateSyncStrategy.NotificaitonGroup.NONE
import wotw.server.bingo.UberStateMap
import wotw.server.bingo.coopAggregation
import wotw.server.database.jsonb

object GameStates : LongIdTable() {
    val gameId = reference("game_id", Games)
    val teamId = reference("user_id", Teams)
    @OptIn(InternalSerializationApi::class)
    val uberStateData = jsonb("uber_state_data", UberStateMap::class.serializer())

    //TODO - migrate later
    override val tableName: String = "playerdata"
    init {
        uniqueIndex(gameId, teamId)
    }
}

class GameState(id: EntityID<Long>): LongEntity(id){
    var game by Game referencedOn GameStates.gameId
    var team by Team referencedOn GameStates.teamId
    var uberStateData by GameStates.uberStateData

    companion object : LongEntityClass<GameState>(GameStates){
        fun find(gameId: Long, playerId: Long) = find{
            (GameStates.gameId eq gameId) and (GameStates.teamId eq playerId)
        }.singleOrNull()
    }

    fun generateStateAggregationForGame(): AggregationStrategyRegistry {
        val ids = game.board?.goals?.flatMap { it.value.keys }
            ?.map { UberId(it.first, it.second) } ?: emptySet()

        var aggr = AggregationStrategyRegistry().register(
            sync(ids).notify(NONE)
        )
        if(team.members.count() > 1f)
            aggr += coopAggregation

        return aggr
    }
}