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
import io.ktor.util.*
import wotw.server.main.WotwBackendServer
import wotw.server.util.logger

class DiscordEndpoint(server: WotwBackendServer) : Endpoint(server) {
    val logger = logger()
    override fun Routing.initRouting() {
        get("login"){
            logger.info("login called")
            call.respondRedirect("https://discord.com/api/oauth2/authorize?client_id=751523174767919195&redirect_uri=http%3A%2F%2Fwotw.orirando.com%2Foauth%2Fredir&response_type=code&scope=identify", false)
        }
        get("oauth/redir"){
            logger.info(call.request.queryParameters.toMap().map { (a, b) -> "$a: $b" }.joinToString("\n"))
            call.respondText(call.request.queryParameters.toMap().map { (a, b) -> "$a: $b" }.joinToString("\n"))
        }

    }
}