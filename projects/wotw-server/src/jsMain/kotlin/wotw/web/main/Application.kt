package wotw.web.main

import io.ktor.client.HttpClient
import io.ktor.client.features.*
import io.ktor.client.features.json.*
import io.ktor.client.features.json.serializer.*
import io.ktor.client.features.websocket.WebSockets
import io.ktor.client.request.*
import wotw.util.EventBus

//comfy singletons since client script, yay
object Application {
    val client = HttpClient{
        install(WebSockets)
        install(JsonFeature){
            serializer = KotlinxSerializer(wotw.io.messages.json)
        }
        //TODO: config
        defaultRequest {
            host = "localhost"
            port = 8081
        }
    }

    val eventBus = EventBus()
    const val initialReconnect = 1000
    const val reconnectMax = 15000
}

