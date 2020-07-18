import java.io.{BufferedWriter, File, FileWriter}

import scala.collection.mutable.{ListBuffer => MList, Map => MMap, Set => MSet}
import scala.io.Source
import scala.language.implicitConversions
import scala.util.{Failure, Random, Success, Try}

package SeedGenerator {

  //  these are fine
  object implicits {
    implicit class RegexOps(sc: StringContext) {
      def r = new util.matching.Regex(sc.parts.mkString, sc.parts.tail.map(_ => "x"): _*)
    }
    implicit class ReqOps(reqs: Seq[Requirement]) { // TODO; fix or delete
      def sortByConsumption: Seq[Requirement] = reqs //Timer("sort")(reqs.sortBy(_.children.map(_.orbsUsed()).map(_.value).sum))
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
      pickups
    }
    def byName: Map[String, LocData] = all.map(data => s"${data.area}.${data.name}" -> data).toMap
  }
  trait Refiller {
    def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs
  }
  trait Adder extends Refiller
  trait Setter extends Refiller
  case object Well extends Setter {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs = inv.orbs // full refill
  }
  case object Checkpoint extends Setter  {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs = Orbs(
      health = inv.orbs.health match { // Checkpoints are terrible; Math.floor((x/5)/0.6685+1)
        case i if i < 45 => i
        case i if i < 135 => 40
        case i if i < 235 => Math.floor((i.toFloat/5)/0.6685+1).toInt
        case _ => 70
      },
      energy = 10*(inv.orbs.energy / 50 + 1))
  }
  case class HealthPlants(count: Int = 1) extends Refiller with Adder {
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
  case class EnergyCrystals(count: Int = 1) extends Refiller with Adder {
    override def apply(inv: Inv, prior: Orbs = Orbs(0, 0)): Orbs = Orbs(prior.health, Math.min(inv.orbs.energy, prior.energy + count*10))
  }

  case class RefillGroup(setter: Option[Setter], adders: Map[Requirement, Adder]) {
    def apply(state: GameState, prior: Orbs = Orbs(0, 0)): Orbs = {
      val set = setter.map(_.apply(state.inv, prior)).getOrElse(prior)
      if(set == state.inv.orbs)
        set
      else
        adders.collect{case (req, adder) if req.metBy(state) => adder(state.inv, req.orbsAfterMet(state, prior))}.fold(set)(_ + _).min(state.inv.orbs)
    }
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
      case AreaNode => Nodes.areas.getOrElse(name, {UI.log(s"Error: unknown area name $this") ; this})
      case ItemNode => Nodes.items.getOrElse(name, {UI.log(s"Error: unknown item name $this") ; this})
      case _ =>
        UI.log(s"Warning: couldn't resolve $this")
        this
    }
    override def reached(curr: GameState, orbs: Orbs): Unit = Nodes.areas.get(name) match {
        case Some(n: Node) if n.kind == kind => n.reached(curr, orbs)
        case Some(x) => UI.log(s"Warning: $x was of unexpected type!")
        case None =>UI.log(s"Warning: $name not in nodes!")
    }
  }
    case class Area(name: String, _conns: Seq[Connection] = Seq(), refillGroup: RefillGroup) extends Node {
      // TODO: FIXME
      val conns: Seq[Connection] = _conns.filter(_.reqs.nonEmpty)
      override val kind: NodeType = AreaNode
      override def reached(curr: GameState, orbs: Orbs): Unit = {
        val orbsAfter = refillGroup(curr, orbs)
        super.reached(curr, orbs)
        Nodes.reachCache(this) = AreaTraversalInfo(orbsAfter, Set()) // no loops
        val didntReach = conns.flatMap({
          case Connection(p @ Placeholder(_, AreaNode), _) if Nodes.reachCache.contains(p.res.asInstanceOf[Area]) => None
          // TODO: FIXME
          case Connection(target, reqs) =>
            val s = curr + GameState(Inv.Empty, Nodes.states.toSet)
//            val met2 = reqs.filter(r => r.metBy(s))
            val met = reqs.filter(r => r.metBy(s, Some(orbsAfter))).map(r => r.orbsAfterMet(s, orbsAfter))
            if(met.nonEmpty) {
              target.reached(s, met.maxBy(_.value))
              None
            } else {
/*              if(met2.nonEmpty)
              println(s"$name: couldn't reach ${target.name}")*/
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
    def mk(name: String, src: Map[String, LocData]): Option[ItemLoc] = src.get(name).map(ItemLoc(name, _))
      .orElse({
          UI.debug(s"pickup $name not found in loc_data.csv")
        None
      }) match {
    case Some(ItemLoc(name, l)) if !UI.opts.flags.noHints && (l.value == "LupoZoneMap" || name == "OpherShop.WaterBreath") => None
    case Some(ItemLoc(_, l)) if !UI.opts.questLocs && l.category == "Quest" => None
    case Some(ItemLoc(name, _)) if !UI.opts.flags.noKSDoors && name == "OpherShop.Sentry" =>/* UI.log(s"Filtered out $name");*/ None
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
      if(UI.opts.flags.noKSDoors)
        return 0
      val relevantNodes = nodes.collect{case a: Area => a}.intersect(connectedToDoors)
      doors.foldLeft(0)({case (acc, (name, keys))=> acc + (if(relevantNodes.exists(_.conns.exists(_.target.name == name))) keys else 0)})
    }

    def fixAreas(areas: Map[String, Area]): Map[String, Area] = {
      val locDataByName = LocData.byName
      areas.values.map(area => area.name -> Area(area.name, area.conns.flatMap(c => {
        if(doors.contains(c.target.name))
          _connectedToDoors.add(area)
      c match {
            // TODO: FIXME?
        case Connection(Placeholder(name, _), Seq()) => UI.log(s"Warning: only empty paths from ${area.name} to $name"); None
        case Connection(Placeholder(name, ItemNode), reqs) => ItemLoc.mk(name, locDataByName).map(Connection(_, reqs))
        case Connection(Placeholder(name, AreaNode), _) if !areas.contains(name)  => UI.log(s"Warning: ignoring path from ${area.name} to unknown area $name"); None
        case c @ Connection(QuestNode(name), reqs) => Seq(c) ++ ItemLoc.mk(name, locDataByName).map(Connection(_, reqs))
        case c => Some(c)
      }}), area.refillGroup)).toMap
    }

    var populatedWithSetting: Option[GenSettings] = None
    def populate(): Boolean = {
      if(populatedWithSetting.contains(UI.opts))
        return true // already done lol
      Timer("Path parsing", printAfterEach = true) {
          FastParser.parseFile(advanced = UI.opts.unsafePaths) match {
            case Right(value) =>
              UI.debug(s"parse done ${value.size} areas")
              _areas = Timer("FixAreas")(fixAreas(value))
              _items = _areas.flatMap(_._2.conns.collect({ case Connection(t: ItemLoc, r) if r.nonEmpty => t.name -> t }))
              UI.debug(s"items done ${_items.size} items")
              populatedWithSetting = Some(UI.opts)
              true
            case Left(error) =>
              UI.log(error)
              false
          }
      }
    }
    def spawn: Area = areas("MarshSpawn.Main")
    val reachCache: MMap[Area, AreaTraversalInfo] = MMap.empty[Area, AreaTraversalInfo]
    val haveReached: MSet[Node] = MSet.empty[Node]
    val states: MSet[FlagState] = MSet.empty[FlagState]
    def reached(s: GameState)(implicit preplc: MMap[ItemLoc, Placement]): (GameState, Set[Placement]) = Timer("Reached"){
      val(rs, plcs) = Nodes.reachedRec(s, Set())
      if(plcs.nonEmpty) {
        UI.debug(s"new placements after reachable search: $plcs")
      }
      (rs, plcs)
    }

    @scala.annotation.tailrec
    def reachedRec(s: GameState, plcs: Set[Placement] = Set())(implicit preplc: MMap[ItemLoc, Placement]): (GameState, Set[Placement]) = {
      reachCache.clear()
      haveReached.clear()
      states.clear()
      var stateCount = 0
      def fullState: GameState  = s.noReached + GameState(Inv.Empty, states.toSet, haveReached.toSet)
      spawn.reached(fullState, Orbs(0,0))
      do {
        stateCount = states.size
        reachCache.mapValuesInPlace({case (_, rr) => rr.copy(couldConnect = rr.couldConnect -- haveReached)})
        reachCache.foreach{
          case (a, AreaTraversalInfo(orbs, s)) if s.nonEmpty => a.reached(fullState, orbs)
          case _ =>
        }
      } while(stateCount < states.size)
      reachCache.mapValuesInPlace({case (_, rr) => rr.copy(couldConnect = rr.couldConnect -- haveReached)}) // not sure if this is needed
      reachCache.subtractAll(reachCache.collect{case (a, AreaTraversalInfo(_, s)) if s.isEmpty => a})
      val reached_placements = preplc.keySet.intersect(haveReached.collect({case i: ItemLoc => i}))
      if(reached_placements.nonEmpty) {
        val new_placements = plcs ++ reached_placements.map(l => preplc(l))
        val partialState =  s.noReached + GameState(new Inv(new_placements.map(_.item -> 1).toSeq:_*), states.toSet, haveReached.toSet)
        preplc.subtractAll(new_placements.map(_.loc))
        Nodes.reachedRec(partialState, new_placements)
      } else
        (fullState, plcs)
    }
    def getProgressionPaths(instate: GameState, spaceRemaining: Int = 999)(implicit pool: Inv): MSet[(GameState, Set[ItemLoc])] = {
      val items = instate.items
      val states = MSet.empty[GameState]
      reachCache.foreach { case (area, AreaTraversalInfo(_, targets)) => area.conns.filter(c => targets.contains(c.target.res)).foreach(_.reqs.foreach(r => {
        r.remaining(instate, space = spaceRemaining).filter(s => s.flags.isEmpty && s.inv.nonEmpty).foreach(states.add)
      }))}

      val paths = states
        .filterNot(_.inv.count > spaceRemaining)
        .filter(_.inv.forall({case (i, c) => pool.has(i, c)}))
        .map(i => i -> (Nodes.reached(instate + i)(MMap())._1.items -- items)).filter(_._2.nonEmpty)
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
    def write: String = {
      if(!UI.opts.spoilers)
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

  case class PlacementGroup(
    outState: GameState,
    prog: Inv,
    placements: Seq[Placement],
    i: Int,
    parent: Option[PlacementGroup] = None
  )(implicit r: Random, pool: Inv, preplc: MMap[ItemLoc, Placement] = MMap()) {
    def desc(standalone: Boolean = false): String = {
      if (!UI.opts.spoilers)
        return ""
      if (standalone)
        return placements.collect({
          case p@ItemPlacement(i: Important, _) if prog.has(i) => s"*${p.toString}"
          case p@ShopPlacement(i: Important, _) if prog.has(i) => s"*${p.toString}"
          case p@ItemPlacement(_: Important, _) => p.toString
          case p@ShopPlacement(_: Important, _) => p.toString
        }).mkString("\n")

      val progText = if (prog.count > 0) s" -- Chosen: ${prog.progText}" else ""
      val keyItems = Inv.mk(placements.map(_.item).filterNot(prog.has(_)).collect({ case i: Important => i }): _*)
      val keyItemsText = if (keyItems.nonEmpty) s" -- Randomly Placed: ${keyItems.progText}" else ""
      s"\n// Placement Group ${i + 1}$progText$keyItemsText\n\n"
      // plcmnts.placements.map(_.item).filterNot(plcmnts.prog.has(_)
    }

    def done: Boolean = pool.isEmpty && Nodes.items.values.forall(outState.reached.contains)

    def allPlacements: Set[Placement] = parent.map(_.allPlacements).getOrElse(Set()) ++ placements

    def write: String = desc() + placements.map(_.write).mkString("\n")

    def tryNext(): Either[GeneratorError, PlacementGroup] = PlacementGroup.trymk(outState, i + 1, Some(this))

    def next(): PlacementGroup = PlacementGroup.mk(outState, i + 1, Some(this))
  }
  object PlacementGroup {
    def debugPrint(x: Any): Unit = UI.debug(x)
    def trymk(inState: GameState, i:Int = 0, parent: Option[PlacementGroup] = None)
             (implicit r: Random, pool: Inv, preplc: MMap[ItemLoc, Placement] = MMap()): Either[GeneratorError, PlacementGroup] = Try {
      Timer("pg.mk")(mk(inState, i, parent))
    }.toEither.left.map(
      {
        case e: GeneratorError => e
        case t: Throwable => val e = GeneratorError(t.getMessage)
          e.addSuppressed(t)
          e.setStackTrace(t.getStackTrace)
          e
      })
    def mk(inState: GameState, i:Int = 0, parent: Option[PlacementGroup] = None)(implicit r: Random, pool: Inv, preplc: MMap[ItemLoc, Placement] = MMap()): PlacementGroup = {
      val (state, preplaced) = Nodes.reached(inState)
      val placements = MList[Placement]() ++ preplaced
      def process(ps: Seq[Placement], prefix: String = ""): Unit =
        ps.foreach(p => {state.inv.add(p.item); placements.prepend(p)})
      val reachableLocs = state.items
      val locsWithItems = (parent.map(_.allPlacements).getOrElse(Set()) ++ placements).map(_.loc)
      val freeLocs = r.shuffle((reachableLocs -- locsWithItems).toSeq)
      val count = pool.count + preplc.size
      val placed = locsWithItems.size
      if(count+placed != ItemPool.SIZE)
        UI.log(s"ERROR: $count + $placed != ${ItemPool.SIZE}")
      debugPrint(s"group $i: have ${freeLocs.size} locs ($placed/${ItemPool.SIZE} placed already, have itempool size $count)")

      if(freeLocs.isEmpty)
        throw GeneratorError(s"no new locs (${reachableLocs.size} out of ${ItemPool.SIZE} reached)")
      def assignRandom(itemLocs: Seq[ItemLoc]): Seq[Placement] = {
        val (shops, nonShops) = itemLocs.partition(_.data.category == "Shop")
          if(nonShops.size > pool.count - pool.merchToPop)
            throw GeneratorError(s"Won't have enough space? ${pool.merchToPop} ${pool.count} $itemLocs ${pool.asSeq}")
          shops.map(shop => ShopPlacement(pool.popMerch().getOrElse(throw GeneratorError(s"Shop randASS failure: ${pool.merchToPop} ${pool.count} $itemLocs ${pool.asSeq}")), shop)) ++
              nonShops.map(nonShop => ItemPlacement(pool.popRand.get, nonShop))
      }
      if(reachableLocs.size == ItemPool.SIZE) {
        process(assignRandom(freeLocs), "rand: ")
        return PlacementGroup(state, Inv.Empty, placements.toSeq, i, parent)
      }
      val ksNeeded = Math.max(0, Nodes.keystonesRequired(state.reached) - state.inv(Keystone)) match { case 2 => 0; case n => n }
      val locsOpen = freeLocs.size - ksNeeded
      if(ksNeeded > 0) {
        if(locsOpen < 0)
          throw GeneratorError(s"Need to place $ksNeeded keystones, but only ${freeLocs.size} locs available...")
        val (shops, nonShops) = freeLocs.take(ksNeeded).partition(_.data.category == "Shop")
        val ksPlc = shops.map(shop => {pool.merchToPop-=1; ShopPlacement(Keystone, shop)}) ++ nonShops.map(nonShop => ItemPlacement(Keystone, nonShop))
        pool.take(Keystone, ksPlc.size)
        process(ksPlc, "KS: ")
        if(locsOpen == 0)  {
          val (newState, newPlc) = Nodes.reached(state)
          if(newPlc.nonEmpty) {
            UI.debug(s"Preplacements after KS placement: $newPlc")
            placements.prependAll(newPlc)
          }
          val newLocs = newState.items
          val newCount = (newLocs -- reachableLocs).size
          debugPrint(s"checking for reachables after KS, got $newCount")
          if(newCount > 0 || newLocs.size == ItemPool.SIZE)
            return PlacementGroup(state, Inv.Empty, placements.toSeq, i, parent)
          else
            throw GeneratorError(s"Placed $ksNeeded into exactly that many locs, but failed to find a reachable after")
        }
      }

      val locIter = freeLocs.drop(ksNeeded).iterator
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
        val (newState, newPlc) = Nodes.reached(state)
        if(newPlc.nonEmpty) {
          UI.debug(s"Preplacements after random placement: $newPlc")
          placements.prependAll(newPlc)
        }
        val newLocs = newState.items
        val newCount = (newLocs -- reachableLocs).size
        debugPrint(s"checking for reachables after random placement, got $newCount")
        if(newCount > reservedForProg.size || newLocs.size == ItemPool.SIZE)
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
          debugPrint(s"$st->${1 / st.inv.cost} * $multiplier -> $inc, total: ${_fullWeight}")
          _fullWeight
        }

        debugPrint(s"Looking for paths. Have $sizeLeft new locs. Need to reach $remainCount more")
        val possiblePaths = Timer(s"possiblePathsPartial"/*, far=$far"*/){
          val (progS, progP) = Nodes.reached(state)
          if(progP.nonEmpty) {
            UI.debug(s"Preplacements in gPP: $progP")
            placements.prependAll(progP)
          }
          Nodes.getProgressionPaths(progS, sizeLeft).toSeq
          .collect({
            case (items, n) if n.size >= Math.min(3, remainCount) => (acc(items), items)
            case (items, n) if n.nonEmpty => (acc(items, .3*n.size), items)
        })}

        if(possiblePaths.isEmpty) {
          UI.log(s"ERROR: uh oh!")
          UI.log(s"pool: $pool")
          UI.log(s"inv: ${state.inv}")
          UI.log(s"Had $sizeLeft slots")
          UI.log(s"Couldnt reach ${Nodes.items.values.toSet -- reachableLocs}")
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
          ShopPlacement(item, shop)
        case (item, nonShop) =>
          pool.take(item)
          ItemPlacement(item, nonShop)
      }), "prog: ")
      PlacementGroup(state, progPath, placements.toSeq, i, parent)
    }
  }



object Runner {
    def setSeed(n: Long): Unit = r.setSeed(n)
    def DEFAULT_INV: GameState = GameState(new Inv(Health -> 6, Energy -> 6)) + (
      if (UI.opts.flags.noSword)
        GameState.Empty
      else
        GameState(Inv.mk(Sword), Set(WorldState("Weapon"), WorldState("EnemyObstacle")))
      )
    private def mkSeed(implicit preplc: MMap[ItemLoc, Placement] = MMap()) = {
      implicit val pool: Inv = ItemPool.build()
      recurse()
    }
    def single(implicit preplc: MMap[ItemLoc, Placement] = MMap()): PlacementGroup = {
      implicit val pool: Inv = ItemPool.build()
      PlacementGroup.mk(DEFAULT_INV)
    }
    @scala.annotation.tailrec
    def recurse(grps: Seq[PlacementGroup] = Seq(), startState: GameState = DEFAULT_INV)(implicit pool: Inv, preplc: MMap[ItemLoc, Placement] = MMap()): (Seq[PlacementGroup], Option[GeneratorError]) = {
      grps.lastOption.map(_.tryNext()).getOrElse({
      PlacementGroup.trymk(DEFAULT_INV)
    }) match {
      case Right(next) if next.done => (grps :+ next, None)
      case Right(next) => recurse(grps :+ next)
      case Left(error) =>(grps, Some(error))
    }
}
    def getSeedOpt(implicit preplc: MMap[ItemLoc, Placement] = MMap()): Option[String] = {
      val (grps, err) = mkSeed
      err match {
        case Some(e)  => UI.log(s"$e"); None
        case None     => Some(UI.opts.flags.line + grps.map(plcmnts => plcmnts.write).mkString("\n").stripPrefix("\n").replace("\n", "\r\n"))
      }
    }
    def seedProg(standalone: Boolean = true): Option[String] = {
      val (grps, err) = mkSeed()
      err match {
        case Some(e)  => UI.log(s"$e"); None
        case None     => Some(grps.map(grp => grp.desc(standalone).replace("\n", "")).mkString("\n"))
      }
    }
    def forceGetSeed(retries: Int = 10, time: Boolean = true): String = {
      implicit val preplc = UI.getPreplcs
      if(retries == 0) {
        UI.log("Out of retries, exiting")
        throw GeneratorError("Ran out of retries on forceGetSeed")
      }
      val t0 = System.currentTimeMillis()
      val s = getSeedOpt match {
        case Some(seed) => seed
        case None       =>
          UI.log("Retrying...")
          forceGetSeed(retries-1, time = false)
      }
      val t1 = System.currentTimeMillis()
      if(time)
        UI.log(s"Generated seed in ${(t1-t0)/1000f}s")
      s
    }
    def apply(writeTo: File = new File("seeds/seed_0.wotwr")): Boolean = {
      Try {
        Nodes.populate()
        val bw = new BufferedWriter(new FileWriter(writeTo))
        bw.write(forceGetSeed())
        UI.log(s"Wrote seed to ${writeTo.getPath}")
        bw.close()
      } match {
        case Failure(e) => UI.log(e); false
        case _: Success[Unit] => true
      }
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
    def build(size: Int = SIZE)(implicit r: Random, preplc: MMap[ItemLoc, Placement] = MMap()): Inv = {
      val pool = new Inv(Health -> 24, Energy -> 24, Ore -> 40, ShardSlot -> 5, Keystone -> (if(UI.opts.flags.noKSDoors) 0 else 34)) +
        Inv.mk(WorldEvent.poolItems ++ Shard.poolItems ++ Skill.poolItems ++ Bonus.poolItems ++ Teleporter.poolItems:_*)
      while(pool.count < size) pool.add(SpiritLight(r.between(75, 175)))
      preplc.values.foreach(plc => pool.take(plc.item))
      pool.merchToPop = (Nodes.items.values.toSet -- preplc.keys).count(_.data.category == "Shop")
      pool
    }
  }
}