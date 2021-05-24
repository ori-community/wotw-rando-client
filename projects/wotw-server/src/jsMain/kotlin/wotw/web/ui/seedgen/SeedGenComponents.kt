package wotw.web.ui.seedgen

import io.ktor.client.request.*
import io.ktor.client.statement.*
import io.ktor.http.*
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.html.DIV
import kotlinx.html.classes
import kotlinx.html.js.onClickFunction
import org.w3c.files.Blob
import org.w3c.files.BlobPropertyBag
import react.*
import react.dom.button
import react.dom.div
import styled.StyledDOMBuilder
import wotw.io.messages.FileEntry
import wotw.io.messages.SeedGenConfig
import wotw.web.main.Application
import wotw.web.ui.ButtonComponent
import wotw.web.ui.TabBar
import wotw.web.ui.TextFieldComponent
import wotw.web.util.hbox
import wotw.web.util.saveAs
import wotw.web.util.vbox

external interface SeedGenState : RState {
    var selectedTab: SeedGenTab
    var possibleHeaders: Set<FileEntry>
    var headers: Set<FileEntry>
    var possiblePresets: Set<FileEntry>
    var presets: Set<FileEntry>
    var paths: Set<String>
    var goals: Set<String>
    var flags: Set<String>
    var currentDescription: String?
    var seed: String?
}

val PATH_SETS = mapOf(
    "moki" to "",
    "gorlek" to "",
    "glitch" to "",
    "unsafe" to "",
    "sjump" to "",
    "swordsjump" to "",
    "hammersjump" to "",
    "shurikenbreak" to "",
    "sentryburn" to "",
    "removekillplane" to "",
)
val FLAGS = mapOf(
    "Random Spawn" to ("--spawn r" to "Selects a random teleporter for Ori to spawn at. Will also grant some extra starting items."),
    "Enable Netcode" to ("--multiplayer" to "Required for Multiplayer and Bingo functionality"),
    "Race Mode" to ("--race" to "Does not generate spoilers and disables the in-logic filter"),
    "Hard Difficulty" to ("--hard" to "Adjust multipliers for hard difficulty")
)

val GOALS = mapOf(
    "All Trees" to ("trees" to "Requires all Ancestral Trees to be activated before finishing the game."),
    "All Wisps" to ("wisps" to "Requires all Wisps to be collected before finishing the game."),
    "All Quests" to ("quests" to "Requires all Quests to be completed before finishing the game."),
    "World Tour" to ("relics" to "Spreads special relic pickups throughout certain zones. All relics must be collected before finishing the game"),
)

class SeedGenUI : RComponent<RProps, SeedGenState>() {
    override fun SeedGenState.init() {
        selectedTab = SeedGenTab.PATHS
        paths = emptySet()
        goals = emptySet()
        flags = emptySet()
        possibleHeaders = emptySet()
        headers = emptySet()
        possiblePresets = emptySet()
        presets = emptySet()
    }

    override fun SeedGenState.init(props: RProps) {
        init()
    }

    override fun componentDidMount() {
        GlobalScope.launch {
            val headers = Application.api.get<List<FileEntry>>("/seedgen/headers")
            setState {
                possibleHeaders = headers.toSet()
            }
            val presets = Application.api.get<List<FileEntry>>("/seedgen/presets")
            setState {
                possiblePresets = presets.toSet()
            }
        }

    }

    override fun RBuilder.render() {
        vbox {
            attrs.classes += "seedgen"
            child(TabBar::class) {
                attrs.onSelect = {
                    setState {
                        selectedTab = SeedGenTab.valueOf(it.toUpperCase())
                    }
                }
                attrs.selected = state.selectedTab.toString()
                attrs.tabs = SeedGenTab.values().toList().map { it.toString() }
                attrs.onHover = {}
            }
            hbox {
                attrs.classes += "seedgen-content"
                buttons()
                child(DescriptionBox::class) {
                    attrs.text = state.currentDescription
                }
            }
            div {
                attrs.classes = setOf("seedgen-footer")
                div {
                    attrs.classes += "seedgen-seed-text"
                    +"Seed: "
                }
                child(TextFieldComponent::class) {
                    attrs.onChanged = {
                        setState {
                            seed = it
                        }
                    }
                }
                button {
                    attrs.classes = setOf("seedgen-generate")
                    +"Generate!"
                    attrs.onClickFunction = {
                        GlobalScope.launch {
                            val response = Application.api.post<HttpResponse>(
                                path = "seeds",
                                body = SeedGenConfig(
                                    flags = state.flags.mapNotNull { FLAGS[it]?.first },
                                    goals = state.goals.mapNotNull { GOALS[it]?.first },
                                    headers = state.headers.map { it.fileName },
                                    presets = state.presets.map { it.fileName },
                                    logic = state.paths.toList(),
                                    multiNames = null,
                                    seed = state.seed
                                )
                            ){
                                contentType(ContentType.Application.Json)
                            }
                            val stringArray: Array<String> = arrayOf(response.readText())
                            val blob = Blob(blobParts = stringArray, BlobPropertyBag(type = "text/plain;charset=utf-8"))
                            saveAs(blob, state.seed + ".wotwr")
                            Unit
                        }
                    }
                }
            }
        }
    }

    fun StyledDOMBuilder<DIV>.buttons() {
        when (state.selectedTab) {
            SeedGenTab.PATHS -> child(ButtonComponent::class) {
                attrs.options = PATH_SETS.keys.toList()
                attrs.selected = state.paths
                attrs.onSelect = {
                    setState {
                        paths = it
                    }
                }
                attrs.onHover = {
                    setState {
                        currentDescription = PATH_SETS[it]
                    }
                }
            }
            SeedGenTab.HEADERS -> child(ButtonComponent::class) {
                attrs.options = state.possibleHeaders.map { it.name ?: "unknown" }.toList()
                attrs.selected = state.headers.map { it.name ?: "unknown" }.toSet()
                attrs.onSelect = {
                    setState {
                        headers = possibleHeaders.filter { h -> h.name in it }.toSet()
                    }
                }
                attrs.onHover = {
                    setState {
                        currentDescription =
                            possibleHeaders.firstOrNull { h -> h.name == it }?.description?.joinToString(separator = ".")
                    }
                }
            }
            SeedGenTab.GOALS -> child(ButtonComponent::class) {
                attrs.options = GOALS.keys.toList()
                attrs.selected = state.goals
                attrs.onSelect = {
                    setState {
                        goals = it
                    }
                }
                attrs.onHover = {
                    setState {
                        currentDescription = GOALS[it]?.second
                    }
                }
            }
            SeedGenTab.FLAGS -> child(ButtonComponent::class) {
                attrs.options = FLAGS.keys.toList()
                attrs.selected = state.flags
                attrs.onSelect = {
                    setState {
                        flags = it
                    }
                }
                attrs.onHover = {
                    setState {
                        currentDescription = FLAGS[it]?.second
                    }
                }
            }
        }
    }
}

enum class SeedGenTab {
    PATHS, HEADERS, FLAGS, GOALS;

    override fun toString(): String {
        return super.toString().toLowerCase().capitalize()
    }
}

external interface DescriptionProps : RProps {
    var text: String?
}

class DescriptionBox : RComponent<DescriptionProps, RState>() {
    override fun RBuilder.render() {
        div {
            attrs.classes = setOf("description-box")
            val text = props.text
            if (text != null) {
                +text
            }
        }
    }
}