package wotw.io.messages

import kotlinx.serialization.Serializable
import kotlin.math.max

@Serializable
data class BingoGenProperties(val seed: String? = null, val discovery: Int? = null, val lockout: Boolean? = false, val manualGoalCompletion: Boolean? = false)

@Serializable
data class GameProperties(val isMulti: Boolean = false, val isCoop: Boolean = false)

@Serializable
data class FileEntry(val fileName: String, val name: String?, val description: List<String>?)

@Serializable
data class Preset(val worlds: Int,
                  val presets: Set<String>,
                  val players: List<String>,
                  val pathsets: Set<String>,
                  val goalmodes: Set<String>,
                  val headerList: Set<String>,
                  val spoilers: Boolean,
                  val webConn: Boolean,
                  val hard: Boolean,
                  ){


    private fun merge(other: Preset): Preset{
        return Preset(
            max(1, players.size),
            emptySet(),
            (players + other.players).distinct(),
            pathsets + other.pathsets,
            goalmodes + other.goalmodes,
            headerList + other.headerList,
            spoilers || other.spoilers,
            webConn || other.webConn,
            hard || other.hard,
        )
    }

    fun fullResolve(presets: Map<String, Preset>): Preset{
        val merged = this.presets.mapNotNull {
            presets[it]?.fullResolve(presets)
        }.reduceOrNull {p1, p2 -> p1.merge(p2) }
        return if (merged == null) this else merge(merged)
    }

}

@Serializable
data class SeedGenConfig(val flags: List<String> = emptyList(),
                         val headers: List<String> = emptyList(),
                         val presets: List<String> = emptyList(),
                         val logic: List<String> = emptyList(),
                         val goals: List<String> = emptyList(),
                         val multiNames: List<String>? = null,
                         val seed: String? = null,)