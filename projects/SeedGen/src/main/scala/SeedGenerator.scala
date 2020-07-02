import java.io.{BufferedWriter, File, FileWriter}

import scala.collection.mutable.{Map => MMap, ListBuffer => MList}
import scala.language.implicitConversions
import scala.math.Ordering.Double.TotalOrdering
import scala.collection.parallel.CollectionConverters._
import scala.io.Source
import scala.util.{Random, Try}

package SeedGenerator {

  //  these are fine
  object implicits {
    implicit class RegexOps(sc: StringContext) {
      def r = new util.matching.Regex(sc.parts.mkString, sc.parts.tail.map(_ => "x"): _*)
    }
    implicit class ReqOps(reqs: Seq[Requirement]) {
      def sortByConsumption: Seq[Requirement] = reqs.sortBy(_.children.collect({
        case DamageReq(d) => d
        case EnergyReq(e) => e*30
        case _ => 0
      }).sum)
    }

    // really, they're fine
    implicit def itemToPart(item: Item): Either[Item, Either[FlagState, Node]] = Left(item)
    implicit def flagToPart(flag: FlagState): Either[Item, Either[FlagState, Node]] = Right(Left(flag))
    implicit def nodeToPart(node: Node): Either[Item, Either[FlagState, Node]] = Right(Right(node))
    implicit val r: Random = new Random()
  }
  import SeedGenerator.implicits._

  import scala.language.postfixOps

  case class LocData(area: String, name: String, category: String, value: String, zone: String, uberGroup: String, uberGroupId: Int, uberName: String, uberId: String, x: Int, y: Int) {
    val code = s"$uberGroupId|$uberId"
    def info: String = {
      val fullName = s"$area.$name"
      val withPad = fullName + " " * (35 - fullName.length)
      uberGroupId match {
        case 1 => s"$withPad(Shop) (Opher)"
        case 2 => s"$withPad(Shop) (Twillen)"
        case _ => s"$withPad($x,$y) $zone"
      }
    }
  }
  object LocData {
    def all: Seq[LocData] = {
      val pickupReg = """^([^.]*)\.([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([-0-9]*), ?([^,]*), ?([-0-9=]*), ?([-0-9]*), ?([-0-9]*)""".r
      val path = if(new File("areas.wotw").exists()) "loc_data.csv" else "C:\\moon\\loc_data.csv"
      val pickupsFile = Source.fromFile(path)
      UI.debug(s"Loading loc_data from $path")
      val pickups = pickupsFile.getLines.flatMap {
        case s if s.trim == "" => None
        case s if s.trim.startsWith("--") =>
          None
        case pickupReg(area, name, zone, category, value, uberGN, ugid, uberN, uid, x, y) =>
          Some(LocData(area, name, category, value, zone, uberGN, ugid.toInt, uberN, uid, x.toInt, y.toInt))
        case line: String =>
          UI.log(s"Couldn't parse line: $line")
          None
      }.toSeq
      pickupsFile.close()
      pickups.filter({
        case l if UI.Options.hints && l.value == "LupoZoneMap" => false
        case l if !UI.Options.questLocs && l.category == "Quest" => false
        case _ => true
      })
    }
    def byName: Map[String, LocData] = all.map(data => s"${data.area}.${data.name}" -> data).toMap
  }

  sealed trait NodeType
  case object AreaNode extends NodeType
  trait ItemNodeType extends NodeType
  trait StateNodeType extends NodeType
  case object ItemNode extends ItemNodeType
  case object StateNode extends StateNodeType
  case object QuestNode extends ItemNodeType with StateNodeType
  trait Node {
    def name: String
    def reached(state: GameState, nodes: Map[String,Node] = Map()): GameState = {
      state + GameState.mk(this)
    }
    def kind: NodeType
    def nearby(dist: Int = 3, ignore: Set[Node] = Set()): Map[Node, Set[Path]] = {
      if(ignore.contains(this))
        Map()
      else
        Map(this -> Set(EmptyPath(this)))
    }
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
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = nodes.get(name) match {
        case Some(n: Node) if n.kind == kind => n.reached(state, nodes)
        case Some(x) => UI.log(s"Warning: $x was of unexpected type!"); state
        case None =>UI.log(s"Warning: $name not in nodes!"); state
    }
    override def nearby(dist: Int = 3, ignore: Set[Node] = Set()): Map[Node, Set[Path]] = kind match {
      case AreaNode => Nodes.areas(name).nearby(dist, ignore)
      case _ => Map(this -> Set(EmptyPath(this)))

    }
  }
  trait Refiller {
    def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs
  }
  trait Additive extends Refiller
  case object Well extends Refiller {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs = inv.orbs // full refill
  }
  case object Checkpoint extends Refiller {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)) = Orbs(
      health = inv.orbs.health match { // Checkpoints are terrible; Math.floor((x/5)/0.6685+1)
        case i if i < 45 => i
        case i if i < 135 => 40
        case i if i < 235 => Math.floor((i.toFloat/5)/0.6685+1).toInt
        case _ => 70
      },
      energy = inv.orbs.energy match { // Checkpoints respawn you with 1 Energy + 1 per 5 water veins you have
        case i if i < 55 => 1
        case i if i < 105 => 2
        case i if i < 155 => 3
        case i if i < 205 => 4
        case _ => 5
      }).max(prior)
  }
  case class HealthPlants(count: Int = 1) extends Refiller with Additive {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)) = Orbs(
      health = Math.max(inv.orbs.health, prior.health + count * inv.orbs.health match { // Health plants drop more orbs if you have more health
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
  case class EnergyCrystals(count: Int = 1) extends Refiller with Additive {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)) = Orbs(prior.health, Math.max(inv.orbs.energy, prior.energy + count*10))
  }

  case class RefillGroup(refills: Map[Requirement, Seq[Refiller]])

  case class Area(name: String, _conns: Seq[Connection] = Seq(), refillGroup: RefillGroup) extends Node {
    // TODO: FIXME
    val conns: Seq[Connection] = _conns.filterNot(_.reqs.nonEmpty)
    override val kind: NodeType = AreaNode
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = {
      conns.foldLeft(super.reached(state, nodes))({
        case (s, Connection(target, _)) if s.reached.contains(nodes.getOrElse(target.name, target)) => s
        // TODO: FIXME
        case (s, Connection(target, req)) if AnyReq(req).metBy(s)             => target.reached(s, nodes)
        case (s, _)                                                   => s
      })
    }
    //                                                              TODO: FIXME
    def paths: Seq[Path] = conns.map(c => SimplePath(this, c.target, AnyReq(c.reqs)))
    override def nearby(dist: Int = 3, ignore: Set[Node] = Set()): Map[Node, Set[Path]] = dist match {
      case 0 => Map(this -> Set(EmptyPath(this)))
      case _ =>  paths.flatMap(path => path.dest match {
        case n if ignore.contains(n) => Nil
        case n => n.nearby(dist-1, ignore + this).map[Node, Set[Path]]({case (n, p) => n -> p.flatMap(path and)})
      }).groupMapReduce(_._1)(_._2)(_ ++ _)
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
    def mk(name: String, src: Map[String, LocData]): Option[ItemLoc] = src.get(name).map(ItemLoc(name, _))
      .orElse({
        if(!name.endsWith("LupoMap"))
          UI.debug(s"pickup $name not found in loc_data.csv (This is expected if locs are excluded)")
        None
      })
  }

  case class WorldStateNode(name: String) extends Node {
    override def kind: NodeType = StateNode
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = state + GameState.mk(WorldState(name), this)
  }

  case class QuestNode(name: String) extends Node {
    override def kind: NodeType = QuestNode
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = state + GameState.mk(WorldState(name), this)
  }

  trait Path {
    def source: Node
    def dest: Node
    def reqs: Seq[Requirement]
    def substitute(orig: Requirement, repl: Requirement): Path
    def and (other: Path): Option[Path] = {
        this match {
          case chain: ChainedPath => chain.compose(other)
          case _ => ChainedPath(Seq(this)).compose(other)
        }
    }
    def nodes = Set(source, dest)
  }
  object Path {
    def filterFar(paths: Set[Path], nodes: Set[Node], far: Int): Set[Path] = {paths.filter({
      case _: SimplePath => true
      case ChainedPath(links) if links.size < far+1 => true
      case ChainedPath(links)  => nodes.contains(links.reverseIterator.drop(far).next().dest)
    })}
    def filterByTargets(paths: Set[Path], targets: Set[Node]): Set[Path] = {paths.filter(_.nodes.forall(n => targets.contains(n)))}
  }

  case class EmptyPath(loc: Node) extends Path {
    override def source: Node = loc
    override def dest: Node = loc
    override def reqs: Seq[Requirement] = Seq(Free)
    override def substitute(orig: Requirement, repl: Requirement): Path = this
  }

  case class SimplePath(source: Node, dest: Node, req: Requirement) extends Path {
    override def reqs: Seq[Requirement] = Seq(req)
    override def toString: String = s"${source.name}=>$req=>${dest.name}"
    override def substitute(orig: Requirement, repl: Requirement): Path = SimplePath(source, dest, req.substitute(orig, repl))
  }
  case class ChainedPath(paths: Seq[Path]) extends Path {
    def source: Node = paths.head.source
    def dest: Node = paths.last.dest
    override def nodes: Set[Node] = (source +: paths.map(_.dest)).toSet
    override def reqs: Seq[Requirement] = paths.flatMap(_.reqs)
    override def toString: String = paths.foldLeft(source.name)((acc, p) =>  s"$acc=>${p.reqs}=>${p.dest.name}")
    def canCompose(other: Path): Boolean = other match {
      case SimplePath(s, d, _) => s == dest && !nodes.contains(d) // must link, no loops
      case EmptyPath(loc) => loc == dest
      case c: ChainedPath => c.source == dest && !c.paths.exists(child => nodes.contains(child.dest)) // must link, no loops
    }
    def compose(other: Path): Option[Path] =  if(canCompose(other)) Some(other match {
        case _: EmptyPath => this
        case p: SimplePath   =>  ChainedPath(paths :+ p)
        case ChainedPath(ps) =>  ChainedPath(paths ++ ps)
    }) else None
    override def substitute(orig: Requirement, repl: Requirement): Path = ChainedPath(paths.map(_.substitute(orig, repl)))
  }

  object Nodes {
    def areas: Map[String, Area] = {
      if (_areas.isEmpty) populate()
      _areas
    }
    def paths: Map[Node, Set[Path]] = {
      if (_paths.isEmpty) populate()
      _paths
    }

    def items: Map[String, ItemLoc] = {
      if (_items.isEmpty) populate()
      _items
    }

    def all: Set[Node] = {
      if (_paths.isEmpty) populate()
      _paths.keySet
    }
    val doors: Map[String, Int] = Map[String, Int](
      "MarshSpawn.KeystoneDoor" -> 2,
      "MidnightBurrows.KeystoneDoor" -> 4,
      "HowlsDen.KeystoneDoor" -> 2,
      "UpperPools.KeystoneDoor" -> 4,
      "WoodsEntry.KeystoneDoor" -> 2,
      "WoodsMain.KeystoneDoor" -> 4,
      "LowerReach.KeystoneDoor" -> 4,
      "UpperReach.KeystoneDoor" -> 4,
      "UpperDepths.EntryKeystoneDoor" -> 2,
      "UpperDepths.CentralKeystoneDoor" -> 2,
      "UpperWastes.KeystoneDoor" -> 2,
    )

    def pathByName(name: String): Option[(Node, Set[Path])] = paths.find(_._1.name == name)

    def getReachable(inv: Inv, flags: Set[FlagState]= Set(), itemsOnly: Boolean = true): (Set[Node], Set[FlagState]) = {
      Timer("getReachable"){
        var oldFlags = flags
        var state = spawn.reached(GameState(inv, flags), areas)
        Timer("getReachableRecursion") {
          while (oldFlags != state.flags) {
            oldFlags = state.flags
            state = spawn.reached(GameState(inv, oldFlags), areas)
          }
        }
        if(itemsOnly)
          return (state.reached.flatMap(node => items.get(node.name)), state.flags)
        (state.reached, state.flags)
      }
    }

    var _areas: Map[String, Area] = Map()
    var _items: Map[String, ItemLoc] = Map()
    var _paths: Map[Node, Set[Path]] = Map()


    def getAllPathsRecursive(area: Area = spawn, pathsToHere: Set[Path] = Set()): Map[Node, Set[Path]] = {
      val seen = pathsToHere.flatMap(_.nodes.map(_.name))
      def pathAcc(p: Path): Set[Path] = if(pathsToHere.nonEmpty) pathsToHere.flatMap(_ and p) else Set(p)
      area.paths.flatMap(path => path.dest.kind match {
        case AreaNode if !seen.contains(path.dest.name) => _areas.get(path.dest.name).map(getAllPathsRecursive(_, pathAcc(path))).getOrElse({UI.log("aaaaaa"); Map[Node, Set[Path]]()})
        case _ => Map(path.dest -> pathAcc(path))
      }).groupMapReduce(_._1)(_._2)(_ ++ _)
    }

    def keystonesRequired(nodes: Set[Node]): Int = {
      doors.foldLeft(0)({case (acc, (name, keys))=> acc + (if(pathByName(name).exists(_._2.exists({
        case SimplePath(src, _, _) => nodes.contains(src)
        case ChainedPath(paths) => nodes.contains(paths.last.source)
      }))) keys else 0)})
    }


    def stateCosts(items: Inv, reached: Set[Node], flags: Set[FlagState], targets: Set[Node]): (Map[FlagState, GameState], Map[FlagState, GameState]) = Timer(s"stateCosts"){
        val state = GameState(items, flags)
        @scala.annotation.tailrec
        def refineRecursive(good: Map[FlagState, GameState], hasFlags: Map[FlagState, GameState]): (Map[FlagState, GameState], Map[FlagState, GameState]) = {
          val (newGood, newFlags) = (hasFlags.view.mapValues(s => s.flags.foldLeft(GameState(s.inv))((acc, flag) => acc + (if(flags.contains(flag)) GameState.Empty else good.getOrElse(flag, GameState.mk(flag)))))
            ++ good).toMap.partition(_._2.flags.isEmpty)
          if(newGood.size != good.size) {
            refineRecursive(newGood, newFlags)
          } else
            (newGood, newFlags)
        }
      val (good, needsRefined) = targets.withFilter(_.kind == StateNode).flatMap[(FlagState, GameState)]({
        case WorldStateNode(flag) if flags.contains(WorldState(flag)) => Some(WorldState(flag) -> GameState.Empty)
        case QuestNode(flag) if flags.contains(WorldState(flag)) => Some(WorldState(flag) -> GameState.Empty)
        case n @ WorldStateNode(flag) => Path.filterByTargets(paths(n), targets ++ reached).map(k => AllReqs(k.reqs).cheapestRemaining(state)).minByOption(_.cost).map(WorldState(flag) -> _)
        case n @ QuestNode(flag) => Path.filterByTargets(paths(n), targets ++ reached).map(k => AllReqs(k.reqs).cheapestRemaining(state)).minByOption(_.cost).map(WorldState(flag) -> _)
      }).filterNot(_._2.inv.has(Unobtainium)).toMap.partition(_._2.flags.isEmpty)
      Timer("stateCosts.refineRecursive")(refineRecursive(good, needsRefined))
    }

    def fixAreas(areas: Map[String, Area]): Map[String, Area] = {
      val locDataByName = LocData.byName
      areas.values.map(area => area.name -> Area(area.name, area.conns.flatMap({
            // TODO: FIXME?
        case Connection(target: Placeholder, Seq()) if target.kind == ItemNode => UI.log(target.name); None
        case Connection(target: Placeholder, reqs) if target.kind == ItemNode => ItemLoc.mk(target.name, locDataByName).map(Connection(_, reqs))
        case c @ Connection(QuestNode(name), reqs) => Seq(c) ++ ItemLoc.mk(name, locDataByName).map(Connection(_, reqs))
        case c => Some(c)
      }), area.refillGroup)).toMap
    }

    var populatedWithSetting: Option[GenSettings] = None
    def populate(): Boolean = {
      if(populatedWithSetting.contains(UI.Options))
        return true // already done lol
      Timer("Path parsing", true) {
          FastParser.parseFile(advanced = UI.Options.unsafePaths) match {
            case Right(value) =>
              _areas = Timer("FixAreas")(fixAreas(value))
              _items = _areas.flatMap(_._2.conns.collect({ case Connection(t: ItemLoc, r) if r.nonEmpty => t.name -> t }))
              _paths = Timer("GetPaths") {
                getAllPathsRecursive()
              }
              populatedWithSetting = Some(UI.Options)
              true
            case Left(error) =>
              UI.log(error)
              false
          }
      }
    }
    def spawn: Area = areas("MarshSpawn.Main")
  }

  trait Placement {
    def loc: ItemLoc
    def item: Item
    def code: String = loc.data.code
    def data = s"${loc.data.code}|${item.code}"
    def write: String = {
      if(!UI.Options.spoilers)
        return data
//      Tracking.incAreas(item, loc.data)
      val dataPad = " " * (22 - data.length)
      val namePad = " " * (18 - item.name.length)
      s"$data$dataPad//$namePad${item.name} from ${loc.data.info}"
    }
    override def toString: String = s"$item at $loc"
  }
  case class ItemPlacement(item: Item, loc: ItemLoc) extends Placement

  case class ShopPlacement(item: Merch, loc: ItemLoc)(implicit r: Random) extends Placement {
    override val data = s"${loc.data.code}|${item.code}|${r.between(-30, 20)/100f}"
  }

  case class GeneratorError(message: String) extends Error {
    override def toString: String = s"GeneratorError: $message"
  }

  case class PlacementGroup(outState: GameState, prog: Inv, placements: Seq[Placement], i: Int)(implicit r: Random, pool: Inv, debug: Boolean = false) {
    def desc(standalone: Boolean = false): String = {
      if(!UI.Options.spoilers)
        return ""
      if(standalone)
        return placements.collect({
          case p @ ItemPlacement(i: Important, _) if prog.has(i) => s"*${p.toString}"
          case p @ ShopPlacement(i: Important, _) if prog.has(i) => s"*${p.toString}"
          case p @ ItemPlacement(_: Important, _) => p.toString
          case p @ ShopPlacement(_: Important, _) => p.toString
        }).mkString("\n")

      val progText = if(prog.count > 0) s" -- Chosen: ${prog.progText}" else ""
      val keyItems = placements.map(_.item).filterNot(prog.has(_)).collect({case i: Important => i})
      val keyItemsText = if(keyItems.nonEmpty) s" -- Randomly Placed: ${keyItems.mkString(", ")}" else ""
      s"\n// Placement Group ${i+1}$progText$keyItemsText\n\n"
      // plcmnts.placements.map(_.item).filterNot(plcmnts.prog.has(_)
    }

    def done: Boolean = pool.isEmpty && Nodes.items.values.forall(outState.reached.contains)

    def write: String = desc() + placements.map(_.write).mkString("\n")
    def tryNext(): Either[GeneratorError, PlacementGroup] = {
      PlacementGroup.trymk(outState, i + 1)
    }
    def next():PlacementGroup = {
      PlacementGroup.mk(outState, i + 1)
    }
  }
  object PlacementGroup {
    def debugPrint(x: Any): Unit = UI.debug(x)
    def trymk(inState: GameState, i:Int=0)
             (implicit r: Random, pool: Inv, debug: Boolean = false): Either[GeneratorError, PlacementGroup] = Try {
      Timer("pg.mk")(mk(inState, i))
    }.toEither.left.map(
      {
        case e: GeneratorError => e
        case t: Throwable => val e = GeneratorError(t.getMessage)
          e.addSuppressed(t)
          e.setStackTrace(t.getStackTrace)
          e
      })
    def mk(inState: GameState, i:Int=0)(implicit r: Random, pool: Inv, debug: Boolean = false): PlacementGroup = {
      val (reachable, flags) = Nodes.getReachable(inState.inv, inState.flags, itemsOnly = false)
      val reachableLocs = reachable.flatMap[Node](node => Nodes.items.get(node.name))
      val state = inState + new GameState(Inv.Empty, flags)

      val locs = r.shuffle((reachableLocs -- state.reached).collect({ case n: ItemLoc => n }).toSeq)
      val count = pool.count
      val placed = inState.reached.collect({ case n: ItemLoc => n }).size
      if(count+placed != ItemPool.SIZE)
        UI.log(s"ERROR: $count + $placed != ${ItemPool.SIZE}")
      debugPrint(s"group $i: have ${locs.size} locs ($placed/${ItemPool.SIZE} placed already, have itempool size $count")

      if(locs.isEmpty)
        throw GeneratorError(s"no new locs (${reachableLocs.size} out of ${ItemPool.SIZE} reached)")
      val placements = MList[Placement]()
      def process(ps: Seq[Placement], prefix: String = ""): Unit =
        ps.foreach(p => {state.inv.add(p.item); placements.prepend(p); debugPrint(prefix + " " + p)})
      def assignRandom(itemLocs: Seq[ItemLoc]): Seq[Placement] = {
        val (shops, nonShops) = itemLocs.partition(_.data.category == "Shop")
          if(nonShops.size > pool.count - pool.merchToPop)
            throw GeneratorError(s"Won't have enough space? ${pool.merchToPop} ${pool.count} $itemLocs ${pool.asSeq}")
          shops.map(shop => ShopPlacement(pool.popMerch().getOrElse(throw GeneratorError(s"Shop randASS failure: ${pool.merchToPop} ${pool.count} $itemLocs ${pool.asSeq}")), shop)) ++
              nonShops.map(nonShop => ItemPlacement(pool.popRand.get, nonShop))
      }
      if(reachableLocs.size == ItemPool.SIZE) {
        process(assignRandom(locs), "rand: ")
        return PlacementGroup(state + new GameState(Inv.Empty, Set(), reachableLocs), Inv.Empty, placements.toSeq, i)
      }
      val ksNeeded = Math.max(0, Nodes.keystonesRequired(reachable) - state.inv(Keystone)) match { case 2 => 0; case n => n }
      val locsOpen = locs.size - ksNeeded
      if(ksNeeded > 0) {
        if(locsOpen < 0)
          throw GeneratorError(s"Need to place $ksNeeded keystones, but only ${locs.size} locs available...")
        val (shops, nonShops) = locs.take(ksNeeded).partition(_.data.category == "Shop")
        val ksPlc = shops.map(shop => {pool.merchToPop-=1; ShopPlacement(Keystone, shop)}) ++ nonShops.map(nonShop => ItemPlacement(Keystone, nonShop))
        pool.take(Keystone, ksPlc.size)
        process(ksPlc, "KS: ")
        if(locsOpen == 0)  {
          val (newReach, _) = Nodes.getReachable(state.inv, flags)
          val newCount = (newReach -- reachableLocs).collect({ case n: ItemLoc => n }).size
          debugPrint(s"reachables after KS, got $newCount")
          if(newCount > 0 || newReach.collect({ case n: ItemLoc => n }).size == ItemPool.SIZE)
            return PlacementGroup(state + new GameState(Inv.Empty, Set(), reachableLocs), Inv.Empty, placements.toSeq, i)
          else
            throw GeneratorError(s"Placed $ksNeeded into exactly that many locs, but failed to find a reachable after")
        }
      }

      val locIter = locs.drop(ksNeeded).iterator
      val reservedForProg = (1 to (locsOpen match {
        // if random placement doesn't open something (and it often won't), we gotta place something. Reserve item slots for it so we aren't in trouble
        case n if n < 3 => n  // pick how many slots to save by how big the pool is.
        case n if n < 5 => 2  // ideally we'd like 2?
        case n if n < 10 => 4 // tweak if necessary
        case n if n < 15 => 6
        case _ => 8
      })).map(_ => locIter.next())
      debugPrint(s"reserving ${reservedForProg.size}: $reservedForProg")
      val randPlacements = assignRandom(locIter.toSeq)
      process(randPlacements, "rand: ")
      if(randPlacements.nonEmpty) {
        val (newReach, _) = Nodes.getReachable(state.inv, flags)
        val newCount = (newReach -- reachableLocs).collect({ case n: ItemLoc => n }).size
        debugPrint(s"checked new reachables, got $newCount")
        if(newCount > reservedForProg.size || newReach.collect({ case n: ItemLoc => n }).size == ItemPool.SIZE)
          return PlacementGroup(state + new GameState(Inv.Empty, Set(), reachableLocs -- reservedForProg), Inv.Empty, placements.toSeq, i)
    }

      def getProgressionPath(sizeLeft: Int, far: Int = 5): Inv = Timer(s"getProgPath"/*, far=$far"*/){
        val remaining = ItemPool.SIZE - reachableLocs.size
        if(remaining == 0)
          return Inv.Empty

        var _fullWeight = 0d
        val targets = reachable.flatMap(_.nearby(far, ignore=reachable)).groupMapReduce(_._1)(_._2)(_ ++ _)
        val (flagRemaining, unaffordableMap) = Nodes.stateCosts(state.inv, reachable, flags, targets.keySet)
        val unaffordable = unaffordableMap.keySet
        implicit val flagCosts: Map[FlagState, Double] = flagRemaining.view.mapValues(_.cost(state.flags.map(_ -> 0d).toMap)).toMap

        def acc(st: GameState, multiplier: Double = 1.0): Double = {
          if(!st.cost.isFinite || st.inv.count == 0) {
            debugPrint(s"What? $st")
            return 0
          }
          _fullWeight += multiplier * (1 / st.inv.cost)
          debugPrint(s"$st->${1 / st.inv.cost} * $multiplier -> ${_fullWeight}")
          _fullWeight
        }

        debugPrint(s"Looking for paths. Have $sizeLeft new locs. Need to reach $remaining more")
        val possiblePaths = Timer(s"possiblePathsPartial"/*, far=$far"*/){targets
          .filter({case (_: ItemLoc, _) => true; case _ => false})
          .map({
            case (node, _) if r.nextFloat() > .90 => node -> Path.filterFar(Nodes.paths(node), reachable, far)
            case a => a
          })
          .flatMap(n => Timer("filterAndGetReqs")(n._2.flatMap(k => AllReqs(k.reqs).remaining(state, unaffordable, sizeLeft))))
          .toSeq
          .distinct
          .map[GameState](state => GameState(state.inv) +
            state.flags.map(flag => flagRemaining.getOrElse(flag, GameState.mk(flag))).fold(GameState.Empty)(_ + _)
          )
          .distinct
          .filter(s => // a state can be valid progression IF
            s.flags.isEmpty &&         // it has no flag reqs
            s.inv.count > 0 &&         // and is not empty
            s.inv.count <= sizeLeft && // but can still fit
            s.inv.forall({case (i, c) => pool.has(i, c)})) // and doesn't need anything that isn't in the pool
        }
          .groupBy(_.inv.head._1).map(_._2.minBy(_.inv.cost))
          .map((s: GameState) => s -> (Nodes.getReachable(state.inv + s.inv, state.flags)._1 -- reachableLocs).size)
          .collect({
            case (items, n) if n >= Math.min(3, remaining) => (acc(items), items)
            case (items, n) if n > 0 => (acc(items, .3*n), items)
        })
        debugPrint(s"$i, targets=${targets.size}, paths: ${possiblePaths.size}")
        if(possiblePaths.isEmpty) {
          if(far < 5) {
            UI.log(s"INFO: group $i: failed at far=$far, looking deeper")
            return getProgressionPath(sizeLeft, far+1)
          }
          UI.log(s"pool: $pool")
          UI.log(s"inv: ${state.inv}")
          UI.log(s"Had $sizeLeft slots")

/*          var possiblePathsPruned = possiblePathsPartial.filter(s => s.inv.count == 1 || !singles.exists(s.inv.has(_)))
          val tooBig = possiblePathsPruned.filterNot(_.inv.count <= sizeLeft)
          if(tooBig.nonEmpty)
            UI.log("too big:\n" + tooBig.mkString("\n"))
          possiblePathsPruned = possiblePathsPruned.filter(_.inv.count <= sizeLeft)
          val flagProb = possiblePathsPruned.filterNot(_.flags.forall(state.flags.contains))
          if(flagProb.nonEmpty) {
            UI.log("flags:\n" + flagProb.map(s => (s.flags, s.flags -- flags)).mkString("\n"))
            UI.log("remaining:" + flagRemaining.filter(_._2 != GameState.Empty))
            UI.log("unreachable:" + unaffordable)
          }*/
          (Nodes.items.values.toSet[Node] -- reachableLocs).take(3).foreach(n => {
            UI.log(s"${n.name}: \n\t${Nodes.paths(n).take(3).map(k => AllReqs(k.reqs).cheapestRemaining(state)).mkString("\n\t")}")
          })

          throw GeneratorError(s"No possible paths???")
        }
        val limit = r.nextDouble() * _fullWeight
        val chosenPath = possiblePaths.dropWhile(_._1 < limit).headOption.getOrElse(possiblePaths.last)._2.inv
        debugPrint(s"choose $limit: $chosenPath")
        chosenPath
      }
      val progPath = getProgressionPath(reservedForProg.size, if(reachableLocs.size > 50) 2 else 5 )
      val (progLocs, remaining) = reservedForProg.splitAt(progPath.count)
      process(progPath.asSeq.zip(progLocs).map({
            // this might seem sketch but it's almost literally always impossible
            // for a progression item not to be Merch
        case (item: Merch, shop) if shop.data.category == "Shop" =>
          pool.take(item)
          pool.merchToPop-=1
          ShopPlacement(item, shop)
        case (item, nonShop) =>
          pool.take(item)
          ItemPlacement(item, nonShop)
      }), "prog: ")
      PlacementGroup(state + new GameState(Inv.Empty, Set(), reachableLocs -- remaining), progPath, placements.toSeq, i)
    }
  }



object Runner {
    def setSeed(n: Long): Unit = r.setSeed(n)
    val DEFAULT_INV: GameState = GameState(new Inv(Health -> 6, Energy -> 6, Sword -> 1))
    private def mkSeed(advanced: Boolean = false)(implicit debug: Boolean = false) = {
      implicit val pool: Inv = ItemPool.build()
      recurse()
    }
    def single(implicit debug: Boolean = false): PlacementGroup = {
      implicit val pool: Inv = ItemPool.build()
      PlacementGroup.mk(DEFAULT_INV)
    }
    @scala.annotation.tailrec
    def recurse(grps: Seq[PlacementGroup] = Seq(), startState: GameState = DEFAULT_INV)(implicit pool: Inv, debug: Boolean = false): (Seq[PlacementGroup], Option[GeneratorError]) = {
      grps.lastOption.map(_.tryNext()).getOrElse({
      PlacementGroup.trymk(DEFAULT_INV)
    }) match {
      case Right(next) if next.done => (grps :+ next, None)
      case Right(next) => recurse(grps :+ next)
      case Left(error) =>(grps, Some(error))
    }
}
    def getSeedOpt(advanced: Boolean = false, debug: Boolean = false): Option[String] = {
      val (grps, err) = mkSeed(advanced)(debug)
      err match {
        case Some(e)  => UI.log(s"$e"); None
        case None     => Some(UI.flagLine + grps.map(plcmnts => plcmnts.write).mkString("\n").drop(1).replace("\n", "\r\n"))
      }
    }
    def seedProg(advanced: Boolean = false, debug: Boolean = false): Option[String] = {
      val (grps, err) = mkSeed(advanced)(debug)
      err match {
        case Some(e)  => UI.log(s"$e"); None
        case None     => Some(grps.map(grp => grp.desc(true)).mkString("\n"))
      }
    }
    def forceGetSeed(advanced: Boolean = false, retries: Int = 10, debug: Boolean = false, time: Boolean = true): String = {
      if(retries == 0)
        throw GeneratorError("Ran out of retries on forceGetSeed")
      val t0 = System.currentTimeMillis()
      val s = getSeedOpt(advanced, debug) match {
        case Some(seed) => seed
        case None       => forceGetSeed(advanced, retries-1, debug, time = false)
      }
      val t1 = System.currentTimeMillis()
      if(time)
        UI.log(s"Generated seed in ${(t1-t0)/1000f}s")
      s
    }
    def apply(advanced: Boolean = false, debug: Boolean = false, writeTo: File = new File("seeds/seed_0.wotwr")): Unit = {
      Nodes.populate()

      val bw = new BufferedWriter(new FileWriter(writeTo))
      bw.write(forceGetSeed(advanced, debug = debug))
      UI.log(s"Wrote seed to ${writeTo.getPath}")
      bw.close()
    }
  }

  object Main extends App {
    UI.show()
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
    def showTimes(): Unit = times.toSeq.sortBy(_._2).foreach(UI.log)
    def clear(): Unit = times.clear()
    def apply[R](name: String, printAfterEach: Boolean = false)(block: => R): R = {
      if(enabled) {
        val t0 = System.currentTimeMillis()
        val result = block    // call-by-name
        val t1 = System.currentTimeMillis()
        times(name) = times.getOrElse(name, 0L) + (t1-t0)
        if(printAfterEach)
          UI.log(s"$name: " + (t1 - t0) + "ms")
        return result
      }
      block
    }
  }
  object ItemPool {
    def SIZE: Int = Nodes.items.size
    def build(size: Int = SIZE)(implicit r: Random): Inv = {
      val pool = new Inv(Health -> 24, Energy -> 24, Ore -> 40, ShardSlot -> 5, Keystone -> 32) +
        Inv.mk(WorldEvent.poolItems ++ Shard.poolItems ++ Skill.poolItems ++ Teleporter.poolItems:_*)
      while(pool.count < size) pool.add(SpiritLight(r.between(75, 175)))
      pool.merchToPop = Nodes.items.values.count(_.data.category == "Shop")
      pool
    }
  }
}