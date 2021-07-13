@file:JsModule("react-select")
@file:JsNonModule
package wotw.web.bindings

import react.*

external interface RSelectChange{
    var action: String
    var option: IRSelectOption?
    var removedValue: IRSelectOption?
    var name: String

}
external interface RSelectProps: RProps{
    var className: String
    var classNamePrefix: String
    var closeMenuOnSelect: Boolean
    var closeMenuOnScroll: Boolean
    var isMulti: Boolean
    var isDisabled: Boolean
    var onChange: (newValue: dynamic, change: RSelectChange) -> Unit
    var options: Array<IRSelectOption>
    var value: Array<IRSelectOption>
}

external interface IRSelectOption{
    val value: Any
    val label: String
}
@JsName("default")
external class RSelect : Component<RSelectProps,RState> {
    override fun render(): dynamic
}


