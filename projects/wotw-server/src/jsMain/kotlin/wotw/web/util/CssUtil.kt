package wotw.web.util

import kotlinx.html.DIV
import kotlinx.html.classes
import react.RBuilder
import react.ReactElement
import react.dom.RDOMBuilder
import react.dom.div
import styled.StyledDOMBuilder
import styled.styledDiv


inline fun RBuilder.hbox(block: StyledDOMBuilder<DIV>.() -> Unit): ReactElement = styledDiv{
    attrs.classes = setOf("hbox")
    block(this)
}
inline fun RBuilder.vbox(block: StyledDOMBuilder<DIV>.() -> Unit): ReactElement = styledDiv{
    attrs.classes = setOf("vbox")
    block(this)
}