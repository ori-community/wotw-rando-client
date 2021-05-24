package wotw.web.ui

import kotlinx.html.classes
import kotlinx.html.js.onClickFunction
import kotlinx.html.js.onMouseOverFunction
import react.RBuilder
import react.RComponent
import react.RProps
import react.RState
import react.dom.div


external interface ButtonViewProps : RProps {
    var options: List<String>
    var selected: Set<String>
    var onSelect: (Set<String>) -> Unit
    var onHover: (String) -> Unit
}

class ButtonComponent : RComponent<ButtonViewProps, RState>() {
    override fun RBuilder.render() {
        div {
            attrs.classes = setOf("option-buttons")
            for (button in props.options) {
                div {
                    attrs.classes = setOf("option-button")
                    if (button in props.selected)
                        attrs.classes += "selected"
                    +button
                    attrs.onClickFunction = {
                        if (button in props.selected)
                            props.onSelect(props.selected - button)
                        else
                            props.onSelect(props.selected + button)
                    }
                    attrs.onMouseOverFunction = {
                        props.onHover(button)
                    }
                }
            }
        }
    }
}