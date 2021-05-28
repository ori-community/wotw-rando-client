package wotw.server.database.model

import org.jetbrains.exposed.dao.LongEntity
import org.jetbrains.exposed.dao.LongEntityClass
import org.jetbrains.exposed.dao.id.EntityID
import org.jetbrains.exposed.dao.id.LongIdTable

object Seeds : LongIdTable("seed") {
    override val primaryKey = PrimaryKey(id)
}

class Seed(id: EntityID<Long>): LongEntity(id){
    companion object : LongEntityClass<Seed>(Seeds)
}