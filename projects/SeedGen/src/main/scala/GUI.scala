import scala.swing._
import scala.swing.event._
import scala.concurrent.Future
import scala.concurrent.ExecutionContext.Implicits.global
package SeedGenerator {


  class UI extends MainFrame {
    title = "Seed Generator"
    preferredSize = new Dimension(800, 600)
    val forceTrees = new CheckBox("Force Trees")
    val seedField = new TextField(20)
    val makeSeedButton = new Button("Generate")
    val logView  = new TextArea { rows = 8; lineWrap = true; wordWrap = true }
    logView.editable = false
    val logHolder = new ScrollPane(logView)

    makeSeedButton
    listenTo(makeSeedButton)
      reactions += {
        case ButtonClicked(`makeSeedButton`) => Callbacks.genSeed()
      }
    contents = new BoxPanel(Orientation.Vertical) {
      contents += new Label("Wotw Rando Seed Generator")
      contents += Swing.VStrut(5)
      contents += new BoxPanel(Orientation.Horizontal) {
        contents += new Label("Seed (Optional):")
        contents += Swing.HStrut(5)
        contents += seedField
      }
      contents += Swing.VStrut(5)
      contents += new BoxPanel(Orientation.Horizontal) {
        contents += makeSeedButton
        contents += Button("Close") { sys.exit(0) }
      }
      contents += Swing.VStrut(5)
      contents += new BoxPanel(Orientation.Horizontal) {
        contents += logHolder
      }
    }
  }
  object Callbacks {
    def genSeed(): Unit = {
      runningOp = Some(Future {
        UI.log("Building...")
        UI.ui.makeSeedButton.enabled = false
        if(UI.ui.seedField.text != "") {
          UI.log(s"Set seed to ${UI.ui.seedField.text}")
          SeedGenerator.Runner.setSeed(UI.ui.seedField.text.hashCode)
        }
        SeedGenerator.Runner()
        UI.ui.makeSeedButton.enabled = true
      })
    }
    var runningOp: Option[Future[Unit]] = None
  }
  object UI {
    val ui = new UI
    def log(x: Any): Unit = ui.logView.text += s"$x\n"
    def show() = {
      ui.visible = true
    }
  }

}