package wotw.orirando.com.frontend.views.login

import wotw.orirando.com.frontend.services.TranslationsService
import wotw.orirando.com.shared.css.LoginPageStyles
import wotw.orirando.com.shared.i18n.Translations
import io.udash._
import io.udash.bootstrap.alert.UdashAlert
import io.udash.bootstrap.button.UdashButton
import io.udash.bootstrap.form.UdashForm.FormEvent
import io.udash.bootstrap.form.{FormElementsFactory, UdashForm}
import io.udash.bootstrap.tooltip.UdashPopover
import io.udash.bootstrap.utils.BootstrapStyles.Color
import io.udash.bootstrap.utils.UdashIcons.FontAwesome
import io.udash.component.ComponentId
import io.udash.css._
import io.udash.i18n._
import com.avsystem.commons._

class LoginPageView(
  model: ModelProperty[LoginPageModel],
  presenter: LoginPagePresenter,
  translationsService: TranslationsService
) extends FinalView with CssView {

  import translationsService._
  import scalatags.JsDom.all._

  private val errorsAlert = UdashAlert(Color.Danger.toProperty, ComponentId("alerts"))(nested =>
    nested(repeat(model.subSeq(_.errors)) { error =>
      div(translatedDynamic(error.get)(_.apply())).render
    })
  )

  private val infoIcon = span(
    LoginPageStyles.infoIcon,
    i(FontAwesome.Solid.infoCircle),
  ).render

  // infoIcon - translated popover
  UdashPopover.i18n(content = _ => Translations.Auth.info, trigger = Seq(UdashPopover.Trigger.Hover))(infoIcon)

  private def usernameInput(factory: FormElementsFactory) = {
    factory.input.formGroup(groupId = ComponentId("username"))(
      nested => factory.input.textInput(model.subProp(_.username))(Some(nested =>
        nested(translatedAttrDynamic(Translations.Auth.usernameFieldPlaceholder, "placeholder")(_.apply())))
      ).setup(nested).render,
      labelContent = Some(nested => Seq[Modifier](
        nested(translatedDynamic(Translations.Auth.usernameFieldLabel)(_.apply())), " ", infoIcon
      ))
    )
  }

  private def passwordInput(factory: FormElementsFactory) = {
    factory.input.formGroup(groupId = ComponentId("password"))(
      nested => factory.input.passwordInput(model.subProp(_.password))(Some(nested =>
        nested(translatedAttrDynamic(Translations.Auth.passwordFieldPlaceholder, "placeholder")(_.apply()))
      )).setup(nested).render,
      labelContent = Some(nested => nested(translatedDynamic(Translations.Auth.passwordFieldLabel)(_.apply())))
    )
  }

  // Button from Udash Bootstrap wrapper
  val buttonDisabled = Property(false)
  private val submitButton = UdashButton(
    buttonStyle = Color.Primary.toProperty,
    block = true.toProperty,
    disabled = buttonDisabled,
    componentId = ComponentId("login")
  )(nested => Seq[Modifier](nested(translatedDynamic(Translations.Auth.submitButton)(_.apply())), tpe := "submit"))

  // Random permissions notice
  private val permissionsNotice = UdashAlert(Color.Info.toProperty)(nested =>
    nested(translatedDynamic(Translations.Auth.randomPermissionsInfo)(_.apply()))
  )

  // disable button when data is invalid
  model.valid.streamTo(buttonDisabled, initUpdate = true) {
    case Valid => false
    case _ => true
  }

  def getTemplate: Modifier = div(
    LoginPageStyles.container,

    showIfElse(model.subProp(_.errors).transform(_.nonEmpty))(
      errorsAlert.render,
      permissionsNotice.render
    ),

    UdashForm(componentId = ComponentId("login-from"))(factory => Seq(
      usernameInput(factory),
      passwordInput(factory),

      // submit button or spinner
      showIfElse(model.subProp(_.waitingForResponse))(
        div(
          LoginPageStyles.textCenter,
          span(FontAwesome.Solid.spinner, FontAwesome.Modifiers.Animation.spin, FontAwesome.Modifiers.Sizing.x3)
        ).render,
        submitButton.render
      )
    )

    ).setup(_.listen { case FormEvent(_, FormEvent.EventType.Submit) => if (!model.subProp(_.waitingForResponse).get) presenter.login() })

  )
}
