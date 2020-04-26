import scala.util.parsing.input.Positional
import scala.collection.mutable
import scala.io.Source
import scala.util.Random
import scala.util.Try
import AreaParser.AreaParser
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
  trait Requirement {
    def metBy(state: GameState): Boolean
    def remaining(state: GameState = GameState.Empty): Seq[GameState]
    def cheapestRemaining(state: GameState = GameState.Empty): GameState = remaining(state)
      .minByOption(_.cost)
      .getOrElse(GameState.Empty)

    def and(that: Requirement): Requirement = AllReqs(this, that)
    def or(that: Requirement): Requirement = AnyReq(this, that)
  }

  case class StateReq(flag: String) extends Requirement {
    def metBy(state: GameState): Boolean = state.flags.contains(WorldState(flag))
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(WorldState(flag)))
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

  case class SkillReq(skillCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has Skill(skillCode)
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(Skill(skillCode)))
    override def toString = s"${Skill.names.getOrElse(skillCode, s"Unknown Skill $skillCode")}"
  }

  object Regen extends SkillReq(77)
  object Bow extends SkillReq(97)
  object DoubleJump extends SkillReq(5)
  object Flap extends SkillReq(118)
  object Grapple extends SkillReq(57)
  object Glide extends SkillReq(14)
  object Launch extends SkillReq(8)
  object Burrow extends SkillReq(101)
  object Dash extends SkillReq(102)
  object Smash extends SkillReq(98)
  object Grenade extends SkillReq(51)
  object WaterDash extends SkillReq(104)
  object Flash extends SkillReq(62)
  object Bash extends SkillReq(0)

  case class OreReq(oreCount: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv(Ore()) >= oreCount
    def remaining(state: GameState) = Seq(GameState(new Inv(Ore() -> Math.max(0, oreCount - state.inv(Ore())))))
  }

  case class EnergyReq(oreCount: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv(Energy()) >= oreCount
    def remaining(state: GameState) = Seq(GameState(new Inv(Energy() -> Math.max(0, oreCount - state.inv(Energy())))))
  }

  case class HealthReq(damage: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv(Health()) * 10 >= damage
    def remaining(state: GameState) = Seq(GameState(new Inv(Health() -> Math.max(0, Math.ceil((damage * 10 - state.inv(Health()))/10).intValue()))))
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
    def remaining(state: GameState): Seq[GameState] = reqs flatMap (_ remaining state)
 }
  object AnyReq {
    def apply(reqsRaw: Requirement*) = {
      val reqs: Seq[Requirement] = reqsRaw.filter(_.cheapestRemaining().cost < Double.PositiveInfinity).toSet.toSeq
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
    def metBy(state: GameState): Boolean = reqs.forall(_.metBy(state))
    def remaining(state: GameState): Seq[GameState] = {
      if (metBy(state))
        return Seq(GameState.Empty)
      var mergedInv = GameState.Empty
      val (orReqs, others) = reqs.partitionMap({
        case any: AnyReq => Left(any)
        case r           => Right(r)
      })
      others.foreach(req => {
        mergedInv = mergedInv + req.cheapestRemaining(mergedInv + state)
      })
      val greedy = orReqs.foldRight(mergedInv)((req, accInv) => accInv + req.cheapestRemaining(accInv + state))
      if (orReqs.length > 1)
        Seq(orReqs.flatMap(_.remaining(state)).find(sus => sus.cost < greedy.cost && orReqs.forall(_.metBy(sus))).map(_ + mergedInv).getOrElse(greedy))
      else
        Seq(greedy)
    }
  }
  object AllReqs {
    def apply(reqsRaw: Requirement*): Requirement = reqsRaw.filterNot(_ == Free).toSet.toSeq match {
      case Nil => Free
      case Seq(req) => req
      case reqs if reqs.exists(_.isInstanceOf[AllReqs]) => {
        val (alls, others) = reqs.partitionMap({
          case all: AllReqs => Left(all)
          case r            => Right(r)
        })
        new AllReqs(alls.flatMap(_.reqs) ++ others:_*)
      }
      case reqs if reqs.exists(_ == Invalid) => Invalid
      case reqs => new AllReqs(reqs:_*)
    }
  }

  case class LocData(area: String, name: String, category: String, value: String, zone: String, uberGroup: String, uberGroupId: Int, uberName: String, uberId: Int, x: Int, y: Int) {
    val code = s"$uberGroupId|$uberId"

    def info: String = uberGroupId match {
      case 0 => s"$uberName Tree (${x},${y}) ${zone}"
      case 1 => s"$uberName Shop (Opher)"
      case 2 => s" $uberName Shop (Twillen)"
      case _ => s"${uberName}[${uberId}] at (${x},${y}) ${zone}"
    }
  }
  object LocData {
    lazy val all: Seq[LocData] = {
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
      pickups //.filter(loc => loc.category != "Quest" && loc.value != "ShardSlot")
    }
    lazy val byName = all.map(data => (s"${data.area}.${data.name}") -> data).toMap
  }

  sealed trait NodeType
  case object AreaNode extends NodeType
  case object ItemNode extends NodeType
  case object StateNode extends NodeType

  trait Node {
    def name: String
    def reached(state: GameState): GameState = state + GameState.mk(this)
    def kind: NodeType
  }

  case class Connection(target: Node, req: Requirement)

  case class Placeholder(name: String, kind: NodeType = AreaNode) extends Node

  case class Area(name: String, conns: Seq[Connection] = Seq()) extends Node {
    override val kind = AreaNode
    override def reached(state: GameState): GameState =
      conns.foldRight(super.reached(state))((conn, s) => if (conn.req.metBy(s)) conn.target.reached(s) else s)
  }

  case class ItemLoc(name: String, data: LocData) extends Node { override val kind = ItemNode }

  object ItemLoc {
    def mk(name: String, src: Map[String, LocData]=LocData.byName): Option[ItemLoc] = src.get(name).map(ItemLoc(name, _))
      .orElse({
        println(s"pickup $name not found in loc_data.csv!"); None
      })
  }

  case class WorldStateNode(name: String) extends Node {
    override def kind = StateNode
    override def reached(state: GameState): GameState = state + GameState.mk(WorldState(name), this)
  }

  object Nodes {
    def areas = {
      if(_areas.isEmpty)
        populate()
      _areas
    }
    def items = { if(_items.isEmpty) populate()
      _items
    }

    def paths  = {
      if(_quickReach.isEmpty)
        populate()
      _quickReach
    }

    var _areas: Map[String, Area] = Map()
    var _items: Map[String, ItemLoc] = Map()
    var _quickReach: Map[String, Requirement] = Map()
    def populate() = {
      AreaParser.run() match {
        case Right(value) =>
          _areas = value
          _items = _areas.flatMap(_._2.conns.collect({case Connection(t: ItemLoc, _) => t.name -> t}))
          buildQuickReachReqs()
        case Left(error) =>
          println(error)
          false
      }
    }
    case class QRParams(mappings: Map[String, Requirement]= Map(), var edges: Set[(String, String)] = Set()) {
      if(edges.isEmpty && mappings.nonEmpty)
        edges = mappings.keySet.map("MarshSpawn.Main" -> _)
      def seen = edges.map(_._2)
      def +(other: QRParams): QRParams =
        QRParams(mappings ++ (other.seen -- seen).map(edge => edge -> AnyReq(mappings.getOrElse(edge, Invalid), other.mappings(edge))), edges ++ other.edges)
    }
    def buildQuickReachReqs() = {
      implicit val flagCosts: Map[FlagState, Double] = macros.conns.map(cn => WorldState(cn.target.name) -> cn.req.cheapestRemaining().cost(Map())).toMap
      _quickReach = quickReachRecursive(spawn, QRParams(Map("MarshSpawn.Main" -> Free))).mappings
      _items.keys.collect({case name if !_quickReach.contains(name) => println(s"No connection to $name")})
      true
    }

    def quickReachRecursive(target: Area, p: QRParams) : QRParams = {
      def paramsWith(name: String, req: Requirement): QRParams= {
        QRParams(p.mappings.get(name) match {
          case Some(existingReq) =>
            p.mappings + (name -> (req or existingReq))
          case None => p.mappings + (name -> req)
        }, p.edges + (target.name -> name))
      }
      val reqToHere = p.mappings(target.name)
      target.conns.map({
        case Connection(t, _) if p.edges.contains(target.name -> t.name) =>
          println(s"Skipping repeat connection ${target.name} -> ${t.name}")
          QRParams()
        case Connection(Placeholder(name, AreaNode), req)  => areas.get(name) match {
          case Some(targetArea) => quickReachRecursive(targetArea, paramsWith(name, reqToHere and req))
          case None             => println(s"Warning: no data found for area $name")
                                    QRParams(Map(name -> (reqToHere and req)), Set(target.name -> name))
        }
        case Connection(t, req) => QRParams(Map(t.name -> (reqToHere and req)), Set(target.name -> t.name))
      }).reduce(_ + _)
    }

    def spawn: Area = areas("MarshSpawn.Main")
    def macros: Area = areas("Virtual.Macros")
  }

  case class ItemPlacement(item: Item, loc: ItemLoc) {
    val code = loc.data.code
    def write: String = {
      val data = s"${loc.data.code}|${item.code}"
      val padding = " " * (25 - data.size)
      s"$data$padding// ${item.name} from ${loc.data.info}"
    }
  }

  case class GeneratorError(message: String) extends Error {
    override def toString: String = s"GeneratorError: $message"
  }

  case class PlacementGroup(outState: GameState, placements: Seq[ItemPlacement], prog: Inv, i: Int)(implicit r: Random, pool: Inv) {
    def write: String = /*(" " * 25) + s"// $i, prog: ${prog.toString.replace("Inv: ","")}\n" + */placements.map(_.write).mkString("\n")
    def next() = {
      PlacementGroup.mk(outState, i + 1)
    }
  }
  object PlacementGroup {
    def mk(inState: GameState, i:Int=0)(implicit r: Random, pool: Inv) = Try {
      implicit val flagCosts: Map[FlagState, Double] = inState.flags.map(_ -> 0d).toMap ++
        Nodes.macros.conns.map(cn => WorldState(cn.target.name) -> cn.req.cheapestRemaining(inState).cost(Map()))
      println(s"$i: $inState,\npool $pool")
      val reachable: Set[Node] = Nodes.paths.collect({
        case (name, req) if req.metBy(inState) && Nodes.items.contains(name) => Nodes.items(name)
      }).toSet
      val locs = r.shuffle((reachable -- inState.reached).collect({ case n: ItemLoc => n }))
      println(s"${inState.reached.size} old reached: ${inState.reached.map(_.name)}")
      println(s"${locs.size} new locs: ${locs.map(_.name)}")
      var _fullWeight = 0d

      def acc(st: GameState): Double = {
        if(!st.cost.isFinite || st.inv.count == 0)
          println(s"What? ${st}")
        _fullWeight += 1 / (st.inv.cost * Math.max(st.inv.count,1)); _fullWeight
      }

      if(locs.isEmpty) {
        if(Nodes.paths.collect({ case (str, loc) if !loc.metBy(inState) => str -> loc }).isEmpty)
          throw GeneratorError("successful gen")
        println(Nodes.paths.collect({ case (str, loc) if !loc.metBy(inState) => str -> loc }))
        throw GeneratorError("no new locs")
      }

      val possiblePaths = Nodes.paths
        .withFilter(kv => !reachable.exists(_.name == kv._1))
        .flatMap({ case (name, req) => req.remaining(inState).map(name -> _) })
        .filter({ case (_, state) =>
          state.inv.count <= locs.size &&
          state.flags.forall(inState.flags.contains(_)) &&
          state.inv.forall(kv => pool.has(kv._1, kv._2))
        })
        .groupMapReduce(_._2)(kv => Seq(kv._1))((n1, n2) => n1 ++ n2)
        .toSeq.sortBy(_._1.cost).collect({
        case (items, met) if items.inv.nonEmpty && met.size > 1  => /*println(s"${items}->${met.size} $met");*/ (acc(items), items)
        case (items, met)=> println(s"${items}->${met.size} $met"); (0d, items)
      })
      if(possiblePaths.isEmpty)
        throw GeneratorError(s"No possible paths???")
      val limit = r.nextDouble() * _fullWeight
      val chosenPath = possiblePaths.dropWhile(_._1 < limit).headOption.getOrElse(possiblePaths.last)._2.inv
      println(chosenPath)
      val (shopLocs, nonShopLocs) = locs.partition(_.data.category == "Shop")
      val chosenItems = chosenPath.asSeq.map(item => {
        if (!pool.take(item))
          throw GeneratorError(s"Failed to place $item (was not in $pool)")
        item
      })
      val placedItems = chosenItems ++ (0 until locs.size - chosenItems.size).map(n => {
        val maybeItem = if (n < (shopLocs.size - chosenItems.count(_.isInstanceOf[Sellable])))
          pool.popSellable
        else
          pool.popRand
        if (maybeItem.isEmpty)
          throw GeneratorError(s"Failed to get random item from ${pool}")
        maybeItem.get
      })
      val (shopIter, nonShopIter) = (shopLocs.iterator, nonShopLocs.iterator)

      val placements = r.shuffle(placedItems).map({
          case s: Sellable if shopIter.hasNext => ItemPlacement(s, shopIter.next())
          case p if nonShopIter.hasNext => ItemPlacement(p, nonShopIter.next())
          case i => throw GeneratorError(s"Placement of $i failed; one of the iterators ran out! ${shopIter.toSeq}  ${nonShopIter.toSeq}" +
            s". Was placing $placedItems into ${locs.map(_.name)}")
        })
      val outState = inState + new GameState(Inv.Empty, Set(), reachable)
      placedItems.foreach(i => outState.inv.add(i))
      PlacementGroup(applyFlags(outState), placements, chosenPath, i)
    }.toEither.left.map(
      {
        case e: GeneratorError => e
        case t: Throwable => val e = GeneratorError(t.getMessage)
          e.addSuppressed(t)
          e.setStackTrace(t.getStackTrace)
          e
      })
    def applyFlags(state: GameState) = {
      val newMacros = Nodes.macros.conns.withFilter(_.req.metBy(state)).map(cn => WorldState(cn.target.name)).filter(!state.flags.contains(_))
      if(newMacros.nonEmpty)
        println(s"new macros: $newMacros")
      state.withParams(newMacros.map(flagToPart(_)):_*)
    }
  }

  object Runner {
    val setSeed = r.setSeed _
    val DEFAULT_INV = GameState.mk(Skill(100), WorldState("Weapon"), WorldState("EnemyObstacle"))
    def apply() = {
      implicit val pool = ItemPool.build()
      recurse()
    }
    def recurse(grps: Seq[PlacementGroup] = Seq())(implicit pool: Inv): (Seq[PlacementGroup], Option[GeneratorError]) = {
      grps.lastOption.map(_.next()).getOrElse({
        PlacementGroup.mk(DEFAULT_INV)
      }) match {
        case Right(next) => recurse(grps :+ next)
        case Left(GeneratorError("successful gen")) => (grps, None)
        case Left(error) =>(grps, Some(error))
      }
    }
    def run(n: Int = 0, name_base: String = "seed", outputFolder: String = ""): Unit = {
      // Creating a file
      val dirPath = if (outputFolder != "") s"seeds/${outputFolder}" else "seeds"
      val dir = new File(dirPath)
      if (!dir.exists())
        dir.mkdirs()
      val file = new File(s"${dirPath}/${name_base}_${n}.wotwr")
      val bw = new BufferedWriter(new FileWriter(file))
      val (grps, err) = apply()
      grps.map(plcmnts => bw.write(plcmnts.write+"\n"))
      bw.close()
    }
}

case class Distro(sl: Int = 0, hc: Int = 0, ec: Int = 0, ore: Int = 0, sks: Int = 0)

object Tracking {
  var areas: mutable.Map[String, Distro] = mutable.Map()
  def incAreas(item: Item, location: LocData): Unit = {
    if (areas == null)
      areas = mutable.Map()
    val cur = areas.getOrElse(location.zone, Distro())
    item match {
      case _: SpiritLight => areas(location.zone) = Distro(cur.sl + 1, cur.hc, cur.ec, cur.ore, cur.sks)
      case _: Health => areas(location.zone) = Distro(cur.sl, cur.hc + 1, cur.ec, cur.ore, cur.sks)
      case _: Energy => areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec + 1, cur.ore, cur.sks)
      case _: Ore => areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec, cur.ore + 1, cur.sks)
      case _: Skill => areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec, cur.ore + 1, cur.sks + 1)
      case _ => None
    }
  }
}
object ItemPool {
  val ITEM_COUNT: Int = 339
  def build(size: Int = ITEM_COUNT)(implicit r: Random) = {
    val pool = new Inv(Health() -> 24, Energy() -> 24, Ore() -> 39, ShardSlot() -> 5) +
      Inv.mk(Shard.poolItems:_*) + Inv.mk(Skill.poolItems:_*) + Inv.mk(Teleporter.poolItems:_*)
    while(pool.count < size) pool.add(SpiritLight(r.between(50, 150)))
    pool
  }
}



/*    def run(n: Int = 0, name_base: String = "seed", outputFolder: String = ""): Unit = {
      // Creating a file
      val itemPool = getItemPool()

      var locs = itemLocs
      while (locs.size > itemPool.count) itemPool.add(SpiritLight(Random.between(50, 150)))
      val playerState = GameState.Empty
      val dirPath = if (outputFolder != "") s"seeds/${outputFolder}" else "seeds"
      val dir = new File(dirPath)
      if (!dir.exists())
        dir.mkdirs()
      val file = new File(s"${dirPath}/${name_base}_${n}.wotwr")
      val bw = new BufferedWriter(new FileWriter(file))
      var balanceAreas = Seq[LocData]()
      var balanceItems = Seq[Item]()
      var totalSpiritLight = 0

      def assign(item: Item, loc: LocData): Unit = item match {
        case _: Skill => assignNow(item, loc)
        case _: Teleporter => assignNow(item, loc)
        case SpiritLight(count) =>
          totalSpiritLight += count
          assignLater(item, loc)
        case _ => assignLater(item, loc)
      }

      def assignLater(item: Item, loc: LocData): Unit = {
        balanceAreas = balanceAreas ++ Seq(loc)
        balanceItems = balanceItems ++ Seq(item)
      }

      def itsLater = for {(item, area) <- Random.shuffle(balanceItems) zip Random.shuffle(balanceAreas)} assignNow(item, area)

      def write(item: Item, loc: LocData): Unit = {
        val data = s"${loc.code}|${item.code}"
        val padding = " " * (20 - data.size)
        bw.write(s"$data$padding// ${item.name} from ${loc.info} \n")
      }

      def assignNow(item: Item, loc: LocData): Unit = {
        incAreas(item, loc)
        write(item, loc)
      }

      def randItem = itemPool.popRand().map({ a => playerState.inv.add(a); a }).getOrElse({
        println("Had to pull extra spirit light")
        SpiritLight(Random.between(50, 200))
      })

      def randShop = itemPool.popSellable().map({ a => playerState.inv.add(a); a }).getOrElse({
        val stolen = balanceItems.collectFirst({ case i: Sellable => i })
        stolen match {
          case Some(s: Sellable) =>
            balanceItems = balanceItems.filterNot(_ == s) ++ Seq(randItem)
            if (balanceItems.size < balanceAreas.size)
              balanceItems = balanceItems ++ (0 until balanceAreas.size - balanceItems.size).map(_ => s)
            if (balanceItems.size != balanceAreas.size)
              println(s"${file.getName}: balance mismatch!!! took $s from balanceItems (size ${balanceItems.size} vs BalanceAreas size: ${balanceAreas.size}")
            s
          case None =>
            println(s"${file.getName}: Had to pull extra sellable! items: ${itemPool.filter({ case (_, c: Int) => c > 0 })} locs: $locs")
            Health()
        }
      })
          while (locs.nonEmpty) {
          var reachables = locs.filter(_.reqs metBy playerState)
          if (reachables.isEmpty) {
            println(s"${file.getName}: Empty reachable! items: ${itemPool.filter({case (_, c: Int) => c > 0})} locs: $locs")
            bw.close()
            file.delete()
            return
          }
          if (reachables.size < 5 && reachables.size < locs.size) {
            maybeRand(locs.map(_.reqs.cheapestRemaining(playerState)).filter(_.count < reachables.size)) match {
              case Some(items) => items.foreach({
                case (item: Sellable, 1) if reachables.exists((i: LocData) => i.category == "Shop") =>
                    val loc = maybeRand(reachables.filter(_.category == "Shop")).get
                    playerState.add(item, 1)
                    itemPool.take(item, 1)
                    locs = locs.filterNot(_ == loc)
                    reachables = reachables.filterNot(_ == loc)
                    assign(item, loc)
                case (item, 1) if reachables.exists((i: LocData) => i.category != "Shop") =>
                    playerState.add(item, 1)
                    itemPool.take(item, 1)
                    val loc = maybeRand(reachables.filter(_.category != "Shop")).get
                    locs = locs.filterNot(_ == loc)
                    reachables = reachables.filterNot(_ == loc)
                    assign(item, loc)
                case (i: Item, 1) =>
                  println(s"${file.getName()}: $i couldn't be placed in  ${reachables.map(_.category)}, deleting...")
                  bw.close()
                  file.delete()
                  return

                case (_: Item, 0) =>
              })
              case None =>
                println(s"Aaaa: ${locs.map(_.reqs.cheapestRemaining(playerState))}")
            }
          }
          maybeRand(reachables) match {
            case Some(loc: LocData) if loc.category == "Shop" =>
              locs = locs.filterNot(_ == loc)
              reachables = reachables.filterNot(_ == loc)

              assignNow(randShop, loc)
            case Some(loc: LocData) => {
              locs = locs.filterNot(_ == loc)
              reachables = reachables.filterNot(_ == loc)
              assign(randItem, loc)
            }
          }
        }
        itsLater
        if(outputFolder.isBlank) {
          println(totalSpiritLight)
        }
      bw.close()
    }*/
}