package wotw.io.messages

import kotlinx.serialization.Serializable

@Serializable
data class BingoGenProperties(val seed: String? = null, val discovery: Int? = null, val lockout: Boolean? = false, val manualGoalCompletion: Boolean? = false)