package wotw.server.api

import io.ktor.application.*
import io.ktor.features.*
import io.ktor.routing.*
import io.ktor.sessions.*
import io.ktor.util.pipeline.*
import wotw.server.database.model.User
import wotw.server.exception.UnauthorizedException
import wotw.server.main.WotwBackendServer

abstract class Endpoint(val server: WotwBackendServer){
    fun init(routing: Route) = routing.initRouting()
    protected abstract fun Route.initRouting()

    fun PipelineContext<Unit, ApplicationCall>.sessionInfoOrNull(): User?{
        val id = call.sessions.get<UserSession>()?.user ?: return null
        return User.findById(id)
    }

    fun PipelineContext<Unit, ApplicationCall>.sessionInfo(): User{
        return sessionInfoOrNull() ?: throw UnauthorizedException()
    }

}