package wotw.orirando.com.frontend.views.chat

import wotw.orirando.com.frontend.routing.ChatState
import wotw.orirando.com.frontend.services.rpc.NotificationsCenter
import wotw.orirando.com.frontend.services.{TranslationsService, UserContextService}
import wotw.orirando.com.shared.model.SharedExceptions
import io.udash._

class ChatViewFactory(
  userService: UserContextService,
  translationsService: TranslationsService,
  notificationsCenter: NotificationsCenter
) extends ViewFactory[ChatState.type] {
  import scala.concurrent.ExecutionContext.Implicits.global

  override def create(): (View, Presenter[ChatState.type]) = {
    val model = ModelProperty[ChatModel](ChatModel(Seq.empty, "", 0))

    val rpc = userService.secureRpc()
    if (rpc.isEmpty) throw SharedExceptions.UnauthorizedException()

    val presenter = new ChatPresenter(model, rpc.get.chat(), userService, notificationsCenter)
    val view = new ChatView(model, presenter, translationsService)

    (view, presenter)
  }
}
