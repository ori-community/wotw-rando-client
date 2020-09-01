package wotw.util

class MultiMap<K, V>(private val backingMap: MutableMap<K, MutableSet<V>>): Map<K, MutableSet<V>> by backingMap{
    constructor(): this(hashMapOf())

    override operator fun get(key: K): MutableSet<V>{
        return backingMap.getOrPut(key){ mutableSetOf()}
    }

    fun add(key: K, value: V){
        get(key) += value
    }

    fun remove(key: K, value: V){
        if(containsKey(key))
            get(key) -= value
    }
}