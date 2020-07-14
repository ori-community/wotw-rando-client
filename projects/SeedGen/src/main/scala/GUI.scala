import scala.swing._
import scala.swing.event._
import scala.concurrent.Future
import scala.concurrent.ExecutionContext.Implicits.global
import java.io.File
package SeedGenerator {

  import java.io.{ByteArrayOutputStream, FileInputStream, FileOutputStream, ObjectInputStream, ObjectOutputStream}

  import scala.util.Try

  trait Flag { def value: String }

  class UI extends MainFrame {

    title = "Wotw Rando Seed Generator"
    preferredSize = new Dimension(800, 600)
    val startSet = UI.settings
    val startFold = new File(startSet.outputFolder)
    val folderSelector = new FileChooser(startFold)
    val folderLabel = new Label(s"Output folder:   ${startSet.outputFolder}")
    folderSelector.selectedFile = startFold
    folderSelector.fileSelectionMode = FileChooser.SelectionMode.DirectoriesOnly
    folderSelector.title = "Choose a folder to put generated seeds in"
    val zoneHints      = new CheckBox("Zone Hints"){selected = startSet.hints}
    val spoilers       = new CheckBox("Generate Spoiler"){selected = startSet.spoilers}
    val quests         = new CheckBox("Items on Quests"){selected = startSet.questLocs}
    val bonusItems     = new CheckBox("Bonus Items"){selected = startSet.bonusItems}
    val teleporters    = new CheckBox("Teleporters"){selected = startSet.tps}
    val uncheckedPaths = new CheckBox("Use unsafe paths"){selected = startSet.unsafePaths}
    val swordSpawn     = new CheckBox("Spawn with Sword"){selected = !startSet.flags.noSword}
    val rain           = new CheckBox("Rainy Marsh"){selected = startSet.flags.rain}
    val noKSDoors      = new CheckBox("Remove KS doors"){selected = startSet.flags.noKSDoors}
    val forceTrees     = new CheckBox("Force Trees"){selected = startSet.flags.forceWisps}
    val forceWisps     = new CheckBox("Force Wisps"){selected = startSet.flags.forceTrees}
    val forceQuests    = new CheckBox("Force Quests"){selected =  startSet.flags.forceQuests}
    val seedField      = new TextField(5)
    val makeSeedButton = new Button("Generate")
    val folderButton   = new Button("Change")
    val runLastSeed    = new Button("Launch Seed"){enabled  = false}
    val logView: TextArea = new TextArea { rows = 8; lineWrap = true; wordWrap = true; font = new Font(Font.Monospaced, Font.Plain.id, 12); editable = false}
    val logHolder = new ScrollPane(logView)
    val debugToggle = new CheckBox("Extra Debug Info (contains spoilers)")
    listenTo(makeSeedButton)
    listenTo(folderButton)
    listenTo(runLastSeed)
      reactions += {
        case ButtonClicked(`makeSeedButton`) => UI.seedClicked()
        case ButtonClicked(`runLastSeed`) => UI.runSeed()
        case ButtonClicked(`folderButton`) =>
          if(folderSelector.showDialog(this, "Select output directory") == FileChooser.Result.Approve) {
            folderLabel.text = s"Output folder:   ${UI.outputFolder.getPath}"
          }
          UI.writeSettings
      }
    contents = new BorderPanel {
      add(new BoxPanel(Orientation.Vertical) {
        val optsLabel = new Label("Settings")
        optsLabel.font = new Font(Font.SansSerif, Font.Bold.id, 16)
        contents += optsLabel
        contents += new BoxPanel(Orientation.Horizontal) {
          Seq(Swing.HGlue, spoilers, uncheckedPaths, quests, noKSDoors, Swing.HGlue).foreach(e => {contents += Swing.HStrut(5); contents += e; contents += Swing.HStrut(5)})
        }
        contents += new BoxPanel(Orientation.Horizontal) {
          Seq(Swing.HGlue,  zoneHints, teleporters, rain, bonusItems, Swing.HGlue).foreach(e => {contents += Swing.HStrut(5); contents += e; contents += Swing.HStrut(5)})
        }
        contents += new BoxPanel(Orientation.Horizontal) {
          Seq(Swing.HGlue, forceWisps, forceTrees, forceQuests, swordSpawn, Swing.HGlue).foreach(e => {contents += Swing.HStrut(5); contents += e; contents += Swing.HStrut(5)})
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
      add(new BorderPanel {
        add(Button("Close") { UI.writeSettings; sys.exit(0) }, BorderPanel.Position.West)
        add(runLastSeed, BorderPanel.Position.East)
      }, BorderPanel.Position.South)

    }
  }
  case class Flags(forceWisps: Boolean, forceTrees: Boolean, forceQuests: Boolean, noHints: Boolean, noSword: Boolean = false, rain: Boolean = false, noKSDoors: Boolean = false) {
    def line: String = {
      Seq(
        if(forceWisps) Some("ForceWisps") else None,
        if(forceTrees) Some("ForceTrees") else None,
        if(forceQuests) Some("ForceQuests") else None,
        if(noHints) Some("NoHints") else None,
        if(noSword) Some("NoFreeSword") else None,
        if(rain) Some("RainyMarsh") else None,
        if(noKSDoors) Some("NoKSDoors") else None
      ).flatten match {
        case Nil => ""
        case s => s"Flags: ${s.mkString(", ")}\n"
      }
    }
  }
  case class GenSettings(
                          hints: Boolean,
                          tps: Boolean,
                          spoilers: Boolean,
                          unsafePaths: Boolean,
                          questLocs: Boolean,
                          outputFolder: String,
                          flags: Flags,
                          bonusItems: Boolean = true
                        )
  object UI {
    def opts: GenSettings = GenSettings(
      ui.zoneHints.selected,
      ui.teleporters.selected,
      ui.spoilers.selected,
      ui.uncheckedPaths.selected,
      ui.quests.selected,
      ui.folderSelector.selectedFile.getAbsolutePath,
      Flags(ui.forceWisps.selected, ui.forceTrees.selected, ui.forceQuests.selected, !ui.zoneHints.selected, !ui.swordSpawn.selected, ui.rain.selected, ui.noKSDoors.selected),
      ui.bonusItems.selected
    )
    val settingsPath = "C:/moon/.seedgen"
    def writeSettings = {
      val out = new ObjectOutputStream(new FileOutputStream(settingsPath))
      out.writeObject(opts)
    }
    def readSettings: Option[GenSettings] = Try {
        val in = new ObjectInputStream(new FileInputStream(settingsPath))
        in.readObject().asInstanceOf[GenSettings]
      }.toOption
    def settings = readSettings.getOrElse(GenSettings(
      hints = true,
      tps = true,
      spoilers = true,
      unsafePaths = false,
      questLocs = true,
      outputFolder = "C:\\moon",
      flags = Flags(
        forceWisps = false,
        forceTrees = false,
        forceQuests = false,
        noHints = false
      )))

    def outputFile: File = {
      val name_base = outputFolder.getPath + "/" + (if(ui.seedField.text != "") ui.seedField.text else "seed")
      var ret = new File(s"$name_base.wotwr")
      var i = 0
      while(ret.exists()) {
        ret = new File(s"${name_base}_$i.wotwr")
        i += 1
      }
      lastSeed = Some(ret)
      ret
    }
    def runSeed(): Unit = {
      writeSettings
      import scala.sys.process._
      lastSeed match {
        case Some(file) => Seq("cmd", "/C", file.getAbsolutePath).!
        case None =>
          UI.log("Last seed file not found!")
          ui.runLastSeed.enabled = false
      }

    }
    def seedClicked(): Unit = {
      currentOp = Some(Future {
        log("Building...")
        writeSettings
        ui.makeSeedButton.enabled = false
        if(ui.seedField.text != "") {
          log(s"Seeded RNG with ${UI.ui.seedField.text}")
          SeedGenerator.Runner.setSeed(UI.ui.seedField.text.hashCode)
        }
        if(SeedGenerator.Runner(writeTo = outputFile)) {
          log(s"Finished generating seed!")
          ui.runLastSeed.enabled = true
        } else {
          lastSeed = None
          log(s"Failed to generate seed :c")
          ui.runLastSeed.enabled = false
        }
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
    var lastSeed: Option[File] = None
    def outputFolder: File = new File(opts.outputFolder)
    var currentOp: Option[Future[Unit]] = None
    val ui = new UI
    def show(): Unit = {
      ui.visible = true
    }
  }
}