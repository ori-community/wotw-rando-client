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
import SeedGenerator.implicits._
import scalafx.application.Platform
import scalafx.beans.binding.Bindings
import scalafx.beans.property.StringProperty
import scalafx.geometry.{Insets, Pos}
import scalafx.scene.control.Alert.AlertType
import scalafx.scene.control._
import scalafx.scene.layout.{BorderStroke, BorderStrokeStyle, BorderWidths, CornerRadii, GridPane, VBox}
import scalafx.scene.text.{Font, TextAlignment}
import java.util.prefs.Preferences
import scalafx.beans.binding.{BooleanBinding, ObjectBinding}
import scalafx.beans.property.{BooleanProperty, ObjectProperty}
import scalafx.geometry.Orientation
import scalafx.stage.FileChooser
import scalafx.util.StringConverter

import scala.io.Source
import scala.util.{Failure, Success, Try}

import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.Future
import scala.sys.process._
package SeedGenerator {

  import SeedGenerator.Nodes.SpawnLoc
  import scalafx.collections.ObservableBuffer

  case class Header(name: String, lines: Seq[String]) {
  def dispname: String = name.replace("_", " ").capitalize
  val desc: String =  lines.takeWhile(_.startsWith("//")).map(_.replace("//", "").trim).mkString("\n") ?? "No description provided"
}

  object FXGUI extends JFXApp {

    implicit class ObjectPropExts[T](wrapped: ObjectProperty[T]) {
      def mapObjBind[V](f: T => V): ObjectBinding[V] = Bindings.createObjectBinding(() => f(wrapped()), wrapped)
      def mapBoolBind(f: T => Boolean): BooleanBinding = Bindings.createBooleanBinding(() => f(wrapped()), wrapped)
      def mapBoolProp(outbound: T => Boolean, inbound: (T, Boolean) => T): BooleanProperty = {
        val prop = new BooleanProperty()
        prop.setValue(outbound(wrapped()))
        wrapped.onChange((_, _, nval) => prop.setValue(outbound(nval)))
        prop.onChange((_, _, nval) => wrapped.setValue(inbound(wrapped(), nval)))
        prop
      }
      def mapStringProp(outbound: T => String, inbound: (T,String) => T): StringProperty = {
        val prop = new StringProperty()
        prop.setValue(outbound(wrapped()))
        wrapped.onChange((_, _, nval) => prop.setValue(outbound(nval)))
        prop.onChange((_, _, nval) => wrapped.setValue(inbound(wrapped(), nval)))
        prop
      }
    }

    object Headers {
      val all: Seq[Header] = {
        // good things happening here!
        val headerList = Source.fromURL("https://api.github.com/repos/sparkle-preference/OriWotwRandomizerClient/contents/headers")
        val downloadRegex = """"download_url": ?"([^"]*/([^/]*).wotwrh)"""".r
        (for(downloadRegex(link, name) <- downloadRegex.findAllMatchIn(headerList.getLines().mkString(","))) yield {
          val contents = Source.fromURL(link)
          val lines = contents.mkString("").split("\n")
          Header(name, lines)
        }).toList ++
          implicits.defaultPath.toFile.listFiles(_.getName.endsWith(".wotwrh")).map(f => Header(f.getName.replace(".wotwrh", ""), f.toPath.readLines)) ++
          ("headers".jarf.exists ? "headers".jarf.toFile.listFiles(_.getName.endsWith(".wotwrh")).map(f => Header(f.getName.replace(".wotwrh", ""), f.toPath.readLines)) ?? Array())
      }
      val byName: Map[String, Header] = all.map(h => h.name -> h).toMap
      def active: Seq[String] = settings().headerList.flatMap(hn => byName.get(hn).map(_.lines) ?? Nil :+ "")
    }
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

    val settingsFile: Path = "SeedGenSettings.json".jarf
    var currentOp: Option[Future[Unit]] = None
    val headerFilePath: Path =  ".seedHeader".jarf
    val settings: ObjectProperty[Settings] = new ObjectProperty(null, "settings", settingsFromFile)
    val outputDirectory: StringProperty = settings.mapStringProp(_.outputFolder, (set, path) => set.copy(outputFolder = path))
    val customHeader = new ObjectProperty[Seq[String]](null, "header_text", headerFilePath.readLines ?? "// Replace this text with a seed header, if desired")
    val lastSeedText: StringProperty = new StringProperty(null, "last_seed")
    val seedName: StringProperty = new StringProperty(null, "seed_name", "")
    val logArea: TextArea = new TextArea { editable = false; font = Font("Monospaced").delegate}
    var lastSeed: Option[String] = None
    val lastSeedName: StringProperty = new StringProperty(null, "last_seed_name", "N/A")


    Settings.provider = FXSettingsProvider
    Logger.current  = FXLogger
    def settingsFromFile: Settings = {
      implicit val formats: Formats = Serialization.formats(NoTypeHints)
      settingsFile.read.map(Serialization.read[Settings]).getOrElse(Settings())
    }
    def outputPath: String = {
      val name_base = outputDirectory().f.toAbsolutePath.resolve((seedName() == "") ? "seed" ?? seedName()).toString
      var ret = s"$name_base.wotwr"
      var i = 0
      while(ret.f.exists) {
        ret = s"${name_base}_$i.wotwr"
        i += 1
      }
      lastSeed = Some(ret)
      ret
    }

    def settingsToggle(name: String, tooltipText: String, selectedBinding: BooleanProperty): ToggleButton =  new ToggleButton(name){
      selected = selectedBinding()
      selected <==> selectedBinding
      tooltip = tooltipText
      border <== when (selected) choose
        new JBorder(new BorderStroke(stroke = SkyBlue, BorderStrokeStyle.Solid, new CornerRadii(4f), BorderWidths.Default))  otherwise
        new JBorder(new BorderStroke(stroke = Black, BorderStrokeStyle.None, new CornerRadii(3f), BorderWidths.Default))
    }
    val outputDirChooser: DirectoryChooser = new DirectoryChooser { initialDirectory = outputDirectory().f.toFile }
    val importSettingsChooser: FileChooser = new FileChooser {
      initialDirectory <== settings.mapObjBind(_.outputFolder.f.toFile)
      selectedExtensionFilter = new FileChooser.ExtensionFilter("Wotw Rando Seed File", Seq(".wotwr"))
    }

    val runLastSeedButton: Button = new Button("Run Last Seed") {disable = true}
    val changeFolderButton: Button = new Button("Change Folder") {
      onAction = _ => {
        Option(outputDirChooser.showDialog(stage)).map(f => {
          outputDirectory.setValue(f.getAbsolutePath)
          settingsFile.write(Settings.toJson)
        })
      }
    }
    val importSettingsButton: Button = new Button("Import Settings") {
      onAction = _ => {
        Option(importSettingsChooser.showOpenDialog(stage)).map(f =>
          settings.setValue(ReachChecker.settingsFromSeed(f.toPath, updateSpawn = false).copy(outputFolder = outputDirectory(), debugInfo = settings().debugInfo))
        )
      }
    }
    val spawnLoc: String = settings().spawnLoc

    val spawnLocs: ObservableBuffer[String] = ObservableBuffer(Seq(spawnLoc) ++ SpawnLoc.byName.keys.filterNot(_ == spawnLoc))
    val spawnSelector: ComboBox[String] = 	        new ComboBox[String] {
      disable = settings().flags.randomSpawn
      promptText = "Spawn Location"
      items = settings().gorlekPaths ? spawnLocs ??spawnLocs.filter(SpawnLoc.byName(_).safe)
      value <==> settings.mapStringProp(_.spawnLoc, (s, spLoc) => s.copy(spawnLoc = spLoc))
    }

    val raceModeButton:         ToggleButton = settingsToggle("Race Mode",          "Generate a spoiler-free version of the seed for racing", settings.mapBoolProp(!_.spoilers, (s, b) => s.copy(spoilers = !b)))
    val debugButton:            ToggleButton = settingsToggle("Debug Mode",         "Outputs spoiler-containing generation info to the console, and enables the last seed tab", settings.mapBoolProp(_.debugInfo, (s, b) => s.copy(debugInfo = b)))
    val questsButton:           ToggleButton = settingsToggle("Items on Quests",    "Receive items from quest progress and completion", settings.mapBoolProp(_.questLocs, (s, b) => s.copy(questLocs = b)))
    val bonusItemsButton:       ToggleButton = settingsToggle("Bonus Items",        "Enables rando-only bonus pickups, including weapon upgrades", settings.mapBoolProp(_.bonusItems, (s, b) => s.copy(bonusItems = b)))
    val teleportersButton:      ToggleButton = settingsToggle("Teleporters",        "Add items to the item pool that unlock teleporters", settings.mapBoolProp(_.tps, (s, b) => s.copy(tps = b)))
    val gorlekPathsButton:      ToggleButton = settingsToggle("Gorlek paths",       "Enable Gorlek-difficulty paths", settings.mapBoolProp(_.gorlekPaths, {
      case (s, b) if s.gorlekPaths != b =>
        val oldSpawn = SpawnLoc.byName.get(spawnSelector.getValue)
        spawnSelector.items = b ? spawnLocs ??spawnLocs.filter(SpawnLoc.byName(_).safe)
        if(!b && !(oldSpawn.map(_.safe) ?? false)) {
          Logger.warn(s"Spawn location ${spawnSelector.getValue} requires Gorlek paths; resetting spawn to Marsh")
          s.copy(gorlekPaths = b, spawnLoc = "MarshSpawn.Main")
        } else  s.copy(gorlekPaths = b)
      case (s, _) => s
    }))
    val uncheckedPathsButton:   ToggleButton = settingsToggle("Unsafe paths",       "Enable paths that have not yet been sorted into a difficulty group.", settings.mapBoolProp(_.unsafePaths, (s, b) => s.copy(unsafePaths = b)))
    val glitchPathsButton:      ToggleButton = settingsToggle("Glitched paths",     "Enable paths that rely on glitches, such as Sentry Jumps", settings.mapBoolProp(_.glitchPaths, (s, b) => s.copy(glitchPaths = b)))
    val seirLaunchButton:       ToggleButton = settingsToggle("Launch on Seir",     "Places launch on Seir", settings.mapBoolProp(_.seirLaunch, (s, b) => s.copy(seirLaunch = b)))
    val rainButton:             ToggleButton = settingsToggle("Rainy Marsh",        "Start the game in the 'prologue' marsh state, with rain present and Howl enabled", settings.mapBoolProp(_.flags.rain, (s, b) => s.copy(flags = s.flags.copy(rain = b))))
    val noKSDoorsButton:        ToggleButton = settingsToggle("Remove KS doors",    "Start the game with every keystone door opened", settings.mapBoolProp(_.flags.noKSDoors, (s, b) => s.copy(flags = s.flags.copy(noKSDoors = b))))
    val forceWispsButton:       ToggleButton = settingsToggle("Force Wisps",        "Adds requirement: Collect every Wisp", settings.mapBoolProp(_.flags.forceWisps, (s, b) => s.copy(flags = s.flags.copy(forceWisps = b))))
    val worldTourButton:        ToggleButton = settingsToggle("World Tour",         "Adds requirement: Collect a Relic from every zone with one", settings.mapBoolProp(_.flags.worldTour, (s, b) => s.copy(flags = s.flags.copy(worldTour = b))))
    val forceQuestsButton:      ToggleButton = settingsToggle("Force Quests",       "Adds requirement: Complete every Quest", settings.mapBoolProp(_.flags.forceQuests, (s, b) => s.copy(flags = s.flags.copy(forceQuests = b))))
    val forceTreesButton:       ToggleButton = settingsToggle("Force Trees",        "Adds requirement: Collect all Ancestral Trees", settings.mapBoolProp(_.flags.forceTrees, (s, b) => s.copy(flags = s.flags.copy(forceTrees = b))))
    val zoneHintsButton:        ToggleButton = settingsToggle("Hints",              "Hints can be bought from Lupo in each area, as well as from shop vendors", settings.mapBoolProp(!_.flags.noHints, (s, b) => s.copy(flags = s.flags.copy(noHints = !b))))
    val swordSpawnButton:       ToggleButton = settingsToggle("Spawn with Sword",   "Start the game with Spirit Edge in your inventory and equipped", settings.mapBoolProp(!_.flags.noSword, (s, b) => s.copy(flags = s.flags.copy(noSword = !b))))
    val webConnButton:          ToggleButton = settingsToggle("Enable Netcode",     "Connect to the webserver (for bingo or co-op)", settings.mapBoolProp(_.webConn, (s, b) => s.copy(webConn = b)))
    val seedNameInput:          TextField    = new TextField { text <==> seedName; prefColumnCount = 10 }
    val randomSpawnButton:      ToggleButton = settingsToggle("Random spawn",       "Spawn at a randomly-chosen spirit well", settings.mapBoolProp(_.flags.randomSpawn, {
      case (s, b) =>
        spawnSelector.disable = b
        s.copy(flags = s.flags.copy(randomSpawn = b))
    }))

    val outputLabel:            Label        = new Label { text <== outputDirectory }

    runLastSeedButton.onAction = _ => lastSeed match {
      case Some(file) => Seq("cmd", "/C", file.f.toString).run
      case None =>
        Logger.warn("Last seed file not found!")
        runLastSeedButton.disable = true
    }

    val headerTextArea: TextArea = new TextArea() {
      text.bindBidirectional[Seq[String]](customHeader, StringConverter[Seq[String]](
        body => body.split("\n"),
        lines => lines.mkString("\n")
      ))
        font = Font("Monospaced")
    }
    val currentHeader: Text = new Text(Headers.all.head.desc)
    customHeader.addListener((_, _, newV: Seq[String]) => {
      headerFilePath.write(newV.mkString(scala.util.Properties.lineSeparator))
    })

    stage = new PrimaryStage {
      title = "Wotw Rando Seed Generator"
      width = WIN_W ?? 800
      height = WIN_H ?? 600
      WIN_X.get.foreach(pref_c => x = pref_c)
      WIN_Y.get.foreach(pref_c => y = pref_c)

      onCloseRequest = event => {
        Try {
          settingsFile.write(Settings.toJson)
          WIN_W.set(width())
          WIN_H.set(height())
          WIN_X.set(x())
          WIN_Y.set(y())
        } match {
          case Failure(e) if IS_DEBUG =>
            event.consume()
            Logger.error(s"Error during shutdown: $e")
          case _ =>
        }
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
            getHeadersTab,
            getUserHeaderTab
          )
        }
      }

      private def getOptions: GridPane = {
        val gp = new GridPane()
        val clearBtn = new Button("Clear Log") {
          onAction = _ => logArea.setText("")
        }

        gp.addRow(0, new Label("Logic Groups: "), gorlekPathsButton, glitchPathsButton, uncheckedPathsButton)
        gp.addRow(1, new Label("Goal Modes: "), forceTreesButton, forceWispsButton, forceQuestsButton, worldTourButton)
        gp.addRow(2, new Label("Spawn Opts: "), swordSpawnButton, rainButton, noKSDoorsButton)
        gp.addRow(rowIndex = 3, new Label("Spawn Area: "), spawnSelector, randomSpawnButton)
        gp.addRow(4, new Label("Misc Opts: "),  seirLaunchButton,zoneHintsButton, questsButton)
        gp.addRow(5, new Label(""), bonusItemsButton, teleportersButton, raceModeButton, webConnButton)
        gp.addRow(6,  new Label(s"Output folder: "), outputLabel, changeFolderButton, importSettingsButton)
        gp.addRow(7, getGenerateButton, new Label(s"Seed Name (Optional):"), seedNameInput, runLastSeedButton, debugButton, clearBtn)
        gp
      }

      private def getGenerateButton = {
        val generateButton = new Button("Generate") {
          tooltip = "build a seed with the specified parameters"
        }
        generateButton.onAction = _ => {
          Try {
            settingsFile.write(Settings.toJson)
            generateButton.disable = true
            currentOp = Some(Future {
              val succ = Try {
                Logger.info("Building...")
                if (seedName() != "") {
                  Logger.info(s"Seeded RNG with ${seedName()}")
              SeedGenerator.Runner.setSeed(seedName().hashCode)
              }
              if (SeedGenerator.Runner(outputPath)) {
                Logger.info(s"Finished generating seed!")
                true
              } else {
                lastSeed = None
                Logger.error(s"Failed to generate seed :c")
                false
              }
            } match {
                case Failure(e) => Logger.error(e); false
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
        } match {
          case Success(_) => Logger.debug("Generation Started")
          case Failure(e) => Logger.error(s"Failed to start gen: $e")
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
      private def getHeadersTab = new Tab {
        closable = false
        id = "headers"
        text = "headers"
        tooltip = "for settings implemented as headers"
        content = new GridPane() {
          padding = Insets(10)
          hgap = 5f
          vgap = 5f
          def mkLabel(t: String): Label = new Label(t) {
            alignmentInParent = Pos.Center
          }
          add(Separator(Orientation.Horizontal), 0, 0, 3, 1)
          addRow(1, mkLabel("Name"), Separator(Orientation.Vertical), mkLabel("Summary"))
          add(Separator(Orientation.Horizontal), 0, 2, 3, 1)
          var row = 3
          val hList: Seq[String] = settings().headerList
          for(h <- Headers.all) {
            val button = new ToggleButton(h.dispname){
              selected = hList.contains(h.name)
              onAction = _ => {
                val prior = settings()
                settings.value = prior.copy(headerList =
                  (prior.headerList.contains(h.name) ? prior.headerList.filter(_ != h.name) ?? prior.headerList :+ h.name)
                    .filter(Headers.byName.contains)
                )
                settingsFile.write(Settings.toJson)
              }
              border <== when (selected) choose
                new JBorder(new BorderStroke(stroke = SkyBlue, BorderStrokeStyle.Solid, new CornerRadii(4f), BorderWidths.Default))  otherwise
                new JBorder(new BorderStroke(stroke = Black, BorderStrokeStyle.None, new CornerRadii(3f), BorderWidths.Default))
            }
            addRow(row, button, Separator(Orientation.Vertical), new Text(h.desc))
            row+=1
            add(Separator(Orientation.Horizontal), 0, row, 3, 1)
            row+=1
          }
        }

      }


      private def getUserHeaderTab = new Tab {
        closable = false
        id = "user_headers"
        text = "advanced"
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
      Logger.info(s"Seedgen version ${Settings.get.version}")
    }
    object FXSettingsProvider extends SettingsProvider {
      def get: Settings = settings.getValue
      override def headers: Seq[String] = FXGUI.Headers.active ++ FXGUI.customHeader().filterNot(_ == "// Replace this text with a seed header, if desired") ++ (if(!settings().flags.noHints && !settings().headerList.exists(_.contains("hints"))) Seq(
        "48248|18767|12|0  // Marsh Zone Hint from LupoMap.Marsh",
        "48248|45538|12|5  // Burrows Zone Hint from LupoMap.Burrows",
        "48248|3638|12|1   // Hollow Zone Hint from LupoMap.Hollow",
        "48248|1590|12|3   // Wellspring Zone Hint from LupoMap.Wellspring",
        "48248|1557|12|4   // Pools Zone Hint from LupoMap.Pools",
        "48248|48423|12|8  // Depths Zone Hint from LupoMap.Depths",
        "48248|61146|12|9  // Wastes Zone Hint from LupoMap.Wastes",
        "48248|29604|12|6  // Reach Zone Hint from LupoMap.Reach",
        "48248|4045|12|11  // Willow Zone Hint from LupoMap.Willow",
        "48248|19396|12|2  // Glades Zone Hint from LupoMap.HCMapIcons",
        "48248|57987|12|7  // Woods Zone Hint from LupoShop.ECMapIcons",
        "48248|41666|13|4000,750,2-101,2-104,2-51,2-62   // key skill hint from LupoHint.Shards",
        "1|23|13|2500,500,9-0,2-118,2-14                 // key skill hint from OpherShop.WaterBreath",
        "2|2|13|1500,500,2-97,2-0                        // key skill hint from TwillenShop.TripleJump",
      ) else Nil)
    }
    object FXLogger extends Logger {
      override def enabled: Seq[LogLevel] = Seq(INFO, WARN, ERROR) ++ Settings.debugInfo ? DEBUG
      override def write(x: =>Any): Unit = {
        //        logArea.setScrollTop(logArea.height())
        Platform.runLater(() => logArea.appendText(s"$x\n"))
      }
    }

    def show(): Unit = {
      main(Array.empty[String])
    }
  }

}