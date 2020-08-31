package wotw.server.database.model

import org.jetbrains.exposed.dao.LongEntity
import org.jetbrains.exposed.dao.LongEntityClass
import org.jetbrains.exposed.dao.id.EntityID
import org.jetbrains.exposed.dao.id.LongIdTable
import wotw.io.messages.protobuf.PlayerInfo
import wotw.server.bingo.BingoCard
import wotw.server.database.jsonb

object Games : LongIdTable("game") {
    override val primaryKey = PrimaryKey(id)
    val seed = reference("seed", Seeds).nullable()
    val board = jsonb("board", BingoCard.serializer()).nullable()
}

class Game(id: EntityID<Long>) : LongEntity(id) {
    val players by PlayerData referrersOn PlayerDataTable.gameId
    var seed by Games.seed
    var board by Games.board

    fun playerInfo(): List<PlayerInfo> {
        return players.map { playerData ->
            PlayerInfo(
                playerData.user.id.value,
                playerData.user.name,
                board?.goals?.count { it.value.isCompleted(playerData.uberStateData) }.toString() + " / ${board?.goals?.size}"
            )
        }.sortedByDescending { it.rank }
    }

    companion object : LongEntityClass<Game>(Games)
}
