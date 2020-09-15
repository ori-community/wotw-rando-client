package wotw.server.util

import io.ktor.application.*
import io.ktor.http.*
import io.ktor.request.*
import io.ktor.routing.*
import io.ktor.util.pipeline.*
import org.slf4j.LoggerFactory

inline fun <reified T: Any>T.logger() = LoggerFactory.getLogger(T::class.java)

@ContextDsl
@JvmName("putTyped")
inline fun <reified R : Any> Route.put(
    path: String,
    crossinline body: suspend PipelineContext<Unit, ApplicationCall>.(R) -> Unit
): Route {
    return route(path, HttpMethod.Put) {
        handle {
            body(call.receive())
        }
    }
}