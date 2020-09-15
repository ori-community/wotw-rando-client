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
import kotlinx.serialization.json.contentOrNull
import kotlinx.serialization.json.jsonObject
import kotlinx.serialization.json.jsonPrimitive
import kotlinx.serialization.json.longOrNull
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.json
import wotw.server.database.model.User
import wotw.server.main.WotwBackendServer

const val DISCORD_OAUTH = "discordOAuth"
const val SESSION_AUTH = "JSESSIONID"

data class UserSession(val user: Long)

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

        application.install(Sessions) {
            cookie<UserSession>(SESSION_AUTH, SessionStorageMemory()) {
                cookie.path = "/"
            }
        }

        authenticate(DISCORD_OAUTH) {
            route("/login") {
                handle {
                    val principal =
                        call.authentication.principal<OAuthAccessTokenResponse.OAuth2>() ?: error("No Principal")
                    val user = handleOAuthToken(principal.accessToken)
                    val redir = call.request.cookies["authRedir"]
                    call.response.cookies.appendExpired("authRedir")
                    call.sessions.set(UserSession(user.id.value))

                    if (redir == null)
                        call.respondText("Hi ${user.name}! Your ID is ${user.id.value}")
                    else
                        call.respondRedirect(redir)
                }
            }

        }

        route("/sessions") {
            post<String>("/") {
                val user = handleOAuthToken(it)
                call.sessions.set(UserSession(user.id.value))
                call.respond(HttpStatusCode.Created)
            }
            authenticate(SESSION_AUTH) {
                delete {
                    call.sessions.clear(SESSION_AUTH)
                }
            }
        }
    }

    private suspend fun handleOAuthToken(accessToken: String): User {
        val jsonResponse = HttpClient().get<String>("https://discord.com/api//users/@me") {
            header("Authorization", "Bearer $accessToken")
        }
        val json = json.parseToJsonElement(jsonResponse).jsonObject
        val userId = json["id"]?.jsonPrimitive?.longOrNull ?: -1L
        return newSuspendedTransaction {
            User.findById(userId)
                ?: User.new(userId) {
                    name = json["username"]?.jsonPrimitive?.contentOrNull ?: "unknown"
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