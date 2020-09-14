package wotw.server.api

import io.ktor.routing.*
import wotw.server.main.WotwBackendServer

abstract class Endpoint(val server: WotwBackendServer){
    fun init(routing: Route) = routing.initRouting()
    protected abstract fun Route.initRouting()
}