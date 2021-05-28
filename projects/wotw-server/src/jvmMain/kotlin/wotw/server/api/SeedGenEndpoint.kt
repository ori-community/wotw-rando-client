package wotw.server.api

import io.ktor.application.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.response.*
import io.ktor.routing.*
import kotlinx.serialization.json.Json
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.*
import wotw.server.database.model.Seed
import wotw.server.main.WotwBackendServer
import java.io.File
import java.nio.charset.Charset
import java.nio.file.Path
import java.util.jar.JarFile


class SeedGenEndpoint(server: WotwBackendServer) : Endpoint(server) {
    override fun Route.initRouting() {
        get("seedgen/headers") {
            val jar = JarFile(File(SeedGenEndpoint::class.java.protectionDomain.codeSource.location.toURI()).path)
            val result = jar.entries().asSequence().filter {
                it.name.endsWith("wotwrh")
            }.map {
                val lines = SeedGenEndpoint::class.java.classLoader.getResource(it.name).readText().split(System.lineSeparator())
                val descrLines = lines.filter { it.startsWith("/// ") }.map { it.substringAfter("/// ") }

                FileEntry(it.name.substringAfterLast("/"), descrLines.firstOrNull(), descrLines)
            }.toList()
            call.respond(result)
        }
        get("seedgen/presets") {
            val jar = JarFile(File(SeedGenEndpoint::class.java.protectionDomain.codeSource.location.toURI()).path)
            val presetMap = jar.entries().asSequence().filter {
                it.name.startsWith("presets") && it.name.endsWith("json")
            }.map {
                it.name.substringAfterLast("/").substringBeforeLast(".json") to
                        relaxedJson.decodeFromString(Preset.serializer(), SeedGenEndpoint::class.java.classLoader.getResource(it.name).readText())
            }.toMap()
            val result = presetMap.mapValues { it.value.fullResolve(presetMap) }
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
            if (config.goals.isNotEmpty())           command += "--goals ${config.goals}"
            if (config.logic.isNotEmpty())           command += "--logic ${config.logic}"
            if (config.presets.isNotEmpty())         command += "--presets ${config.presets}"
            if (config.headers.isNotEmpty())         command += "--headers ${config.headers}"
            if (!config.multiNames.isNullOrEmpty())  command += "--names ${config.multiNames} --worlds ${config.multiNames.size}"

            command += "-- ${seed.id.value}"
            val process = ProcessBuilder(*command)
                .directory(File(seedgenExec.substringBeforeLast(File.separator)))
                .redirectOutput(ProcessBuilder.Redirect.PIPE)
                .redirectError(ProcessBuilder.Redirect.INHERIT)
                .start()
            process.outputStream.close()
            val err = process.errorStream.readAllBytes().toString(Charsets.UTF_8)
            if(!seedFile(seed).exists()) {
                call.respondText(err, ContentType.Text.Plain, HttpStatusCode.InternalServerError)
            }
            call.respond(HttpStatusCode.Created)
        }
    }
    fun seedFile(seedId: String) = Path.of("${System.getenv("SEED_DIR")}\\${seedId}.wotwr").toFile()
    fun seedFile(seed: Seed) = seedFile(seed.id.value.toString())
}