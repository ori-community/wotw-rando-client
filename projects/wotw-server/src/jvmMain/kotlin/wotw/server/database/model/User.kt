package wotw.server.database.model

import org.jetbrains.exposed.dao.LongEntity
import org.jetbrains.exposed.dao.LongEntityClass
import org.jetbrains.exposed.dao.id.EntityID
import org.jetbrains.exposed.dao.id.LongIdTable
import org.jetbrains.exposed.sql.select

object Users : LongIdTable("users") {
    val name = text("nickname")
    val isCustomName = bool("is_custom_name").default(false)
    override val primaryKey = PrimaryKey(id)
}

class User(id: EntityID<Long>) : LongEntity(id) {
    companion object : LongEntityClass<User>(Users)

    var name by Users.name
    var isCustomName by Users.isCustomName
    val games by Game via GameStates

    val latestBingoGame: Game?
        get() = (TeamMemberships innerJoin Teams innerJoin Games).slice(Teams.id, Games.id).select {
            TeamMemberships.playerId eq id.value
        }.sortedByDescending {
            it[Teams.id]
        }.firstOrNull()?.get(Games.id)?.let { Game.findById(it) }

}