package wotw.server.api

import io.ktor.application.*
import io.ktor.auth.*
import io.ktor.response.*
import io.ktor.routing.*
import org.jetbrains.exposed.sql.transactions.experimental.newSuspendedTransaction
import wotw.server.main.WotwBackendServer
import wotw.server.util.put

class UserEndpoint(server: WotwBackendServer) : Endpoint(server) {
    override fun Route.initRouting() {
        authenticate {
            route("users"){
                get("/me"){
                    val user = newSuspendedTransaction {
                        sessionInfo()
                    }
                    call.respond(user)
                }
                put<String>("/me/nickname"){
                    val user = newSuspendedTransaction {
                        sessionInfo().apply {
                            name = it
                        }
                    }
                    call.respond(user)
                }

            }
        }



    }
}