package wotw.server.main

import io.ktor.application.*
import io.ktor.auth.*
import io.ktor.client.*
import io.ktor.features.*
import io.ktor.html.*
import io.ktor.http.*
import io.ktor.http.content.*
import io.ktor.request.*
import io.ktor.response.*
import io.ktor.routing.*
import io.ktor.serialization.*
import io.ktor.server.engine.*
import io.ktor.server.netty.*
import io.ktor.sessions.*
import io.ktor.util.pipeline.*
import io.ktor.websocket.*
import kotlinx.html.*
import org.jetbrains.exposed.sql.Database
import org.jetbrains.exposed.sql.SchemaUtils
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import org.jetbrains.exposed.sql.transactions.transaction
import org.slf4j.event.Level
import wotw.server.api.*
import wotw.server.database.model.Games
import wotw.server.database.model.PlayerDataTable
import wotw.server.database.model.User
import wotw.server.database.model.Users
import wotw.server.exception.AlreadyExistsException
import wotw.server.exception.UnauthorizedException
import wotw.server.util.logger

class WotwBackendServer {
    companion object {
        @JvmStatic
        fun main(args: Array<String>) {
            WotwBackendServer().start(args)
        }
    }

    val logger = logger()

    fun start(args: Array<String>) {
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
    val authEndpoint = AuthenticationEndpoint(this)
    val connections = ConnectionRegistry()
    private fun startServer(args: Array<String>) {
        val cmd = commandLineEnvironment(args)
        val env = applicationEngineEnvironment {
            config = cmd.config
            connectors += cmd.connectors
            module {
                install(WebSockets) {
                    maxFrameSize = Long.MAX_VALUE
                }
                install(HttpsRedirect)
                install(CallLogging) {
                    level = Level.INFO
                }
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
                    exception<UnauthorizedException> { _ ->
                        call.respond(HttpStatusCode.Unauthorized)
                    }
                    exception<BadRequestException> {
                        call.respond(HttpStatusCode.BadRequest, it.message ?: "")
                    }
                    exception<NotFoundException> {
                        call.respond(HttpStatusCode.NotFound, it.message ?: "")
                    }

                }
                val discordOauthProvider = OAuthServerSettings.OAuth2ServerSettings(
                    name = "discord",
                    clientId = System.getenv("DISCORD_CLIENT_ID"),
                    clientSecret = System.getenv("DISCORD_SECRET"),
                    authorizeUrl = "https://discord.com/api/oauth2/authorize",
                    accessTokenUrl = "https://discord.com/api/oauth2/token",
                    defaultScopes = listOf("identify"),
                    requestMethod = HttpMethod.Post
                )

                val redirectCookiePahse = PipelinePhase("RedirCookiePhase")
                install(Authentication) {
                    oauth(DISCORD_OAUTH) {
                        client = HttpClient()
                        providerLookup = { discordOauthProvider }
                        urlProvider = { redirectUrl("/api/login") }
                        pipeline.insertPhaseBefore(AuthenticationPipeline.RequestAuthentication, redirectCookiePahse)
                        pipeline.intercept(redirectCookiePahse) {
                            call.request.queryParameters["redir"]?.also {
                                call.response.cookies.append("authRedir", it)
                            }
                        }
                    }
                    session<UserSession>(SESSION_AUTH) {
                        challenge {
                            call.respond(HttpStatusCode.Unauthorized)
                        }
                        validate { session ->
                            newSuspendedTransaction {
                                User.findById(session.user)?.id?.value
                            }?.let { UserIdPrincipal(it.toString()) }
                        }

                    }


                }

                install(Sessions) {
                    cookie<UserSession>(SESSION_AUTH, SessionStorageMemory()) {
                        cookie.path = "/"
                    }
                }
                routing {
                    route("api") {
                        bingoEndpoint.init(this)
                        gameEndpoint.init(this)
                        authEndpoint.init(this)
                        get("/") {
                            call.respondText("WOTW-Backend running")
                        }
                    }
                    static("static") {
                        resource("flex-helper.css")
                        resource("wotw-server.js")
                        resource("wotw-server.js.map")
                        defaultResource("index.html")
                    }
                    get("{...}") {
                        call.respondHtml {
                            head {
                                link("/static/flex-helper.css", rel = "stylesheet")
                            }
                            body {
                                div {
                                    id = "content"
                                }
                                script(src = "/static/wotw-server.js") {}
                            }
                        }
                    }
                }
            }
        }
        embeddedServer(Netty, env).start(wait = true)
    }


    private fun ApplicationCall.redirectUrl(path: String): String {
        val defaultPort = if (request.origin.scheme == "http") 80 else 443
        val hostPort = request.host() + request.port().let { port -> if (port == defaultPort) "" else ":$port" }
        val protocol = request.origin.scheme
        return "$protocol://$hostPort$path"
    }
}
