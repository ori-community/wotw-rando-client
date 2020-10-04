package wotw.server.database.model

import org.jetbrains.exposed.dao.LongEntity
import org.jetbrains.exposed.dao.LongEntityClass
import org.jetbrains.exposed.dao.id.EntityID
import org.jetbrains.exposed.dao.id.LongIdTable
import org.jetbrains.exposed.sql.and
import org.jetbrains.exposed.sql.select

object Teams: LongIdTable(){
    val gameId = reference("game_id", Games)
    val name = varchar("name", 255)
}

class Team(id: EntityID<Long>) : LongEntity(id) {
    var game by Game referencedOn Teams.gameId
    var name by Teams.name
    var members by User via TeamMemberships

    companion object : LongEntityClass<Team>(Teams){
        fun find(gameId: Long, playerId: Long) = Teams.innerJoin(TeamMemberships).select {
            (Teams.gameId eq gameId) and (TeamMemberships.playerId eq playerId)
        }.map { Team.wrapRow(it) }.firstOrNull()
    }
}

object TeamMemberships: LongIdTable(){
    val teamId = reference("team_id", Teams)
    val playerId = reference("user_id", Users)
    init {
        uniqueIndex(TeamMemberships.teamId, TeamMemberships.playerId)
    }
}

class TeamMembership(id: EntityID<Long>) : LongEntity(id){
    companion object : LongEntityClass<TeamMembership>(TeamMemberships)
    var team by Team referencedOn TeamMemberships.teamId
    var player by User referencedOn TeamMemberships.playerId
}
