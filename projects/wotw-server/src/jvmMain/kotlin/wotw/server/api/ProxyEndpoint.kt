package wotw.server.api

import io.ktor.application.*
import io.ktor.client.*
import io.ktor.client.request.*
import io.ktor.client.statement.*
import io.ktor.http.*
import io.ktor.http.content.*
import io.ktor.response.*
import io.ktor.routing.*
import io.ktor.util.*
import io.ktor.util.pipeline.*
import io.ktor.utils.io.*
import wotw.server.exception.ServerConfigurationException
import wotw.server.main.WotwBackendServer
import wotw.server.util.logger

class ProxyEndpoint(server: WotwBackendServer) : Endpoint(server) {
    val logger = logger()
    val client = HttpClient()

    suspend fun PipelineContext<Unit, ApplicationCall>.proxy(basePath: String) {
        val url =
            "${System.getenv("FRONTEND_PATH") ?: throw ServerConfigurationException("FRONTEND_PATH undefined")}/${basePath}/${
                call.parameters.getAll("path")?.joinToString("/") ?: ""
            }"
        val response = client.request<HttpStatement>(url).execute()

        val proxiedHeaders = response.headers.filter{ key, _ -> !listOf("Content-Type", "Content-Length", "Transfer-Encoding").contains(key) }

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

    override fun Route.initRouting() {
        get("/seedgen/{path...}") {
            proxy("seedgen")
        }
        get("/_nuxt/{path...}") {
            proxy("_nuxt")
        }
    }
}