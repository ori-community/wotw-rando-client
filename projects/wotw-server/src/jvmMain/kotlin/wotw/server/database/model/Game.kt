package wotw.server.database.model

import org.jetbrains.exposed.dao.LongEntity
import org.jetbrains.exposed.dao.LongEntityClass
import org.jetbrains.exposed.dao.id.EntityID
import org.jetbrains.exposed.dao.id.LongIdTable
import wotw.io.messages.protobuf.BingoPlayerInfo
import wotw.server.bingo.BingoCard
import wotw.server.bingo.PlayerBingoData
import wotw.server.database.jsonb

object Games : LongIdTable("game") {
    override val primaryKey = PrimaryKey(id)
    val seed = reference("seed", Seeds).nullable()
    val board = jsonb("board", BingoCard.serializer()).nullable()
}

class Game(id: EntityID<Long>) : LongEntity(id) {
//    var seed by Games.seed
    var board by Games.board
    val teams by Team referrersOn Teams.gameId
    private val states by GameState referrersOn GameStates.gameId
    val teamStates
        get() = states.map { it.team to it }.toMap()
    val players
        get() = teams.flatMap { it.members }

    fun playerInfo(): List<BingoPlayerInfo> {
        return teamStates.map { (team, state) ->
            val data = board?.getPlayerData(state.uberStateData) ?: PlayerBingoData(0, 0, 0)
            BingoPlayerInfo(
                team.members.firstOrNull()?.id?.value ?: -1L,
                if(team.members.count() == 1L) team.members.first().name else team.name,
                "${data.lines} line${(if(data.lines == 1) "" else "s")}, ${data.squares} / ${board?.goals?.size}",
                data.rank,
                data.squares,
                data.lines
            )
        }.sortedByDescending { it.rank }
    }

    companion object : LongEntityClass<Game>(Games)
}
