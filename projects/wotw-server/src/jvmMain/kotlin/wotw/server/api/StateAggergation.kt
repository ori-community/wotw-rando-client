package wotw.server.api

import wotw.io.messages.protobuf.UberId
import kotlin.math.max
import kotlin.math.min
import wotw.server.api.UberStateSyncStrategy.NotificaitonGroup.*


data class UberStateSyncStrategy(val aggregation: (Float, Float) -> Float,
                   val trigger: (Float?, Float) -> Boolean = {_, _ -> true},
                   val group: NotificaitonGroup = DIFFERENT){
    companion object{
        val MAX = UberStateSyncStrategy(::max)
        val MIN = UberStateSyncStrategy(::min)
        val ALWAYS_OVERWRITE = UberStateSyncStrategy({ _, v -> v })
        val KEEP = UberStateSyncStrategy({ v, _ -> v })
        val AVG = UberStateSyncStrategy({ o, n -> (o + n) / 2 })
    }
    enum class NotificaitonGroup{
        /**
         * Only listen for updates
         * */
        NONE,
        /**
         * echo if server state differs, sync to other players if updated
         * */
        DIFFERENT,
        /**
         * Sync to other players if updated
         * */
        OTHERS,
        /**
         * Always Echo, Always sync to other players
         * */
        ALL
    }

}

private typealias UberStateRegistration = Pair<Collection<UberId>, UberStateSyncStrategy?>
class AggregationStrategyRegistry(private val strategies: MutableMap<UberId, UberStateSyncStrategy> = mutableMapOf()){
    fun register(vararg registrations: UberStateRegistration): AggregationStrategyRegistry{
        strategies.putAll(registrations.flatMap{ (ids, strategy) ->
            val mappedStrat = strategy?: UberStateSyncStrategy.MAX
            ids.map { it to mappedStrat }
        })
        return this
    }

    fun getStrategy(uberId: UberId) = strategies[uberId]
    fun getSyncedStates() = strategies.keys.toSet()

    operator fun plus(other: AggregationStrategyRegistry) = AggregationStrategyRegistry((strategies + other.strategies).toMutableMap())
}

fun sync(vararg ids: Int, strategy: UberStateSyncStrategy? = null): UberStateRegistration =
    sync(ids.toList().zipWithNext().map { UberId(it.first, it.second) }, strategy)
fun sync(vararg ids: Pair<Int, Int>, strategy: UberStateSyncStrategy? = null): UberStateRegistration =
    sync(ids.map { UberId(it.first, it.second) }, strategy)
fun sync(vararg ids: UberId, strategy: UberStateSyncStrategy? = null): UberStateRegistration =
    sync(ids.toSet(), strategy)
fun sync(ids: Collection<UberId>, strategy: UberStateSyncStrategy? = null): UberStateRegistration =
    UberStateRegistration(ids.toSet(), strategy)

fun UberStateRegistration.with(strategy: UberStateSyncStrategy) = first to strategy
fun UberStateRegistration.on(threshold: Float) = first to (second ?: UberStateSyncStrategy.MAX).copy(trigger = { o, n -> n >= threshold})
fun UberStateRegistration.notify(group: UberStateSyncStrategy.NotificaitonGroup) = first to (second ?: UberStateSyncStrategy.MAX).copy(group = group)