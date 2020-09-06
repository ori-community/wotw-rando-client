package wotw.server.api

import wotw.server.exception.AlreadyExistsException
import io.ktor.application.call
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.http.cio.websocket.CloseReason
import io.ktor.http.cio.websocket.close
import io.ktor.response.*
import io.ktor.routing.*
import com.gitlab.kordlib.*
import com.gitlab.kordlib.core.Kord
import com.gitlab.kordlib.core.builder.kord.KordBuilder
import wotw.server.main.WotwBackendServer
import wotw.server.util.logger

class DiscordEndpoint(server: WotwBackendServer) : Endpoint(server) {
    val logger = logger()
    override fun Routing.initRouting() {
        get("login"){
            logger.info("login called")
            call.respondRedirect("https://discord.com/api/oauth2/authorize?client_id=751523174767919195&redirect_uri=http%3A%2F%2F127.0.0.1%2Foauth%2Fredir&response_type=code&scope=identify", false)
        }
        get("oauth/redir"){
            val code = call.request.queryParameters["code"] ?: throw BadRequestException("Cannot parse game_id")
            val k = Kord("")
            call.respondText("code: $code")
        }

    }
}