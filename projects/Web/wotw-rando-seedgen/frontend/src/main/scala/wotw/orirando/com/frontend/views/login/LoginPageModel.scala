package wotw.orirando.com.frontend.views.login

import io.udash._
import io.udash.i18n.TranslationKey0

/** The form's model structure. */
case class LoginPageModel(username: String, password: String, waitingForResponse: Boolean, errors: Seq[TranslationKey0])
object LoginPageModel extends HasModelPropertyCreator[LoginPageModel]
