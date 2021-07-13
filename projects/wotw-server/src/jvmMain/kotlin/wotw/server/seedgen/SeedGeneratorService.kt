package wotw.server.seedgen

import kotlinx.coroutines.future.await
import wotw.io.messages.SeedGenConfig
import wotw.server.exception.ServerConfigurationException
import wotw.server.main.WotwBackendServer
import wotw.server.util.CompletableFuture
import java.io.File
import java.util.concurrent.Executors

class SeedGeneratorService(private val server: WotwBackendServer) {
    private val numThreads = System.getenv("SEEDGEN_TRHEADS")?.toIntOrNull() ?: 4
    private val threadPool = Executors.newFixedThreadPool(4)
    private val seedgenExec =
        System.getenv("SEEDGEN_PATH") ?: throw ServerConfigurationException("No seed generator available!")
    val invalidCharacterRegex = Regex("[^a-zA-Z0-9_]")
    fun sanitizedPlayerName(player: String) = player.replace(invalidCharacterRegex, "_")


    fun validate(config: SeedGenConfig) {
    }

    suspend fun generate(fileName: String, config: SeedGenConfig): Result<String> {
        validate(config)
        val commandString = buildSeedGenCommand(fileName, config)
        val processBuilder = ProcessBuilder(*commandString)
            .directory(File(seedgenExec.substringBeforeLast(File.separator)))
            .redirectOutput(ProcessBuilder.Redirect.PIPE)
            .redirectError(ProcessBuilder.Redirect.INHERIT)

        val future = CompletableFuture.supplyAsync(threadPool) {
            val process = processBuilder.start()
            process.outputStream.close()
            process.inputStream.readAllBytes()
            val err = process.errorStream.readAllBytes().toString(Charsets.UTF_8)
            process.waitFor()
            if (process.exitValue() != 0)
                Result.failure(Exception(err))
            else
                Result.success("yay")
        }

        return future.await() as Result<String>
    }

    private fun buildSeedGenCommand(fileName: String, config: SeedGenConfig): Array<String> {
        var command = "$seedgenExec seed --verbose".split(" ").toTypedArray() + config.flags.flatMap { it.split(" ") }
        if (config.goals.isNotEmpty()) {
            command += "--goals"
            command += config.goals.map { it.lowercase() }
        }
        if (config.logic.isNotEmpty()) {
            command += "--logic"
            command += config.logic.map { it.lowercase() }
        }
        if (config.presets.isNotEmpty()) {
            command += "--presets"
            command += config.presets
        }
        if (config.headers.isNotEmpty()) {
            command += "--headers"
            command += config.headers
        }
        if (!config.multiNames.isNullOrEmpty()) {
            command += "--names"
            command += config.multiNames.map { sanitizedPlayerName(it) }
            command += "--worlds"
            command += config.multiNames.size.toString()
        }

        command += "--"
        command += fileName

        return command
    }

}