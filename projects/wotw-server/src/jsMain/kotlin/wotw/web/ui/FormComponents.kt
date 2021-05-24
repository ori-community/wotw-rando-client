package wotw.web.ui

import kotlinx.html.InputType
import kotlinx.html.js.onChangeFunction
import kotlinx.html.js.onInputFunction
import react.RBuilder
import react.RComponent
import react.RProps
import react.RState
import react.dom.defaultValue
import react.dom.input

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

