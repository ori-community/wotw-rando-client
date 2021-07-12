package wotw.web.bindings

import wotw.web.bindings.IRSelectOption

data class RSelectOption(override val value: Any, override val label: String) : IRSelectOption