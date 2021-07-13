package wotw.web.ui.seedgen

import kotlinx.serialization.decodeFromString
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.JsonArray
import kotlinx.serialization.json.JsonElement
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.JsonPrimitive
import react.RState
import wotw.io.messages.*

external interface SeedGenState : RState {
    var possiblePresets: Set<Preset>
    var possibleHeaders: Set<HeaderFileEntry>
    var selectedPresets: MutableSet<Preset>
    var disabledPresets: MutableSet<Preset>

    var layout: SeedGenLayout

    var selectedTab: TabComponent?
    var currentDescription: List<String>?

    var worlds: Int
    var seed: String?
}

fun SeedGenState.load(save: String){
    val foo = json.decodeFromString<JsonObject>(save)
    selectedPresets = (foo["enabled"] as JsonArray).map { SingleComponent(it.toString()).toPresetable(possiblePresets, possibleHeaders).preset }.toMutableSet()
    disabledPresets = (foo["disabled"] as JsonArray).map { SingleComponent(it.toString()).toPresetable(possiblePresets, possibleHeaders).preset }.toMutableSet()
    worlds = foo["worlds"].toString().toIntOrNull() ?: 1
}

fun SeedGenState.save(): String{
    return json.encodeToString(mapOf(
        "enabled" to selectedPresets,
        "disabled" to disabledPresets,
        "worlds" to worlds,
    ))
}


fun SeedGenState.add(preset: Preset){
    console.log("adding", preset)
    val set = setOf(preset)
    disabledPresets.removeAll { set.implies(it) }
    if(!implies(preset)){
        console.log("fully")
        selectedPresets += preset
    }
}

fun SeedGenState.remove(preset: Preset){
    console.log("removing", preset)
    selectedPresets -= preset
    if(implies(preset)){
        console.log("fully")
        disabledPresets += preset
    }
}

fun SeedGenState.implies(preset: Preset) = preset !in disabledPresets && selectedPresets.implies(preset)

val SeedGenState.paths: Set<PathSet>
    get() = selectedPresets.flatMap { it.pathsets }.toSet() - disabledPresets.flatMap { it.pathsets }

val SeedGenState.goals: Set<GoalMode>
    get() = selectedPresets.flatMap { it.goalmodes }.toSet() - disabledPresets.flatMap { it.goalmodes }

val SeedGenState.headers: Set<String>
    get() = selectedPresets.flatMap { it.headerList }.toSet() - disabledPresets.flatMap { it.headerList }

val SeedGenState.flags: Set<String>
    get() {
        val result = mutableSetOf<String>()
        if (selectedPresets.any { it.hard == true } && disabledPresets.none { it.hard == true }) result += "--hard"
        if (selectedPresets.any { it.webConn == true } && disabledPresets.none { it.webConn == true }) result += "--multiplayer"
        if (selectedPresets.any { it.spoilers == false } && disabledPresets.none { it.hard == false }) result += "--race"
        return result
    }

fun SeedGenState.toConfig(): SeedGenConfig {
    return SeedGenConfig()//flags.toList(), headers.toList(), emptyList(), paths.toList(), goals.toList(), null, seed)
}

enum class Flag : Presetable {
    RACE,
    MULTIPLAYER,
    HARD;

    override val preset by lazy {
        when (this) {
            HARD -> Preset(name = "Hard", description = listOf(""), hard = true, wrapper = true)
            MULTIPLAYER -> Preset(name = "Enable Netcode", webConn = true, wrapper = true)
            RACE -> Preset(name = "Race Mode", spoilers = false, wrapper = true)
            else -> Preset()
        }
    }
}