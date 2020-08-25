import java.nio.file.{Path, Paths}
import org.json4s._
import org.json4s.native.Serialization
import scalafx.Includes._
import scalafx.application.JFXApp
import scalafx.application.JFXApp.PrimaryStage
import scalafx.scene.Scene
import javafx.scene.layout.{Border => JBorder}
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
  import scalafx.beans.binding.Bindings
  import scalafx.beans.property.StringProperty
  import scalafx.geometry.{Insets, Pos}
  import scalafx.scene.control.Alert.AlertType
  import scalafx.scene.control._
  import scalafx.scene.layout.{Border, BorderStroke, BorderStrokeStyle, BorderWidths, CornerRadii, GridPane, VBox}
  import scalafx.scene.text.{Font, TextAlignment}
  import java.util.prefs.Preferences


  import scala.util.{Failure, Success, Try}
  object FXGUI extends JFXApp {

    if(FXGUI.parameters.raw.nonEmpty) {
      ReachChecker(FXGUI.parameters.raw.toSeq)
      sys.exit()
    }

    versionCheck()
    val APP_NAME: String = "RandoSeedGen"
    val pref: Preferences = Preferences.userRoot.node(APP_NAME)
    case class DoublePref(key: String) {
      def set(v: Double): Unit = pref.putDouble(key, v)
      def get: Option[Double] = {
        val ret = pref.getDouble(key, Double.NaN)
        !ret.isNaN ? ret
      }
      def ??(orElse: Double): Double = get ?? orElse
    }
    val WIN_X: DoublePref = DoublePref("WINPOS_X")
    val WIN_Y: DoublePref = DoublePref("WINPOS_Y")
    val WIN_W: DoublePref = DoublePref("WIN_WIDTH")
    val WIN_H: DoublePref = DoublePref("WIN_HEIGHT")

    val settingsFile: Path = "SeedGenSettings.json".f.canonPath
    var currentOp: Option[Future[Unit]] = None
    val headerFilePath: Path =  ".seedHeader".f.canonPath
    val startSet: GenSettings = settingsFromFile
    var outputDirectory: Path = Paths.get(startSet.outputFolder)
    val folderLabel: Text = new Text {text = s"Output folder: ${outputDirectory.toAbsolutePath}"}
    val header = new StringProperty(null, "header_text", headerFilePath.read ?? "// Replace this text with a seed header, if desired")
    val lastSeedText: StringProperty = new StringProperty(null, "last_seed")
    val seedName: StringProperty = new StringProperty(null, "seed_name", "")
    val logArea: TextArea = new TextArea { editable = false; font = Font("Monospaced")}
    var lastSeed: Option[String] = None
    val lastSeedName: StringProperty = new StringProperty(null, "last_seed_name", "N/A")

    Config.settingsProvider = FXSettingsProvider
    Config.logger  = FXLogger

    def settingsFromFile: GenSettings = {
      implicit val formats: Formats = Serialization.formats(NoTypeHints)
      settingsFile.read.map(Serialization.read[GenSettings]).getOrElse(GenSettings())
    }
    def outputPath: String = {
      val name_base = outputDirectory.toAbsolutePath.resolve((seedName() == "") ? "seed" ?? seedName()).toString
      var ret = s"$name_base.wotwr"
      var i = 0
      while(ret.f.exists) {
        ret = s"${name_base}_$i.wotwr"
        i += 1
      }
      lastSeed = Some(ret)
      ret
    }

    def onChange(unused: Boolean): Path = settingsFile.write(Config().toJson)
    def toggle(name: String, tooltipText: String, startSelected: => Boolean, listener: => Boolean=>Unit = onChange): ToggleButton =  new ToggleButton(name){
      selected = startSelected
      tooltip = tooltipText
      selected.addListener((_, _, nval) => listener(nval))
      border <== when (selected) choose
        new JBorder(new BorderStroke(stroke = SkyBlue, BorderStrokeStyle.Solid, new CornerRadii(4f), BorderWidths.Default))  otherwise
        new JBorder(new BorderStroke(stroke = Black, BorderStrokeStyle.None, new CornerRadii(3f), BorderWidths.Default))
//      background <== when (selected) choose new Background(Array(new BackgroundFill(LightSkyBlue, new CornerRadii(3f), Insets(1)))) otherwise new Background(Array(new BackgroundFill(LightGrey, new CornerRadii(3f), Insets(1))))
    }

    val runLastSeedButton: Button = new Button("Run Last Seed") {disable = true}
    val raceModeButton:         ToggleButton = toggle("Race Mode",          "Generate a spoiler-free version of the seed for racing", !startSet.spoilers)
    val debugButton:            ToggleButton = toggle("Debug Mode",         "Outputs spoiler-containing generation info to the console, and enables the last seed tab", startSet.debugInfo)
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

    runLastSeedButton.onAction = _ => lastSeed match {
      case Some(file) => Seq("cmd", "/C", file.f.toString).lazyLines
      case None =>
        Config.warn("Last seed file not found!")
        runLastSeedButton.disable = true
    }


    val headerTextArea: TextArea = new TextArea() {
      text <==> header
      font = Font("Monospaced")
    }
    header.addListener((_, _, newV) => {
      headerFilePath.write(newV)
    })

    stage = new PrimaryStage {
      title = "Wotw Rando Seed Generator"
      width = WIN_W ?? 800
      height = WIN_H ?? 600
      WIN_X.get.foreach(pref_c => x = pref_c)
      WIN_Y.get.foreach(pref_c => y = pref_c)
      val selector: DirectoryChooser = new DirectoryChooser {
        initialDirectory = outputDirectory.toFile
      }

      onCloseRequest = _ => {
        settingsFile.write(FXSettingsProvider().toJson)
        WIN_W.set(width())
        WIN_H.set(height())
        WIN_X.set(x())
        WIN_Y.set(y())
      }

      val mainTabPane: TabPane = getTabPane
      val lastSeedTab: Tab = getSeedTab

      scene = new Scene {
        fill = LightGray
        content = mainTabPane
      }
      headerTextArea.prefWidth <== mainTabPane.prefWidth - 40
      mainTabPane.prefWidth <== scene.value.widthProperty()
      mainTabPane.prefHeight <== scene().heightProperty()

      private def getTabPane = {
        new TabPane {
          border = new JBorder(new BorderStroke(stroke = Black, BorderStrokeStyle.Solid, new CornerRadii(3f), BorderWidths.Default))
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
        gp.addRow(2, swordSpawnButton, rainButton, randomSpawnButton, seirLaunchButton, bonusItemsButton)
        gp.addRow(3, raceModeButton, zoneHintsButton, questsButton, noKSDoorsButton, teleportersButton)
        gp.addRow(4, getGenerateButton, debugButton, seedNameInput, runLastSeedButton,
          new Button("Clear Log") {
            onAction = _ => logArea.setText("")
          },
        )
        gp
      }

      private def getGenerateButton = {
        val generateButton = new Button("Generate") {
          tooltip = "build a seed with the specified parameters"
        }
        generateButton.onAction = _ => {
          generateButton.disable = true
          currentOp = Some(Future {
            val succ = Try {
              Config.info("Building...")
              if (seedName() != "") {
                Config.info(s"Seeded RNG with ${seedName()}")
                SeedGenerator.Runner.setSeed(seedName().hashCode)
              }
              if (SeedGenerator.Runner(outputPath)) {
                Config.info(s"Finished generating seed!")
                true
              } else {
                lastSeed = None
                Config.error(s"Failed to generate seed :c")
                false
              }
            } match {
              case Failure(e) => Config.error(e); false
              case Success(_) => true
            }
            Platform.runLater(() => {
              runLastSeedButton.disable = !succ
              generateButton.disable = false
              lastSeed.flatMap(_.f.read) foreach (v => {
                lastSeedText.setValue(v)
                lastSeedName.setValue(lastSeed.get.f.getFileName.toString)
                if (debugButton.selected()) {
                  if (!mainTabPane.getTabs.contains(lastSeedTab))
                    mainTabPane.getTabs.append(lastSeedTab)
                } else if (mainTabPane.getTabs.contains(lastSeedTab))
                  mainTabPane.getTabs.remove(lastSeedTab)
              })
              currentOp = None
            })
          })
        }
        generateButton
      }

      private def getSeedTab = new Tab() {
        closable = false
        id = "seed-view"
        text = "seed"
        tooltip = "view your latest seed here"
        content = new VBox() {
          children = Seq(
            new Text() {
              text <== Bindings.createStringBinding(() => s"last rolled seed: ${lastSeedName()}", lastSeedName)
              alignmentInParent = Pos.TopCenter
              textAlignment = TextAlignment.Center
            },
            new TextArea() {
              text <==> lastSeedText
              font = Font("Monospaced")
              editable = false
              wrapText = true
              alignmentInParent = Pos.Center
              prefHeight <== mainTabPane.prefHeight - 40
              prefWidth <== mainTabPane.prefWidth - 10
            }
          )
        }
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
            new Text("Any text added below will be placed at the top of your seed file.\nYou can use this to preplace items") {
              alignmentInParent = Pos.Center
            },
            headerTextArea
          )
        }
      }
    }
    object FXSettingsProvider extends SettingsProvider {
      def apply(): GenSettings = GenSettings(
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
        Platform.runLater(() => logArea.appendText(s"$x\n"))
      }
    }

    def versionCheck(): Unit = {
      val javaVersion = System.getProperty("java.version")
      if(javaVersion.takeWhile(_ != '.').toIntOption ?? 0 < 11)
      new Alert(AlertType.Warning, s"Seedgen not compatible with Java version $javaVersion.\nPlease install version 11 or higher.\nYou may need to uninstall older versions.").showAndWait()
    }

    def show(): Unit = {
      main(Array.empty[String])
    }
  }

}