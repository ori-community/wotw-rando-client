package wotw.io.messages.protobuf

import kotlinx.serialization.*
import kotlinx.serialization.protobuf.ProtoNumber
import wotw.io.messages.protoBuf
import wotw.util.BiMap
import wotw.util.biMapOf
import kotlin.reflect.KType
import kotlin.reflect.typeOf

typealias PacketId = Int

@Serializable
data class Packet(
    @ProtoNumber(1) val id: PacketId,
    @ProtoNumber(2) val message: ByteArray
) {

    fun deserializeMessage(): Any? {
        val type = ids[id] ?: return null
        return protoBuf.decodeFromByteArray(serializer(type), message)
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

    @OptIn(ExperimentalStdlibApi::class)
    companion object {
        val ids: BiMap<PacketId, KType> = biMapOf(
            1 to typeOf<SyncBoardMessage>(),
            2 to typeOf<RequestUpdatesMessage>(),
            3 to typeOf<UberStateUpdateMessage>(),
            4 to typeOf<SyncBingoPlayersMessage>(),
            5 to typeOf<InitGameSyncMessage>(),
            6 to typeOf<PrintTextMessage>()
        )

        fun deserialize(bytes: ByteArray): Any? {
            return protoBuf.decodeFromByteArray(serializer(), bytes).deserializeMessage()
        }

        inline fun <reified T : Any> from(obj: T): Packet {
            val id = ids.inverse[typeOf<T>()]
                ?: throw SerializationException("No packet-id known for ${obj::class.simpleName}, known values: ${ids.inverse.keys}, ${ids.values}")
            val serializer = serializer(typeOf<T>())
            return Packet(id, protoBuf.encodeToByteArray(serializer, obj))
        }

        inline fun <reified T : Any> serialize(obj: T): ByteArray? {
            return from(obj).let {
                protoBuf.encodeToByteArray(it)
            }
        }
    }
}