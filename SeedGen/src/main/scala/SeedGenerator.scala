import scala.util.parsing.input.Positional
import scala.collection.parallel.CollectionConverters._
import scala.collection.mutable.{Map => MMap, Set => MSet, ArrayDeque}
import scala.io.Source
import scala.util.Random
import scala.util.Try
package SeedGenerator {

  //  these are fine
  object implicits {
    implicit class RegexOps(sc: StringContext) {
      def r = new util.matching.Regex(sc.parts.mkString, sc.parts.tail.map(_ => "x"): _*)
    }
    // really, they're fine
    implicit def itemToPart(item: Item): Either[Item, Either[FlagState, Node]] = Left(item)
    implicit def flagToPart(flag: FlagState): Either[Item, Either[FlagState, Node]] = Right(Left(flag))
    implicit def nodeToPart(node: Node): Either[Item, Either[FlagState, Node]] = Right(Right(node))
    implicit val r = new Random()
  }
  import java.io.{BufferedWriter, File, FileWriter}

  import implicits._

  import scala.collection.{MapOps, immutable}
  trait Requirement {
    def metBy(state: GameState): Boolean
    def remaining(state: GameState = GameState.Empty): Seq[GameState]
    def cheapestRemaining(state: GameState = GameState.Empty): GameState = remaining(state)
      .minByOption(_.cost)
      .getOrElse(GameState.mk(Unobtainium))
    def afterMet(state: GameState): GameState = state
    def and(that: Requirement): Requirement = AllReqs(this, that)
    def or(that: Requirement): Requirement = AnyReq(this, that)
    def substitute(orig: Requirement, repl: Requirement): Requirement = if(this == orig) repl else this
    def children = Seq(this)
  }

  trait Consumer extends Requirement

  case class StateReq(flag: String) extends Requirement {
    def metBy(state: GameState): Boolean = state.flags.contains(WorldState(flag))
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(WorldState(flag)))
  }

  case class EventReq(eventCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has WorldEvent(eventCode)
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(WorldEvent(eventCode)))
    override def toString = s"${Skill.names.getOrElse(eventCode, s"Unknown World Event $eventCode")}"
  }

  case class SkillReq(skillCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has Skill(skillCode)
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(Skill(skillCode)))
    override def toString = s"${Skill.names.getOrElse(skillCode, s"Unknown Skill $skillCode")}"
  }

  case object Free extends Requirement {
    def metBy(state: GameState) = true
    def remaining(state: GameState) = Seq(GameState.Empty)

    override def and(that: Requirement): Requirement = that
    override def or(that: Requirement): Requirement = Free
  }

  case object Invalid extends Requirement {
    def metBy(state: GameState) = false
    def remaining(state: GameState) = Seq(GameState.mk(Unobtainium))
  }

  case class OreReq(count: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv(Ore) >= count
    def remaining(state: GameState) = Seq(GameState(new Inv(Ore -> Math.max(0, count - state.inv(Ore)))))
    override def and(that: Requirement): Requirement = that match {
      case OreReq(c) => OreReq(c+count)
      case r => AllReqs(this, r)
    }
  }

  case class CashReq(count: Int) extends Requirement with Consumer {
    def metBy(state: GameState): Boolean = state.inv.totalSpiritLight >= count
    override def afterMet(state: GameState) = state.withoutCash(count)
    // TODO: make this work good with forced progression picking haha
    def remaining(state: GameState) = if(metBy(state)) Seq() else Seq(GameState(new Inv(SpiritLight(count - state.inv.totalSpiritLight) -> 1)))
    override def and(that: Requirement): Requirement = that match {
      case CashReq(c) => CashReq(c+count)
      case r => AllReqs(this, r)
    }
  }

  case class EnergyReq(count: Int) extends Requirement with Consumer {
    def energy(state: GameState) = state.inv(Energy)/2f
    def metBy(state: GameState): Boolean = energy(state) >= count
    override def afterMet(state: GameState) = state.without(Energy, count*2)
    def remaining(state: GameState) = Seq(GameState(new Inv(Energy -> Math.max(0, 2*(count) - state.inv(Energy)))))
    override def and(that: Requirement): Requirement = that match {
      case EnergyReq(c) => EnergyReq(c+count)
      case r => AllReqs(this, r)
    }
  }
  case class DangerReq(damage: Int) extends Requirement with Consumer  {
    def health(state: GameState) = state.inv(Health) * 5
    def metBy(state: GameState): Boolean = health(state) > damage
    override def afterMet(state: GameState) = state.without(Health, Math.ceil((damage+1)/5f).intValue())
    def remaining(state: GameState) = Seq(GameState(new Inv(Health -> Math.max(0, Math.ceil((damage + 1 - health(state))/5f).intValue()))))
    override def and(that: Requirement): Requirement = that match {
      case DangerReq(d) => DangerReq(d+damage)
      case r => AllReqs(this, r)
    }
  }

  case class DamageReq(damage: Int) extends Requirement with Consumer {
    def health(state: GameState) = state.inv(Health) * 5
    def metBy(state: GameState): Boolean = health(state) > damage
    override def afterMet(state: GameState) = state.without(Health, Math.ceil((damage+1)/5f).intValue())
    def remaining(state: GameState) = Seq(GameState(new Inv(Health -> Math.max(0, Math.ceil((damage + 1 - health(state))/5f).intValue()))))
    override def and(that: Requirement): Requirement = that match {
      case DamageReq(d) => DamageReq(d+damage)
      case r => AllReqs(this, r)
    }
  }

  case class TeleReq(teleCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has Teleporter(teleCode)
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(Teleporter(teleCode)))
  }


  class AnyReq(val reqs: Requirement*) extends Requirement {
    override def equals(obj: Any): Boolean = obj match {
      case r:AnyReq => r.reqs.toSet == reqs.toSet
      case _ => false
    }

    override def or(that: Requirement): Requirement = that match {
      case r: AnyReq => AnyReq(r.reqs ++ reqs :_*)
      case r => AnyReq(reqs :+ r :_*)
    }
    override def and(that: Requirement): Requirement = that match {
      case r: AnyReq if r.reqs.toSet == reqs.toSet => r
      case r => AllReqs(this, r)
    }
    override def toString: String = s"(${reqs.mkString(" || ")})"
    override def metBy(state: GameState): Boolean = reqs.exists(_.metBy(state))
    override def afterMet(state: GameState) = {
      val (consumers, others) = reqs.filter(_.metBy(state)).partitionMap({
        case cons: Consumer => Left(cons)
        case r              => Right(r)
      })
      if(others.nonEmpty)
        state
      else
        consumers match {
          case Seq(consumer) => consumer.afterMet(state)
          case Nil =>
            throw GeneratorError(s"invalid state; $this ${metBy(state)} $others, $consumers, ${state.inv}")
          case _ => consumers.map(_.afterMet(state)).maxBy(_.inv.count)
        }
    }
    def remaining(state: GameState): Seq[GameState] = reqs flatMap (_ remaining state)
    override def children: Seq[Requirement] = reqs.flatMap(_.children)
    override def substitute(orig: Requirement, repl: Requirement): Requirement = AnyReq(reqs.map({
      case r: AnyReq => r.substitute(orig, repl)
      case r: AllReqs => r.substitute(orig, repl)
      case r if r == orig => repl
      case r => r
    }):_*)
  }

  object AnyReq {
    def apply(reqsRaw: Requirement*): Requirement = {
      val reqs: Seq[Requirement] = reqsRaw.filter(_.cheapestRemaining().cost < Double.PositiveInfinity).distinct
//      if (reqs.length < reqsRaw.length) reqsRaw.collect({ case r if !reqs.contains(r) && r != Invalid => println(s"Excluding $r") })
      reqs match {
        case Nil => Invalid
        case Seq(req) => req
        case reqs if reqs.contains(Free) => Free
        case reqs if reqs.exists(_.isInstanceOf[AnyReq]) => {
          val (anys, others) = reqs.partitionMap({
            case any: AnyReq => Left(any)
            case r           => Right(r)
          })
          new AnyReq(anys.flatMap(_.reqs) ++ others: _*)
        }
        case reqs if reqs.exists(_.isInstanceOf[Consumer]) => new AnyReq(reqs:_*) with Consumer
        case reqs => new AnyReq(reqs: _*)
      }
    }
  }

  class AllReqs(val reqs: Requirement*) extends Requirement {
    override def equals(obj: Any): Boolean = obj match  {
      case r:AllReqs => r.reqs.toSet == reqs.toSet
      case _ => false
    }
    override def and(that: Requirement): Requirement = that match {
      case r: AllReqs => AllReqs(r.reqs ++ reqs :_*)
      case r => AllReqs(reqs :+ r :_*)
    }
    override def or (other: Requirement): Requirement = other match {
      case r:AllReqs if r.reqs.toSet == reqs.toSet => r
      case req => AnyReq(req, this)
   }
    override def toString: String = s"(${reqs.mkString(" && ")})"
    def metMaybe(state: GameState): Option[GameState] = reqs.foldLeft[Option[GameState]](Some(state))((st, req) => st.filter(req.metBy).map(req.afterMet))
    def metBy(state: GameState): Boolean = metMaybe(state).nonEmpty
    override def afterMet(state: GameState): GameState = {
      if(metMaybe(state).isEmpty)
        println(s"about to crash: $state, $reqs, ${metBy(state)}")
      metMaybe(state).get
    }
    def remaining(state: GameState): Seq[GameState] = {
      if (metBy(state))
        return Seq(GameState.Empty)
      var mergedInv = GameState.Empty
      val (orReqs, others) = reqs.partitionMap({
        case any: AnyReq => Left(any)
        case r           => Right(r)
      })
      mergedInv = others.map(_.cheapestRemaining(state)).foldLeft(GameState.Empty)(_ + _)
/*      others.foreach(req => {
        mergedInv = mergedInv + req.cheapestRemaining(mergedInv + state)
      })*/
      val greedy = orReqs.foldRight(mergedInv)((req, accInv) => accInv + req.cheapestRemaining(accInv + state))
      if (orReqs.length > 1)
        Seq(orReqs.flatMap(_.remaining(state)).find(sus => sus.cost < greedy.cost && orReqs.forall(_.metBy(sus))).map(_ + mergedInv).getOrElse(greedy))
      else
        Seq(greedy)
    }
    override def children: Seq[Requirement] = reqs.flatMap(_.children)
    override def substitute(orig: Requirement, repl: Requirement): Requirement = AllReqs(reqs.map({
      case r: AnyReq => r.substitute(orig, repl)
      case r: AllReqs => r.substitute(orig, repl)
      case r if r == orig => repl
      case r => r
    }):_*)
  }
  object AllReqs {
    def apply(reqsRaw: Requirement*): Requirement = reqsRaw.filterNot(_ == Free).distinct match {
      case Nil => Free
      case Seq(req) => req
      case reqs if reqs.exists(_.isInstanceOf[AllReqs]) => {
        val (alls, others) = reqs.partitionMap({
          case all: AllReqs => Left(all)
          case r            => Right(r)
        })
        new AllReqs(alls.flatMap(_.reqs) ++ others:_*)
      }
      case reqs if reqs.contains(Invalid) => Invalid
      case reqs if reqs.exists(_.isInstanceOf[Consumer]) => new AllReqs(reqs:_*) with Consumer
      case reqs => new AllReqs(reqs:_*)
    }
  }

  case class LocData(area: String, name: String, category: String, value: String, zone: String, uberGroup: String, uberGroupId: Int, uberName: String, uberId: Int, x: Int, y: Int) {
    val code = s"$uberGroupId|$uberId"

    def info: String = {
      val fullName = s"$area.$name"
      val withPad = fullName + " " * (35 - fullName.size)
      uberGroupId match {
        case 1 => s"$withPad(Shop) (Opher)"
        case 2 => s"$withPad(Shop) (Twillen)"
        case _ => s"$withPad(${x},${y}) ${zone}"
      }
    }
  }
  object LocData {
    def all: Seq[LocData] = {
      val pickupReg = """^([^.]*)\.([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([-0-9]*), ?([^,]*), ?([-0-9]*), ?([-0-9]*), ?([-0-9]*)""".r
      val pickupsFile = Source.fromFile("loc_data.csv")
      val pickups = pickupsFile.getLines.flatMap {
        case s if s.trim == "" => None
        case s if s.trim.startsWith("--") =>
          None
        case pickupReg(area, name, zone, category, value, uberGN, ugid, uberN, uid, x, y) =>
          Some(LocData(area, name, category, value, zone, uberGN, ugid.toInt, uberN, uid.toInt, x.toInt, y.toInt))
        case line: String =>
          println(s"Couldn't parse line: $line")
          None
      }.toSeq
      pickupsFile.close()
      pickups.filter(_.value != "LupoZoneMap") //.filter(loc => loc.category != "Quest" && loc.value != "ShardSlot")
    }
    lazy val byName: Map[String, LocData] = all.map(data => (s"${data.area}.${data.name}") -> data).toMap
  }

  sealed trait NodeType
  case object AreaNode extends NodeType
  case object ItemNode extends NodeType
  case object StateNode extends NodeType

  trait Node {
    def name: String
    def reached(state: GameState, nodes: Map[String,Node] = Map()): GameState = {
      state + GameState.mk(this)
    }
    def kind: NodeType
    override def equals(that: Any): Boolean = that match {
      case n: Node => n.name == name && n.kind == kind
      case _ => false
    }
    override def hashCode(): Int = name.hashCode * kind.hashCode()
  }

  case class Connection(target: Node, req: Requirement)

  case class Placeholder(name: String, kind: NodeType = AreaNode) extends Node {
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = nodes.get(name) match {
        case Some(n: Node) if n.kind == kind => n.reached(state, nodes)
        case Some(x) => println(s"Warning: ${x} was of unexpected type!"); state
        case None =>println(s"Warning: ${name} not in nodes!"); state
    }
  }

  case class Area(name: String, _conns: Seq[Connection] = Seq()) extends Node {
    val conns: Seq[Connection] = _conns.filterNot(_.req == Invalid)
    override val kind = AreaNode
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = {
      conns.foldLeft(super.reached(state, nodes))({
        case (s, Connection(target, _)) if s.reached.contains(nodes.getOrElse(target.name, target)) => s
        case (s, Connection(target, req)) if req.metBy(s)             => target.reached(s, nodes)
        case (s, _)                                                   => s
      })
    }
    def paths: Seq[Path] = conns.filter(_.req != Invalid).map(c => SimplePath(this, c.target, c.req))
  }
  object Area {
    val SPAWN = "MarshSpawn.Main"
  }

  case class ItemLoc(name: String, data: LocData) extends Node {
    override val kind = ItemNode
    override def toString: String = name // data.info
  }

  object ItemLoc {
    def mk(name: String, src: Map[String, LocData]=LocData.byName): Option[ItemLoc] = src.get(name).map(ItemLoc(name, _))
      .orElse({
        if(!name.endsWith("LupoMap"))
          println(s"pickup $name not found in loc_data.csv!")
        None
      })
  }

  case class WorldStateNode(name: String) extends Node {
    override def kind = StateNode
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = state + GameState.mk(WorldState(name), this)
  }

  trait Path {
    def source: Node
    def dest: Node
    def req: Requirement
    def substitute(orig: Requirement, repl: Requirement): Path
    def and (other: Path): Option[Path] = {
        return this match {
          case chain: ChainedPath => chain.compose(other)
          case _ => ChainedPath(Seq(this)).compose(other)
        }
    }
    def nodes = Set(source, dest)
  }
  case class SimplePath(source: Node, dest: Node, req: Requirement) extends Path {
    override def toString: String = s"${source.name}=>${req}=>${dest.name}"
    override def substitute(orig: Requirement, repl: Requirement): Path = SimplePath(source, dest, req.substitute(orig, repl))
  }
  case class ChainedPath(paths: Seq[Path]) extends Path {
    def source: Node = paths.head.source
    def dest: Node = paths.last.dest
    override def nodes = (source +: paths.map(_.dest)).toSet
    def req: Requirement = paths.foldLeft[Requirement](Free)((req, path) => req and path.req)
    override def toString: String = paths.foldLeft(source.name)((acc, p) =>  s"$acc=>${p.req}=>${p.dest.name}")
    def canCompose(other: Path): Boolean = other match {
      case SimplePath(s, d, req) => s == dest && !nodes.contains(d) // must link, no loops
      case c: ChainedPath => c.source == dest && !c.paths.exists(child => nodes.contains(child.dest)) // must link, no loops
    }
    def compose(other: Path): Option[Path] =  if(canCompose(other)) Some(other match {
        case p: SimplePath   =>  ChainedPath(paths :+ p)
        case ChainedPath(ps) =>  ChainedPath(paths ++ ps)
    }) else None
    override def substitute(orig: Requirement, repl: Requirement): Path = ChainedPath(paths.map(_.substitute(orig, repl)))
  }

  object Nodes {
    def areas = {
      if (_areas.isEmpty) populate()
      _areas
    }
    def paths = {
      if (_paths.isEmpty) populate()
      _paths
    }

    def items = {
      if (_items.isEmpty) populate()
      _items
    }

    def pathByName(name: String) = paths.find(_._1.name == name)

    def getReachable(inv: Inv, flags: Set[FlagState]= Set()): (Set[Node], Set[FlagState]) = {
      var oldFlags: Set[FlagState] = Set()
      var state = spawn.reached(GameState(inv, flags), areas)
      while(oldFlags != state.flags) {
        oldFlags = state.flags
        state = spawn.reached(GameState(inv, oldFlags), areas)
      }
      (state.reached.flatMap(node => items.get(node.name)), state.flags)
    }

    var _areas: Map[String, Area] = Map()
    var _items: Map[String, ItemLoc] = Map()
    var _paths: Map[Node, Set[Path]] = Map()

    def getAllPathsRecursive(area: Area = spawn, pathsToHere: Set[Path] = Set()): Map[Node, Set[Path]] = {
      val seen = pathsToHere.flatMap(_.nodes.map(_.name))
      def pathAcc(p: Path) = if(pathsToHere.nonEmpty) pathsToHere.flatMap(_ and p) else Set(p)
      area.paths.flatMap(path => path.dest.kind match {
        case AreaNode if !seen.contains(path.dest.name) => _areas.get(path.dest.name).map(getAllPathsRecursive(_, pathAcc(path))).getOrElse({println("aaaaaa"); Map[Node, Set[Path]]()})
        case _ => Map(path.dest -> pathAcc(path))
      }).groupMapReduce(_._1)(_._2)(_ ++ _)
    }

    var _flagPaths: Map[Node, Set[Path]] = Map()
    def flagPaths = {
      if(_flagPaths.isEmpty)
        _flagPaths = paths.filter(_._1.isInstanceOf[WorldStateNode])
      _flagPaths
    }
    def stateCosts(state: GameState): Map[FlagState, GameState] = {
        flagPaths.map({case (WorldStateNode(flag), p) => {
          WorldState(flag) -> p.foldLeft[Requirement](Invalid)((acc, p) => acc or p.req).cheapestRemaining(state)
        }})
    }

    def fixAreas(areas: Map[String, Area]): Map[String, Area] = areas.values.map(area => area.name -> Area(area.name, area.conns.flatMap({
      case Connection(target: Placeholder, Invalid) if target.kind == ItemNode => None
      case Connection(target: Placeholder, reqs) if target.kind == ItemNode => ItemLoc.mk(target.name).map(Connection(_, reqs))
      case c => Some(c)
    }))).toMap

    def populate(debug: Boolean = false, advanced: Boolean = false) = {
      AreaParser.AreasBuilder.run(print = debug) match {
        case Right(value) =>
          _areas = fixAreas(value)
          _items = _areas.flatMap(_._2.conns.collect({ case Connection(t: ItemLoc, r) if r != Invalid => t.name -> t }))
          _paths = getAllPathsRecursive()
          true
        case Left(error) =>
          println(error)
          false
      }
    }
    def spawn: Area = areas("MarshSpawn.Main")
  }

  trait Placement {
    def loc: ItemLoc
    def item: Item
    def code = loc.data.code
    def data = s"${loc.data.code}|${item.code}"
    def write: String = {
      Tracking.incAreas(item, loc.data)
      val dataPad = " " * (20 - data.size)
      val namePad = " " * (17 - item.name.length)
      s"$data$dataPad//$namePad${item.name} from ${loc.data.info}"
    }
  }
  case class ItemPlacement(item: Item, loc: ItemLoc) extends Placement

  case class ShopPlacement(item: Sellable, loc: ItemLoc)(implicit r: Random) extends Placement {
    override val data = s"${loc.data.code}|${item.code}|${r.between(-30, 20)/100f}"
  }

  case class GeneratorError(message: String) extends Error {
    override def toString: String = s"GeneratorError: $message"
  }

  case class PlacementGroup(outState: GameState, prog: Inv, placements: Seq[Placement], i: Int)(implicit r: Random, pool: Inv, debug: Boolean = false) {
      def desc(standalone: Boolean = false): String = {
        val progText = if(prog.count > 0) s" -- Chosen: ${prog.progText}" else ""
        val keyItems = placements.map(_.item).filterNot(prog.has(_)).collect({case i: Important => i})
        val keyItemsText = if(keyItems.nonEmpty) s" -- Randomly Placed: ${keyItems.mkString(", ")}" else ""
        if(standalone)
          s"// Placement Group ${i+1}$progText$keyItemsText"
        else
          s"\n// Placement Group ${i+1}$progText$keyItemsText\n\n"
        // plcmnts.placements.map(_.item).filterNot(plcmnts.prog.has(_)
      }

      def write: String = desc() + placements.map(_.write).mkString("\n")
      def next(): Either[GeneratorError, PlacementGroup] = {
      PlacementGroup.trymk(outState, i + 1)
    }
  }
  object PlacementGroup {
    def debugPrint(x: Any)(implicit debug: Boolean = false): Unit = if(debug) println(x)
    def trymk(inState: GameState, i:Int=0)(implicit r: Random, pool: Inv, debug: Boolean = false): Either[GeneratorError, PlacementGroup] = Try {
      mk(inState, i)(r, pool, debug)
    }.toEither.left.map(
      {
        case e: GeneratorError => e
        case t: Throwable => val e = GeneratorError(t.getMessage)
          e.addSuppressed(t)
          e.setStackTrace(t.getStackTrace)
          e
      })
    def mk(inState: GameState, i:Int=0)(implicit r: Random, pool: Inv, debug: Boolean = false): PlacementGroup = {
      val (reachable, flags) = Nodes.getReachable(inState.inv, inState.flags)
      val state = inState + new GameState(Inv.Empty, flags)

      val locs = r.shuffle((reachable -- state.reached).collect({ case n: ItemLoc => n }))
      var _fullWeight = 0d

      if(locs.isEmpty) {
        if(reachable.size == Nodes.items.size)
          throw GeneratorError("successful gen") // good code here! not bad code. nope.
        throw GeneratorError(s"no new locs (${reachable.size} out of ${Nodes.items.size} reached)")
      }

      def getProgressionPath: Inv = {
        val remaining = Nodes.items.size - reachable.size
        if(remaining == 0)
          return Inv.Empty
        def acc(st: GameState): Double = {
          if(!st.cost.isFinite || st.inv.count == 0)
            debugPrint(s"What? ${st}")
          _fullWeight += 1 / (st.inv.cost)
          debugPrint(s"${st}->${1 / (st.inv.cost)} -> ${_fullWeight}");
          _fullWeight
        }

        debugPrint(s"Looking for paths. Have ${locs.size} new locs. Need to reach ${remaining} more")
        val possiblePathsPartial = Nodes.paths.toSeq.par
          .withFilter({
            case (node: ItemLoc, _) => !reachable.contains(node)
            case _ => false
          })
          .flatMap({ case (_, paths) => paths.flatMap(_.req.remaining(state)) })
          .toSet
        val singles = possiblePathsPartial.filter(_.inv.count == 1).map(_.inv.head._1)
        val possiblePathsPar = possiblePathsPartial
            .filter(s => s.inv.count == 1 || !singles.exists(s.inv.has(_)))
            .filter(s =>
                s.inv.count <= locs.size &&
                s.flags.forall(f =>  state.flags.contains(f)) &&
                s.inv.forall(kv => pool.has(kv._1, kv._2))
            ).toSeq
          .map((s: GameState) => s -> (Nodes.getReachable(state.inv + s.inv, state.flags)._1 -- reachable))
          .seq
        val possiblePaths = possiblePathsPar.collect({
          case (items, met) if met.size > items.inv.size => (acc(items), items)
        })
        if(possiblePaths.isEmpty) {
          println("pool: ", pool)
          println("inv: ", state.inv)
          println("flags: ", state.flags)
          var possiblePathsPruned = possiblePathsPartial.filter(s => s.inv.count == 1 || !singles.exists(s.inv.has(_)))
          println("too big:\n" + (possiblePathsPruned.filterNot(_.inv.count <= locs.size)).mkString("\n"))
          possiblePathsPruned = possiblePathsPruned.filter(_.inv.count <= locs.size)
          println("flags:\n" + (possiblePathsPruned.filterNot(_.flags.forall(state.flags.contains))).map(s => (s.flags, s.flags -- flags)).mkString("\n"))
          possiblePathsPruned = possiblePathsPruned.filter(_.flags.forall(state.flags.contains))
          println("items gone:\n" + possiblePathsPruned.filterNot(_.inv.forall(kv => pool.has(kv._1, kv._2))).map(s=>(s.inv, s.inv.map(i => (i._1, i._2, pool(i._1))))).mkString("\n"))
          (Nodes.items.values.toSet[Node] -- reachable).take(30).foreach(n => {
            println(s"${n.name}: \n\t${Nodes.paths(n).map(_.req.cheapestRemaining(state)).mkString("\n\t")}")
          })
          throw GeneratorError(s"No possible paths???")
        }
        val limit = r.nextDouble() * _fullWeight
        val chosenPath = possiblePaths.dropWhile(_._1 < limit).headOption.getOrElse(possiblePaths.last)._2.inv
        debugPrint(s"choose $limit: $chosenPath")
        chosenPath
      }
      val chosenPath = getProgressionPath
      val (shopLocs, nonShopLocs) = locs.partition(_.data.category == "Shop")

      val chosenItems = chosenPath.asSeq.map(item => {
        if (!pool.take(item))
          throw GeneratorError(s"Failed to place $item (was not in $pool)")
        item
      })

      val (shopIter, nonShopIter) = (shopLocs.iterator, nonShopLocs.iterator)
      val placements = r.shuffle(chosenItems).map({
          case s: Sellable if shopIter.hasNext => ShopPlacement(s, shopIter.next())
          case p if nonShopIter.hasNext => ItemPlacement(p, nonShopIter.next())
          case i => throw GeneratorError(s"Placement of $i failed; one of the iterators ran out! ${shopIter.toSeq}  ${nonShopIter.toSeq}" +
            s". Was placing $chosenItems into ${locs.map(_.name)}")
        }) ++
        shopIter.map(shopLoc => ShopPlacement(pool.popSellable.get, shopLoc)).toSeq ++
        nonShopIter.map(itemLoc => ItemPlacement(pool.popRand.get, itemLoc)).toSeq
      val outState = state + new GameState(Inv.Empty, Set(), reachable)
      placements.foreach(i => outState.inv.add(i.item))
      PlacementGroup(outState, chosenPath, placements, i)
    }
  }



object Runner {
    def setSeed = r.setSeed _
    val DEFAULT_INV = GameState(new Inv(Health -> 6, Energy -> 6, Sword -> 1))
    private def mkSeed(advanced: Boolean = false)(implicit debug: Boolean = false) = {
      Nodes.populate(debug, advanced)
      implicit val pool: Inv = ItemPool.build()
      recurse()
    }
    def single: PlacementGroup = {
      implicit val pool: Inv = ItemPool.build()
      PlacementGroup.mk(DEFAULT_INV)
    }
    @scala.annotation.tailrec
    def recurse(grps: Seq[PlacementGroup] = Seq(), startState: GameState = DEFAULT_INV)(implicit pool: Inv, debug: Boolean = false): (Seq[PlacementGroup], Option[GeneratorError]) = {
      grps.lastOption.map(_.next()).getOrElse({
        PlacementGroup.trymk(DEFAULT_INV)
      }) match {
        case Right(next) => recurse(grps :+ next)
        case Left(GeneratorError("successful gen")) => (grps, None)
        case Left(error) =>(grps, Some(error))
      }
    }
    def getSeedOpt(advanced: Boolean = false, debug: Boolean = false): Option[String] = {
      val (grps, err) = mkSeed(advanced)(debug)
      err match {
        case Some(e)  => println(s"$e"); None
        case None     => Some(grps.map(plcmnts => plcmnts.write).mkString("\n").drop(1).replace("\n", "\r\n"))
      }
    }
    def seedProg(advanced: Boolean = false, debug: Boolean = false): Option[String] = {
      val (grps, err) = mkSeed(advanced)(debug)
      err match {
        case Some(e)  => println(s"$e"); None
        case None     => Some(grps.map(grp => grp.desc(true)).mkString("\n"))
      }
    }
    def forceGetSeed(advanced: Boolean = false, retries: Int = 10, debug: Boolean = false, time: Boolean = true): String = {
      if(retries == 0)
        throw GeneratorError("Ran out of retries on forceGetSeed")
      val t0 = System.currentTimeMillis()
      val s = getSeedOpt(advanced, debug) match {
        case Some(seed) => seed
        case None       => forceGetSeed(advanced, retries-1)
      }
      val t1 = System.currentTimeMillis()
      println(s"Generated seed in ${(t1-t0)/1000f}s")
      s
    }
    def apply(advanced: Boolean = false, debug: Boolean = false): Unit = {
      val file = new File(s"seeds/seed_0.wotwr")
      val bw = new BufferedWriter(new FileWriter(file))
      bw.write(forceGetSeed(advanced))
      bw.close()
    }

    def mk(pack: Int, count: Int = 100): Unit = {
      val t0 = System.currentTimeMillis()
      val name_base = s"${pack}"
      val dirPath =  s"seeds/seed_pack_$pack"
      val dir = new File(dirPath)
      if (!dir.exists())
        dir.mkdirs()
      (1 until count).par.map(n => {
        val file = new File(s"${dirPath}/${name_base}_${n}_base.wotwr")
        val bw = new BufferedWriter(new FileWriter(file))
        bw.write(forceGetSeed(time = false))
        bw.close()
      })
      val t1 = System.currentTimeMillis()
      println(s"Generated base seeds in ${(t1-t0)/1000f}s")

      (count until (count + count/2)).par.map(n => {
        val file = new File(s"${dirPath}/${name_base}_${n}_advanced.wotwr")
        val bw = new BufferedWriter(new FileWriter(file))
        bw.write(forceGetSeed(true, time = false))
        bw.close()
      })
      val t2 = System.currentTimeMillis()
      println(s"Generated base seeds in ${(t2-t1)/1000f}s (${(t2-t0)/1000f}s total)")
    }
  }

  case class Distro(sl: Int = 0, hc: Int = 0, ec: Int = 0, ore: Int = 0, sks: Int = 0)

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
  object ItemPool {
    lazy val ITEM_COUNT: Int = Nodes.items.size
    def build(size: Int = ITEM_COUNT)(implicit r: Random) = {
      val pool = new Inv(Health -> 24, Energy -> 24, Ore -> 39, ShardSlot -> 5) +
        Inv.mk(WorldEvent.poolItems ++ Shard.poolItems ++ Skill.poolItems ++ Teleporter.poolItems:_*)
      while(pool.count < size) pool.add(SpiritLight(r.between(50, 150)))
      pool
    }
  }
}