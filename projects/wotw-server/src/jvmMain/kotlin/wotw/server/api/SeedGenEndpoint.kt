package wotw.server.api

import io.ktor.application.*
import io.ktor.response.*
import io.ktor.routing.*
import wotw.io.messages.FileEntry
import wotw.io.messages.SeedGenConfig
import wotw.server.main.WotwBackendServer
import java.io.File
import java.util.jar.JarFile


class SeedGenEndpoint(server: WotwBackendServer) : Endpoint(server) {
    override fun Route.initRouting() {
        get("seedgen/headers") {
            val jar = JarFile(File(SeedGenEndpoint::class.java.protectionDomain.codeSource.location.toURI()).path)
            val result = jar.entries().asSequence().filter {
                it.name.endsWith("wotwrh")
            }.map {
                val lines = SeedGenEndpoint::class.java.classLoader.getResource(it.name).readText().split("\r\n")
                val descrLines = lines.filter { it.startsWith("/// ") }.map { it.substringAfter("/// ") }

                FileEntry(it.name.substringAfterLast("/"), descrLines.firstOrNull(), descrLines)
            }.toList()
            call.respond(result)
        }
        get("seedgen/presets") {
            val jar = JarFile(File(SeedGenEndpoint::class.java.protectionDomain.codeSource.location.toURI()).path)
            val result = jar.entries().asSequence().filter {
                it.name.startsWith("presets") && it.name.endsWith("json")
            }.map {
                FileEntry(
                    it.name.substringAfterLast("/"),
                    it.name.substringAfterLast("/").substringBeforeLast(".json"),
                    null
                )
            }.toList()
            call.respond(result)
        }
        get("seeds/{id}") {}
        post<SeedGenConfig>("seeds") { config ->
            //TODO: Input validation
            val path = System.getenv("SEEDGEN_PATH")
            var command = "$path seed --verbose --tostdout".split(" ").toTypedArray() + config.flags.flatMap { it.split(" ") }
            if (config.goals.isNotEmpty()) {
                command += "--goals"
                command += config.goals
            }
            if (config.logic.isNotEmpty()) {
                command += "--logic"
                command += config.logic
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
            val process = ProcessBuilder(*command)
                .directory(File(path.substringBeforeLast(File.separator)))
                .redirectOutput(ProcessBuilder.Redirect.PIPE)
                .redirectError(ProcessBuilder.Redirect.INHERIT)
                .start()
            process.outputStream.close()
            val response = process.inputStream.readAllBytes()
            call.respondBytes(response)
        }
    }
}