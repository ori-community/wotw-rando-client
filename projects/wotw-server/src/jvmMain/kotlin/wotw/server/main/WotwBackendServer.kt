package wotw.server.main

import wotw.server.exception.AlreadyExistsException
import io.ktor.application.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.response.*
import io.ktor.routing.routing
import io.ktor.serialization.json
import io.ktor.server.engine.*
import io.ktor.server.netty.Netty
import io.ktor.websocket.WebSockets
import org.jetbrains.exposed.sql.Database
import org.jetbrains.exposed.sql.SchemaUtils
import org.jetbrains.exposed.sql.transactions.transaction
import wotw.server.api.BingoEndpoint
import wotw.server.api.ConnectionRegistry
import wotw.server.api.DiscordEndpoint
import wotw.server.api.GameEndpoint
import wotw.server.database.model.Games
import wotw.server.database.model.PlayerDataTable
import wotw.server.database.model.Users
import wotw.server.util.logger
import java.util.*
import kotlin.system.exitProcess

class WotwBackendServer {
    companion object{
        @JvmStatic
        fun main(args: Array<String>) {
            WotwBackendServer().start()
        }
    }

    val logger = logger()

    fun start(){
        initDatabase()
        startServer()
    }

    lateinit var db: Database
    private fun initDatabase() {
        val host = System.getenv("WOTW_DB_HOST")
        val port = System.getenv("WOTW_DB_PORT")
        val db = System.getenv("WOTW_DB")
        val user = System.getenv("WOTW_DB_USER")
        val password = System.getenv("WOTW_DB_PW")

        this.db =
            Database.connect("jdbc:postgresql://$host:$port/$db?user=$user&password=$password", "org.postgresql.Driver")
        transaction {
            SchemaUtils.createMissingTablesAndColumns(Games, Users, PlayerDataTable)
        }

    }

    val bingoEndpoint = BingoEndpoint(this)
    val gameEndpoint = GameEndpoint(this)
    val discordEndpoint = DiscordEndpoint(this)
    val connections = ConnectionRegistry()
    private fun startServer() {
        embeddedServer(Netty, port = System.getenv("WOTW_SERVER_PORT").toIntOrNull() ?: 8081, host = System.getenv("WOTW_SERVER_HOST") ?: "localhost") {
            install(WebSockets) {
                maxFrameSize = Long.MAX_VALUE
            }
            install(CallLogging)
            install(CORS) {
                method(HttpMethod.Options)
                allowNonSimpleContentTypes = true
                allowCredentials = true
                header("Origin")
                allowXHttpMethodOverride()
                anyHost()
            }
            install(ContentNegotiation) {
                json(wotw.io.messages.json)
            }
            install(AutoHeadResponse)
            install(StatusPages) {
                exception<Throwable> { exception ->
                    exception.printStackTrace()
                    call.respond(HttpStatusCode.InternalServerError)
                }
                exception<AlreadyExistsException> { _ ->
                    call.respond(HttpStatusCode.Conflict)
                }
                exception<BadRequestException> {
                    call.respond(HttpStatusCode.BadRequest, it.message ?: "")
                }
                exception<NotFoundException> {
                    call.respond(HttpStatusCode.NotFound, it.message ?: "")
                }

            }
            routing {
                bingoEndpoint.init(this)
                gameEndpoint.init(this)
                discordEndpoint.init(this)
            }
        }.start(wait = true)
    }
}