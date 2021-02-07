import java.nio.charset.StandardCharsets
import java.nio.file.{Files, Path, Paths}

import scala.collection.JavaConverters._
import scala.collection.mutable.{ListBuffer => MList, Map => MMap, Set => MSet}
import scala.language.{implicitConversions, postfixOps}
import scala.util.matching.Regex
import scala.util.{Failure, Random, Success, Try}

package SeedGenerator {

  //  these are fine
  object implicits {
    val IS_DEBUG: Boolean = sun.management.ManagementFactoryHelper.getRuntimeMXBean.getInputArguments.asScala.exists(_.contains("IntelliJ"))
    val jarDir: String = {
      val withPath = classOf[Nothing].getProtectionDomain.getCodeSource.getLocation.getPath.stripPrefix("/").replace("%20", " ")
      if(withPath.contains("/")) withPath.substring(0, withPath.lastIndexOf("/")) else withPath+"/"
    }
    val defaultPath: Path = (if(IS_DEBUG) "C:\\moon" else jarDir).f

    implicit class RegexOpts(sc: StringContext) {
      def r = new util.matching.Regex(sc.parts.mkString, sc.parts.tail.map(_ => "x"): _*)
    }
    implicit class StringOpts(s: =>String) {
      def ??(alt: => String): String = if(s.isEmpty) alt else s
      def f: Path = Paths.get(s) // quick convert a String to a Path
      def jarf: Path = s.f.inJarDir // same but as though it were a Path in the jar directory
      def toIntOption: Option[Int] = Try { s.toInt } match {
        case Success(v) => Some(v)
        case _ => None
      }
    }
    implicit class PathOpts(f: Path) {
      import java.nio.file.StandardOpenOption._
      // sugar funcs for interacting with paths and their target files
      def exists: Boolean = Files exists f
      def toOpt: Option[Path] = exists ? f
      def readLines: Seq[String] = exists ? Files.readAllLines(f).asScala.toSeq ?? Seq()
      def read: Option[String] = exists ? readLines.mkString("\n")
      def write(output: => String): Unit = {
        val bw = Files.newBufferedWriter(f, StandardCharsets.UTF_8, WRITE, TRUNCATE_EXISTING, CREATE)
        bw.write(output)
        bw.close()
      }
      def append(output: => String): Unit = {
        val bw = Files.newBufferedWriter(f, StandardCharsets.UTF_8, WRITE, CREATE, APPEND)
        bw.write(output)
        bw.close()
      }
      def inJarDir: Path = defaultPath.resolve(f)
    }
    implicit class BooleanOps(b: Boolean) {
      // kinda like a terinary operator, but since scala has that already,  ? means "cond+val->if(cond) Some(val) else None"
      def ?[T](block: => T): Option[T] = if(b) Some(block) else None
    }
    // hehe OptOpts
    implicit class OptOpts[T](o: Option[T]) {
      def ?(other: => Option[T]): Option[T] = o orElse other
      def ??(other: => T): T = o getOrElse other
    }

    implicit class RandOpts(r: Random) {
      def between(low: Int, high: Int): Int = low + r.nextInt(high - low) // backported
    }

    implicit class SeqOpts[T](vs: Seq[T]) {
      // backports
      def minByOption[B](f: T => B)(implicit cmp: Ordering[B]): Option[T] = vs match {
        case Nil => None
        case s => Some(s.minBy(f))
      }
      def ??(other: => T): Seq[T] = if(vs.isEmpty) Seq(other) else vs
      def partitionMap[T1, T2](f: T => Either[T1, T2]): (Seq[T1], Seq[T2]) = {
        val full = vs map f
        (full.collect{case Left(l) => l}, full.collect{case Right(r) => r})
      }

      // sugar for pulling randomly from a sequence
      def rand(implicit r: Random): T = vs(r.nextInt(vs.size))
      def randOpt(implicit r: Random): Option[T] = vs.nonEmpty ? rand
      def randFilter(pred: T => Boolean)(implicit r: Random): Option[T] = vs.filter(pred).randOpt
    }

    // really, they're fine
    implicit def itemToPart(item: Item): Either[Item, Either[FlagState, Node]] = Left(item)
    implicit def flagToPart(flag: FlagState): Either[Item, Either[FlagState, Node]] = Right(Left(flag))
      implicit def nodeToPart(node: Node): Either[Item, Either[FlagState, Node]] = Right(Right(node))
      implicit val r: Random = new Random()
    }
    import SeedGenerator.implicits._

    case class LocData(area: String, name: String, category: String, value: String, zone: String, uberGroup: String, uberGroupId: Int, uberName: String, uberId: String, x: Int, y: Int) {
      val code = s"$uberGroupId|$uberId"
      val fullName = s"$area.$name"
      def info: String = {
        val withPad = fullName + " " * (35 - fullName.length)
        uberGroupId match {
          case 1 => s"$withPad(Shop) (Opher)"
          case 2 => s"$withPad(Shop) (Twillen)"
          case _ => s"$withPad($x,$y) $zone"
        }
      }
      val zoneId: Int = LocData.zoneToId.getOrElse(zone, 12)
  }
  object LocData {
    def zoneToId = Map(
      "Inkwater Marsh" -> 0,
      "Kwoloks Hollow" -> 1,
      "Wellspring Glades" -> 2,
      "The Wellspring" -> 3,
      "Luma Pools" -> 4,
      "Midnight Burrows" -> 5,
      "Baurs Reach" -> 6,
      "Silent Woods" -> 7,
      "Mouldwood Depths" -> 8,
      "Windswept Wastes" -> 9,
      "Windtorn Ruins" -> 10,
      "Willows End" -> 11
    )
    val UNCAT = "No category"
    val NOVAL = "No value"
    val VOID: LocData = LocData("Null", "Void", UNCAT, NOVAL, "Void", "N/A", -1, "N/A", "0", 0, 0)
    def spawnLoc(i: Int): LocData = LocData("Spawn", s"Item_$i", UNCAT, NOVAL, "Spawn", "control", 3, "spawn", "0", 0, 0)
    def all: Seq[LocData] = {
      val pickupReg = """^([^.]*)\.([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([-0-9]*), ?([^,]*), ?([-0-9=]*), ?([-0-9]*), ?([-0-9]*)""".r
      val pickupsFile = "loc_data.csv".jarf
      Logger.debug(s"Loading loc_data from $pickupsFile")
       pickupsFile.readLines.flatMap {
        case s if s.trim == "" => None
        case s if s.trim.startsWith("--") =>
          None
        case pickupReg(area, name, zone, category, value, uberGN, ugid, uberN, uid, x, y) =>
          Some(LocData(area, name, category, value, zone, uberGN, ugid.toInt, uberN, uid, x.toInt, y.toInt))
        case line: String =>
          Logger.warn(s"Couldn't parse line: $line")
          None
      }
    }
    def byName: Map[String, LocData] = all.map(data => s"${data.area}.${data.name}" -> data).toMap
  }
  trait Refiller {
    def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs
    def req: Requirement
    def orbsAfter(state: GameState, prior: Orbs): Orbs =
      if(req.metBy(state, Some(prior)))
        apply(state.inv, prior).best(prior)
      else prior
  }
  case class Well(req: Requirement) extends Refiller {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs = inv.orbs // full refill
  }
  case class Checkpoint(req: Requirement) extends Refiller  {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs = Orbs(
      health = inv.orbs.health match { // Checkpoints are terrible; Math.floor((x/5)/0.6685+1)
        case i if i < 45 => i
        case i if i < 135 => 40
        case i if i < 235 => Math.floor((i.toFloat/5)/0.6685+1).toInt
        case _ => 70
      },
      energy = Math.max(10*(inv.orbs.energy / 50 + 1), prior.energy / 2))
  }
  case class HealthPlants(count: Int = 1, req: Requirement) extends Refiller  {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs = Orbs(
      health = Math.min(inv.orbs.health, prior.health + count * inv.orbs.health match { // Health plants drop more orbs if you have more health
        case i if i < 45 => 10
        case i if i < 80 => 20
        case i if i < 105 => 30
        case i if i < 140 => 40
        case i if i < 165 => 50
        case i if i < 200 => 60
        case i if i < 225 => 70
        case _ => 80
      }),
      energy = prior.energy)
  }
  case class EnergyCrystals(count: Int = 1, req: Requirement) extends Refiller {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs = Orbs(prior.health, Math.min(inv.orbs.energy, prior.energy + count*10))
  }

  case class RefillGroup(refillers: Seq[Refiller] = Nil) {
    def apply(state: GameState, prior: Orbs = Orbs(0, 0)): Orbs = refillers.foldLeft(prior){case (acc, ref) => ref.orbsAfter(state, acc)}
  }

  sealed trait NodeType
  case object AreaNode extends NodeType
  trait ItemNodeType extends NodeType
  trait StateNodeType extends NodeType
  case object ItemNode extends ItemNodeType
  case object StateNode extends StateNodeType
  case object QuestNode extends ItemNodeType with StateNodeType
  case class AreaTraversalInfo(orbs: Orbs, couldConnect: Set[Node])

  trait Node {
    def name: String
    def reached(curr: GameState, orbs: Orbs): Unit = Nodes.haveReached.add(this)
    def res: Node = this
    def kind: NodeType
    override def equals(that: Any): Boolean = that match {
      case n: Node => n.name == name && n.kind == kind
      case _ => false
    }
    override def hashCode(): Int = name.hashCode * kind.hashCode()
  }

  case class Connection(target: Node, _reqs: Seq[Requirement]) {
    val reqs: Seq[Requirement] = _reqs.filterNot(_ == Invalid)
  }

  case class Placeholder(name: String, kind: NodeType = AreaNode) extends Node {
    override def res: Node = kind match {
      case AreaNode => Nodes.areas.getOrElse(name, {Logger.error(s"unknown area name $this") ; this})
      case ItemNode => Nodes.items.getOrElse(name, {Logger.error(s"unknown item name $this") ; this})
      case _ =>
        Logger.warn(s"couldn't resolve $this")
        this
    }
    override def reached(curr: GameState, orbs: Orbs): Unit = Nodes.areas.get(name) match {
        case Some(n: Node) if n.kind == kind => n.reached(curr, orbs)
        case Some(x) => Logger.warn(s"$x was of unexpected type!")
        case None =>Logger.warn(s"$name not in nodes!")
    }
  }
    case class Coords(x: Int, y: Int)
    case class Area(name: String, var conns: Seq[Connection] = Seq(), refillGroup: RefillGroup, coords: Option[Coords]) extends Node {
      conns = conns.filter(_.reqs.nonEmpty)
      override val kind: NodeType = AreaNode
      override def reached(curr: GameState, orbs: Orbs): Unit = {
        val orbsAfter = refillGroup(curr, orbs)
        super.reached(curr, orbs)
        Nodes.reachCache(this) = AreaTraversalInfo(orbsAfter, Set()) // no loops
        val didntReach = conns.flatMap({
          case Connection(p @ Placeholder(_, AreaNode), _) if Nodes.reachCache.contains(p.res.asInstanceOf[Area]) => None
          case Connection(target, reqs) =>
            val s = curr + GameState(Inv.Empty, Nodes.states.toSet)
            val met = reqs.filter(r => r.metBy(s, Some(orbsAfter))).map(r => r.orbsAfterMet(s, orbsAfter))
            if(met.nonEmpty) {
              target.reached(s, met.maxBy(_.value))
              None
            } else {
              Some(target.res)
            }
          case _ => None
        })
        Nodes.reachCache(this) = AreaTraversalInfo(orbsAfter, didntReach.toSet)
    }
  }
  object Area {
    val SPAWN = "MarshSpawn.Main"
  }

  case class ItemLoc(name: String, data: LocData) extends Node {
    override val kind: NodeType = ItemNode
    override def toString: String = name // data.info
  }


  object ItemLoc {
    val IMPLICIT: ItemLoc = ItemLoc("Implicits", LocData.VOID)

    val known: MMap[String, ItemLoc] = MMap.empty
    def mk(name: String, src: Map[String, LocData]): Option[ItemLoc] = src.get(name).map(ItemLoc(name, _))
      .map(i => {if(i != IMPLICIT) { known(name) = i}; i})
      .orElse({
          Logger.debug(s"pickup $name not found in loc_data.csv")
        None
      }) match {
      case Some(ItemLoc(_, l)) if !Settings.questLocs && l.category == "Quest" => None
      case Some(ItemLoc(_, l)) if Settings.bonusItems && l.uberGroupId == 1 && l.uberId != "23" => None // TODO: change this when weapons probably
      case Some(ItemLoc(name, _)) if !Settings.flags.noKSDoors && name == "OpherShop.Teleport" =>/* Logger.debug(s"Filtered out $name");*/ None
      case a => a
    }
  }

  case class WorldStateNode(name: String) extends Node {
    override def kind: NodeType = StateNode
    override def reached(curr: GameState, orbs: Orbs): Unit = {
      super.reached(curr, orbs)
      Nodes.states.add(WorldState(name))
    }
  }

  case class QuestNode(name: String) extends Node {
    override def kind: NodeType = QuestNode
    override def reached(curr: GameState, orbs: Orbs): Unit = {
      super.reached(curr, orbs)
      Nodes.states.add(WorldState(name))
    }
  }

  object Nodes {
    def areas: Map[String, Area] = {
      if (_areas.isEmpty) populate()
      _areas
    }

    def items: Map[String, ItemLoc] = {
      if (_items.isEmpty) populate()
      _items
    }
//    case class Door(name: String, slots: Int)
    val doors: Map[String, Int] = Map[String, Int](
      "MarshSpawn.KeystoneDoor" -> 2,
      "MidnightBurrows.KeystoneDoor" -> 4,
      "HowlsDen.KeystoneDoor" -> 2,
      "MarshPastOpher.EyestoneDoor" -> 2,
      "UpperPools.KeystoneDoor" -> 4,
      "WoodsEntry.KeystoneDoor" -> 2,
      "WoodsMain.KeystoneDoor" -> 4,
      "LowerReach.KeystoneDoor" -> 4,
      "UpperReach.KeystoneDoor" -> 4,
      "UpperDepths.EntryKeystoneDoor" -> 2,
      "UpperDepths.CentralKeystoneDoor" -> 2,
      "UpperWastes.KeystoneDoor" -> 2,
    )
    val _connectedToDoors: MSet[Area] = MSet()
    def connectedToDoors: Set[Area] = {
      if(_connectedToDoors.isEmpty)
        populate()
      _connectedToDoors.toSet
    }

    var _areas: Map[String, Area] = Map()
    var _items: Map[String, ItemLoc] = Map()

    def keystonesRequired(state: GameState): Int = {
      if(Settings.flags.noKSDoors)
        return 0
      val relevantNodes = state.reached.collect{case a: Area => a}.intersect(connectedToDoors)
      if(relevantNodes.size > 1)
        doors.foldLeft(0)({case (acc, (name, keys))=> acc + (relevantNodes.exists(_.conns.exists(_.target.name == name)) ? keys ?? 0)}) - state.inv(Keystone)
      else
        0
    }

    def fixAreas(areas: Map[String, Area]): Map[String, Area] = {
      val locDataByName = LocData.byName
      areas.values.map(area => area.name -> area.copy(conns = area.conns.flatMap(c => {
        if(doors.contains(c.target.name))
          _connectedToDoors.add(area)
      c match {
            // TODO: FIXME?
        case Connection(Placeholder(name, _), Seq()) => Logger.warn(s"only empty paths from ${area.name} to $name"); None
        case Connection(Placeholder(name, ItemNode), reqs) => ItemLoc.mk(name, locDataByName).map(Connection(_, reqs))
        case Connection(Placeholder(name, AreaNode), _) if !areas.contains(name)  => Logger.warn(s"ignoring path from ${area.name} to unknown area $name"); None
        case c @ Connection(QuestNode(name), reqs) => Seq(c) ++ ItemLoc.mk(name, locDataByName).map(Connection(_, reqs))
        case c => Some(c)
      }}) ++ (area.name == _spawn.areaName) ? _spawn.conns ?? Nil)).toMap
    }


    case class SpawnLoc(areaName: String, spawnSlots: Int, teleporter: Teleporter, safe: Boolean = false) {
      def area: Area = Nodes.areas(areaName)
      def conns: Seq[Connection] = (1 to spawnSlots) map (i =>
        Connection(ItemLoc(s"Spawn item #$i", LocData.spawnLoc(i)), Seq(Free)))
      def line: String = {
        if(areaName == "MarshSpawn.Main")
          return ""
        val Coords(x, y) = area.coords.get
        val spawnLine = s"Spawn: $x, $y"
        val tpLine = s"3|0|${teleporter.code}|mute"
        s"$spawnLine${" " * (30 - spawnLine.length)}// $areaName\n\n" +
        s"3|0|6|Spawning with:|instant|f=420    // show spawn text for longer\n" +
        s"$tpLine${" " * (30 - tpLine.length)}// ${teleporter.name} granted implicitly\n\n"
      }

    }
    object SpawnLoc {
      val all = Seq(
        SpawnLoc("MidnightBurrows.Teleporter", 3, Teleporter(0), safe = true),
        SpawnLoc("HowlsDen.Teleporter", 1, Teleporter(1), safe = true),
        SpawnLoc("EastPools.Teleporter", 3, Teleporter(2)),
        SpawnLoc("InnerWellspring.Teleporter", 3, Teleporter(3), safe = true),
        SpawnLoc("LowerReach.Teleporter", 3, Teleporter(4)),
        SpawnLoc("EastHollow.Teleporter", 4, Teleporter(5)),
        SpawnLoc("UpperDepths.Teleporter", 3, Teleporter(6)),
        SpawnLoc("WoodsEntry.Teleporter", 3, Teleporter(7)),
        SpawnLoc("WoodsMain.Teleporter", 3, Teleporter(8)),
        SpawnLoc("LowerWastes.WestTP", 4, Teleporter(9)),
        SpawnLoc("LowerWastes.EastTP", 4, Teleporter(10)),
        SpawnLoc("UpperWastes.NorthTP", 4, Teleporter(11)),
        SpawnLoc("MarshSpawn.Main", 0, Teleporter(16), safe = true),
        SpawnLoc("GladesTown.Teleporter", 3, Teleporter(17), safe = true),
      )
      def valid: Seq[SpawnLoc] = (Settings.unsafePaths || Settings.gorlekPaths) ? all ?? all.filter(_.safe)
      def byName: Map[String, SpawnLoc] = all.map(a => a.areaName -> a).toMap
      def default: SpawnLoc = SpawnLoc("MarshSpawn.Main", 0, Teleporter(17))
    }

    var populatedWithSetting: Option[Settings] = None
    def populate()(implicit r: Random): Boolean = {
      if(populatedWithSetting.contains(Settings.get) && !Settings.flags.randomSpawn)
        return true // already done lol
      Timer("Path parsing", printAfterEach = true) {
          FastParser.parseFile() match {
            case Right(value) =>
              Logger.debug(s"parse done, ${value.size} areas")
              if(!ReachChecker.doingReachCheck)
                _spawn = Settings.flags.randomSpawn ? SpawnLoc.valid.rand ?? SpawnLoc.default
              Logger.debug(s"spawn loc is ${_spawn.areaName}")
              _areas = Timer("FixAreas")(fixAreas(value))
              _items = _areas.flatMap(_._2.conns.collect({ case Connection(t: ItemLoc, r) if r.nonEmpty => t.name -> t }))
              Logger.debug(s"items done ${_items.size} items")
              populatedWithSetting = Some(Settings.get)
              true
            case Left(error) =>
              Logger.error(error)
              false
          }
      }
    }
    def spawn: Area = _spawn.area
    def spawnTP: Teleporter = _spawn.teleporter
    var _spawn: SpawnLoc = SpawnLoc.default
    var unreachableLocs: Set[ItemLoc] = Set()
    var preplc: Map[ItemLoc, Set[Placement]] = Map[ItemLoc, Set[Placement]]()
    val prestates: MSet[FlagState] = MSet()
    val seedLineRegex: Regex = """^(!)?(([0-9]+)\|([0-9]+)(=[0-9])?)\|(([0-9]+)\|(.*?)) *(//.*)?""".r
    val addItemRegex: Regex = """^!!add ([0-9]+x)? ?([0-9]+\|.*?) *(//.*)?""".r
    val rmItemRegex: Regex = """^!!remove ([0-9]+\|.*?) *(//.*)?""".r
    val setStateRegex: Regex = """^!!set ([a-zA-Z.]+) *(//.*)?""".r

    def handleHeaders(pool: Inv)(implicit r: Random): Unit = Try {
      def addPreplc(p: Placement): Unit = {
        preplc = preplc.updated(p.loc, preplc.getOrElse(p.loc, Set()) ++ Set(p))
      }
      preplc = Map()
      prestates.clear()
      if(Settings.seirLaunch) {
        val seir = Nodes.items("WindtornRuins.Seir")
        addPreplc(ItemPlacement(Launch, seir))
        pool.take(Launch) // whoops
      }
      val locsByCode = (Nodes.items.values.map(a => a.data.code -> a) ++
      Seq("3|0", "3|1", "3|2", "3|3", "3|4").map(_ -> ItemLoc.IMPLICIT)).toMap
      val poolByCode = pool.asSeq.map(i => i.code -> i).toMap
      //noinspection FieldFromDelayedInit
      Settings.headers.foreach {
        case rmItemRegex(rawMult, code, _) =>
          val count = (Option(rawMult).nonEmpty ? rawMult.dropRight(1).toIntOption).flatten ?? 1
          poolByCode.get(code) match {
            case Some(i) =>
              pool.take(i, count)
              Logger.debug(s"Removed $count of $i from the item pool")
            case _ => Logger.warn(s"Can't remove '$code' from pool as it wasn't there")
          }
        case setStateRegex(stateName, _) =>
          Logger.debug(s"Setting $stateName to true")
          prestates += WorldState(stateName)
        case addItemRegex(rawMult, itemCode, comm) =>
          val count = (Option(rawMult).nonEmpty ? rawMult.dropRight(1).toIntOption).flatten ?? 1
          val item = poolByCode.get(itemCode) match {
            case Some(i) => i
            case None => RawItem(itemCode, Option(comm))
          }
          Logger.debug(s"adding $item x$count to the item pool")
          pool.add(item, count)
        case raw@seedLineRegex(dontMergeToPool, locCode, _, _, _, itemCode, _, _, _) =>
          (dontMergeToPool == "!", locsByCode.get(locCode), poolByCode.get(itemCode)) match {
            case (true, _, _) => // do nothing
            case (false, Some(loc), Some(item)) =>
              pool.take(item)
              addPreplc(GhostPlacement(item, loc))
              Logger.debug(s"$loc, $item <= $raw")
              Logger.debug(s"$loc, ${preplc.get(loc)}, $preplc")
            case (false, Some(loc), None) =>
              Logger.debug(s"$loc, None($itemCode) <= $raw")
              addPreplc(GhostPlacement(RawItem(itemCode), loc))
            case (false, None, Some(item)) =>
              Logger.debug(s"None($locCode), $item <= $raw")
              pool.take(item)
              Logger.warn(s"Placing item $item in unknown location $locCode logically removes it from the pool.")
            case (_, None, None) => Logger.debug(s"None($locCode), None($itemCode) <= $raw")
          }
        case raw => Logger.debug(s"ignoring line $raw")
      }

      val reachableLocs = reached(GameState(pool).withParams(SpiritLight(5000)), theoretical = true)._1.reached.collect({case i: ItemLoc => i})
      unreachableLocs = items.values.filterNot(reachableLocs.contains).toSet
      if(reachableLocs.size < pool.size)
        throw GeneratorError(s"There aren't enough locations (${reachableLocs.size}) to place all the items in the pool (${pool.size})")
      else if(unreachableLocs.nonEmpty) {
        Logger.warn(s"Found ${unreachableLocs.size} unreachableLocs. Pruning them from the pool")
        Logger.debug(s"Couldn't reach ${unreachableLocs.map(_.name).mkString(", ")}")
        _items = items.filterNot({ case (_, i) => unreachableLocs.contains(i)})
      }
      if(Settings.flags.worldTour) {
        var rlccnt = 0
        Logger.debug("World Tour: finding relic placements...")
        Nodes._items.values.filterNot(preplc.keySet.contains).groupBy(_.data.zone).foreach({
          case (zone, _) if Seq("Windtorn Ruins", "Void", "Spawn") contains zone => // no relics in these zones
          case (_, items) =>
            if(r.nextFloat() < .8) {
              val slot = items.toSeq.rand
              addPreplc(ItemPlacement(Bonus(20, "Relic"), slot))
              rlccnt = rlccnt + 1
            }
        })
        Logger.debug(s"World Tour: placed ${rlccnt} relics")
      }
    }  match {
      case Success(_) => Logger.debug(s"finished creating preplacements, got: $preplc")
      case Failure(f) => Logger.error(s"Failed generating preplacements, got: $preplc, error: ${f.getStackTrace.mkString("\n")}")
    }
    case class LocCode(ugid: String, uid: String, tailRaw: String, full: String) {
      val groupId: Int = ugid.toInt
      val id: Int = uid.toInt
      val tail: Option[String] = Option(tailRaw)
      override def toString: String = full
    }

    val reachCache: MMap[Area, AreaTraversalInfo] = MMap.empty[Area, AreaTraversalInfo]
    val haveReached: MSet[Node] = MSet(ItemLoc.IMPLICIT)
    val states: MSet[FlagState] = MSet.empty[FlagState]
    def reached(s: GameState, theoretical: Boolean = false): (GameState, Set[Placement]) = Timer("Reached"){
      val mbprplc: Option[Map[ItemLoc, Set[Placement]]] = theoretical ? Map(preplc.toSeq:_*)
      val(rs, plcs) = Nodes.reachedRec(s, Set())
      mbprplc.foreach(old => {preplc = Map(old.toSeq:_*)})
      if(plcs.nonEmpty && !theoretical)
        Logger.debug(s"new placements after reachable search: $plcs")
      (rs, theoretical ? Set[Placement]() ?? plcs)
    }
    @scala.annotation.tailrec
    def reachedRec(s: GameState, plcs: Set[Placement] = Set()): (GameState, Set[Placement]) = {
      reachCache.clear()
      haveReached.clear()
      haveReached.add(ItemLoc.IMPLICIT)
      states.clear()
      states ++= prestates
      var stateCount = 0
      def fullState: GameState  = s.noReached + GameState(Inv.Empty, states.toSet, haveReached.toSet)
      spawn.reached(fullState, s.inv.orbs)
      do {
        stateCount = states.size
        reachCache.transform({case (_, rr) => rr.copy(couldConnect = rr.couldConnect -- haveReached)})
        reachCache --= reachCache.collect{case (a, AreaTraversalInfo(_, s)) if s.isEmpty => a}
        reachCache.foreach{
          case (a, AreaTraversalInfo(orbs, s)) if s.nonEmpty => a.reached(fullState, orbs)
          case _ =>
        }
      } while(stateCount < states.size)
      val reached_placements = preplc.keySet.intersect(haveReached.collect({case i: ItemLoc => i}))
      if(reached_placements.nonEmpty) {
        val new_placements = plcs ++ reached_placements.flatMap(l => preplc(l))
        val partialState =  s.noReached + GameState(new Inv(new_placements.map(_.item -> 1).toSeq:_*), states.toSet, haveReached.toSet)
        preplc = preplc.filterNot(kv => new_placements.map(_.loc).contains(kv._1))
        Nodes.reachedRec(partialState, new_placements)
      } else
        (fullState, plcs)
    }
    def getProgressionPaths(instate: GameState, spaceRemaining: Int = 999)(implicit pool: Inv): MSet[(GameState, Set[Node])] = {
      val items = instate.items
      val currFlags = instate.flags.map{case FlagState(f) => WorldStateNode(f)}
      val states = MSet.empty[GameState]
      reachCache.foreach { case (area, AreaTraversalInfo(_, targets)) => area.conns.filter(c => targets.contains(c.target.res)).foreach(_.reqs.foreach(r => {
        r.remaining(instate, space = spaceRemaining).filter(s => s.inv.nonEmpty).foreach(s => states.add(s.invOnly))
      }))}

      val paths = states
        .filterNot(_.inv.count > spaceRemaining)
        .filter(_.inv.forall({case (i, c) => pool.has(i, c)}))
        .map(i => {

          val (outState, _) = Nodes.reached(instate + i, theoretical = true)
          i ->  (outState.reached.collect{
            case i: ItemLoc => i
            case w: WorldStateNode => w
          }.toSet[Node] -- items -- currFlags)
        }).filter(_._2.nonEmpty)
      val singles = paths.filter(_._1.inv.count == 1).map(_._1.inv.head._1)
      paths.filterNot {
        case (st, _) => st.inv.count > 1 && singles.exists(st.inv.has(_))
      }
    }
  }

  trait Placement {
    def loc: ItemLoc
    def item: Item
    def code: String = loc.data.code
    def data = s"${loc.data.code}|${item.code}"
    def write(spoilers: Boolean = true): String = {
      if(!spoilers)
        return data
//      Tracking.incAreas(item, loc.data)
      val dataPad = " " * (22 - data.length)
      val namePad = " " * (18 - item.name.length)
      s"$data$dataPad//$namePad${item.name} from ${loc.data.info}"
    }
    override def toString: String = s"$item at $loc"
  }
  case class ItemPlacement(item: Item, loc: ItemLoc) extends Placement

  case class ShopPlacement(item: Merch, loc: ItemLoc, costMod: Float) extends Placement {
    override val data = s"${loc.data.code}|${item.code}|$costMod"
  }
  object ShopPlacement {
    def randMod(item: Merch, loc: ItemLoc)(implicit r: Random): ShopPlacement = ShopPlacement(item, loc, r.between(-30, 20)/100f)
  }
  case class GhostPlacement(item: Item, loc: ItemLoc) extends Placement {
    override def write(spoilers:  Boolean): String = {
      "//" + super.write(spoilers).replace(s" from ${loc.data.info}", "") + " (preplaced)"
    }
  }

  case class GeneratorError(message: String) extends Error {
    override def toString: String = s"GeneratorError: $message"
  }

  case class PlacementGroup(
    outState: GameState,
    prog: Inv,
    placements: Seq[Placement],
    i: Int,
    parent: Option[PlacementGroup] = None
  )(implicit r: Random, pool: Inv) {
    def desc: String = {
      val progText =  (prog.count > 0) ? s" -- Chosen: ${prog.progText}" ?? ""
      val keyItems = Inv.mk(placements.map(_.item).filterNot(prog.has(_)).collect({ case i: Important => i }): _*)
      val keyItemsText = keyItems.nonEmpty ? s" -- Randomly Placed: ${keyItems.progText}" ?? ""
      s"\n// Placement Group ${i + 1}$progText$keyItemsText\n\n"
    }

    def done: Boolean = pool.isEmpty && (Try { Nodes.items.values.forall(outState.reached.contains) } match {
      case Success(b) => b
      case Failure(f) => Logger.error(f); true
    })

    def allPlacements: Set[Placement] = parent.map(_.allPlacements).getOrElse(Set()) ++ placements

    def write(spoilers: Boolean = true): String = (if(spoilers) desc else "") + placements.map(_.write(spoilers)).mkString("\n")

    def tryNext(): Either[GeneratorError, PlacementGroup] = PlacementGroup.trymk(outState, i + 1, Some(this))
    def next(): PlacementGroup = PlacementGroup.mk(outState, i + 1, Some(this))
    def withParents: Seq[PlacementGroup] = Seq(this) ++ (parent match {
      case Some(g) => g.withParents
      case None => Nil
    })
  }
  object PlacementGroup {
    def debugPrint(x: Any): Unit = Logger.debug(x)
    def trymk(inState: GameState, i:Int = 0, parent: Option[PlacementGroup] = None)
             (implicit r: Random, pool: Inv): Either[GeneratorError, PlacementGroup] = Try {
      Timer("pg.mk")(mk(inState, i, parent))
    }.toEither.left.map(
      {
        case e: GeneratorError => e
        case t: Throwable => val e = GeneratorError(t.getMessage)
          e.addSuppressed(t)
          e.setStackTrace(t.getStackTrace)
          e
      })
    def mk(inState: GameState, i:Int = 0, parent: Option[PlacementGroup] = None)(implicit r: Random, pool: Inv): PlacementGroup = {
      val (state, preplaced) = Nodes.reached(inState)
      val placements = MList[Placement]() ++ preplaced
      def process(ps: Iterable[Placement], prefix: String = ""): Unit =
        ps.foreach(p => {state.inv.add(p.item); placements.prepend(p)})
      val reachableLocs = state.items - ItemLoc.IMPLICIT
      val locsWithItems = (parent.map(_.allPlacements).getOrElse(Set()) ++ placements).map(_.loc) - ItemLoc.IMPLICIT
      val freeLocs = r.shuffle((reachableLocs -- locsWithItems).toSeq)
      val count = pool.count + Nodes.preplc.size
      val placed = locsWithItems.size
      if(count+placed != ItemPool.SIZE)
        Logger.warn(s"pool: ${pool.count} + upcoming prplcs ${Nodes.preplc.size} + placed $placed (${count+placed}) != ${ItemPool.SIZE}")
      debugPrint(s"group $i: have ${freeLocs.size} locs ($placed/${ItemPool.SIZE} placed already, have itempool size $count)")

      if(freeLocs.isEmpty)
        throw GeneratorError(s"no new locs (${reachableLocs.size} out of ${ItemPool.SIZE} reached)")
      def assignRandom(itemLocs: Seq[ItemLoc]): Seq[Placement] = {
        val (shops, nonShops) = itemLocs.partition(_.data.category == "Shop")
          if(nonShops.size > pool.count - pool.merchToPop)
            throw GeneratorError(s"Won't have enough space? ${pool.merchToPop} ${pool.count} $itemLocs ${pool.asSeq}")
          shops.map(shop => ShopPlacement.randMod(
            item = pool.popMerch().getOrElse(throw GeneratorError(s"Shop randASS failure: ${pool.merchToPop} ${pool.count} $itemLocs ${pool.asSeq}")),
            loc = shop)) ++
              nonShops.map(nonShop => ItemPlacement(pool.popRand.get, nonShop))
      }
      if(reachableLocs.size == ItemPool.SIZE) {
        process(assignRandom(freeLocs), "rand: ")
        return PlacementGroup(state, Inv.Empty, placements, i, parent)
      }
      val ksNeeded = Nodes.keystonesRequired(state)
      val locsOpen = freeLocs.size - ksNeeded
      if(ksNeeded > 0) {
        if(locsOpen < 0)
          throw GeneratorError(s"Need to place $ksNeeded keystones, but only ${freeLocs.size} locs available...")

        val (shops, nonShops) = freeLocs.take(ksNeeded).partition(_.data.category == "Shop")
        val ksPlc = shops.map(shop => {pool.merchToPop-=1; ShopPlacement.randMod(Keystone, shop)}) ++ nonShops.map(nonShop => ItemPlacement(Keystone, nonShop))
        pool.take(Keystone, ksPlc.size)
        process(ksPlc, "KS: ")
        if(locsOpen == 0)  {
          val (newState, newPlc) = Nodes.reached(state)
          if(newPlc.nonEmpty) {
            Logger.debug(s"Preplacements after KS placement: $newPlc")
            process(newPlc, "preplc: ")
          }
          val newLocs = newState.items
          val newCount = (newLocs -- reachableLocs).size
          Logger.debug(s"checking for reachables after KS, got $newCount")
          if(newCount > 0 || newPlc.exists(_.item.isInstanceOf[Important]) || newLocs.size == ItemPool.SIZE)
            return PlacementGroup(state, Inv.Empty, placements, i, parent)
          else
            throw GeneratorError(s"Placed $ksNeeded into exactly that many locs, but failed to find a reachable after")
        }
      }

      val locIter = freeLocs.drop(ksNeeded).iterator
      val reservedForProg = (1 to (locsOpen match {
        // if random placement doesn't open something (and it often won't), we gotta place something
        // Reserve item slots for it so we aren't in trouble
        case n if Settings.flags.randomSpawn && i < 3 => n // be cautious
        case n if n < 3 => n  // pick how many slots to save by how big the pool is.
        case n if n < 5 => 2  // ideally we'd like 2?
        case n if n < 10 => 4 // tweak if necessary
        case n if n < 15 => 6
        case _ => 8
      })).map(_ => locIter.next())
      debugPrint(s"reserving ${reservedForProg.size}: $reservedForProg")
      val (remaining, leftoverSpawn) = locIter.toSeq.partition(_.data != LocData.VOID)
      leftoverSpawn.foreach(_ => pool.popSL)
      val randPlacements = assignRandom(remaining)
      process(randPlacements, "rand: ")
      if(randPlacements.nonEmpty) {
        val (newState, newPlc) = Nodes.reached(state)
        if(newPlc.nonEmpty) {
          Logger.debug(s"Preplacements after random placement: $newPlc")
          process(newPlc, "preplc: ")
        }
        val newLocs = newState.items - ItemLoc.IMPLICIT
        val newCount = newLocs -- reachableLocs
        debugPrint(s"checking for reachables after random placement, got $newCount")
        if(newCount.size > reservedForProg.size ||            // more new items than were reserved for prog OR
          newPlc.exists(_.item.isInstanceOf[Important]) ||    // found an Important preplaced item OR
          newLocs.size == ItemPool.SIZE)                      // we're done
          return PlacementGroup(state, Inv.Empty, placements, i, parent)
          else if(newLocs.size > ItemPool.SIZE) {
          Logger.error("aaaaaa")
          return PlacementGroup(state, Inv.Empty, placements, i, parent)
        }

      }
      def getProgressionPath(sizeLeft: Int): Inv = Timer(s"getProgPath"/*, far=$far"*/){
        val remainCount = ItemPool.SIZE - reachableLocs.size
        if(remainCount == 0)
          return Inv.Empty

        var _fullWeight = 0d
        def acc(st: GameState, multiplier: Double = 1.0): Double = {
          if(st.cost.isNaN || st.cost.isInfinite || st.inv.count == 0) {
            debugPrint(s"What? $st")
            return 0
          }
          val inc = multiplier * (1 / st.inv.cost)
          _fullWeight += inc
          debugPrint(s"$st->${(1 / st.inv.cost).toString.take(6)} * $multiplier -> ${inc.toString.take(7)}, total: ${_fullWeight.toString.take(7)}")
          _fullWeight
        }

        debugPrint(s"Looking for paths. Have $sizeLeft new locs. Need to reach $remainCount more")
        val possiblePaths = Timer(s"possiblePathsPartial"/*, far=$far"*/){
          val (progS, progP) = Nodes.reached(state)
          if(progP.nonEmpty) {
            Logger.debug(s"Preplacements in gPP: $progP")
            process(progP, "preplc: ")
            if(progP.exists(_.item.isInstanceOf[Important]))
              return Inv.Empty // bunt!
          }
          Nodes.getProgressionPaths(progS, sizeLeft).toSeq
          .collect({
            case (items, n) if n.size >= Math.min(3, remainCount) => (acc(items), items)
            case (items, n) if n.nonEmpty => (acc(items, .4*n.size), items)
        })}

        if(possiblePaths.isEmpty) {
          Logger.error(s"uh oh!")
          Logger.error(s"pool: ${pool.progInv()}")
          Logger.error(s"inv: ${state.inv.progInv()}")
          Logger.error(s"Had $sizeLeft slots")
          val unreachable = Nodes.items.values.toSet -- reachableLocs
          Logger.error(s"Couldn't reach ${unreachable.take(8)}... (${unreachable.size} total)")
          if(Settings.flags.randomSpawn)
            Logger.error(s"Spawned at ${Nodes.spawn.name}")
          throw GeneratorError(s"No possible paths???")
        }
        val limit = r.nextDouble() * _fullWeight
        val chosenPath = possiblePaths.dropWhile(_._1 < limit).headOption.getOrElse(possiblePaths.last)._2.inv
        debugPrint(s"choose $limit: $chosenPath")
        chosenPath
      }
      val progPath = getProgressionPath(reservedForProg.size)
      val progLocs = reservedForProg.take(progPath.count)
      process(progPath.asSeq.zip(progLocs).map({
        case (i, ItemLoc.IMPLICIT) =>
          GhostPlacement(i, ItemLoc.IMPLICIT)
        // this might seem sketch but it's almost literally always impossible
        // for a progression item not to be Merch
        case (item: Merch, shop) if shop.data.category == "Shop" =>
          pool.take(item)
          pool.merchToPop-=1
          ShopPlacement.randMod(item, shop)
        case (item, nonShop) =>
          pool.take(item)
          ItemPlacement(item, nonShop)
      }), "prog: ")
      PlacementGroup(state, progPath, placements, i, parent)
    }
  }

  case class Seed(var grps: Seq[PlacementGroup], error: Option[GeneratorError], header: String) {
    def built: Boolean = error.isEmpty && grps.last.done
    val groups: Seq[PlacementGroup] = {
      if(Settings.bonusItems) {
        val last = grps.last
        grps = grps :+ last.copy(prog = Inv.Empty, i = last.i+1, parent = Some(last), placements = Seq(
          ShopPlacement(SpikeEfficiency, ItemLoc.known("OpherShop.Spike"), 0f),
          ShopPlacement(RapidSmash, ItemLoc.known("OpherShop.SpiritSmash"), 0f),
          ShopPlacement(StarEfficiency, ItemLoc.known("OpherShop.SpiritStar"), 0f),
          ShopPlacement(BlazeEfficiency, ItemLoc.known("OpherShop.Blaze"), 0f),
          ShopPlacement(SentryEfficiency, ItemLoc.known("OpherShop.Sentry"), 0f)
        ))(r, Inv.Empty)
      }
      if(Nodes.unreachableLocs.nonEmpty) {
        val last = grps.last
        grps = grps :+ last.copy(prog = Inv.Empty, i = last.i+1, parent = Some(last), placements =
          Nodes.unreachableLocs.map(i => ItemPlacement(SpiritLight(200), i)).toSeq)(r, Inv.Empty)
      }

        grps
    }
    def seed(spoilers: Boolean = true): String = "%s\n\n// Config: %s".format((Seq(Settings.internalHeader, header) ++
      groups.map(plcmnts => plcmnts.write(spoilers))).mkString("\n").stripPrefix("\n"), Settings.toJson)

    def desc: String = groups.map(grp => grp.desc.replace("\n", "")).mkString("\n")

    def write(targetPath: String): Unit = {
      Try {
        targetPath.f.write(seed(Settings.spoilers))
        Logger.log(s"Wrote seed to $targetPath")
        if(!Settings.spoilers) {
          val spoilerPath = targetPath.replace(".wotwr", "_SPOILER.wotwr")
          spoilerPath.f.write(seed())
          Logger.log(s"Wrote spoiler to $spoilerPath")
        }
      } match {
        case Success(_) =>
        case Failure(e) => Logger.error(s"write failed, $e")
      }
    }
  }

  object Runner {
    def setSeed(n: Long): Unit = r.setSeed(n)
    def DEFAULT_INV: GameState = GameState(new Inv(Health -> 6, Energy -> 6)) ++
          !Settings.flags.noSword ? GameState(Inv.mk(Sword), Set(WorldState("Weapon"), WorldState("EnemyObstacle"))) ++
          !Settings.flags.rain ? GameState.mk(WorldState("MarshSpawn.HowlBurnt"))

    def mkSeed: Seed = {
      implicit val pool: Inv = ItemPool.build(r)
      recurse()(pool)
    }
    def single: PlacementGroup = {
      implicit val pool: Inv = ItemPool.build(r)
      PlacementGroup.mk(DEFAULT_INV)
    }
    //noinspection FieldFromDelayedInit
    @scala.annotation.tailrec
    def recurse(grps: Seq[PlacementGroup] = Seq(), startState: GameState = DEFAULT_INV)(implicit pool: Inv): Seed = {
      val h = Settings.headers.filterNot(_.startsWith("!!")).map(_.stripMargin('!')).mkString("\n") +
      Nodes.prestates.nonEmpty ? Nodes.prestates.map(_.name).mkString("\n//prestates: ", ",", "") ?? ""
      grps.lastOption.map(_.tryNext()).getOrElse({
      PlacementGroup.trymk(DEFAULT_INV)
    }) match {
      case Right(next) if next.done => Seed(grps :+ next, None, h)
      case Right(next) => recurse(grps :+ next)
      case Left(error) => Seed(grps, Some(error), h)
    }
}
    def forceGetSeed(retries: Int = IS_DEBUG ? 1 ?? 10, time: Boolean = true): Seed = {
      val t0 = System.currentTimeMillis()
      val s = mkSeed
      val ret = s.error match {
        case Some(e) if retries > 0 =>
          Logger.error(e)
          Logger.log("Retrying...")
          forceGetSeed(retries-1, time = false)
        case Some(e) =>
          Logger.error(e)
          Logger.error("Out of retries, exiting")
          s
        case None =>
          s
      }
      val t1 = System.currentTimeMillis()
      if(time)
        Logger.log(s"Generated seed in ${(t1-t0)/1000f}s")
      ret
    }
    def apply(targetPath: String = "seeds/seed_0.wotwr"): Boolean = {
      val seed = forceGetSeed()
      if(seed.built)
        seed.write(targetPath)
      else
        Logger.warn(s"Failed to build! didn't write.")
      seed.built
    }
  }

  case class Distro(sl: Int = 0, hc: Int = 0, ec: Int = 0, ore: Int = 0, sks: Int = 0)

/*
  object Tracking {
    var areas: MMap[String, Distro] = MMap()
    def incAreas(item: Item, location: LocData): Unit = {
      if (areas == null)
        areas = MMap()
      val cur = areas.getOrElse(location.zone, Distro())
      item match {
        case _: SpiritLight => areas(location.zone) = Distro(cur.sl + 1, cur.hc, cur.ec, cur.ore, cur.sks)
        case Health => areas(location.zone) = Distro(cur.sl, cur.hc + 1, cur.ec, cur.ore, cur.sks)
        case Energy => areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec + 1, cur.ore, cur.sks)
        case Ore => areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec, cur.ore + 1, cur.sks)
        case _: Skill => areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec, cur.ore + 1, cur.sks + 1)
        case _ => None
      }
    }
  }
*/
  object Timer {
    var enabled = true
    val times: MMap[String, Long] = MMap[String, Long]()
    def showTimes(): Unit = times.toSeq.sortBy(_._2).foreach(t => Logger.log(t))
    def clear(): Unit = times.clear()
    def apply[R](name: String, printAfterEach: Boolean = false)(block: => R): R = {
      if(enabled) {
        val t0 = System.currentTimeMillis()
        val result = block    // call-by-name
        val t1 = System.currentTimeMillis()
        times(name) = times.getOrElse(name, 0L) + (t1-t0)
        if(printAfterEach)
          Logger.log(s"$name: " + (t1 - t0) + "ms")
        return result
      }
      block
    }
  }
  object ItemPool {
    def SIZE: Int = Nodes.items.size
    def build(implicit r: Random): Inv = {
      Nodes.populate()
      val pool = new Inv(Health -> 24, Energy -> 24, Ore -> 40, ShardSlot -> 5, Keystone -> (if(Settings.flags.noKSDoors) 0 else 34)) +
        Inv.mk(WorldEvent.poolItems ++ Shard.poolItems ++ Skill.poolItems ++ Bonus.poolItems ++ Teleporter.poolItems.filterNot(_ == Nodes.spawnTP):_*)
      Nodes.handleHeaders(pool)
      val locs = Nodes.items.values.toSet -- Nodes.preplc.keys
      while(pool.count < locs.size) pool.add(SpiritLight(r.between(60, 175)))
      pool.merchToPop = locs.count(_.data.category == "Shop")
      pool
    }
  }
}