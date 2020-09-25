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
    var seed by Games.seed
    var board by Games.board
    val teams by Team referrersOn Teams.gameId
    private val states by GameState referrersOn GameStates.gameId
    val teamStates
        get() = states.map { it.team to it }.toMap()
    val players
        get() = teams.flatMap { it.members }

    fun playerInfo(): List<PlayerInfo> {
        return teamStates.map { (team, state) ->
            PlayerInfo(
                team.members.firstOrNull()?.id?.value ?: -1L,
                team.name,
                board?.goals?.count { it.value.isCompleted(state.uberStateData) }.toString() + " / ${board?.goals?.size}"
            )
        }.sortedByDescending { it.rank }
    }

    companion object : LongEntityClass<Game>(Games)
}
