package wotw.orirando.com.frontend.routing

import io.udash._

class RoutingRegistryDef extends RoutingRegistry[RoutingState] {
  def matchUrl(url: Url): RoutingState =
    url2State.applyOrElse(
      "/" + url.value.stripPrefix("/").stripSuffix("/"),
      (_: String) => LoginPageState
    )

  def matchState(state: RoutingState): Url =
    Url(state2Url.apply(state))

  private val (url2State, state2Url) = bidirectional {
    case "/" => LoginPageState
    case "/chat" => ChatState
  }
}