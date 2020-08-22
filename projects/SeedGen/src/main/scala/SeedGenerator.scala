import java.nio.charset.StandardCharsets
import java.nio.file.{Files, Path, Paths}

import org.json4s.native.Serialization
import org.json4s.{Formats, NoTypeHints}

import scala.collection.mutable.{ListBuffer => MList, Map => MMap, Set => MSet}
import scala.jdk.CollectionConverters._
import scala.language.implicitConversions
import scala.util.{Random, Try}
package SeedGenerator {

  //  these are fine
  object implicits {
    val IS_DEBUG: Boolean = sun.management.ManagementFactoryHelper.getRuntimeMXBean.getInputArguments.asScala.exists(it => it.contains("IntelliJ"))

    implicit class RegexOpts(sc: StringContext) {
      def r = new util.matching.Regex(sc.parts.mkString, sc.parts.tail.map(_ => "x"): _*)
    }
    implicit class BooleanOps(b: Boolean) {
      // kinda like a terinary operator, but since scala has that already,  ? means "cond+val->Opt"
      def ?[T](block: => T): Option[T] = if(b) Some(block) else None
    }
    implicit class StringOpts(s: =>String) {
      def f: Path = Paths.get(s) // quick convert a String to a Path
    }
    implicit class PathOpts(f: Path) {
      import java.nio.file.StandardOpenOption._
      val defaultPath: Path = Paths.get("C:", "moon")
      // sugar funcs for interacting with paths and their target files
      def exists: Boolean = Files exists f
      def toOpt: Option[Path] = exists ? f
      def forceRead: String = Files readString f
      def read: Option[String] = exists ? forceRead
      def readLines: Seq[String] = Seq.from(Files.readAllLines(f).asScala)
      def write(output: => String): Path = Files.writeString(f, output, StandardCharsets.UTF_8, WRITE, TRUNCATE_EXISTING, CREATE)
      def append(output: => String): Path = Files.writeString(f, output, StandardCharsets.UTF_8, WRITE, CREATE, APPEND)
      def canonPath: Path = if(IS_DEBUG) defaultPath.resolve(f) else f
    }

    implicit class OptOpts[T](o: Option[T]) {
      def ?(other: => Option[T]): Option[T] = o orElse other
      def ??(other: => T): T = o getOrElse other
    }

    implicit class itOpts[T](vs: Seq[T]) {
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

    import scala.language.postfixOps
    import scala.util.matching.Regex
    import scala.util.{Failure, Success}

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
    def all: Seq[LocData] = {
      val pickupReg = """^([^.]*)\.([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([-0-9]*), ?([^,]*), ?([-0-9=]*), ?([-0-9]*), ?([-0-9]*)""".r
      val pickupsFile = "loc_data.csv".f
      Config.debug(s"Loading loc_data from $pickupsFile")
       pickupsFile.readLines.flatMap {
        case s if s.trim == "" => None
        case s if s.trim.startsWith("--") =>
          None
        case pickupReg(area, name, zone, category, value, uberGN, ugid, uberN, uid, x, y) =>
          Some(LocData(area, name, category, value, zone, uberGN, ugid.toInt, uberN, uid, x.toInt, y.toInt))
        case line: String =>
          Config.warn(s"Couldn't parse line: $line")
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
      case AreaNode => Nodes.areas.getOrElse(name, {Config.error(s"unknown area name $this") ; this})
      case ItemNode => Nodes.items.getOrElse(name, {Config.error(s"" +
        s"unknown item name $this") ; this})
      case _ =>
        Config.warn(s"couldn't resolve $this")
        this
    }
    override def reached(curr: GameState, orbs: Orbs): Unit = Nodes.areas.get(name) match {
        case Some(n: Node) if n.kind == kind => n.reached(curr, orbs)
        case Some(x) => Config.warn(s"$x was of unexpected type!")
        case None =>Config.warn(s"$name not in nodes!")
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
    val known: MMap[String, ItemLoc] = MMap.empty
    def mk(name: String, src: Map[String, LocData]): Option[ItemLoc] = src.get(name).map(ItemLoc(name, _))
      .map(i => {known(name) = i; i})
      .orElse({
          Config.debug(s"pickup $name not found in loc_data.csv")
        None
      }) match {
      case Some(ItemLoc(name, l)) if !Config().flags.noHints && (l.value == "LupoZoneMap" || name == "OpherShop.WaterBreath") => None
      case Some(ItemLoc(_, l)) if !Config().questLocs && l.category == "Quest" => None
      case Some(ItemLoc(_, l)) if Config().bonusItems && l.uberGroupId == 1 => None // TODO: change this when weapons probably
      case Some(ItemLoc(name, _)) if !Config().flags.noKSDoors && name == "OpherShop.Teleport" =>/* Config.debug(s"Filtered out $name");*/ None
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

    def keystonesRequired(nodes: Set[Node]): Int = {
      if(Config().flags.noKSDoors)
        return 0
      val relevantNodes = nodes.collect{case a: Area => a}.intersect(connectedToDoors)
      doors.foldLeft(0)({case (acc, (name, keys))=> acc + (relevantNodes.exists(_.conns.exists(_.target.name == name)) ? keys ?? 0)})
    }

    def fixAreas(areas: Map[String, Area]): Map[String, Area] = {
      val locDataByName = LocData.byName
      areas.values.map(area => area.name -> area.copy(conns = area.conns.flatMap(c => {
        if(doors.contains(c.target.name))
          _connectedToDoors.add(area)
      c match {
            // TODO: FIXME?
        case Connection(Placeholder(name, _), Seq()) => Config.warn(s"only empty paths from ${area.name} to $name"); None
        case Connection(Placeholder(name, ItemNode), reqs) => ItemLoc.mk(name, locDataByName).map(Connection(_, reqs))
        case Connection(Placeholder(name, AreaNode), _) if !areas.contains(name)  => Config.warn(s"ignoring path from ${area.name} to unknown area $name"); None
        case c @ Connection(QuestNode(name), reqs) => Seq(c) ++ ItemLoc.mk(name, locDataByName).map(Connection(_, reqs))
        case c => Some(c)
      }}) ++ (area.name == _spawn.areaName) ? _spawn.conns ?? Nil)).toMap
    }


    case class SpawnLoc(areaName: String, spawnSlots: Int, teleporter: Teleporter, safe: Boolean = false) {
      def area: Area = Nodes.areas(areaName)
      def conns: Seq[Connection] = (1 to spawnSlots) map (i =>
        Connection(ItemLoc(s"Spawn item #$i", LocData("Spawn", s"Item_$i", "nullCat", "nullVal", "spawn", "control", 3, "spawn", "0", 0, 0)), Seq(Free)))
      def line: String = {
        if(areaName == "MarshSpawn.Main")
          return ""
        val Coords(x, y) = area.coords.get
        val spawnLine = s"Spawn: $x, $y"
        val tpLine = s"3|0|${teleporter.code}|mute"
        s"$spawnLine${" " * (30 - spawnLine.length)}// $areaName\n\n" +
        s"3|0|6|Spawning with:|f=420    // show spawn text for longer\n" +
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
        SpawnLoc("EastHollow.Teleporter", 2, Teleporter(5), safe = true),
        SpawnLoc("UpperDepths.Teleporter", 3, Teleporter(6)),
        SpawnLoc("WoodsEntry.Teleporter", 3, Teleporter(7)),
        SpawnLoc("WoodsMain.Teleporter", 3, Teleporter(8)),
        SpawnLoc("LowerWastes.WestTP", 4, Teleporter(9)),
        SpawnLoc("LowerWastes.EastTP", 4, Teleporter(10)),
        SpawnLoc("UpperWastes.NorthTP", 4, Teleporter(11)),
        SpawnLoc("GladesTown.Teleporter", 3, Teleporter(16), safe = true),
        SpawnLoc("MarshSpawn.Main", 0, Teleporter(17)),
      )
      def valid: Seq[SpawnLoc] = Config().unsafePaths ? all ?? all.filter(_.safe)
      def byName: Map[String, SpawnLoc] = all.map(a => a.areaName -> a).toMap
      def default: SpawnLoc = SpawnLoc("MarshSpawn.Main", 0, Teleporter(17))
    }

    var populatedWithSetting: Option[GenSettings] = None
    def populate()(implicit r: Random): Boolean = {
      if(populatedWithSetting.contains(Config()) && !Config().flags.randomSpawn)
        return true // already done lol
      Timer("Path parsing", printAfterEach = true) {
          FastParser.parseFile() match {
            case Right(value) =>
              Config.debug(s"parse done, ${value.size} areas")
              if(!ReachChecker.doingReachCheck)
                _spawn = Config().flags.randomSpawn ? SpawnLoc.valid.rand ?? SpawnLoc.default
              Config.debug(s"spawn loc is ${_spawn.areaName}")
              _areas = Timer("FixAreas")(fixAreas(value))
              _items = _areas.flatMap(_._2.conns.collect({ case Connection(t: ItemLoc, r) if r.nonEmpty => t.name -> t }))
              Config.debug(s"items done ${_items.size} items")
              populatedWithSetting = Some(Config())
              true
            case Left(error) =>
              Config.error(error)
              false
          }
      }
    }
    def spawn: Area = _spawn.area
    def spawnTP: Teleporter = _spawn.teleporter
    var _spawn: SpawnLoc = SpawnLoc.default
    val reachCache: MMap[Area, AreaTraversalInfo] = MMap.empty[Area, AreaTraversalInfo]
    val haveReached: MSet[Node] = MSet.empty[Node]
    val states: MSet[FlagState] = MSet.empty[FlagState]
    def reached(s: GameState, theoretical: Boolean = false): (GameState, Set[Placement]) = Timer("Reached"){
      val mbprplc = theoretical ? MMap(preplc.toSeq:_*)
      val(rs, plcs) = Nodes.reachedRec(s, Set())
      mbprplc.foreach(old => {preplc.clear(); preplc.addAll(old)})

      if(plcs.nonEmpty && !theoretical)
        Config.debug(s"new placements after reachable search: $plcs")
      (rs, plcs)
    }
    val preplc: MMap[ItemLoc, MSet[Placement]] =  MMap[ItemLoc, MSet[Placement]]()
    val seedLineRegex: Regex = """^(([0-9]+)\|([0-9]+)(=[0-9])?)\|(([0-9]+)\|([0-9]+))(\|[^ ]*)? *(//.*)?""".r

    def regenPreplcs(pool: Inv)(implicit r: Random): Unit = Try {
      def addPreplc(p: Placement): Unit = {
        val s = preplc.getOrElse(p.loc, MSet())
        s.add(p)
        preplc += (p.loc -> s)
      }
      preplc.clear()
      if(Config().flags.worldTour) {
        Config.debug("World Tour: finding relic placements...")
        Nodes._items.values.groupBy(_.data.zone).foreach({case (z, items) =>
          if(z != "Windtorn Ruins" && r.nextFloat() < .8) {
            val slot = items.toSeq.rand
            addPreplc(ItemPlacement(Bonus(20, "Relic"), slot))
          }
        })
        Config.debug(s"World Tour: placed ${preplc.size} relics")
      }
      if(Config().seirLaunch) {
        val seir = Nodes.items("WindtornRuins.Seir")
        addPreplc(ItemPlacement(Launch, seir))
      }
      val locsByCode = Nodes._items.values.map(a => a.data.code -> a).toMap
      val poolByCode = pool.asSeq.map(i => i.code -> i).toMap
      //noinspection FieldFromDelayedInit
      FXGUI.header().split("\n").foreach({
        case raw @ seedLineRegex(locCode,_,_,_,itemCode,_,_,extra,comm) if !comm.contains("skip") =>
          (locsByCode.get(locCode), poolByCode.get(itemCode)) match {
            case (Some(loc), Some(item)) =>
              pool.take(item)
              addPreplc(GhostPlacement(item, loc))
              Config.debug(s"$loc, $item <= $raw")
              Config.debug(s"$loc, ${preplc.get(loc)}, ${preplc.toMap}")
            case (Some(loc), None) =>
              Config.debug(s"$loc, None($itemCode) <= $raw")
              addPreplc(GhostPlacement(RawItem(itemCode + Option(extra) ?? ""), loc))
            case (None, Some(item)) =>
              Config.debug(s"None($locCode), $item <= $raw")
              pool.take(item)
              Config.warn(s"Placing item $item in unknown location $locCode logically removes it from the pool.")
            case (None, None) => Config.debug(s"None($locCode), None($itemCode) <= $raw")
          }
        case raw => Config.debug(s"ignoring line $raw")
      })
    }  match {
      case Success(_) => Config.log(s"finished generating preplacements, got: $preplc")
      case Failure(f) => Config.error(s"Failed generating preplacements, got: $preplc, error: $f")
    }
    case class GhostPlacement(item: Item, loc: ItemLoc) extends Placement {
      override def write(spoilers:  Boolean): String = {
        "//" + super.write(spoilers).replace(s" from ${loc.data.info}", "") + " (preplaced)"
      }
    }
    case class LocCode(ugid: String, uid: String, tailRaw: String, full: String) {
      val groupId: Int = ugid.toInt
      val id: Int = uid.toInt
      val tail: Option[String] = Option(tailRaw)
      override def toString: String = full
    }

    @scala.annotation.tailrec
    def reachedRec(s: GameState, plcs: Set[Placement] = Set()): (GameState, Set[Placement]) = {
      reachCache.clear()
      haveReached.clear()
      states.clear()
      var stateCount = 0
      def fullState: GameState  = s.noReached + GameState(Inv.Empty, states.toSet, haveReached.toSet)
      spawn.reached(fullState, s.inv.orbs)
      do {
        stateCount = states.size
        reachCache.foreach{
          case (a, AreaTraversalInfo(orbs, s)) if s.nonEmpty => a.reached(fullState, orbs)
          case _ =>
        }
      } while(stateCount < states.size)
      reachCache.mapValuesInPlace({case (_, rr) => rr.copy(couldConnect = rr.couldConnect -- haveReached)})
      reachCache.subtractAll(reachCache.collect{case (a, AreaTraversalInfo(_, s)) if s.isEmpty => a})
      val reached_placements = preplc.keySet.intersect(haveReached.collect({case i: ItemLoc => i}))
      if(reached_placements.nonEmpty) {
        val new_placements = plcs ++ reached_placements.flatMap(l => preplc(l))
        val partialState =  s.noReached + GameState(new Inv(new_placements.map(_.item -> 1).toSeq:_*), states.toSet, haveReached.toSet)
        preplc.subtractAll(new_placements.map(_.loc))
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
          i ->  (outState.reached.collect[Node]{
            case i: ItemLoc => i
            case w: WorldStateNode => w
          } -- items -- currFlags)
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
      case Failure(f) => Config.error(f); true
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
    def debugPrint(x: Any): Unit = Config.debug(x)
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
      val reachableLocs = state.items
      val locsWithItems = (parent.map(_.allPlacements).getOrElse(Set()) ++ placements).map(_.loc)
      val freeLocs = r.shuffle((reachableLocs -- locsWithItems).toSeq)
      val count = pool.count + Nodes.preplc.size
      val placed = locsWithItems.size
      if(count+placed != ItemPool.SIZE)
        Config.warn(s"$count + $placed != ${ItemPool.SIZE}")
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
        return PlacementGroup(state, Inv.Empty, placements.toSeq, i, parent)
      }
      val ksNeeded = Math.max(0, Nodes.keystonesRequired(state.reached) - state.inv(Keystone)) match {
        case _ if !Config().flags.randomSpawn && i < 3 => 0
        case 2 => 0
        case n => n
      }
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
            Config.debug(s"Preplacements after KS placement: $newPlc")
            process(newPlc, "preplc: ")
          }
          val newLocs = newState.items
          val newCount = (newLocs -- reachableLocs).size
          Config.debug(s"checking for reachables after KS, got $newCount")
          if(newCount > 0 || newPlc.exists(_.item.isInstanceOf[Important]) || newLocs.size == ItemPool.SIZE)
            return PlacementGroup(state, Inv.Empty, placements.toSeq, i, parent)
          else
            throw GeneratorError(s"Placed $ksNeeded into exactly that many locs, but failed to find a reachable after")
        }
      }

      val locIter = freeLocs.drop(ksNeeded).iterator
      val reservedForProg = (1 to (locsOpen match {
        // if random placement doesn't open something (and it often won't), we gotta place something
        // Reserve item slots for it so we aren't in trouble
        case n if Config().flags.randomSpawn && i < 3 => n // be cautious
        case n if n < 3 => n  // pick how many slots to save by how big the pool is.
        case n if n < 5 => 2  // ideally we'd like 2?
        case n if n < 10 => 4 // tweak if necessary
        case n if n < 15 => 6
        case _ => 8
      })).map(_ => locIter.next())
      debugPrint(s"reserving ${reservedForProg.size}: $reservedForProg")
      val (remaining, leftoverSpawn) = locIter.toSeq.partition(_.data.category != "nullCat")
      leftoverSpawn.foreach(_ => pool.popSL)
      val randPlacements = assignRandom(remaining)
      process(randPlacements, "rand: ")
      if(randPlacements.nonEmpty) {
        val (newState, newPlc) = Nodes.reached(state)
        if(newPlc.nonEmpty) {
          Config.debug(s"Preplacements after random placement: $newPlc")
          process(newPlc, "preplc: ")
        }
        val newLocs = newState.items
        val newCount = (newLocs -- reachableLocs).size
        debugPrint(s"checking for reachables after random placement, got $newCount")
        if(newCount > reservedForProg.size ||                 // more new items than were reserved for prog OR
          newPlc.exists(_.item.isInstanceOf[Important]) ||    // found an Important preplaced item OR
          newLocs.size == ItemPool.SIZE)                      // we're done
          return PlacementGroup(state, Inv.Empty, placements.toSeq, i, parent)
      }
      def getProgressionPath(sizeLeft: Int): Inv = Timer(s"getProgPath"/*, far=$far"*/){
        val remainCount = ItemPool.SIZE - reachableLocs.size
        if(remainCount == 0)
          return Inv.Empty

        var _fullWeight = 0d
        def acc(st: GameState, multiplier: Double = 1.0): Double = {
          if(!st.cost.isFinite || st.inv.count == 0) {
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
            Config.debug(s"Preplacements in gPP: $progP")
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
          Config.error(s"uh oh!")
          Config.error(s"pool: ${pool.progInv()}")
          Config.error(s"inv: ${state.inv.progInv()}")
          Config.error(s"Had $sizeLeft slots")
          val unreachable = Nodes.items.values.toSet -- reachableLocs
          Config.error(s"Couldnt reach ${unreachable.take(8)}... (${unreachable.size} total)")
          if(Config().flags.randomSpawn)
            Config.error(s"Spawned at ${Nodes.spawn.name}")
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
      PlacementGroup(state, progPath, placements.toSeq, i, parent)
    }
  }

  case class Seed(grps: Seq[PlacementGroup], error: Option[GeneratorError], header: String) {
    def built: Boolean = error.isEmpty && grps.last.done
    val groups: Seq[PlacementGroup] = {
      if(Config().bonusItems) {
        val last = grps.last
        val bonus = last.copy(prog = Inv.Empty, i = last.i+1, parent = Some(last), placements = Seq(
          ShopPlacement(SpikeEfficiency, ItemLoc.known("OpherShop.Spike"), 0f),
          ShopPlacement(RapidSmash, ItemLoc.known("OpherShop.SpiritSmash"), 0f),
          ShopPlacement(StarEfficiency, ItemLoc.known("OpherShop.SpiritStar"), 0f),
          ShopPlacement(BlazeEfficiency, ItemLoc.known("OpherShop.Blaze"), 0f),
          ShopPlacement(SentryEfficiency, ItemLoc.known("OpherShop.Sentry"), 0f)
        ))(r, Inv.Empty)
        grps :+ bonus
      } else grps
    }
    def seed(spoilers: Boolean = true): String = (Config().header + header +
        groups.map(plcmnts => plcmnts.write(spoilers)).mkString("\n").stripPrefix("\n") +
        s"\n\n// Config: ${Config().toJson}"
      ).replace("\n", "\r\n")
    def desc: String = grps.map(grp => grp.desc.replace("\n", "")).mkString("\n")

    def write(targetPath: String): Unit = {
      Try {
        targetPath.f.write(seed(Config().spoilers))
        Config.log(s"Wrote seed to $targetPath")
        if(!Config().spoilers) {
          val spoilerPath = targetPath.replace(".wotwr", "_SPOILER.wotwr")
          spoilerPath.f.write(seed())
        }
      } match {
        case Success(_) =>
        case Failure(e) => Config.error(s"write failed, $e")
      }
    }
  }

  object Runner {
    def setSeed(n: Long): Unit = r.setSeed(n)
    def DEFAULT_INV: GameState = GameState(new Inv(Health -> 6, Energy -> 6)) ++
          !Config().flags.noSword ? GameState(Inv.mk(Sword), Set(WorldState("Weapon"), WorldState("EnemyObstacle"))) ++
          !Config().flags.rain ? GameState.mk(WorldState("MarshSpawn.HowlBurnt"))

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
      val h = FXGUI.header()
      grps.lastOption.map(_.tryNext()).getOrElse({
      PlacementGroup.trymk(DEFAULT_INV)
    }) match {
      case Right(next) if next.done => Seed(grps :+ next, None, h)
      case Right(next) => recurse(grps :+ next)
      case Left(error) => Seed(grps, Some(error), h)
    }
}
    def forceGetSeed(retries: Int = 10, time: Boolean = true): Seed = {
      val t0 = System.currentTimeMillis()

      val s = mkSeed
      val ret = s.error match {
        case Some(e) if retries > 0 =>
          Config.error(e)
          Config.log("Retrying...")
          forceGetSeed(retries-1, time = false)
        case Some(e) =>
          Config.error(e)
          Config.error("Out of retries, exiting")
          s
        case None =>
          s
      }
      val t1 = System.currentTimeMillis()
      if(time)
        Config.log(s"Generated seed in ${(t1-t0)/1000f}s")
      ret
    }
    def apply(targetPath: String = "seeds/seed_0.wotwr"): Boolean = {
      val seed = forceGetSeed()
      if(seed.built)
        seed.write(targetPath)
      else
        Config.warn(s"Failed to build! didn't write.")
      seed.built
    }
  }
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
        case s => s"Flags: ${s.mkString(", ")}\n"
      }
    }
  }
  case class GenSettings(
                          tps: Boolean = true,
                          spoilers: Boolean = true,
                          unsafePaths: Boolean = false,
                          gorlekPaths: Boolean = false, // todo: this better!!
                          glitchPaths: Boolean = false, // todo: this better!!
                          questLocs: Boolean = true,
                          outputFolder: String = "C:\\moon",
                          flags: Flags = Flags(),
                          bonusItems: Boolean = true,
                          debugInfo: Boolean = false,
                          seirLaunch: Boolean = false,
                        ) extends SettingsProvider {
    def header: String = flags.line + flags.randomSpawn ? Nodes._spawn.line ?? ""
    implicit val formats: Formats = Serialization.formats(NoTypeHints)
    def toJson: String = {Serialization.write(this)}
    override def apply(): GenSettings = this
  }

  trait SettingsProvider {
    def apply(): GenSettings
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
case class DefaultLogger(override val enabled: Seq[LogLevel] = Seq(INFO, WARN, ERROR)) extends Logger {
    def write(x: =>Any): Unit = println(x)
  }

  case class FileLogger(path: String, override val enabled: Seq[LogLevel] = Seq(ERROR)) extends Logger {
    def write(x: =>Any): Unit = path.f.append(s"$x\n")
  }

  object DefaultSettingsProvider extends SettingsProvider {
    def apply(): GenSettings = GenSettings()
  }

  object Config extends SettingsProvider with Logger {
    var settingsProvider: SettingsProvider = DefaultSettingsProvider
    var logger: Logger = DefaultLogger()
    override def write(x: =>Any): Unit = logger.write(x)
    override def enabled: Seq[LogLevel] = logger.enabled

    override def apply(): GenSettings = settingsProvider.apply()
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
    def showTimes(): Unit = times.toSeq.sortBy(_._2).foreach(t => Config.log(t))
    def clear(): Unit = times.clear()
    def apply[R](name: String, printAfterEach: Boolean = false)(block: => R): R = {
      if(enabled) {
        val t0 = System.currentTimeMillis()
        val result = block    // call-by-name
        val t1 = System.currentTimeMillis()
        times(name) = times.getOrElse(name, 0L) + (t1-t0)
        if(printAfterEach)
          Config.log(s"$name: " + (t1 - t0) + "ms")
        return result
      }
      block
    }
  }
  object ItemPool {
    def SIZE: Int = Nodes.items.size
    def build(implicit r: Random): Inv = {
      Nodes.populate()
      val pool = new Inv(Health -> 24, Energy -> 24, Ore -> 40, ShardSlot -> 5, Keystone -> (if(Config().flags.noKSDoors) 0 else 34)) +
        Inv.mk(WorldEvent.poolItems ++ Shard.poolItems ++ Skill.poolItems ++ Bonus.poolItems ++ Teleporter.poolItems:_*)
      Nodes.regenPreplcs(pool)
      val locs = Nodes.items.values.toSet -- Nodes.preplc.keys
      while(pool.count < locs.size) pool.add(SpiritLight(r.between(75, 175)))

      pool.merchToPop = locs.count(_.data.category == "Shop")
      pool
    }
  }
}