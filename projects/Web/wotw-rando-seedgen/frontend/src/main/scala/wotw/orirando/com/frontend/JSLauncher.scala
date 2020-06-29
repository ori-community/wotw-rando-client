package wotw.orirando.com.frontend

import io.udash.logging.CrossLogging
import io.udash.wrappers.jquery._
import org.scalajs.dom.Element

import scala.scalajs.js.annotation.JSExport

object JSLauncher extends CrossLogging {
  @JSExport
  def main(args: Array[String]): Unit = {
    jQ((jThis: Element) => {
      // Select #application element from index.html as root of whole app
      val appRoot = jQ("#application").get(0)
      if (appRoot.isEmpty) {
        logger.error("Application root element not found! Check your index.html file!")
      } else {
        ApplicationContext.application.run(appRoot.get)
      }
    })
  }
}