package wotw.server.main

import io.ktor.application.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.response.*
import io.ktor.routing.*
import io.ktor.serialization.*
import io.ktor.server.engine.*
import io.ktor.server.netty.*
import io.ktor.websocket.*
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
import wotw.server.exception.AlreadyExistsException
import wotw.server.util.logger

class WotwBackendServer {
    companion object{
        @JvmStatic
        fun main(args: Array<String>) {
            WotwBackendServer().start(args)
        }
    }

    val logger = logger()

    fun start(args: Array<String>){
        initDatabase()
        startServer(args)
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
    private fun startServer(args: Array<String>) {
        val cmd  =commandLineEnvironment(args)
        val env = applicationEngineEnvironment {
            config =  cmd.config
            connectors += cmd.connectors
            module{
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
                    get("/"){
                        call.respondText("WOTW-Backend running")
                    }
                }
            }
        }
        embeddedServer(Netty, env).start(wait = true)
    }
}