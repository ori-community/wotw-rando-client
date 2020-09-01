package wotw.io.messages.protobuf

import kotlinx.serialization.*
import kotlinx.serialization.protobuf.ProtoId
import wotw.io.messages.protoBuf
import wotw.util.BiMap
import wotw.util.biMapOf
import kotlin.reflect.KClass

typealias PacketId = Int
@Serializable
data class Packet(
    @ProtoId(1) val id: PacketId,
    @ProtoId(2) val message: ByteArray) {

    @ImplicitReflectionSerializer
    fun deserializeMessage(): Any?{
        val cls = ids[id] ?: return null
        return protoBuf.load(cls.serializer(), message)
    }

    //Auto-Generated equals/hash-code due to array type
    override fun equals(other: Any?): Boolean {
        if (this === other) return true
        if (other == null || this::class != other::class) return false

        other as Packet

        if (id != other.id) return false
        if (!message.contentEquals(other.message)) return false

        return true
    }

    override fun hashCode(): Int {
        var result = id.toInt()
        result = 31 * result + message.contentHashCode()
        return result
    }

    companion object{
        val ids : BiMap<PacketId, KClass<*>> = biMapOf(
            1 to SyncBoardMessage::class,
            2 to RequestUpdatesMessage::class,
            3 to UberStateUpdateMessage::class,
            4 to SyncPlayersMessage::class,
            5 to InitBingoMessage::class
        )

        @ImplicitReflectionSerializer
        fun deserialize(bytes: ByteArray): Any?{
            return protoBuf.load(Packet.serializer(), bytes).deserializeMessage()
        }

        @ImplicitReflectionSerializer
        fun <T: Any> from(obj: T): Packet {
            val serializer = obj::class.serializerOrNull() as? KSerializer<T> ?: throw SerializationException("Cannot find Serializer for ${obj::class.simpleName}")
            val id = ids.inverse[obj::class] ?: throw SerializationException("No packet-id known for ${obj::class.simpleName}, known values: ${ids.inverse.keys}, ${ids.values}")
            return Packet(id, protoBuf.dump(serializer, obj))
        }

        @ImplicitReflectionSerializer
        fun <T: Any> serialize(obj: T): ByteArray?{
            return from(obj)?.let {
                protoBuf.dump(it)
            }
        }
    }
}