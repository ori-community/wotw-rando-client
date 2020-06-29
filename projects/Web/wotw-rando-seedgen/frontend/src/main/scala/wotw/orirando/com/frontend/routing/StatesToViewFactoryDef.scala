package wotw.orirando.com.frontend.routing

import wotw.orirando.com.frontend.ApplicationContext
import wotw.orirando.com.frontend.views.RootViewFactory
import wotw.orirando.com.frontend.views.chat.ChatViewFactory
import wotw.orirando.com.frontend.views.login.LoginPageViewFactory
import io.udash._

class StatesToViewFactoryDef extends ViewFactoryRegistry[RoutingState] {
  def matchStateToResolver(state: RoutingState): ViewFactory[_ <: RoutingState] =
    state match {
      case RootState => new RootViewFactory(
        ApplicationContext.translationsService
      )
      case LoginPageState => new LoginPageViewFactory(
        ApplicationContext.userService, ApplicationContext.application, ApplicationContext.translationsService
      )
      case ChatState => new ChatViewFactory(
        ApplicationContext.userService, ApplicationContext.translationsService, ApplicationContext.notificationsCenter
      )
    }
}