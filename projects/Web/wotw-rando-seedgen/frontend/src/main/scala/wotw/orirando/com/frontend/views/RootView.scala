package wotw.orirando.com.frontend.views

import wotw.orirando.com.frontend.routing.RootState
import wotw.orirando.com.frontend.services.TranslationsService
import wotw.orirando.com.shared.css.GlobalStyles
import wotw.orirando.com.shared.i18n.Translations
import io.udash._
import io.udash.bootstrap.button.UdashButton
import io.udash.bootstrap.utils.BootstrapStyles.Color
import io.udash.bootstrap.{BootstrapStyles, UdashBootstrap}
import io.udash.component.ComponentId
import io.udash.css.CssView
import io.udash.i18n.Lang

class RootViewFactory(translationsService: TranslationsService) extends StaticViewFactory[RootState.type](
  () => new RootView(translationsService)
)

class RootView(translationsService: TranslationsService) extends ContainerView with CssView {

  import scalatags.JsDom.all._

  private def langChangeButton(lang: Lang): Modifier = {
    val btn = UdashButton(
      buttonStyle = Color.Link.toProperty, componentId = ComponentId(s"lang-btn-${lang.lang}")
    )(_ => lang.lang.toUpperCase())

    btn.listen {
      case UdashButton.ButtonClickEvent(_, _) =>
        translationsService.setLanguage(lang)
    }

    btn.render
  }

  // ContainerView contains default implementation of child view rendering
  // It puts child view into `childViewContainer`
  override def getTemplate: Modifier = div(
    // loads Bootstrap and FontAwesome styles from CDN
    UdashBootstrap.loadBootstrapStyles(),
    UdashBootstrap.loadFontAwesome(),

    BootstrapStyles.container,
    div(
      GlobalStyles.floatRight,
      Translations.langs.map(v => langChangeButton(Lang(v)))
    ),
    h1("Wotw Rando Seedgen", BootstrapStyles.Spacing.margin()),
    childViewContainer
  )
}
