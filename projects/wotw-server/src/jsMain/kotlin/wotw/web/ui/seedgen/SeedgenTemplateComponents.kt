package wotw.web.ui.seedgen

import io.ktor.client.request.*
import io.ktor.client.statement.*
import io.ktor.http.*
import kotlinx.coroutines.DelicateCoroutinesApi
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.html.classes
import kotlinx.html.js.onClickFunction
import org.w3c.files.Blob
import org.w3c.files.BlobPropertyBag
import react.*
import react.dom.button
import react.dom.div
import react.dom.p
import wotw.io.messages.*
import wotw.web.bindings.RSelect
import wotw.web.bindings.RSelectOption
import wotw.web.bindings.saveAs
import wotw.web.main.Application
import wotw.web.ui.ButtonComponent
import wotw.web.ui.TabBar
import wotw.web.ui.TextFieldComponent
import wotw.web.util.*

external interface SeedGenProps : RProps {
}

class SeedGenComponent : RComponent<SeedGenProps, SeedGenState>() {
    fun RBuilder.header() {
        hbox {
            attrs.classes += "seedgen-header"
            val comps = state.layout.header
            for (comp in comps) {
                renderComponent(comp)
            }
        }
    }

    fun RBuilder.renderComponent(component: Comp) {
        when (component) {
            is SingleComponent -> {
                renderToggle(component.toPresetable(state.possiblePresets, state.possibleHeaders))
            }
            is ChoiceComponent -> {
                renderDropdown(component)
            }
        }
    }

    fun RBuilder.footer() {
        hbox {
            attrs.classes += "seedgen-footer"
            div {
                attrs.classes += "seedgen-seed-text"
                +"Seed: "
            }
            button {
                attrs.classes = setOf("seedgen-generate")
                +"Generate!"
                attrs.onClickFunction = {
                    GlobalScope.launch {
                        val response = Application.api.post<HttpResponse>(
                            path = "seeds",
                            body = state.toConfig()
                        ) {
                            contentType(ContentType.Application.Json)
                        }
                        if (response.status == HttpStatusCode.Created) {
                            val id: String = response.readText()
                            val seedResp = Application.api.get<HttpResponse>(path = "seeds/${id}")
                            val stringArray = seedResp.readText()
                            console.log(stringArray)
                            val blob = Blob(
                                blobParts = arrayOf(stringArray),
                                BlobPropertyBag(type = "text/plain;charset=utf-8")
                            )
                            saveAs(blob, (if (state.seed.isNullOrEmpty()) "seed" else state.seed) + ".wotwr")
                        } else {
                            console.log(response.readText())
                        }
                        Unit
                    }
                }
            }
            child(TextFieldComponent::class) {
                attrs.onChanged = {
                    setState {
                        seed = it
                    }
                }
            }
            val comps = state.layout.footer
            for (comp in comps) {
                renderComponent(comp)
            }
        }
    }

    override fun RBuilder.render() {
        vbox {
            attrs.classes += "seedgen"
            header()
            renderTabs()
            hbox {
                attrs.classes += "seedgen-content"
                renderSelectedTab()
                child(DescriptionBox::class) {
                    attrs.text = state.currentDescription
                }
            }

            footer()
        }
    }

    fun RBuilder.renderTabs() {
        child(TabBar::class) {
            attrs.onSelect = { selected ->
                setState {
                    selectedTab = state.layout.tabs.firstOrNull { it.title == selected }
                    console.log("selecting", selected, selectedTab)
                }
            }
            attrs.selected = state.selectedTab?.title ?: ""
            attrs.tabs = state.layout.tabs.map { it.title }
            attrs.onHover = {}
        }
    }

    fun RBuilder.renderSelectedTab() {
        val tab = state.selectedTab ?: return
        div {
            attrs.classes = setOf("option-buttons")

            for (component in tab.components) {
                renderComponent(component)
            }
        }
    }

    fun RBuilder.renderToggle(element: Presetable) {
        val preset = element.preset
        child(ButtonComponent::class) {
            attrs.label = preset.name
            attrs.onHover = {
                setState {
                    currentDescription = preset.description
                }
            }
            attrs.onClick = { selected ->
                setState {
                    if (!selected) {
                        add(preset)
                    } else {
                        remove(preset)
                    }
                }
            }
            attrs.selected = state.implies(preset)
        }
    }

    fun RBuilder.renderDropdown(cc: ChoiceComponent) {
        val multi = cc.multi
        val options = cc.components.map { it.toPresetable(state.possiblePresets, state.possibleHeaders).preset }
        val rSelectOptions = options.map { RSelectOption(it, it.name) }
        hbox {
            attrs.classes += "seedgen-dropdown-holder"
            div {
                attrs.classes += "seedgen-dropdown-label"
                +"${cc.name}: "
            }
            child(RSelect::class) {
                attrs.options = rSelectOptions.toTypedArray()
//            attrs.label =
                attrs.className = "seedgen-dropdown"
                attrs.isMulti = multi
                attrs.value = rSelectOptions.filter { state.implies(it.value as Preset) }.toTypedArray()
                if (!multi && attrs.value.size > 1) {
                    val superset =
                        attrs.value.firstOrNull { f -> attrs.value.all { setOf((f.value as Preset)).implies(it.value as Preset) } }
                    if (superset != null) {
                        attrs.value = arrayOf(superset)
                    } else {
                        attrs.options = arrayOf(RSelectOption("multiple", "multiple"))
                        attrs.value = attrs.options
                        attrs.isDisabled = true
                    }
                }
                attrs.onChange = { newValue, change ->
                    console.log(newValue, change)
                    if (newValue != null) {
                        (newValue.value as? Preset)?.let {
                            setState {
                                if (!multi) {
                                    (attrs.value.firstOrNull()?.value as? Preset)?.let {
                                        remove(it)
                                    }
                                }
                                add(it)
                            }
                        }
                        (newValue as? Array<dynamic>)?.let {
                            setState {
                                for (elem in it) {
                                    (elem.value as? Preset)?.let {
                                        add(it)
                                    }
                                }
                            }
                        }
                    }
                    (change.removedValue?.value as? Preset)?.let {
                        console.log("removing??")
                        setState {
                            remove(it)
                        }
                    }
                }
            }
        }
    }

    override fun SeedGenState.init(props: SeedGenProps) {
        init()
    }

    override fun SeedGenState.init() {
        layout = DEFAULT_LAYOUT
        selectedTab = layout.tabs.firstOrNull()
        possibleHeaders = emptySet()
        possiblePresets = emptySet()
        selectedPresets = mutableSetOf()
        disabledPresets = mutableSetOf()
    }

    @DelicateCoroutinesApi
    override fun componentDidMount() {
        GlobalScope.launch {
            val headers = Application.api.get<List<HeaderFileEntry>>("/seedgen/headers")
            setState {
                possibleHeaders = headers.toSet()
            }
            val presets = Application.api.get<Set<Preset>>("/seedgen/presets")
            setState {
                possiblePresets = presets
                possiblePresets.firstOrNull { it.name == "moki" }?.also {
                    add(it)
                }
            }
        }
    }
}

external interface DescriptionProps : RProps {
    var text: List<String>?
}

class DescriptionBox : RComponent<DescriptionProps, RState>() {
    override fun RBuilder.render() {
        div {
            attrs.classes = setOf("description-box")
            val text = props.text
            if (text != null) {
                for (line in text) {
                    p { +line }
                }
            }
        }
    }
}