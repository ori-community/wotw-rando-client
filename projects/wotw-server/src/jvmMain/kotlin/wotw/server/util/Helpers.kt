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

fun rezero(n: Int) = if(n == -1) 0 else n
fun rezero(n: Float) = if(n == -1f) 0f else n
fun zerore(n: Int) = if(n == 0) -1 else n
fun zerore(n: Float) = if(n == 0f) -1f else n