@file:JsModule("react-select")
@file:JsNonModule
package wotw.web.bindings


import react.Component
import react.RState


external interface RModalProps{
    var isOpen: Boolean
}

@JsName("Modal")
external class RModal : Component<RSelectProps, RState> {
    override fun render(): dynamic
}