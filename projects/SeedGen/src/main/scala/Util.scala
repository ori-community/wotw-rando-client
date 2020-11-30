package SeedGenerator {
  import implicits._
  import org.json4s.{Formats, NoTypeHints}
  import org.json4s.native.Serialization
  case class Flags(
                    forceWisps: Boolean = false,
                    forceTrees: Boolean = false,
                    forceQuests: Boolean = false,
                    noHints: Boolean = false,
                    noSword: Boolean = false,
                    rain: Boolean = false,
                    noKSDoors: Boolean = false,
                    randomSpawn: Boolean = false,
                    worldTour: Boolean = false
                  ) {
    def line: String = {
      Seq(
        forceWisps ? "ForceWisps",
        forceTrees ? "ForceTrees",
        forceQuests ? "ForceQuests",
        noHints ? "NoHints",
        noSword ? "NoFreeSword",
        rain ? "RainyMarsh",
        noKSDoors ? "NoKSDoors",
        randomSpawn ? "RandomSpawn",
        worldTour ? "WorldTour"
      ).flatten match {
        case Nil => ""
        case s => s"Flags: ${s.mkString(", ")}"
      }
    }
  }
  case class Settings(
                       tps: Boolean = true,
                       spoilers: Boolean = true,
                       unsafePaths: Boolean = false,
                       gorlekPaths: Boolean = false, // todo: this better!!
                       glitchPaths: Boolean = false, // todo: this better!!
                       questLocs: Boolean = true,
                       outputFolder: String = "C:\\moon",
                       flags: Flags = Flags(),
                       webConn: Boolean = false,
                       bonusItems: Boolean = true,
                       debugInfo: Boolean = false,
                       seirLaunch: Boolean = false,
                     ) extends SettingsProvider  {
    def get: Settings = this
    def header: String = Seq(flags.line, flags.randomSpawn ? Nodes._spawn.line ?? "").filterNot(_ == "").mkString("\n")
    implicit val formats: Formats = Serialization.formats(NoTypeHints)
    def toJson: String = {Serialization.write(this)}
  }

  trait SettingsProvider {
    def get: Settings
    def userHeader: Seq[String] = Nil
  }
  object DefaultSettingsProvider extends SettingsProvider {
    def get: Settings = Settings()
  }

  object Settings {
    var provider: SettingsProvider = DefaultSettingsProvider
    def tps: Boolean = provider.get.tps
    def spoilers: Boolean = provider.get.spoilers
    def unsafePaths: Boolean = provider.get.unsafePaths
    def gorlekPaths: Boolean = provider.get.gorlekPaths
    def glitchPaths: Boolean = provider.get.glitchPaths
    def questLocs: Boolean = provider.get.questLocs
    def outputFolder: String = provider.get.outputFolder
    def flags: Flags = provider.get.flags
    def bonusItems: Boolean = provider.get.bonusItems
    def debugInfo: Boolean = provider.get.debugInfo
    def seirLaunch: Boolean = provider.get.seirLaunch
    def header: String = provider.get.header
    def userHeader: Seq[String] = provider.userHeader
    implicit val formats: Formats = Serialization.formats(NoTypeHints)
    def toJson: String = {Serialization.write(provider.get)}
    def get: Settings = provider.get
  }


  trait LogLevel
  case object DEBUG extends LogLevel
  case object INFO  extends LogLevel
  case object WARN  extends LogLevel
  case object ERROR extends LogLevel

  trait Logger {
    def write(x: =>Any): Unit
    def writeIf(l: LogLevel, x: =>Any): Unit = if(enabled.contains(l)) write(x)
    def enabled: Seq[LogLevel] = Seq(INFO, WARN, ERROR)
    def debug(x: =>Any): Unit   = writeIf(DEBUG, s"DEBUG: $x")
    def log(x: =>Any): Unit     = writeIf(INFO,  s"INFO:  $x")
    def info(x: =>Any): Unit    = writeIf(INFO,  s"INFO:  $x")
    def warn(x: =>Any): Unit    = writeIf(WARN,  s"WARN:  $x")
    def error(x: =>Any): Unit   = writeIf(ERROR, s"ERROR: $x")
  }

  object Logger {
    var current: Logger = DefaultLogger()
    def debug(x: =>Any): Unit = current.debug(x)
    def log(x: =>Any): Unit   = current.log(x)
    def info(x: =>Any): Unit  = current.info(x)
    def warn(x: =>Any): Unit  = current.warn(x)
    def error(x: =>Any): Unit = current.error(x)
  }

  case class DefaultLogger(override val enabled: Seq[LogLevel] = Seq(INFO, WARN, ERROR)) extends Logger {
    def write(x: =>Any): Unit = println(x)
  }

  case class FileLogger(path: String, override val enabled: Seq[LogLevel] = Seq(ERROR)) extends Logger {
    def write(x: =>Any): Unit = path.f.append(s"$x\n")
  }
}
