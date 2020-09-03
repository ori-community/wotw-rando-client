import scala.io.Source
import scala.util.matching.Regex
import org.json4s.native.Serialization
import org.json4s.{Formats, NoTypeHints}
import scala.util.Try
package SeedGenerator {
  import java.nio.file.Path

  import implicits._

  object EntryPoint extends App {
    if (args.nonEmpty) {
        ReachChecker(args.toSeq)
        sys.exit()
      }
      FXGUI.main(args)
  }

  object ReachChecker {
    var doingReachCheck = false
    val cfg: Regex         = """(?i)(?:seed|seedfile|seedpath)="?(.*)"?""".r
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
    def settingsFromSeed(path: Path, updateSpawn: Boolean = true): Settings = Try {
      val lines = path.readLines
      val configsRaw = lines.last.replace("// Config: ", "")
      if(updateSpawn) {
        val mbSpawn = lines.find(_.startsWith("Spawn: ")).flatMap(spawnLine => {
          val spawnName = spawnLine.split("//").last.trim
          Nodes.SpawnLoc.all.exists(_.areaName == spawnName) ? spawnName
        })
        Nodes._spawn = Nodes.SpawnLoc.byName(mbSpawn.getOrElse("MarshSpawn.Main"))
      }
      implicit val formats: Formats = Serialization.formats(NoTypeHints)
      Serialization.read[Settings](configsRaw)
    }.toOption.getOrElse({
      Logger.error(s"Error reading config from $path")
      Settings()
    })
    def apply(args: Seq[String]): Unit = {
      doingReachCheck = true
      args.head match {
        case "ReachCheck" => fromGame(args)
        case "test" => println("tested")
        case _ =>
          val st = GameState(new Inv(
            args.flatMap({
              case cfg(path)        =>
                Settings.provider = settingsFromSeed(path.f)
                None
              case health(amt)      => amt.toIntOption.map(Health -> _)
              case energy(amt)      => amt.toIntOption.map(Energy -> _)
              case ore(amt)         => amt.toIntOption.map(Ore -> _)
              case keystones(amt)   => amt.toIntOption.map(Keystone -> _)
              case spiritlight(amt) => amt.toIntOption.map(SpiritLight(_) -> 1)
              case s if isSkill(s)  => mkSkill(s)
              case s if isTp(s)     => mkTp(s)
              case s if isEvent(s)  => mkEvent(s)
              case a => Logger.warn(s"unknown name $a"); None
            }):_*
          ))
          val res = Nodes.reached(st)._1.items.filterNot(_.data.category == "nullCat").map(_.data.fullName).toSeq.sorted
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
      Logger.current = FileLogger("reach_log.txt", enabled = Seq(WARN, ERROR))

      Settings.provider = settingsFromSeed(args(1).f)
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
        case a => Logger.error(s"unknown name $a"); None
        }:_*))
//      Logger.debug(s"$args\n$st\n${Nodes.reached(st)._1.items.filterNot(_.data.category == "nullCat").map(_.data.fullName).mkString(", ")}")
      println(Nodes.reached(st)._1.items.filterNot(_.data.category == "nullCat").map(_.data.code).mkString(", "))
    }

  }
}
