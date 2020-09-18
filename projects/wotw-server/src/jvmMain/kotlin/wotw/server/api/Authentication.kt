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
const val SESSION_AUTH = "sessionid"

data class UserSession(val user: Long)

class AuthenticationEndpoint(server: WotwBackendServer) : Endpoint(server) {
    override fun Route.initRouting() {
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
        authenticate(SESSION_AUTH) {
            route("/logout") {
                get("/") {
                    val redir = call.request.queryParameters["redir"]
                    call.sessions.clear(SESSION_AUTH)
                    when {
                        redir != null -> call.respondRedirect(redir)
                        else          -> call.respondText("you have been logged out!")
                    }
                }
            }
        }

        route("/sessions") {
            post<String>("/") {
                val user = handleOAuthToken(it)
                call.sessions.set(UserSession(user.id.value))
                call.respondText(call.response.cookies[SESSION_AUTH]?.value ?: "")
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



}