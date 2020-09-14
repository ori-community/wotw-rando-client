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
import kotlinx.serialization.json.*
import org.jetbrains.exposed.sql.transactions.transaction
import wotw.io.messages.json
import wotw.server.database.model.User
import wotw.server.main.WotwBackendServer

const val AUTH = "discordOAuth"
class AuthenticationEndpoint(server: WotwBackendServer) : Endpoint(server){
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
        application.install(Authentication){
            oauth(AUTH){
                client = HttpClient()
                providerLookup = { discordOauthProvider }
                urlProvider = { redirectUrl("/oauth/redir") }
            }
        }
        authenticate(AUTH) {
            route("/login"){
                handle {

                }
            }
            route("/oauth/redir"){
                handle {
                    val principal = call.authentication.principal<OAuthAccessTokenResponse.OAuth2>() ?: error("No Principal")
                    val jsonResponse = HttpClient().get<String>("https://discord.com/api//users/@me"){
                        header("Authorization", "Bearer ${principal.accessToken}")
                    }
                    val json = json.parseToJsonElement(jsonResponse).jsonObject
                    val userId = json["id"]?.jsonPrimitive?.longOrNull ?: -1L
                    val user = transaction {
                        return@transaction User.findById(userId)
                            ?: User.new(userId) {
                                name = json["username"]?.jsonPrimitive?.contentOrNull ?: "unknown"
                            }
                    }
                    call.respondText("Hi ${user.name}")
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