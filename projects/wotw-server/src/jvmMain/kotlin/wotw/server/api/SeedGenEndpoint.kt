package wotw.server.api

import io.ktor.application.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.response.*
import io.ktor.routing.*
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.*
import wotw.server.database.model.Game
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

                HeaderFileEntry(it.name.substringAfterLast("/").substringBeforeLast("."), descrLines.firstOrNull(), descrLines)
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
        get("seeds/{id}/{player?}") {
            val id = call.parameters["id"] ?: throw BadRequestException("No Seed ID found")
            val player = call.parameters["player"]
            call.respond(seedFile(id, player).readBytes())
        }
        post<SeedGenConfig>("seeds") { config ->

            val seed = newSuspendedTransaction { Seed.new {} }
            val result = server.seedGeneratorService.generate("seed-${seed.id.value}", config)

            if (result.isSuccess) {
                call.respond(HttpStatusCode.Created, SeedGenResponse(
                    seedId = seed.id.value,
                    playerList = config.multiNames?: emptyList(),
                    gameId = if(config.isCoop || config.isMulti) {
                        newSuspendedTransaction { Game.new {props = GameProperties(config.isMulti, config.isCoop)} }.id.value
                    } else null
                ))
            } else {
                call.respondText(
                    result.exceptionOrNull()?.message ?: "Unknown seedgen error",
                    ContentType.Text.Plain,
                    HttpStatusCode.InternalServerError
                )
            }
        }
    }

    fun seedFile(seedId: String, player: String? = null): File {
        var pathString = "${System.getenv("SEED_DIR")}${File.separator}seed-${seedId}"
        if(player != null){
            val sanitized = server.seedGeneratorService.sanitizedPlayerName(player)
            pathString += "${File.separator}$sanitized"
        }
        pathString += ".wotwr"
        val file =  Path.of(pathString).toFile()
        if(!file.exists() || file.isDirectory)
            throw NotFoundException()
        return file
    }
    fun seedFile(seed: Seed) = seedFile(seed.id.value.toString())
}


