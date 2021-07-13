package wotw.web.ui

import kotlinx.html.classes
import kotlinx.html.js.onClickFunction
import kotlinx.html.js.onMouseOverFunction
import react.RBuilder
import react.RComponent
import react.RProps
import react.RState
import react.dom.div
import wotw.web.util.hbox

external interface TabBarProps : RProps {
    var tabs: List<String>
    var onSelect: (String) -> Unit
    var onHover: (String) -> Unit
    var selected: String
}
class TabBar : RComponent<TabBarProps, RState>() {
    override fun RBuilder.render() {
        hbox {
            attrs.classes += "tabBar"
            for (tab in props.tabs) {
                div {
                    attrs.classes = setOf("tab")
                    if (tab == props.selected)
                        attrs.classes += "selected"
                    +tab
                    attrs.onClickFunction = {
                        props.onSelect(tab)
                    }
                    attrs.onMouseOverFunction = {
                        props.onHover(tab)
                    }
                }
            }
        }
    }

}