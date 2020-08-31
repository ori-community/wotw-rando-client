package wotw.util

interface BiMap <K, V>: Map<K, V>{
    override val values: Set<V>
    val inverse: BiMap<V, K>
}

interface MutableBiMap <K, V>: MutableMap<K, V>, BiMap<K, V> {
    override val values: MutableSet<V>
    override val inverse: MutableBiMap<V, K>
}

class BiHashMap<K, V> private constructor(private val map: MutableMap<K,V>, inverse: BiHashMap<V, K>? = null): MutableMap<K, V> by map,
    MutableBiMap<K, V> {
    constructor(): this(HashMap())

    override val inverse: MutableBiMap<V, K> by lazy { inverse ?: BiHashMap(HashMap(), this) }
    override val values get() = inverse.keys

    //Will replace (K1, V1) and (K2, V2) with (K1, V2)
    override fun put(key: K, value: V): V? {
        if(get(key) == value)
            return value

        val oldValue = map.put(key, value)
        oldValue?.let { inverse.remove(it) }
        val oldKey = inverse.put(value, key)
        if(oldKey != key)
            map.remove(oldKey)
        return oldValue
    }
}

fun <K, V> biMapOf(vararg pairs: Pair<K, V>): BiMap<K, V> =
    mutableBiMapOf(*pairs)
fun <K, V> mutableBiMapOf(vararg pairs: Pair<K, V>): MutableBiMap<K, V> = BiHashMap<K, V>()
    .apply {
    putAll(pairs)
}
