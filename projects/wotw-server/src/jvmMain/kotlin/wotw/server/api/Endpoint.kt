package wotw.server.api

import io.ktor.routing.Routing
import wotw.server.main.WotwBackendServer

abstract class Endpoint(val server: WotwBackendServer){
    fun init(routing: Routing) = routing.initRouting()
    protected abstract fun Routing.initRouting()
}