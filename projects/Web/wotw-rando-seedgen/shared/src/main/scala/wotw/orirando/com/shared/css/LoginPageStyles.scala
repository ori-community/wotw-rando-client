package wotw.orirando.com.shared.css

import io.udash.css._

import scala.language.postfixOps

object LoginPageStyles extends CssBase {
  import dsl._

  private val maxFormWidth = 500 px

  val textCenter: CssStyle = style(
    textAlign.center
  )

  val infoIcon: CssStyle = style(
    fontSize(1 rem)
  )

  val container: CssStyle = style(
    maxWidth(maxFormWidth),

    margin.auto,
    marginTop(50 px),

    // add border around the form on big screens
    media.minWidth(maxFormWidth)(
      padding(25 px),
      borderColor.lightgray,
      borderRadius(10 px),
      borderStyle.solid,
      borderWidth(1 px)
    )
  )

}
