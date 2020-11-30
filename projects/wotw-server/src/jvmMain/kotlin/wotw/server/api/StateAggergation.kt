package wotw.server.api

import wotw.io.messages.protobuf.UberId
import kotlin.math.max
import kotlin.math.min
import wotw.server.api.Aggregation.*

enum class Aggregation(val func: (Float, Float) -> Float) {
    MAX(::max),
    MIN(::min),
    NEW({ _, v -> v }),
    KEEP({ v, _ -> v }),
    AVG({ n, v -> (n + v) / 2 }),
}

val specialStateMap: Map<UberId, (Float, Float) -> Float> = mapOf(
    -10 to -10 to KEEP,
).mapKeys { UberId(it.key.first, it.key.second) }.mapValues { it.value.func }

val UberId.uberAggregateFunction: (Float, Float) -> Float
    get() = specialStateMap[this] ?: ::max
