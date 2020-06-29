package wotw.orirando.com.frontend.views.login

import wotw.orirando.com.frontend.routing.{LoginPageState, RoutingState}
import wotw.orirando.com.frontend.services.{TranslationsService, UserContextService}
import io.udash._

import scala.concurrent.Future

/** Prepares model, view and presenter for demo view. */
class LoginPageViewFactory(
  userService: UserContextService,
  application: Application[RoutingState],
  translationsService: TranslationsService
) extends ViewFactory[LoginPageState.type] {
  import scala.concurrent.ExecutionContext.Implicits.global

  override def create(): (View, Presenter[LoginPageState.type]) = {
    // Main model of the view
    val model = ModelProperty(
      LoginPageModel("", "", false, Seq.empty)
    )

    // model validation
    model.subProp(_.username).addValidator(NonEmptyStringValidator)
    model.subProp(_.password).addValidator(NonEmptyStringValidator)

    val presenter = new LoginPagePresenter(model, userService, application)
    val view = new LoginPageView(model, presenter, translationsService)
    (view, presenter)
  }

  private object NonEmptyStringValidator extends Validator[String] {
    override def apply(element: String): Future[ValidationResult] = Future.successful {
      if (element.nonEmpty) Valid else Invalid("") // we can ignore error msg, because we don't display it anyway
    }
  }
}