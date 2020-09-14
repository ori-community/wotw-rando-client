package wotw.server.database.model

import org.jetbrains.exposed.dao.UUIDEntity
import org.jetbrains.exposed.dao.UUIDEntityClass
import org.jetbrains.exposed.dao.id.EntityID
import org.jetbrains.exposed.dao.id.UUIDTable
import java.util.*

object Tokens : UUIDTable("tokens") {
    val userId = reference("user_id", Users)
    override val primaryKey = PrimaryKey(id)
}

class Token(id: EntityID<UUID>): UUIDEntity(id){
    companion object : UUIDEntityClass<Token>(Tokens)
    var user by User referencedOn Tokens.userId
}