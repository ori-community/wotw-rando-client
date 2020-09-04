package wotw.web.main

import io.ktor.client.*
import io.ktor.client.features.*
import io.ktor.client.features.json.*
import io.ktor.client.features.json.serializer.*
import io.ktor.client.features.websocket.*
import io.ktor.client.request.*
import wotw.util.EventBus
import wotw.web.util.BACKEND_HOST
import wotw.web.util.BACKEND_PORT

//comfy singletons since client script, yay
object Application {
    val client = HttpClient{
        install(WebSockets)
        install(JsonFeature){
            serializer = KotlinxSerializer(wotw.io.messages.json)
        }
        //TODO: config
        defaultRequest {
            host = BACKEND_HOST
            port = BACKEND_PORT

        }
    }

    val eventBus = EventBus()
    const val initialReconnect = 1000
    const val reconnectMax = 15000
}

