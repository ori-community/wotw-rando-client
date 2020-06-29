package wotw.orirando.com.frontend.services

import wotw.orirando.com.shared.i18n.Translations
import io.udash._
import io.udash.i18n._
import org.scalajs.dom.ext.LocalStorage

import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

/** Keeps entities responsible for translations. */
class TranslationsService(rpc: RemoteTranslationRPC) {
  implicit val translationProvider: TranslationProvider =
    new RemoteTranslationProvider(rpc, Some(LocalStorage), 6 hours)

  implicit val currentLangProperty: LangProperty =
    Property(Lang(Translations.langs.head))

  def setLanguage(lang: Lang): Unit = {
    require(Translations.langs.contains(lang.lang), "Selected language is not supported.")
    currentLangProperty.set(lang)
  }
}
