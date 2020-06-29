package wotw.orirando.com.backend.rpc.i18n

import java.{util => ju}

import wotw.orirando.com.shared.i18n.Translations
import io.udash.i18n._

import scala.concurrent.ExecutionContext.Implicits.global

/** Translations don't depend on user, so it can be object. */
object TranslationsEndpoint extends TranslationRPCEndpoint(
  new ResourceBundlesTranslationTemplatesProvider(
    // it resolves all bundles basing on the constants defined in `Translations`
    Translations.langs.map { lang =>
      Lang(lang) -> Translations.bundlesNames.map { name =>
        ju.ResourceBundle.getBundle(s"i18n/$name", new ju.Locale(lang))
      }
    }.toMap
  )
)