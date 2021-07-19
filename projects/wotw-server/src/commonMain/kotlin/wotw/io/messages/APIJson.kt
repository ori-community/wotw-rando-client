package wotw.io.messages

import kotlinx.serialization.Serializable
import kotlinx.serialization.Transient
import kotlinx.serialization.json.JsonElement
import kotlinx.serialization.json.JsonPrimitive
import kotlinx.serialization.json.jsonObject
import kotlinx.serialization.json.jsonPrimitive
import kotlin.math.max

@Serializable
data class BingoGenProperties(
    val seed: String? = null,
    val discovery: Int? = null,
    val lockout: Boolean? = false,
    val manualGoalCompletion: Boolean? = false
)

@Serializable
data class GameProperties(val isMulti: Boolean = false, val isCoop: Boolean = false)

@Serializable
data class HeaderFileEntry(val headerName: String, val name: String?, val description: List<String>?) : Presetable {

    @Transient
    private var lazyWorkaround: Preset? = null
    override val preset: Preset
        get() {
            if (lazyWorkaround == null) lazyWorkaround = Preset(
                name = name ?: headerName,
                headerList = setOf(headerName),
                description = description ?: emptyList(),
                wrapper = true
            )
            return lazyWorkaround!!
        }
}

interface Presetable {
    val preset: Preset
}

fun Collection<Preset>.implies(preset: Preset): Boolean {
    return preset in this ||
            (preset.webConn != true || any { it.webConn == true })
            && (preset.hard != true || any { it.hard == true })
            && (preset.spoilers != false || any { it.spoilers == false })
            && (preset.worlds == null || any { it.worlds != null && it.worlds >= preset.worlds })
            && (preset.goalmodes.all { g -> any { g in it.goalmodes } })
            && (preset.headerList.all { h -> any { h in it.headerList } })
            && (preset.pathsets.all { h -> any { h in it.pathsets } })
            && (preset.players.all { p -> any { p in it.players } })
            && (preset.presets.all { p -> any { it.name == p || p in it.presets } })
}

@Serializable
data class PresetFile(
    val worlds: Int,
    val presets: Set<String>,
    val players: List<String>,
    val pathsets: Set<String>,
    val goalmodes: Set<String>,
    val headerList: Set<String>,
    val spoilers: Boolean,
    val webConn: Boolean,
    val hard: Boolean,
    val spawnLoc: JsonElement,
) {
    private val spawnLocString: String = if (spawnLoc is JsonPrimitive) {
        spawnLoc.content.lowercase() // Random → random
    } else {
        spawnLoc.jsonObject["Set"]!!.jsonPrimitive.content
    }

    fun fullResolve(presets: Map<String, PresetFile>): PresetFile {
        val merged = this.presets.mapNotNull {
            presets[it]?.fullResolve(presets)
        }.reduceOrNull { p1, p2 -> p1.merge(p2) }
        return if (merged == null) this else merge(merged)
    }

    private fun merge(other: PresetFile): PresetFile {
        return PresetFile(
            max(1, (players + other.players).distinct().size),
            emptySet(),
            (players + other.players).distinct(),
            pathsets + other.pathsets,
            goalmodes + other.goalmodes,
            headerList + other.headerList,
            spoilers or other.spoilers,
            webConn or other.webConn,
            hard or other.hard,
            spawnLoc,
        )
    }

    fun toPreset(name: String): Preset {
        return Preset(
            worlds,
            presets,
            players,
            pathsets.map { PathSet.valueOf(it.uppercase()) }.toSet(),
            goalmodes.map { GoalMode.valueOf(it.uppercase()) }.toSet(),
            headerList,
            spoilers,
            webConn,
            hard,
            name = name,
            wrapper = false,
            spawnLoc = spawnLocString,
        )
    }

}

@Serializable
data class Preset(
    val worlds: Int? = null,
    val presets: Set<String> = emptySet(),
    val players: List<String> = emptyList(),
    val pathsets: Set<PathSet> = emptySet(),
    val goalmodes: Set<GoalMode> = emptySet(),
    val headerList: Set<String> = emptySet(),
    val spoilers: Boolean? = null,
    val webConn: Boolean? = null,
    val hard: Boolean? = null,
    val description: List<String> = emptyList(),
    val name: String = "",
    val wrapper: Boolean = false,
    val spawnLoc: String = "MarshSpawn.Main",
) : Presetable {
    @Transient
    override val preset = this
}

infix fun Boolean?.or(other: Boolean?): Boolean? =
    if (this == null) other else if (other == null) this else this || other

enum class PathSet : Presetable {
    MOKI,
    GORLEK,
    GLITCH,
    UNSAFE,
    SJUMP,
    SWORDSENTRYJUMP,
    HAMMERSENTRYJUMP,
    SHURIKENBREAK,
    SENTRYBURN,
    REMOVEKILLPLANE, ;

    override val preset by lazy { Preset(name = name.lowercase(), pathsets = setOf(this), wrapper = true) }
}

enum class GoalMode(private val displayName: String, private val description: String) : Presetable {
    TREES("All Trees", "Requires all Ancestral Trees to be activated before finishing the game"),
    WISPS("All Wisps", "Requires all Wisps to be collected before finishing the game."),
    QUESTS("All Quests", "Requires all Quests to be completed before finishing the game."),
    RELICS(
        "World Tour",
        "Spreads special relic pickups throughout certain zones. All relics must be collected before finishing the game"
    ),
    ;

    override val preset by lazy {
        Preset(
            name = displayName,
            description = listOf(description),
            goalmodes = setOf(this),
            wrapper = true
        )
    }
}

@Serializable
data class SeedGenConfig(
    val flags: List<String> = emptyList(),
    val headers: List<String> = emptyList(),
    val presets: List<String> = emptyList(),
    val logic: List<String> = emptyList(),
    val goals: List<String> = emptyList(),
    val multiNames: List<String>? = null,
    val isMulti: Boolean = false,
    val isCoop: Boolean = false,
    val seed: String? = null,
    val spawn: String? = null,
)

@Serializable
data class SeedGenResponse(
    val seedId: Long,
    val playerList: List<String> = emptyList(),
    val gameId: Long? = null,
)