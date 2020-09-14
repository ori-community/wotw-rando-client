package wotw.server.database.model

import kotlinx.serialization.InternalSerializationApi
import kotlinx.serialization.serializer
import org.jetbrains.exposed.dao.LongEntity
import org.jetbrains.exposed.dao.LongEntityClass
import org.jetbrains.exposed.dao.id.EntityID
import org.jetbrains.exposed.dao.id.LongIdTable
import org.jetbrains.exposed.sql.and
import wotw.server.bingo.UberStateMap
import wotw.server.database.jsonb

//Why is the plural of data data ._.
object PlayerDataTable : LongIdTable() {
    val gameId = reference("game_id", Games)
    val userId = reference("user_id", Users)
    @OptIn(InternalSerializationApi::class)
    val uberStateData = jsonb("uber_state_data", UberStateMap::class.serializer())

    init {
        uniqueIndex(gameId, userId)
    }
    override val primaryKey = PrimaryKey(id)
}

class PlayerData(id: EntityID<Long>): LongEntity(id){
    var game by Game referencedOn PlayerDataTable.gameId
    var user by User referencedOn PlayerDataTable.userId
    var uberStateData by PlayerDataTable.uberStateData

    companion object : LongEntityClass<PlayerData>(PlayerDataTable){
        fun find(gameId: Long, playerId: Long) = find{
            (PlayerDataTable.gameId eq gameId) and (PlayerDataTable.userId eq playerId)
        }.singleOrNull()
    }
}