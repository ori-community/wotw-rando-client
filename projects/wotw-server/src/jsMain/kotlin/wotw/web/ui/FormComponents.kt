package wotw.web.ui

import kotlinx.html.InputType
import kotlinx.html.classes
import kotlinx.html.js.onChangeFunction
import kotlinx.html.js.onClickFunction
import kotlinx.html.js.onInputFunction
import kotlinx.html.js.onMouseOverFunction
import react.*
import react.dom.*

external interface TextFieldProps : RProps {
    var initialText: String?
    var onChanged: ((String?) -> Unit)
}

class TextFieldComponent : RComponent<TextFieldProps, RState>() {
    override fun RBuilder.render() {
        input(type = InputType.text) {
            attrs.onInputFunction = {
                props.onChanged(it.target?.asDynamic().value as String?)
            }
            val text = props.initialText ?: return@input
            attrs.defaultValue = text
        }
    }
}

external interface SelectComponentProps : RProps {
    var initalSelection: Set<String>
    var values: List<String>
    var multiselect: Boolean
    var onSelect: (old: Set<String>, new: Set<String>) -> Unit
}

external interface SelectComponentState : RState {
    var selection: Set<String>
}

class SelectComponent : RComponent<SelectComponentProps, SelectComponentState>() {
    override fun SelectComponentState.init() {
        selection = emptySet()
    }

    override fun SelectComponentState.init(props: SelectComponentProps) {
        selection = props.initalSelection
    }

    override fun RBuilder.render() {
        select {
            attrs {
                multiple = props.multiselect
                values = state.selection
                onChangeFunction = {
                    val old = state.selection
                    val set = mutableSetOf<String>()
                    val sel = it.target.asDynamic()
                    val len = sel.options.length
                    for (i in 0 until len) {
                        val opt = sel.options[i]
                        if (opt.selected) {
                            set += opt.value as String
                        }
                    }
                    setState {
                        selection = set
                    }
                    props.onSelect(old, set)
                }
            }
            for (value in props.values) {
                option {
                    +value
                }
            }
        }
    }
}

external interface ButtonProps : RProps {
    var selected: Boolean
    var label: String
    var onClick: (wasSelected: Boolean) -> Unit
    var onHover: () -> Unit
}

class ButtonComponent : RComponent<ButtonProps, RState>() {
    override fun RBuilder.render() {
        div {
            attrs.classes = setOf("option-button")
            if (props.selected)
                attrs.classes += "selected"
            +props.label
            attrs.onClickFunction = {
                props.onClick(props.selected)
            }
            attrs.onMouseOverFunction = {
                props.onHover()
            }
        }
    }
}