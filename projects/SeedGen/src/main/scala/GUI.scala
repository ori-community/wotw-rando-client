import java.io.{File, FileWriter}

import SeedGenerator._
import org.json4s._
import org.json4s.native.Serialization

import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.Future
import scala.io.Source
import scala.swing._
import scala.swing.event._
import scala.util.Try

class UI extends MainFrame {

    title = "Wotw Rando Seed Generator"
    preferredSize = new Dimension(800, 600)
    val startSet: GenSettings = UI.settings
    val startFold = new File(startSet.outputFolder)
    val folderSelector = new FileChooser(startFold)
    val folderLabel = new Label(s"Output folder:   ${startSet.outputFolder}")
    folderSelector.selectedFile = startFold
    folderSelector.fileSelectionMode = FileChooser.SelectionMode.DirectoriesOnly
    folderSelector.title = "Choose a folder to put generated seeds in"
    val zoneHints: CheckBox = new CheckBox("Zone Hints"){
      selected = !startSet.flags.noHints
    }
    val spoilers: CheckBox = new CheckBox("Race Mode"){
      selected = !startSet.spoilers
      tooltip = "Puts the spoiler in a separate file.\nAlso disables the logic helper filter."
    }
    val quests: CheckBox = new CheckBox("Items on Quests"){selected = startSet.questLocs}
    val bonusItems: CheckBox = new CheckBox("Bonus Items"){selected = startSet.bonusItems}
    val teleporters: CheckBox = new CheckBox("Teleporters"){selected = startSet.tps}
    val uncheckedPaths: CheckBox = new CheckBox("Use unsafe paths"){selected = startSet.unsafePaths}
    val gorlekPaths: CheckBox = new CheckBox("gorlek paths"){selected = startSet.gorlekPaths}
    val glitchPaths: CheckBox = new CheckBox("glitches"){selected = startSet.glitchPaths}
    val randomSpawn: CheckBox = new CheckBox("Random spawn"){
      enabled = startSet.unsafePaths
      selected = startSet.flags.randomSpawn
    }
    val swordSpawn: CheckBox = new CheckBox("Spawn with Sword"){selected = !startSet.flags.noSword}
    val rain: CheckBox = new CheckBox("Rainy Marsh"){selected = startSet.flags.rain}
    val seirLaunch: CheckBox = new CheckBox("Launch on Seir"){selected = startSet.seirLaunch}
    val noKSDoors: CheckBox = new CheckBox("Remove KS doors"){selected = startSet.flags.noKSDoors}
    val forceTrees: CheckBox = new CheckBox("Force Trees"){selected = startSet.flags.forceTrees}
    val forceWisps: CheckBox = new CheckBox("Force Wisps"){selected = startSet.flags.forceWisps}
    val forceQuests: CheckBox = new CheckBox("Force Quests"){selected = startSet.flags.forceQuests}
    val seedField      = new TextField(5)
    val makeSeedButton = new Button("Generate")
    val folderButton   = new Button("Change")
    val runLastSeed: Button = new Button("Launch Seed"){enabled  = false}
    val logView: TextArea = new TextArea { rows = 8; lineWrap = true; wordWrap = true; font = new Font(Font.Monospaced, Font.Plain.id, 12); editable = false}
    val logHolder: ScrollPane = new ScrollPane(logView)
    val debugToggle: CheckBox = new CheckBox("Extra Debug Info (contains spoilers)"){selected = startSet.debugInfo}
    listenTo(makeSeedButton, folderButton, runLastSeed, zoneHints, spoilers, quests, bonusItems, gorlekPaths, glitchPaths,
      teleporters, uncheckedPaths, swordSpawn, rain, noKSDoors, forceTrees, forceWisps, forceQuests, randomSpawn, debugToggle)
    reactions += {
      case ButtonClicked(`makeSeedButton`) => UI.seedClicked()
      case ButtonClicked(`runLastSeed`) => UI.runSeed()
      case ButtonClicked(`folderButton`) =>
        if(folderSelector.showDialog(this, "Select output directory") == FileChooser.Result.Approve) {
          folderLabel.text = s"Output folder:   ${UI.outputFolder.getPath}"
        }
        UI.writeSettings()
      case ButtonClicked(`uncheckedPaths`) =>
        randomSpawn.enabled = uncheckedPaths.selected
        randomSpawn.selected = randomSpawn.selected && uncheckedPaths.selected
        UI.writeSettings()
      case ButtonClicked(_) => UI.writeSettings()
    }

    contents = new BorderPanel {
      add(new BoxPanel(Orientation.Vertical) {
        val optsLabel = new Label("Settings")
        optsLabel.font = new Font(Font.SansSerif, Font.Bold.id, 16)
        contents += optsLabel
        contents += new BoxPanel(Orientation.Horizontal) {
          Seq(Swing.HGlue, uncheckedPaths, gorlekPaths, glitchPaths, rain, Swing.HGlue).foreach(e => {contents += Swing.HStrut(5); contents += e; contents += Swing.HStrut(5)})
        }
        contents += new BoxPanel(Orientation.Horizontal) {
          Seq(Swing.HGlue, spoilers, quests, noKSDoors, seirLaunch, Swing.HGlue).foreach(e => {contents += Swing.HStrut(5); contents += e; contents += Swing.HStrut(5)})
        }
        contents += new BoxPanel(Orientation.Horizontal) {
          Seq(Swing.HGlue,  zoneHints, teleporters, swordSpawn, bonusItems, Swing.HGlue).foreach(e => {contents += Swing.HStrut(5); contents += e; contents += Swing.HStrut(5)})
        }
        contents += new BoxPanel(Orientation.Horizontal) {
          Seq(Swing.HGlue, forceWisps, forceTrees, forceQuests, randomSpawn, Swing.HGlue).foreach(e => {contents += Swing.HStrut(5); contents += e; contents += Swing.HStrut(5)})
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
        add(Button("Close") { UI.writeSettings(); sys.exit(0) }, BorderPanel.Position.West)
        add(runLastSeed, BorderPanel.Position.East)
      }, BorderPanel.Position.South)
    }
  }
  object UI extends SettingsProvider with Logger {
    def apply(): GenSettings = GenSettings(
      tps          = ui.teleporters.selected,
      spoilers     = !ui.spoilers.selected,
      unsafePaths  = ui.uncheckedPaths.selected,
      gorlekPaths  = ui.gorlekPaths.selected,
      glitchPaths  = ui.glitchPaths.selected,
      questLocs    = ui.quests.selected,
      outputFolder = ui.folderSelector.selectedFile.getAbsolutePath,
      flags        = Flags(ui.forceWisps.selected, ui.forceTrees.selected, ui.forceQuests.selected, !ui.zoneHints.selected,
                          !ui.swordSpawn.selected, ui.rain.selected, ui.noKSDoors.selected, ui.randomSpawn.selected && ui.uncheckedPaths.selected),
      bonusItems   = ui.bonusItems.selected,
      debugInfo    = ui.debugToggle.selected,
      seirLaunch   = ui.seirLaunch.selected
    )
    val settingsPath: String = if(new File("SeedGenSettings.json").exists()) "SeedGenSettings.json" else "C:/moon/SeedGenSettings.json"
    implicit val formats: Formats = Serialization.formats(NoTypeHints)
    def writeSettings(): Unit = {
      val bw = new FileWriter(settingsPath)
      bw.write(this().toJson)
      bw.close()
    }
    def readSettings: Option[GenSettings] = Try {
        val inFile = Source.fromFile(settingsPath)
        val ret = Serialization.read[GenSettings](inFile.mkString)
        inFile.close()
        ret
      }.toOption
    def settings: GenSettings = readSettings.getOrElse(GenSettings())

    def outputPath: String = {
      val name_base = outputFolder.getPath + "/" + (if(ui.seedField.text != "") ui.seedField.text else "seed")
      var ret = new File(s"$name_base.wotwr")
      var i = 0
      while(ret.exists()) {
        ret = new File(s"${name_base}_$i.wotwr")
        i += 1
      }
      lastSeed = Some(ret)
      ret.getAbsolutePath
    }
    def runSeed(): Unit = {
      writeSettings()
      import scala.sys.process._
      lastSeed match {
        case Some(file) => Seq("cmd", "/C", file.getAbsolutePath).lazyLines
        case None =>
          warn("Last seed file not found!")
          ui.runLastSeed.enabled = false
      }

    }
    def seedClicked(): Unit = {
      currentOp = Some(Future {
        info("Building...")
        writeSettings()
        ui.makeSeedButton.enabled = false
        if(ui.seedField.text != "") {
          info(s"Seeded RNG with ${UI.ui.seedField.text}")
          SeedGenerator.Runner.setSeed(UI.ui.seedField.text.hashCode)
        }
        if(SeedGenerator.Runner(outputPath)) {
          info(s"Finished generating seed!")
          ui.runLastSeed.enabled = true
        } else {
          lastSeed = None
          error(s"Failed to generate seed :c")
          ui.runLastSeed.enabled = false
        }
        ui.makeSeedButton.enabled = true
        currentOp = None
      })
    }
    override def enabled: Seq[LogLevel] = Seq(INFO, WARN, ERROR) ++ (if(ui.debugToggle.selected) Seq(DEBUG) else Nil)
    override def write(x: Any): Unit = {
      ui.logView.append(s"$x\n")
      ui.logHolder.verticalScrollBar.value = ui.logHolder.verticalScrollBar.maximum
    }
    var lastSeed: Option[File] = None
    def outputFolder: File = new File(apply().outputFolder)
    var currentOp: Option[Future[Unit]] = None
    val ui = new UI
    def show(): Unit = {
      ui.visible = true
    }
  }
  object Main extends App {
    // autorun section
    if(args.nonEmpty)
      ReachChecker(args.toSeq)
    else {
      Config.settingsProvider = UI
      Config.logger = UI
      UI.show()
    }
  }
