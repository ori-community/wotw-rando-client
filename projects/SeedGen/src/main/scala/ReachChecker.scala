import scala.collection.mutable.{Map => MMap}
import scala.io.Source
import scala.util.matching.Regex
import org.json4s.native.Serialization
import org.json4s.{Formats, NoTypeHints}
package SeedGenerator {
  import implicits._

  import scala.util.Try

  object ReachChecker {
    var doingReachCheck = false
    val cfg: Regex         = """(?i)(?:seed|seedfile|seedpath)=(.*)""".r
    val health: Regex      = """(?i)(?:health|h|hp)=([0-9]+)""".r
    val energy: Regex      = """(?i)(?:energy|e|mana)=([0-9]+)""".r
    val ore: Regex         = """(?i)(?:ore|o)=([0-9]+)""".r
    val keystones: Regex   = """(?i)(?:ks|keystone)=([0-9]+)""".r
    val spiritlight: Regex = """(?i)(?:sl|spirit_light|spiritlight|experience|ex|exp)=([0-9]+)""".r
    val skills: Map[String, Int] = Skill.areaFileNames.map{case (k, v) => k.toLowerCase() -> v}
    val tps: Map[String, Int] = Teleporter.areaFileNames.map{case (k, v) => k.toLowerCase() -> v}
    val events: Map[String, Int] = WorldEvent.areaFileNames.map{case (k, v) => k.toLowerCase() -> v}
    def isSkill(s: String): Boolean = skills.contains(s.toLowerCase)
    def isTp(s: String): Boolean = tps.contains(s.toLowerCase)
    def isEvent(s: String): Boolean = events.contains(s.toLowerCase)
    def mkSkill(s: String): Option[(Skill, Int)] = skills.get(s.toLowerCase).map(Skill(_) -> 1)
    def mkTp(s: String): Option[(Teleporter, Int)] = tps.get(s.toLowerCase).map(Teleporter(_) -> 1)
    def mkEvent(s: String): Option[(WorldEvent, Int)] = events.get(s.toLowerCase).map(WorldEvent(_) -> 1)
    def apply(args: Seq[String]): Unit = {
      doingReachCheck = true
      if(args.head == "ReachCheck") {
        fromGame(args)
      } else {
        val st = GameState(new Inv(
          args.flatMap({
            case cfg(path)        =>
              Config.settingsProvider = Try {
                val inFile = Source.fromFile(path)
                val configsRaw = inFile.getLines().toSeq.last.replace("// Config: ", "")
                implicit val formats: Formats = Serialization.formats(NoTypeHints)
                Serialization.read[GenSettings](configsRaw)
              }.toOption.getOrElse({
                Config.error(s"Error reading config from $path")
                GenSettings()
              })
              None
            case health(amt)      => amt.toIntOption.map(Health -> _)
            case energy(amt)      => amt.toIntOption.map(Energy -> _)
            case ore(amt)         => amt.toIntOption.map(Ore -> _)
            case keystones(amt)   => amt.toIntOption.map(Keystone -> _)
            case spiritlight(amt) => amt.toIntOption.map(SpiritLight(_) -> 1)
            case s if isSkill(s)  => mkSkill(s)
            case s if isTp(s)     => mkTp(s)
            case s if isEvent(s)  => mkEvent(s)
            case a => Config.warn(s"unknown name $a"); None
          }):_*
        ))
        val res = Nodes.reached(st)(MMap())._1.items.map(_.data.fullName).toSeq.sorted
        println("")
        println("")

        res.grouped(3).map({
          case Seq(a, b, c) => f"$a%-30s $b%-30s $c"
          case Seq(a, b) => f"$a%-30s $b"
          case Seq(a) => a
        }).foreach(println)
      }

    }

    def fromGame(args: Seq[String]): Unit = {
      Config.logger = FileLogger("reach_log.txt", enabled = Seq(WARN, ERROR))
      val seedFile = args(1)
      Config.settingsProvider = Try {
        val inFile = Source.fromFile(seedFile)
        val configsRaw = inFile.getLines().toSeq.last.replace("// Config: ", "")
        implicit val formats: Formats = Serialization.formats(NoTypeHints)
        Serialization.read[GenSettings](configsRaw)
      }.toOption.getOrElse({
        Config.error(s"Error reading config from $seedFile")
        GenSettings()
      })
      val hp = args(2).toInt / 5
      val en = args(3).toInt / 5
      val ks = args(4).toInt
      val ore = args(5).toInt
      val sl = args(6).toInt
      val st = GameState(new Inv((Health, hp), (Energy, en), (Keystone, ks), (Ore, ore), (SpiritLight(sl), 1))
        + new Inv(args.drop(7).flatMap {
        case s if s.startsWith("s:")  => s.stripPrefix("s:").toIntOption.map(Skill(_)->1)
        case s if s.startsWith("t:")  => s.stripPrefix("t:").toIntOption.map(Teleporter(_)->1)
        case s if s.startsWith("w:")  => s.stripPrefix("w:").toIntOption.map(WorldEvent(_)->1)
        case a => Config.error(s"unknown name $a"); None
        }:_*))
      Config.debug(s"$args\n$st")
      println(Nodes.reached(st)(MMap())._1.items.map(_.data.code).mkString(", "))
    }

  }
}
