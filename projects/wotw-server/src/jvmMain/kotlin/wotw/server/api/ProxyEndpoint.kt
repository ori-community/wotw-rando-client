package wotw.server.api

import io.ktor.application.*
import io.ktor.auth.*
import io.ktor.client.*
import io.ktor.client.request.*
import io.ktor.client.response.*
import io.ktor.client.statement.*
import io.ktor.features.*
import io.ktor.http.*
import io.ktor.http.cio.websocket.CloseReason
import io.ktor.http.cio.websocket.close
import io.ktor.http.content.*
import io.ktor.request.*
import io.ktor.response.*
import io.ktor.routing.*
import io.ktor.sessions.*
import io.ktor.util.*
import io.ktor.utils.io.*
import io.ktor.websocket.webSocket
import org.jetbrains.exposed.sql.SizedCollection
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.GameProperties
import wotw.io.messages.protobuf.*
import wotw.io.messages.sendMessage
import wotw.server.bingo.coopStates
import wotw.server.bingo.multiStates
import wotw.server.database.model.*
import wotw.server.exception.AlreadyExistsException
import wotw.server.exception.ServerConfigurationException
import wotw.server.io.protocol
import wotw.server.main.WotwBackendServer
import wotw.server.util.logger
import wotw.server.util.rezero
import wotw.server.util.zerore
import kotlin.to

class ProxyEndpoint(server: WotwBackendServer) : Endpoint(server) {
    val logger = logger()
    val client = HttpClient()
    override fun Route.initRouting() {
        get("/seedgen/{path...}") {
            val url =
                "${System.getenv("FRONTEND_PATH") ?: throw ServerConfigurationException("FRONTEND_PATH undefined")}/seedgen/${
                    call.parameters.getAll("path")?.joinToString("/") ?: ""
                }"
            val response = client.request<HttpStatement>(url).execute()

            val proxiedHeaders = response.headers.filter{ key, _ -> !listOf("contentType", "contentLength", "transferEncoding").contains(key) }

            val location = proxiedHeaders[HttpHeaders.Location]
            val contentType = proxiedHeaders[HttpHeaders.ContentType]
            val contentLength = proxiedHeaders[HttpHeaders.ContentLength]
            if (location != null) {
                call.response.header(HttpHeaders.Location, location)
            }
            call.respond(object : OutgoingContent.WriteChannelContent() {
                override val contentLength: Long? = contentLength?.toLong()
                override val contentType: ContentType? = contentType?.let { ContentType.parse(it) }
                override val headers: Headers = Headers.build {
                    appendAll(proxiedHeaders)
                }

                override val status: HttpStatusCode? = response.status
                override suspend fun writeTo(channel: ByteWriteChannel) {
                    response.content.copyAndClose(channel)
                }
            })
        }

    }
}