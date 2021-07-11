package wotw.server.api

import io.ktor.application.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.response.*
import io.ktor.routing.*
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.*
import wotw.server.database.model.Seed
import wotw.server.main.WotwBackendServer
import wotw.server.util.logger
import java.io.File
import java.nio.file.Path
import java.util.jar.JarFile
import kotlin.io.path.Path


class SeedGenEndpoint(server: WotwBackendServer) : Endpoint(server) {
    val logger = logger()
    override fun Route.initRouting() {
        get("seedgen/headers") {
            val dir = Path(System.getenv("SEEDGEN_PATH")).parent.resolve("headers")
            val result = dir.toFile().listFiles()?.map {
                val lines = it.readText().split(System.lineSeparator())
                val descrLines = lines.filter { it.startsWith("/// ") }.map { it.substringAfter("/// ") }

                HeaderFileEntry(it.name.substringAfterLast("/"), descrLines.firstOrNull(), descrLines)
            }?.toList() ?: emptyList()
            call.respond(result)
        }
        get("seedgen/presets") {
            val dir = Path(System.getenv("SEEDGEN_PATH")).parent.resolve("presets")
            val presetMap = dir.toFile().listFiles()?.map {
                it.name.substringAfterLast("/").substringBeforeLast(".json") to
                        relaxedJson.decodeFromString(PresetFile.serializer(), it.readText())
            }?.toMap() ?: emptyMap()
            val result = presetMap.map { it.value.fullResolve(presetMap).toPreset(it.key) }
            call.respond(result)
        }
        get("seeds/{id}") {
            val id = call.parameters["id"] ?: throw BadRequestException("No Seed ID found")
            call.respond(seedFile(id).readBytes())
        }
        post<SeedGenConfig>("seeds") { config ->
            //TODO: Input validation
            val seed = newSuspendedTransaction { Seed.new {} }
            val seedgenExec = System.getenv("SEEDGEN_PATH")
            var command = "$seedgenExec seed --verbose".split(" ").toTypedArray() + config.flags.flatMap { it.split(" ") }
            if (config.goals.isNotEmpty()) {
                command += "--goals"
                command += config.goals.map { it.name }
            }
            if (config.logic.isNotEmpty()) {
                command += "--logic"
                command += config.logic.map { it.name.lowercase() }
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
                command += config.multiNames
                command += "--worlds"
                command += config.multiNames.size.toString()
            }

            command += "--"
            command += "${seed.id.value}"

            val process = ProcessBuilder(*command)
                .directory(File(seedgenExec.substringBeforeLast(File.separator)))
                .redirectOutput(ProcessBuilder.Redirect.PIPE)
                .redirectError(ProcessBuilder.Redirect.INHERIT)
                .start()
            process.outputStream.close()
            process.inputStream.readAllBytes()
            val err = process.errorStream.readAllBytes().toString(Charsets.UTF_8)
            if(!seedFile(seed).exists())
                call.respondText(err, ContentType.Text.Plain, HttpStatusCode.InternalServerError)
            else
                call.respondText(seed.id.value.toString(), ContentType.Text.Plain, HttpStatusCode.Created)
        }
    }
    fun seedFile(seedId: String) = Path.of("${System.getenv("SEED_DIR")}\\${seedId}.wotwr").toFile()
    fun seedFile(seed: Seed) = seedFile(seed.id.value.toString())
}