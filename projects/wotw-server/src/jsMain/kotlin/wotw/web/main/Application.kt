package wotw.web.main

import io.ktor.client.*
import io.ktor.client.features.*
import io.ktor.client.features.json.*
import io.ktor.client.features.json.serializer.*
import io.ktor.client.features.websocket.*
import io.ktor.client.request.*
import io.ktor.http.*
import kotlinx.browser.window
import kotlinx.coroutines.*
import wotw.io.messages.protobuf.UserInfo
import wotw.util.EventBus
import wotw.web.util.BACKEND_HOST
import wotw.web.util.BACKEND_PORT

//comfy singletons since client script, yay
object Application {
    val api = HttpClient{
        install(WebSockets)
        install(JsonFeature){
            serializer = KotlinxSerializer(wotw.io.messages.json)
        }
        //TODO: config
        defaultRequest {
            url.protocol = if(url.protocol ==  URLProtocol.HTTP) URLProtocol.HTTPS else url.protocol //if(url.protocol ==  URLProtocol.HTTPS) URLProtocol.HTTP else url.protocol
            url.protocol = if(url.protocol ==  URLProtocol.WS) URLProtocol.WSS  else url.protocol  //if(url.protocol ==  URLProtocol.WSS) URLProtocol.WS else url.protocol
            url.host = window.location.hostname
            url.port = window.location.port.toIntOrNull() ?: if(url.protocol == URLProtocol.HTTP || url.protocol == URLProtocol.WS) 80 else 443
            //url.host = BACKEND_HOST
            //url.port = BACKEND_PORT
            if(!(url.encodedPath.startsWith("/api/") || url.encodedPath.startsWith("api/")))
                url.encodedPath = "/api/" + url.encodedPath

            console.log(url)
        }
    }

    val user: Deferred<UserInfo?> = GlobalScope.async(Dispatchers.Default){
        try {
            api.get<UserInfo>(path = "users/me/info")
        } catch(e: Throwable) {
            console.log("error getting user: $e")
            null
        }
    }

    val eventBus = EventBus()
    const val initialReconnect = 1000
    const val reconnectMax = 15000
}

