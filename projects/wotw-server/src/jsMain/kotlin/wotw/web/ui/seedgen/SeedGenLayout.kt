package wotw.web.ui.seedgen

import kotlinx.serialization.Polymorphic
import kotlinx.serialization.Serializable
import wotw.io.messages.*


@Serializable
data class SeedGenLayout(val header: List<Comp>, val tabs: List<TabComponent>, val footer: List<Comp>)

@Serializable
data class TabComponent(val title: String, val components: List<Comp>)

@Polymorphic
sealed interface Comp

@Serializable
class ChoiceComponent(val name: String, val components: List<SingleComponent>, val multi: Boolean) : Comp

@Serializable
value class SingleComponent(val component: String) : Comp {
    fun toPresetable(presets: Collection<Preset>, headers: Collection<HeaderFileEntry>): Presetable {
        if (component.startsWith("h:")) {
            val header = headers.firstOrNull {
                it.headerName == component.substringAfter("h:")
            }
            if (header != null) return header
        }
        if (component.startsWith("g:")) {
            return GoalMode.valueOf(component.substringAfter("g:").uppercase())
        }
        if (component.startsWith("f:")) {
            return Flag.valueOf(component.substringAfter("f:").uppercase())
        }
        if (component.startsWith("ps:")) {
            return PathSet.valueOf(component.substringAfter("ps:").uppercase())
        }
        if (component.startsWith("p:")) {
            presets.firstOrNull { it.name == component.substringAfter("p:") }?.let { return it }
        }
        return Preset(
            name = "Unsupported or unknown component: $component",
            description = listOf(
                "The seed generator does not know the specified option.",
                "Are you sure it's written correctly?"
            )
        )
    }
}

val DEFAULT_LAYOUT = SeedGenLayout(
    header = listOf(
        ChoiceComponent(
            "Difficulty",
            listOf(SingleComponent("p:moki"), SingleComponent("p:gorlek")),
            false
        ),
        SingleComponent("f:multiplayer"),
        ChoiceComponent(
            "Goal Mode",
            listOf(SingleComponent("g:trees"), SingleComponent("g:wisps"), SingleComponent("g:quests"), SingleComponent("g:relics")),
            true
        )
    ),
    tabs = listOf(
        TabComponent(
            "Paths",
            listOf(SingleComponent("ps:moki"), SingleComponent("ps:gorlek"), SingleComponent("p:hints"))
        ),
        TabComponent(
            "Headers",
            listOf(SingleComponent("h:autoplants"), SingleComponent("h:launch_on_seir"), SingleComponent("h:spawn_with_sword"))
        )
    ),
    footer = emptyList()
)