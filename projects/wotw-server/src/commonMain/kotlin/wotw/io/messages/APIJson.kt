package wotw.io.messages

import kotlinx.serialization.Serializable

@Serializable
data class BingoGenProperties(val seed: String? = null, val discovery: Int? = null, val lockout: Boolean? = false, val manualGoalCompletion: Boolean? = false)

@Serializable
data class GameProperties(val isMulti: Boolean = false, val isCoop: Boolean = false)

@Serializable
data class FileEntry(val fileName: String, val name: String?, val description: List<String>?)

@Serializable
data class SeedGenConfig(val flags: List<String> = emptyList(),
                         val headers: List<String> = emptyList(),
                         val presets: List<String> = emptyList(),
                         val logic: List<String> = emptyList(),
                         val goals: List<String> = emptyList(),
                         val multiNames: List<String>? = null,
                         val seed: String? = null,)