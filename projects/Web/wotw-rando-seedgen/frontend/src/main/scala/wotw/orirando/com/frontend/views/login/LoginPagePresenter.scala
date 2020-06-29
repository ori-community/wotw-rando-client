package wotw.orirando.com.frontend.views.login

import wotw.orirando.com.frontend.routing.{ChatState, LoginPageState, RoutingState}
import wotw.orirando.com.frontend.services.UserContextService
import wotw.orirando.com.shared.i18n.Translations
import wotw.orirando.com.shared.model.SharedExceptions
import io.udash._

import scala.concurrent.{ExecutionContext, Future}
import scala.util.{Failure, Success}

/** Contains the business logic of this view. */
class LoginPagePresenter(
  model: ModelProperty[LoginPageModel],
  userService: UserContextService,
  application: Application[RoutingState]
)(implicit ec: ExecutionContext) extends Presenter[LoginPageState.type] {

  /** We don't need any initialization, so it's empty. */
  override def handleState(state: LoginPageState.type): Unit = {
    if (userService.currentContext.isDefined) {
      application.goTo(ChatState)
    }
  }

  def login(): Future[Unit] = {
    model.subProp(_.waitingForResponse).set(true)
    model.subProp(_.errors).set(Seq.empty)

    val username = model.subProp(_.username).get
    val password = model.subProp(_.password).get
    userService.login(username, password).map(_ => ()).andThen {
      case Success(_) =>
        model.subProp(_.waitingForResponse).set(false)
        application.goTo(ChatState)
      case Failure(_: SharedExceptions.UserNotFound) =>
        model.subProp(_.waitingForResponse).set(false)
        model.subProp(_.errors).set(Seq(Translations.Auth.userNotFound))
      case Failure(_) =>
        model.subProp(_.waitingForResponse).set(false)
        model.subProp(_.errors).set(Seq(Translations.Global.unknownError))
    }
  }
}
