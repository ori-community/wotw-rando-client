package wotw.server.database.model

import org.jetbrains.exposed.dao.LongEntity
import org.jetbrains.exposed.dao.LongEntityClass
import org.jetbrains.exposed.dao.id.EntityID
import org.jetbrains.exposed.dao.id.LongIdTable
import org.jetbrains.exposed.sql.and
import org.jetbrains.exposed.sql.select
import wotw.server.bingo.UberStateMap

object Teams : LongIdTable() {
    val gameId = reference("game_id", Games)
    val name = varchar("name", 255)
}

class Team(id: EntityID<Long>) : LongEntity(id) {
    var game by Game referencedOn Teams.gameId
    var name by Teams.name
    var members by User via TeamMemberships

    companion object : LongEntityClass<Team>(Teams) {
        fun find(gameId: Long, playerId: Long) = Teams.innerJoin(TeamMemberships).select {
            (Teams.gameId eq gameId) and (TeamMemberships.playerId eq playerId)
        }.map { Team.wrapRow(it) }.firstOrNull()

        fun new(game: Game, player: User) =
            GameState.new {
                this.game = game
                val team = Team.new {
                    this.game = game
                    this.name = player.name + "'s team"
                }
                this.team = team
                TeamMembership.new {
                    this.player = player
                    this.team = team
                }
                uberStateData = UberStateMap()
            }.team
    }
}

object TeamMemberships : LongIdTable() {
    val teamId = reference("team_id", Teams)
    val playerId = reference("user_id", Users)

    init {
        uniqueIndex(TeamMemberships.teamId, TeamMemberships.playerId)
    }
}

class TeamMembership(id: EntityID<Long>) : LongEntity(id) {
    companion object : LongEntityClass<TeamMembership>(TeamMemberships)

    var team by Team referencedOn TeamMemberships.teamId
    var player by User referencedOn TeamMemberships.playerId
}
