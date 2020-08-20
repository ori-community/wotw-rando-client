import java.io.File
import java.nio.file.{Path, Paths, Files}
import org.json4s._
import org.json4s.native.Serialization
import scalafx.Includes._
import scalafx.application.JFXApp
import scalafx.application.JFXApp.PrimaryStage
import scalafx.scene.Scene
import scalafx.scene.layout.BorderPane
import scalafx.scene.paint.Color._
import scalafx.scene.text.Text
import scalafx.stage.DirectoryChooser

import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.Future
import scala.sys.process._
package SeedGenerator {

  import SeedGenerator.implicits._
  import scalafx.application.Platform
  import scalafx.beans.property.StringProperty
  import scalafx.geometry.{Insets, Pos}
  import scalafx.scene.control._
  import scalafx.scene.layout.{Border, BorderStroke, BorderStrokeStyle, BorderWidths, CornerRadii, GridPane, VBox}
  import scalafx.scene.text.Font

  import scala.util.Try
  object FXGUI extends JFXApp {
    val settingsFile = "SeedGenSettings.json".f.canonPath
    def settingsFromFile = {
      implicit val formats: Formats = Serialization.formats(NoTypeHints)
      settingsFile.read.map(Serialization.read[GenSettings]).getOrElse(GenSettings())
    }
    var currentOp: Option[Future[Unit]] = None
    val headerFilePath =  ".seedHeader".f.canonPath
    val startSet = settingsFromFile
    var outputDirectory = Paths.get(startSet.outputFolder)
    val folderLabel = new Text {text = s"Output folder: ${outputDirectory.toAbsolutePath}"}
    val header = new StringProperty(null, "header_text", headerFilePath.read ?? "// Replace this text with a seed header, if desired")
    val seedName = new StringProperty(null, "seed_name", "")
    val logArea = new TextArea {
      editable = false
    }
    object FXSettingsProvider extends SettingsProvider {
      def apply() = GenSettings(
        tps          = teleportersButton.selected(),
        spoilers     = !raceModeButton.selected(),
        unsafePaths  = uncheckedPathsButton.selected(),
        gorlekPaths  = gorlekPathsButton.selected(),
        glitchPaths  = glitchPathsButton.selected(),
        questLocs    = questsButton.selected(),
        outputFolder = outputDirectory.toAbsolutePath.toString,
        flags        = Flags(forceWispsButton.selected(), forceTreesButton.selected(), forceQuestsButton.selected(), !zoneHintsButton.selected(),
          !swordSpawnButton.selected(), rainButton.selected(), noKSDoorsButton.selected(), randomSpawnButton.selected(), worldTourButton.selected()),
        bonusItems   = bonusItemsButton.selected(),
        debugInfo    = debugButton.selected(),
        seirLaunch   = seirLaunchButton.selected()
      )
    }
    object FXLogger extends Logger {
      override def enabled: Seq[LogLevel] = Seq(INFO, WARN, ERROR) ++ Config().debugInfo ? DEBUG
      override def write(x: =>Any): Unit = {
        //        logArea.setScrollTop(logArea.height())
        println(x)
        Platform.runLater(() => logArea.appendText(s"$x\n"))
      }
    }
    Config.settingsProvider = FXSettingsProvider
    Config.logger  = FXLogger

    def outputPath: String = {
      val name_base = outputDirectory.toAbsolutePath + "\\" + "seed"
      var ret = s"$name_base.wotwr"
      var i = 0
      while(ret.f.exists) {
        ret = s"${name_base}_$i.wotwr"
        i += 1
      }
      lastSeed = Some(ret)
      ret
    }

    def onChange(unused: Boolean) = settingsFile.write(FXSettingsProvider().toJson)
    def toggle(name: String, tooltipText: String, startSelected: => Boolean, listener: => Boolean=>Unit = onChange) =  new ToggleButton(name){
      selected = startSelected
      tooltip = tooltipText
      selected.addListener((_, _, nval) => listener(nval))
      border <== when (selected) choose
        new Border(new BorderStroke(stroke = SkyBlue, BorderStrokeStyle.Solid, new CornerRadii(4f), BorderWidths.Default))  otherwise
        new Border(new BorderStroke(stroke = Black, BorderStrokeStyle.None, new CornerRadii(3f), BorderWidths.Default))
//      background <== when (selected) choose new Background(Array(new BackgroundFill(LightSkyBlue, new CornerRadii(3f), Insets(1)))) otherwise new Background(Array(new BackgroundFill(LightGrey, new CornerRadii(3f), Insets(1))))
    }

    val raceModeButton:         ToggleButton = toggle("Race Mode",          "Generate a spoiler-free version of the seed for racing", !startSet.spoilers)
    val debugButton:            ToggleButton = toggle("Extra Debug Info",   "Output debug info from generation to the activity log (contains spoilers)", startSet.debugInfo)
    val questsButton:           ToggleButton = toggle("Items on Quests",    "Receive items from quest progress and completion", startSet.questLocs)
    val zoneHintsButton:        ToggleButton = toggle("Zone Hints",         "Lupo sells the hints", !startSet.flags.noHints)
    val bonusItemsButton:       ToggleButton = toggle("Bonus Items",        "Enables rando-only bonus pickups, including weapon upgrades", startSet.bonusItems)
    val teleportersButton:      ToggleButton = toggle("Teleporters",        "Add items to the item pool that unlock teleporters", startSet.tps)
    val gorlekPathsButton:      ToggleButton = toggle("Gorlek paths",       "Enable Gorlek-difficulty paths", startSet.gorlekPaths)
    val uncheckedPathsButton:   ToggleButton = toggle("Unsafe paths",       "Enable paths that have not yet been sorted into a difficulty group.", startSet.unsafePaths)
    val glitchPathsButton:      ToggleButton = toggle("Glitched paths",     "Enable paths that rely on glitches, such as Sentry Jumps", startSet.glitchPaths)
    val randomSpawnButton:      ToggleButton = toggle("Random spawn",       "Spawn at a randomly-chosen spirit well", startSet.flags.randomSpawn)
    val swordSpawnButton:       ToggleButton = toggle("Spawn with Sword",   "Start the game with Spirit Edge in your inventory and equipped", !startSet.flags.noSword)
    val rainButton:             ToggleButton = toggle("Rainy Marsh",        "Start the game in the 'prologue' marsh state, with rain present and Howl enabled", startSet.flags.rain)
    val seirLaunchButton:       ToggleButton = toggle("Launch on Seir",     "Places launch on Seir", startSet.seirLaunch)
    val noKSDoorsButton:        ToggleButton = toggle("Remove KS doors",    "Start the game with every keystone door opened", startSet.flags.noKSDoors)
    val forceWispsButton:       ToggleButton = toggle("Force Wisps",        "Adds requirement: Collect every Wisp", startSet.flags.forceWisps)
    val worldTourButton:        ToggleButton = toggle("World Tour",         "Adds requirement: Collect a Relic from every zone with one", startSet.flags.worldTour)
    val forceQuestsButton:      ToggleButton = toggle("Force Quests",       "Adds requirement: Complete every Quest", startSet.flags.forceQuests)
    val forceTreesButton:       ToggleButton = toggle("Force Trees",        "Adds requirement: Collect all Ancestral Trees", startSet.flags.forceTrees)
    val seedNameInput:          TextField    = new TextField {
      text <==> seedName
    }

    val generateButton = new Button("Generate"){ tooltip = "build a seed with the specified parameters" }
    val runLastSeedButton = new Button("Run Last Seed") {disable = true}
    var lastSeed: Option[String] = None
    generateButton.onAction = _ => {
      generateButton.disable = true
        currentOp = Some(Future {
          Config.info("Building...")
          if(seedName() != "") {
            Config.info(s"Seeded RNG with ${seedName()}")
            SeedGenerator.Runner.setSeed(seedName().hashCode)
          }
         val succ = Try {
            if (SeedGenerator.Runner(outputPath)) {
              Config.info(s"Finished generating seed!")
              true
            } else {
              //              lastSeed = None
              Config.error(s"Failed to generate seed :c")
              false
            }
         }.toOption.contains(true)
          Platform.runLater(() => {
            runLastSeedButton.disable = !succ
            generateButton.disable = false
            currentOp = None
          })
        })
      }
    runLastSeedButton.onAction = _ => lastSeed match {
      case Some(file) => Seq("cmd", "/C", file.f.toString).lazyLines
      case None =>
        Config.warn("Last seed file not found!")
        runLastSeedButton.disable = true
    }


    val textArea: TextArea = new TextArea() {
      text <==> header
    }

    header.addListener((o, oldV, newV) => {
      println(newV.count(a => Seq('\n', '\r').contains(a)))
      headerFilePath.write(newV)
    })
    stage = new PrimaryStage {
      title = "Wotw Rando Seed Generator"
      width = 800
      height = 600
      val selector = new DirectoryChooser {
        initialDirectory = outputDirectory.toFile
      }

      val headerInputField = new TextArea() {
        font = Font("Monospaced")
      }
      val tabPane: TabPane = getTabPane


      scene = new Scene {
        fill = LightGray
        content = tabPane
      }
//      textArea.prefRowCount <== header().count(a => Seq('\n', '\r').contains(a)) + 6
      textArea.prefWidth <== tabPane.prefWidth - 40
      tabPane.prefWidth <== scene.value.widthProperty()
      tabPane.prefHeight <== scene().heightProperty()


    }

    private def getTabPane = {
      new TabPane {
        border = new Border(new BorderStroke(stroke = Black, BorderStrokeStyle.Solid, new CornerRadii(3f), BorderWidths.Default))
        padding = Insets(15)
        tabs = Seq(
          getMainTab,
          getHeaderTab
        )
      }
    }
    private def getOptions: GridPane = {
      val gp = new GridPane() {

      }

      gp.addRow(0, new Label("Logic Groups: "), gorlekPathsButton, glitchPathsButton, uncheckedPathsButton)
      gp.addRow(1, new Label("Goal Modes: "), forceTreesButton, forceWispsButton, forceQuestsButton, worldTourButton)
      gp.addRow(2, swordSpawnButton,  rainButton, randomSpawnButton, seirLaunchButton)
      gp.addRow(3, raceModeButton, zoneHintsButton, questsButton, noKSDoorsButton)
      gp.addRow(4, generateButton, debugButton, seedNameInput, runLastSeedButton,
        new Button("Clear Log"){onAction = _ => logArea.setText("")},
      )
      gp
    }
    private def getMainTab = new Tab {
      closable = false
      id = "main"
      text = "main"
      tooltip = "Main seedgen tab"
      content = new BorderPane {
        top = getOptions
        center = logArea
      }
    }

    private def getHeaderTab = new Tab {
        closable = false
        id = "header"
        text = "header"
        tooltip = "for customizing seeds"
        content = new VBox() {
          children = Seq(
            new Text("Any text added below will be placed at the top of your seed file.\nYou can use this to preplace items") { alignmentInParent = Pos.Center},
            textArea
          )
        }
    }

    def show() = {
      main(Array.empty[String])
    }
  }

}