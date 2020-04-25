import scala.util.parsing.input.Positional
import java.io._

import scala.collection.immutable.Stream.Empty
import scala.collection.mutable
import scala.io.Source
import scala.util.Random
package SeedGenerator {

  object SeedGenerator {

    //  just some neat little sugar for regexes, dw about it
    object implicits {

      implicit class RegexOps(sc: StringContext) {
        def r = new util.matching.Regex(sc.parts.mkString, sc.parts.tail.map(_ => "x"): _*)
      }

    }

    import implicits._

    trait Item {
      def itemType: Int

      def name: String

      def code: String

      def cost: Double = 1 // 1/weight, more or less
      override def toString = s"$name"
    }

    trait Sellable extends Item

    trait Unplaceable extends Item {
      override def cost: Double = 0

      override def code: String = "ERROR|ERROR"

      val itemType: Int = -1
    }

    trait SpiritLightItem extends Item {
      val itemType: Int = 0

      def amount: Int

      def name = s"${amount} Spirit Light"

      def code = s"${itemType}|${amount}"

      override val cost = amount / 100f
    }

    case class SpiritLight(amount: Int) extends SpiritLightItem

    trait Resource extends Item with Sellable {
      val itemType = 1

      def resourceType: Int

      def code = s"${itemType}|${resourceType}"
    }

    case class Health(resourceType: Int = 0, name: String = "Half-Health Cell") extends Resource

    case class Energy(resourceType: Int = 1, name: String = "Half-Energy Cell") extends Resource

    case class Ore(resourceType: Int = 2, name: String = "Gorlek Ore") extends Resource {
      override val cost = 0.1f
    }

    case class Keystone(resourceType: Int = 3, name: String = "Keystone") extends Resource

    case class ShardSlot(resourceType: Int = 4, name: String = "Shard Slot") extends Resource

    case class Skill(skillId: Int) extends Item with Sellable {
      val itemType: Int = 2

      def code = s"$itemType|${this.skillId}"

      def name: String = s"Skill ${Skill.names.getOrElse(this.skillId, s"Unknown (${this.skillId})")}"

      override val cost = 5
    }

    object Skill {
      val names: Map[Int, String] = Map(
        0 -> "Bash",
        //		3 -> "WallJump",
        5 -> "DoubleJump",
        8 -> "Launch",
        14 -> "Feather",
        23 -> "WaterBreath",
        51 -> "LightBurst",
        57 -> "Grapple",
        62 -> "Flash",
        74 -> "Spike",
        77 -> "Regenerate",
        97 -> "SpiritArc",
        98 -> "SpiritSmash",
        //		99 -> "Torch",
        100 -> "SpiritEdge",
        101 -> "Burrow",
        102 -> "Dash",
        104 -> "WaterDash",
        106 -> "SpiritStar",
        108 -> "Seir",
        115 -> "Blaze",
        116 -> "Sentry",
        118 -> "Flap",
        120 -> "DamageUpgrade1",
        121 -> "DamageUpgrade2"
      )
    }

    case class Shard(shardId: Int) extends Item with Sellable {
      val itemType: Int = 3

      def code = s"$itemType|${this.shardId}"

      def name: String = s"Shard ${Shard.names.getOrElse(this.shardId, s"Unknown (${this.shardId})")}"
    }

    object Shard {
      val names: Map[Int, String] = Map(
        1 -> "Overcharge",
        2 -> "TripleJump",
        3 -> "Wingclip",
        4 -> "Bounty",
        5 -> "Swap",
        8 -> "Magnet",
        9 -> "Splinter",
        13 -> "Reckless",
        14 -> "Quickshot",
        18 -> "Resilience",
        19 -> "LightHarvest",
        22 -> "Vitality",
        23 -> "LifeHarvest",
        25 -> "EnergyHarvest",
        26 -> "Energy",
        27 -> "LifePact",
        28 -> "LastStand",
        30 -> "Secret",
        32 -> "UltraBash",
        33 -> "UltraGrapple",
        34 -> "Overflow",
        35 -> "Thorn",
        36 -> "Catalyst",
        38 -> "Turmoil",
        39 -> "Sticky",
        40 -> "Finesse",
        41 -> "SpiritSurge",
        43 -> "Lifeforce",
        44 -> "Deflector",
        46 -> "Fracture",
        47 -> "Arcing",
      )
    }

    case class Teleporter(teleporterId: Int) extends Item with Sellable {
      val itemType: Int = 5

      def code = s"$itemType|${this.teleporterId}"

      def name: String = s"${Teleporter.names.getOrElse(this.teleporterId, s"Unknown (${this.teleporterId})")} TP"

      override val cost = 3
    }

    object Teleporter {
      val names: Map[Int, String] = Map(
        0 -> "Midnight Burrows",
        1 -> "Howls Den",
        //	2 -> "Luma Pools (East)",
        3 -> "Wellspring",
        4 -> "Baur's Reach",
        5 -> "Kwoloks Hollow",
        6 -> "Mouldwood Depths",
        7 -> "Silent Woods (West)",
        8 -> "Silent Woods (East)",
        9 -> "Windswept Wastes (West)",
        10 -> "Windswept Wastes (East)",
        11 -> "Windtorn Ruins (Outer)",
        12 -> "Willows End",
        13 -> "Luma Pools (West)",
        14 -> "Windtorn Ruins (Inner)",
        15 -> "Spirit Willow",
        16 -> "Inkwater Marsh",
      )
    }

    // fake inventory items
    object Unobtainium extends Item with Unplaceable {
      override def name: String = "Unobtainium"

      override val cost = Double.PositiveInfinity
    }


    trait FlagState {
      def name: String
    }

    case class WorldState(name: String) extends FlagState

    case class SeedGenState(name: String) extends FlagState // will become a series of case objects later

    case class GameState(inv: Inv, flags: Set[FlagState] = Set(), reached: Set[Node] = Set()) {
      def +(other: GameState): GameState = GameState(inv + other.inv, flags ++ other.flags, reached ++ other.reached)

      def canEqual(that: Any): Boolean = that.isInstanceOf[GameState]
      override def equals(state: Any): Boolean = {
        state match {
          case other: GameState => other.flags == flags &&
            other.reached == reached &&
            other.inv == inv
          case _ => false
        }
      }

      override def toString = s"GameState($inv, flags: ${
        flags.map(_.name).mkString("[", ", ", "]") // stealth newline
      }, nodes: ${reached.map(_.name).mkString("[", ", ", "]")})"
    }

    object GameState {
      def Empty: GameState = GameState(Inv.Empty)

      def mk(params: Either[Item, Either[FlagState, Node]]*): GameState = GameState(
        Inv.mk(params.collect({ case Left(item) => item }): _*),
        params.collect { case Right(Left(flag)) => flag }.toSet,
        params.collect { case Right(Right(node)) => node }.toSet
      )
    }

    // hahahaHAHAHAHA
    implicit def itemToPart(item: Item): Either[Item, Either[FlagState, Node]] = Left(item)

    implicit def flagToPart(flag: FlagState): Either[Item, Either[FlagState, Node]] = Right(Left(flag))

    implicit def nodeToPart(node: Node): Either[Item, Either[FlagState, Node]] = Right(Right(node))


    // extending hashset instead of encapsulating it here was pure folly, tbh
    class Inv(items: (Item, Int)*) extends mutable.HashMap[Item, Int] {
      items.foreach({ case (i: Item, count: Int) => set(i, count) })
      def set(item: Item, count: Int): Unit = this (item) = count
      override def apply(item: Item): Int = this.getOrElse(item, 0)
      override def toString = s"Inv: (${
        filter(_._2 > 0).map({
          case (item, 1) => s"$item"
          case (item, c) => s"$c ${item}"
        }).mkString(", ")
      })"

      def asSeq: Seq[Item] = keys.toSeq.flatMap(k => (0 until this (k)).map(_ => k))
      def count = foldLeft(0)(_ + _._2)
      def cost: Double = foldLeft(0d)({ case (cost: Double, (i: Item, c: Int)) => cost + i.cost * c })
      def has(item: Item, count: Int = 1) = this.getOrElse(item, 0) >= count
      def transfer(source: Inv, item: Item, count: Int = 1): Unit = {
        if (source.take(item, count))
          add(item, count)
      }

      def take(item: Item, count: Int = 1): Boolean = {
        if (!has(item, count)) {
          println(s"Error: taking ${count} of ${item} from ${this}, which doesn't have that many")
          return false
        }
        set(item, Math.max(0, this (item) - count))
        true
      }

      def add(item: Item, count: Int = 1): Unit = set(item, this (item) + count)
      def popRand(): Option[Item] = this.asSeq match {
        case s: Seq[Item] if (s.size > 0) => {
          val i = s(Random.nextInt(s.size))
          this.take(i)
          Some(i)
        }
        case _ => None
      }

      def popSellable(): Option[Sellable] = {
        val sellables = this.asSeq.flatMap({
          case i: Sellable => Some(i)
          case _ => None
        })
        if (sellables.isEmpty)
          return None
        val i = sellables(Random.nextInt(sellables.size))
        this.take(i)
        Some(i)
      }

      def +(other: Inv): Inv = {
        new Inv((other.keys ++ keys).toSeq.map({ (i: Item) => (i, Math.max(this (i), other(i))) }): _*)
      }
    }

    object Inv {
      def Empty: Inv = new Inv()

      def mk(items: Item*): Inv = {
        val newInv = Empty
        items.foreach(newInv.add(_))
        newInv
      }
    }

    trait Requirement {
      def metBy(state: GameState): Boolean
      def remaining(state: GameState = GameState.Empty): Seq[GameState]
      def cheapestRemaining(state: GameState = GameState.Empty): GameState = remaining(state)
        .minByOption(_.inv.cost)
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


    class AnyReq(reqsRaw: Requirement*) extends Requirement {
      val reqs: Seq[Requirement] = reqsRaw.filter(_.cheapestRemaining().inv.cost < Double.PositiveInfinity).toSet.toSeq
      if (reqs.length < reqsRaw.length) reqsRaw.foreach({ case r if reqs.contains(r) => printf(s"Excluding $r") })
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
      def apply(reqsRaw: Requirement*) = reqsRaw match {
        case Seq(req) => req
        case reqs if reqs.contains(Free) => Free
        case reqs if reqs.exists(_.isInstanceOf[AnyReq]) => {
          val (anys: Seq[AnyReq], others) = reqs.partition(_.isInstanceOf[AnyReq])
          new AnyReq(anys.flatMap(_.reqs) ++ others:_*)
        }
        case reqs => new AnyReq(reqs:_*)
      }
    }

    class AllReqs(val reqs: Requirement*) extends Requirement {
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
        var mergedInv = GameState.Empty + state
        val (orReqs: Seq[AnyReq], others) = reqs.partition(_.isInstanceOf[AnyReq])
        others.foreach(req => {
          mergedInv = mergedInv + req.cheapestRemaining(mergedInv)
        })
        val greedy = orReqs.foldRight(mergedInv)((req, accInv) => accInv + req.cheapestRemaining(accInv))
        if (orReqs.length > 1)
          Seq(orReqs.flatMap(_.remaining(state)).find(sus => sus.inv.cost < greedy.inv.cost && orReqs.forall(_.metBy(sus))).getOrElse(greedy))
        else
          Seq(greedy)
      }
    }
    object AllReqs {
      def apply(reqsRaw: Requirement*): Requirement = reqsRaw.filterNot(_ == Free) match {
        case Nil => Free
        case Seq(req) => req
        case reqs if reqs.exists(_.isInstanceOf[AllReqs]) => {
          val (alls: Seq[AllReqs], others) = reqs.partition(_.isInstanceOf[AllReqs])
          new AllReqs(alls.flatMap(_.reqs) ++ others:_*)
        }
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

    def itemLocs: Seq[LocData] = {
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

    def locDataByName = itemLocs.map(data => (s"${data.area}.${data.name}") -> data).toMap

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
      def mk(name: String, src: Map[String, LocData]=locDataByName): Option[ItemLoc] = src.get(name).map(ItemLoc(name, _))
        .orElse({
          println(s"pickup $name not found in loc_data.csv!"); None
        })
    }

    case class WorldStateNode(name: String) extends Node {
      override def kind = StateNode
      override def reached(state: GameState): GameState = state + GameState.mk(WorldState(name), this)
    }


    def tests = {

      val lever = WorldStateNode("Blah.Switch")
      val leverArea = Area("Blah", Seq(Connection(lever, Launch)))
      val SpawnArea = Area("Spawn", Seq(
        Connection(leverArea, DoubleJump)
      ))
      val areasByName: mutable.HashMap[String, Node] = mutable.HashMap()
      var connAcc: Seq[Connection] = Seq()
      //			println(s"$cleanedLine ---- $comment")
    }

    import AreaParser.AreaParser
    object Areas {
      def data = {
        if(_areas.isEmpty)
          populate()
        _areas
      }
      def paths  = {
        if(_quickReach.isEmpty)
          populate()
        _quickReach
      }

      var _areas: Map[String, Area] = Map()
      var _quickReach: Map[String, Requirement] = Map()
      def populate() = {
        AreaParser.run() match {
          case Right(value) =>
            _areas = value
            buildQuickReachReqs()
          case Left(error) =>
            println(error)
            false
        }
      }
      def buildQuickReachReqs() = {
        _quickReach = quickReachRecursive(spawn, macros.conns.map(c => c.target.name -> c.req).toMap + ("MarshSpawn.Main" -> Free))
        true
      }

      def quickReachRecursive(target: Area, current: Map[String, Requirement] = Map(), forLater: Set[String] = Set()) : Map[String, Requirement] = {
        def currentWith(name: String, req: Requirement) = {
          current.get(name) match {
            case Some(existingReq) => current + (name -> (req or existingReq))
            case None => current + (name -> req)
          }
        }
        val reqToHere = current(target.name)
        target.conns.flatMap({
          case Connection(Placeholder(name, AreaNode), req)  => data.get(name) match {
            case Some(targetArea) => quickReachRecursive(targetArea, currentWith(name, reqToHere and req)).toSeq
            case None             => println(s"Warning: no data found for area $name")
                                      Seq(target.name -> (reqToHere and req))
          }
          case Connection(target, req)                       => Seq(target.name -> (reqToHere and req))
        }).groupMapReduce(_._1)(_._2)((r1,r2) => r1 or r2)
      }

      def spawn: Area = data("MarshSpawn.Main")
      def macros: Area = data("Virtual.Macros")
    }

    case class ItemPlacement(item: Item, loc: ItemLoc) {
      val code = loc.data.code
      def write: String = {
        val data = s"${loc.data.code}|${item.code}"
        val padding = " " * (25 - data.size)
        s"$data$padding// ${item.name} from ${loc.data.info}"
      }
    }

    class PlacementGroup(inState: GameState, unplacedItems: Inv=getItemPool(), prev: Seq[PlacementGroup] = Seq()) {
      val newState = Areas.spawn.reached(inState)
      val locs = (newState.reached -- inState.reached).collect({case n: ItemLoc => n})
      val codes = locs.map(_.data.code)
      var _fullWeight = 0d
      def acc(weight: Double): Double = { _fullWeight += 1/weight; _fullWeight }
      val possiblePaths = Areas.paths
        .withFilter(kv => !newState.reached.exists(_.name == kv._1) )
        .map({case (name, req) =>  name -> req.cheapestRemaining(newState)})
        .filter({case (_, state) =>  state.inv.count <= locs.size &&
                                                        state.flags.isEmpty &&
                                                        state.inv.forall(kv => unplacedItems.has(kv._1, kv._2))
        })
        .groupMapReduce(_._2.inv)(kv => Seq(kv._1))((n1, n2) => n1 ++ n2)
        .toSeq.sortBy(_._1.cost).map({case (items, _) => (acc(items.cost), items)})

      val limit = Random.nextDouble() * _fullWeight
      val chosenPath =  possiblePaths.dropWhile(_._1 < limit).headOption.orElse(possiblePaths.lastOption).map(_._2)
    }


    def maybeRand[T](source: Seq[T]) = if (source.size == 0) None else Some(source(Random.nextInt(source.size)))

    case class Distro(sl: Int = 0, hc: Int = 0, ec: Int = 0, ore: Int = 0, sks: Int = 0)

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
    def getItemPool() = new Inv(
      Health() -> 24,
      Energy() -> 24,
      Ore() -> 39,
      ShardSlot() -> 5,
      Teleporter(0) -> 1,
      Teleporter(1) -> 1,
      Teleporter(3) -> 1,
      Teleporter(4) -> 1,
      Teleporter(5) -> 1,
      Teleporter(6) -> 1,
      Teleporter(7) -> 1,
      Teleporter(8) -> 1,
      Teleporter(9) -> 1,
      Teleporter(10) -> 1,
      Teleporter(11) -> 1,
      Teleporter(12) -> 1,
    ) + Inv.mk(Shard.names.keys.map(Shard(_)).toSeq:_*) +
      Inv.mk(Skill.names.keys.filter(_ != "SpiritEdge").map(Skill(_)).toSeq:_*)


    def run(n: Int = 0, name_base: String = "seed", outputFolder: String = ""): Unit = {
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
      /*		while (locs.nonEmpty) {
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
        }*/
      bw.close()
    }
  }
}