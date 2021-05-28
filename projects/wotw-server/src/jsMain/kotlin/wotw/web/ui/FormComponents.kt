package wotw.web.ui

import kotlinx.html.InputType
import kotlinx.html.js.onChangeFunction
import kotlinx.html.js.onInputFunction
import kotlinx.html.js.onSelectFunction
import react.*
import react.dom.*
import wotw.web.util.hbox

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
    var onSelect: (Set<String>) -> Unit
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
                    val value = it.target.asDynamic()?.value
                    val set = setOf(value as String)
                    setState {
                        selection = set
                    }
                    props.onSelect(set)
                }
            }
            for (value in props.values){
                option {
                    + value
                }
            }
        }
    }
}