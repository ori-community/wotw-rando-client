package wotw.server.api

import io.ktor.application.*
import io.ktor.auth.*
import io.ktor.client.*
import io.ktor.client.request.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.request.*
import io.ktor.response.*
import io.ktor.routing.*
import io.ktor.sessions.*
import io.ktor.util.pipeline.*
import kotlinx.serialization.json.*
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import org.jetbrains.exposed.sql.transactions.transaction
import wotw.io.messages.json
import wotw.server.database.model.Token
import wotw.server.database.model.User
import wotw.server.main.WotwBackendServer
import java.util.*

const val AUTH = "discordOAuth"

data class BrowserSession(val token: UUID)

class AuthenticationEndpoint(server: WotwBackendServer) : Endpoint(server) {
    override fun Route.initRouting() {
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
        application.install(Authentication) {
            oauth(AUTH) {
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
            session<BrowserSession> {
                challenge {
                    call.respond(HttpStatusCode.Unauthorized)
                }
                validate { session ->
                    newSuspendedTransaction {
                        Token.findById(session.token)?.user?.id?.value
                    }?.let { UserIdPrincipal(it.toString()) }
                }
            }
        }

        application.install(Sessions) {
            cookie<BrowserSession>("JSESSIONID", SessionStorageMemory()) {
                cookie.path = "/"
            }
        }

        authenticate(AUTH) {
            route("/login") {
                handle {
                    val principal =
                        call.authentication.principal<OAuthAccessTokenResponse.OAuth2>() ?: error("No Principal")
                    val jsonResponse = HttpClient().get<String>("https://discord.com/api//users/@me") {
                        header("Authorization", "Bearer ${principal.accessToken}")
                    }

                    val json = json.parseToJsonElement(jsonResponse).jsonObject
                    val userId = json["id"]?.jsonPrimitive?.longOrNull ?: -1L
                    val (user, token) = newSuspendedTransaction {
                        (User.findById(userId)
                            ?: User.new(userId) {
                                name = json["username"]?.jsonPrimitive?.contentOrNull ?: "unknown"
                            }).let {
                            it to Token.new { user = it }
                        }
                    }
                    val redir = call.request.cookies["authRedir"]
                    call.response.cookies.appendExpired("authRedir")
                    call.sessions.set(BrowserSession(token.id.value))

                    if (redir == null)
                        call.respondText("Hi ${user.name}! Your ID is ${user.id.value}")
                    else
                        call.respondRedirect(redir)
                }
            }

        }

    }

    private fun ApplicationCall.redirectUrl(path: String): String {
        val defaultPort = if (request.origin.scheme == "http") 80 else 443
        val hostPort = request.host() + request.port().let { port -> if (port == defaultPort) "" else ":$port" }
        val protocol = request.origin.scheme
        return "$protocol://$hostPort$path"
    }

}