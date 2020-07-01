import scala.swing._
import scala.swing.event._
import scala.concurrent.Future
import scala.concurrent.ExecutionContext.Implicits.global
import java.io.File
package SeedGenerator {
  trait Flag { def value: String }

  class UI extends MainFrame {
    title = "Wotw Rando Seed Generator"
    preferredSize = new Dimension(800, 600)
    val folderSelector = new FileChooser(new File("C:/moon"))
    val folderLabel = new Label(s"Output folder:   ${UI.outputFolder.getPath}")
    folderSelector.selectedFile = UI.outputFolder
    folderSelector.fileSelectionMode = FileChooser.SelectionMode.DirectoriesOnly
    folderSelector.title = "Choose a folder to put generated seeds in"
    val zoneHints      = new CheckBox("Zone Hints")
    val spoilers       = new CheckBox("Generate Spoiler")
    val teleporters    = new CheckBox("Teleporters in item pool")
    val uncheckedPaths = new CheckBox("Use unsafe paths")
    val forceTrees     = new CheckBox("Force Trees")
    val forceWisps     = new CheckBox("Force Wisps")
    val forceQuests    = new CheckBox("Force Quests")
    val newParser      = new CheckBox("Use New Parser (Faster)")
    val seedField      = new TextField(5)
    val makeSeedButton = new Button("Generate")
    val folderButton   = new Button("Change")
    val logView  = new TextArea { rows = 8; lineWrap = true; wordWrap = true; font = new Font(Font.Monospaced, Font.Plain.id, 12) }
    spoilers.selected    = true
    zoneHints.selected   = true
    teleporters.selected = true
    newParser.selected   = true
    logView.editable = false
    val logHolder = new ScrollPane(logView)
    val debugToggle = new CheckBox("Extra Debug Info (contains spoilers)")
    listenTo(makeSeedButton)
    listenTo(folderButton)
      reactions += {
        case ButtonClicked(`makeSeedButton`) => UI.seedClicked()
        case ButtonClicked(`folderButton`) =>
          if(folderSelector.showDialog(this, "Select output directory") == FileChooser.Result.Approve) {
            UI.outputFolder = folderSelector.selectedFile
            folderLabel.text = s"Output folder:   ${UI.outputFolder.getPath}"
          }
      }
    contents = new BorderPanel {
      add(new BoxPanel(Orientation.Vertical) {
        val optsLabel = new Label("Settings")
        optsLabel.font = new Font(Font.SansSerif, Font.Bold.id, 16)
        contents += optsLabel
        contents += new BoxPanel(Orientation.Horizontal) {
          Seq(Swing.HGlue, spoilers, zoneHints, teleporters, uncheckedPaths, Swing.HGlue).foreach(e => {contents += Swing.HStrut(5); contents += e; contents += Swing.HStrut(5)})
        }
        contents += new BoxPanel(Orientation.Horizontal) {
          Seq(Swing.HGlue, forceWisps, forceTrees, forceQuests, newParser, Swing.HGlue).foreach(e => {contents += Swing.HStrut(5); contents += e; contents += Swing.HStrut(5)})
        }

        contents += new BoxPanel(Orientation.Horizontal) {
          contents += Swing.HGlue
          contents += Swing.HStrut(20)
          contents += folderLabel
          contents += Swing.HStrut(5)
          contents += folderButton
          contents += Swing.HStrut(20)
          contents += Swing.HGlue
          contents += new Label("Seed (Optional):")
          contents += Swing.HStrut(5)
          contents += seedField
          contents += Swing.HGlue
          contents += Swing.HStrut(20)
          contents += makeSeedButton
          contents += Swing.HStrut(20)
          contents += Swing.HGlue
        }
        contents += Swing.VStrut(4)
      }, BorderPanel.Position.North)
      add(new BoxPanel(Orientation.Vertical) {
        contents += new BoxPanel(Orientation.Horizontal) {
          contents += Swing.HGlue
          val logLabel = new Label("Generator Log")
          logLabel.font = new Font(Font.SansSerif, Font.Bold.id, 14)
          contents += logLabel
          contents += Swing.HGlue
        }
        contents += new BoxPanel(Orientation.Horizontal) {
          contents += Button("Clear Log") { logView.text = "" }
          contents += Swing.HGlue
          contents += debugToggle
        }
        contents += logHolder
      }, BorderPanel.Position.Center)
      add(new BoxPanel(Orientation.Horizontal) {
        contents += Button("Close") { sys.exit(0) }
      }, BorderPanel.Position.South)

    }
  }
  case class GenSettings(hints: Boolean, tps: Boolean, spoilers: Boolean, unsafePaths: Boolean, newParser: Boolean)
  object UI {
    def Options: GenSettings = GenSettings(ui.zoneHints.selected, ui.teleporters.selected, ui.spoilers.selected, ui.uncheckedPaths.selected, ui.newParser.selected)
    def flags: Seq[String] = Seq(
      if(ui.forceWisps.selected) Some("ForceWisps") else None,
      if(ui.forceTrees.selected) Some("ForceTrees") else None,
      if(ui.forceQuests.selected) Some("ForceQuests") else None,
      if(ui.zoneHints.selected) None else Some("NoHints"),
    ).flatten
    def flagLine: String = if(flags.nonEmpty) s"Flags: ${flags.mkString(", ")}\n"else ""
    def outputFile: File = {
      val name_base = outputFolder.getPath + "/" + (if(ui.seedField.text != "") ui.seedField.text else "seed")
      var ret = new File(s"$name_base.wotwr")
      var i = 0
      while(ret.exists()) {
        ret = new File(s"${name_base}_$i.wotwr")
        i += 1
      }
      ret
    }
    def seedClicked(): Unit = {
      currentOp = Some(Future {
        log("Building...")
        ui.makeSeedButton.enabled = false
        if(ui.seedField.text != "") {
          log(s"Seeded RNG with ${UI.ui.seedField.text}")
          SeedGenerator.Runner.setSeed(UI.ui.seedField.text.hashCode)
        }
        SeedGenerator.Runner(writeTo = outputFile)
        ui.makeSeedButton.enabled = true
        currentOp = None
      })
    }
    def debug(x: Any): Unit = if(ui.debugToggle.selected || !ui.visible) log(x)
    def log(x: Any): Unit = {
      if(!ui.visible)
        println(x)
      ui.logView.append(s"$x\n")
      ui.logHolder.verticalScrollBar.value = ui.logHolder.verticalScrollBar.maximum
    }
    var outputFolder: File = new File("C:/moon")
    var currentOp: Option[Future[Unit]] = None
    val ui = new UI
    def show(): Unit = {
      ui.visible = true
    }
  }
}