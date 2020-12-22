package wotw.server.api

import io.ktor.application.*
import io.ktor.auth.*
import io.ktor.features.*
import io.ktor.response.*
import io.ktor.routing.*
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.io.messages.protobuf.UserInfo
import wotw.server.main.WotwBackendServer
import wotw.server.util.put

class UserEndpoint(server: WotwBackendServer) : Endpoint(server) {
    override fun Route.initRouting() {
        authenticate(SESSION_AUTH) {
            route("users") {
                get("/me/info") {
                    val user = newSuspendedTransaction { sessionInfo() }
                    call.respond(UserInfo(user.id.value, user.name))
                }
            }
        }
        route("users") {
            get("/me") {
                val user = newSuspendedTransaction {
                    sessionInfo()
                }
                call.respond(user)
            }

            put<String>("/me/nickname") {
                if(it.isBlank())
                    throw BadRequestException("Nickname may not be blank!")

                val user = newSuspendedTransaction {
                    sessionInfo().apply {
                        name = it
                        isCustomName = true
                    }
                }
                call.respond(user)
            }

        }
    }
}



