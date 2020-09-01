package wotw.server.database.model

import org.jetbrains.exposed.dao.LongEntity
import org.jetbrains.exposed.dao.LongEntityClass
import org.jetbrains.exposed.dao.id.EntityID
import org.jetbrains.exposed.dao.id.LongIdTable

object Users : LongIdTable("users") {
    val name = text("nickname")
    override val primaryKey = PrimaryKey(id)
}

class User(id: EntityID<Long>): LongEntity(id){
    companion object : LongEntityClass<User>(Users)
    var name by Users.name
    val games by Game via PlayerDataTable
}