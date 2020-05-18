import scala.util.parsing.input.Positional
import scala.collection.mutable
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
  trait Requirement {
    def metBy(state: GameState): Boolean
    def remaining(state: GameState = GameState.Empty): Seq[GameState]
    def cheapestRemaining(state: GameState = GameState.Empty): GameState = remaining(state)
      .minByOption(_.cost)
      .getOrElse(GameState.Empty)
    def afterMet(state: GameState): GameState = state
    def and(that: Requirement): Requirement = AllReqs(this, that)
    def or(that: Requirement): Requirement = AnyReq(this, that)
  }

  trait Consumer extends Requirement

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

  case class OreReq(oreCount: Int) extends Requirement with Consumer {
    def metBy(state: GameState): Boolean = state.inv(Ore()) >= oreCount
    override def afterMet(state: GameState) = state.without(Ore(), oreCount)
    def remaining(state: GameState) = Seq(GameState(new Inv(Ore() -> Math.max(0, oreCount - state.inv(Ore())))))
  }

  case class EnergyReq(count: Int) extends Requirement with Consumer {
    def energy(state: GameState) = state.inv(Energy())/2f
    def metBy(state: GameState): Boolean = energy(state) >= count
    override def afterMet(state: GameState) = state.without(Energy(), count*2)
    def remaining(state: GameState) = Seq(GameState(new Inv(Energy() -> Math.max(0, 2*(count) - state.inv(Energy())))))
    override def and(that: Requirement): Requirement = that match {
      case EnergyReq(c) => EnergyReq(c+count)
      case r => AllReqs(this, r)
    }
  }
  case class DangerReq(damage: Int) extends Requirement {
    def health(state: GameState) = state.inv(Health()) * 5
    def metBy(state: GameState): Boolean = health(state) > damage
    def remaining(state: GameState) = Seq(GameState(new Inv(Health() -> Math.max(0, Math.ceil((damage + 1 - health(state))/5f).intValue()))))
    override def and(that: Requirement): Requirement = that match {
      case DangerReq(d) => DangerReq(d+damage)
      case r => AllReqs(this, r)
    }
  }

  case class DamageReq(damage: Int) extends Requirement with Consumer {
    def health(state: GameState) = state.inv(Health()) * 5
    def metBy(state: GameState): Boolean = health(state) > damage
    override def afterMet(state: GameState) = state.without(Health(), Math.ceil(damage/5f).intValue())
    def remaining(state: GameState) = Seq(GameState(new Inv(Health() -> Math.max(0, Math.ceil((damage + 1 - health(state))/5f).intValue()))))
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
          case head :: rest =>
            println(s"WARNING: AnyReq.afterMet with multiple child consumers: $consumers. Taking head, ignoring rest")
            head.afterMet(state)
          case Nil =>
            throw GeneratorError(s"invalid state; $this ${metBy(state)} $others, $consumers, ${state.inv}")
        }
    }
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
    def metMaybe(state: GameState) = reqs.foldLeft[Option[GameState]](Some(state))((st, req) => st.filter(req.metBy(_)).map(req.afterMet(_)))
    def metBy(state: GameState): Boolean = metMaybe(state).nonEmpty
    override def afterMet(state: GameState) = {
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
      case reqs if reqs.exists(_.isInstanceOf[Consumer]) => new AllReqs(reqs:_*) with Consumer
      case reqs => new AllReqs(reqs:_*)
    }
  }

  case class LocData(area: String, name: String, category: String, value: String, zone: String, uberGroup: String, uberGroupId: Int, uberName: String, uberId: Int, x: Int, y: Int) {
    val code = s"$uberGroupId|$uberId"

    def info: String = uberGroupId match {
      case 1 => s"$area.$name (Shop) (Opher)"
      case 2 => s" $area.$name (Shop) (Twillen)"
      case _ => s"$area.$name  (${x},${y}) ${zone}"
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
      pickups.filter(_.value != "LupoZoneMap") //.filter(loc => loc.category != "Quest" && loc.value != "ShardSlot")
    }
    lazy val byName = all.map(data => (s"${data.area}.${data.name}") -> data).toMap
  }

  sealed trait NodeType
  case object AreaNode extends NodeType
  case object ItemNode extends NodeType
  case object StateNode extends NodeType

  trait Node {
    def name: String
    def reached(state: GameState, nodes: Map[String,Node] = Map()): GameState =  state + GameState.mk(this)
    def kind: NodeType
  }

  case class Connection(target: Node, req: Requirement)

  case class Placeholder(name: String, kind: NodeType = AreaNode) extends Node {
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = nodes.get(name) match {
        case Some(n: Node) if n.kind == kind => n.reached(state, nodes)
        case Some(x) => println(s"Warning: ${x} was of unexpected type!"); state
        case None =>println(s"Warning: ${name} not in nodes!"); state
    }
  }

  case class Area(name: String, conns: Seq[Connection] = Seq()) extends Node {
    override val kind = AreaNode
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = {
      conns.foldLeft(super.reached(state, nodes))({
        case (s, Connection(target, _)) if s.reached.contains(nodes.getOrElse(target.name, target)) => s
        case (s, Connection(target, req)) if req.metBy(s)             => target.reached(s, nodes)
        case (s, _)                                                   => s
      })
    }
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

  object Nodes {
    def areas = {
      if (_areas.isEmpty)
        populate()
      _areas
    }

    def items = {
      if (_items.isEmpty) populate()
      _items
    }

    def getReachable(inv: Inv, flags: Set[FlagState]= Set()): Set[Node] = {
      var oldFlags = flags
      var state = spawn.reached(GameState(inv, flags), areas)
      while(oldFlags != state.flags) {
        val newFlags = state.flags -- oldFlags
        oldFlags = state.flags
        state = spawn.reached(GameState(inv, oldFlags), areas)
//        println(s"rerunning with states: $newFlags")
      }
      state.reached.flatMap(node => items.get(node.name))
    }

    var _areas: Map[String, Area] = Map()
    var _items: Map[String, ItemLoc] = Map()
    var _paths: Map[String, Requirement] = Map()

    def fixAreas(areas: Map[String, Area]): Map[String, Area] = areas.values.map(area => area.name -> Area(area.name, area.conns.flatMap({
      case Connection(target: Placeholder, Invalid) if target.kind == ItemNode => None
      case Connection(target: Placeholder, reqs) if target.kind == ItemNode => ItemLoc.mk(target.name).map(Connection(_, reqs))
      case c => Some(c)
    }))).toMap

    def populate(debug: Boolean = false) = {
      AreaParser.AreasBuilder.run(print = debug) match {
        case Right(value) =>
          _areas = fixAreas(value)
          _items = _areas.flatMap(_._2.conns.collect({ case Connection(t: ItemLoc, r) if r != Invalid => t.name -> t }))
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
      val padding = " " * (25 - data.size)
      s"$data$padding// ${item.name} from ${loc.data.info}"
    }
  }
  case class ItemPlacement(item: Item, loc: ItemLoc) extends Placement

  case class ShopPlacement(item: Sellable, loc: ItemLoc, multi: Int) extends Placement {
    override val data = s"${loc.data.code}|${item.code}|${multi/100f}"
  }

  case class GeneratorError(message: String) extends Error {
    override def toString: String = s"GeneratorError: $message"
  }

  case class PlacementGroup(outState: GameState, placements: Seq[Placement], i: Int)(implicit r: Random, pool: Inv) {
    def write: String = /*(" " * 25) + s"// $i, prog: ${prog.toString.replace("Inv: ","")}\n" + */placements.map(_.write).mkString("\n")
    def next(): Either[GeneratorError, PlacementGroup] = {
      PlacementGroup.mk(outState, i + 1)
    }
  }
  object PlacementGroup {
    def mk(inState: GameState, i:Int=0)(implicit r: Random, pool: Inv) = Try {
      implicit val flagCosts: Map[FlagState, Double] = inState.flags.map(_ -> 0d).toMap
      val reachable = Nodes.getReachable(inState.inv, inState.flags)
      val locs = r.shuffle((reachable -- inState.reached).collect({ case n: ItemLoc => n }))
      var _fullWeight = 0d

      if(locs.isEmpty) {
        if(reachable.size == Nodes.items.size)
          throw GeneratorError("successful gen") // good code here! not bad code. nope.
        throw GeneratorError(s"no new locs (${reachable.size} out of ${Nodes.items.size} reached)")
      }

      /*def acc(st: GameState): Double = {
        if(!st.cost.isFinite || st.inv.count == 0)
          println(s"What? ${st}")
        _fullWeight += 1 / (st.inv.cost * Math.max(st.inv.count,1)); _fullWeight
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
              case (items, met)=> /*println(s"${items}->${met.size} $met")*/; (0d, items)
            })
            if(possiblePaths.isEmpty)
              throw GeneratorError(s"No possible paths???")
            val limit = r.nextDouble() * _fullWeight
            val chosenPath = possiblePaths.dropWhile(_._1 < limit).headOption.getOrElse(possiblePaths.last)._2.inv
      //      println(chosenPath)
            val (shopLocs, nonShopLocs) = locs.partition(_.data.category == "Shop")
            val chosenItems = chosenPath.asSeq.map(item => {
              if (!pool.take(item))
                throw GeneratorError(s"Failed to place $item (was not in $pool)")
              item
            })*/
      val (shopLocs, nonShopLocs) = locs.partition(_.data.category == "Shop")
      val RETRIES = 30
      def getItems(n: Int = RETRIES): Seq[Item] = {
            if(n < 0) {
              println(s"$n, 0, ${pool.toSeq.filter(i => i._1.itemType != 0 && i._2 > 0)}, ${Nodes.items.values.filterNot(loc => reachable.exists(_.name == loc.name))}")
              throw GeneratorError("Game over :C")
            }
          val progressionItems: Seq[Item] = Skill.poolItems ++ Teleporter.poolItems ++ WorldEvent.poolItems
          val fudgeFactor = Math.min(locs.size, n match {
            case i if i > 20 => 0
            case i if i > 15 => 1
            case i if i > 10 => 2
            case i if i > 5 => 3
            case i => 7 - i
          })
          val items = (0 until locs.size).map(m => {
            val maybeItem = // this is valid scala so technically i've done nothing wrong
              if (m < shopLocs.size + fudgeFactor) {
                if(n < 15)
                  pool.popProbableProgression(reachable.size).orElse(pool.popSellable(reachable.size))
                else
                  pool.popSellable(reachable.size)
              } else
                pool.popRand(reachable.size + i - RETRIES)
            if (maybeItem.isEmpty)
            {
              println(s"$n, $m, ${pool.toSeq.filter(_._2 > 0)}, ${Nodes.items.values.filterNot(loc => reachable.exists(_.name == loc.name))}")
              throw GeneratorError(s"Failed to get random item from ${pool.toSeq.filter(_._2 > 0)}")
            }
          maybeItem.get
        })
        val newReached = Nodes.getReachable(inState.inv + Inv.mk(items:_*))
        //println(s"$n, $items, ${newReached.size} $newReached")
        if(newReached.size > reachable.size + (if(n > 15) 2 else 1) || newReached.size == Nodes.items.size) {
          //println(s"${newReached.size - reachable.size} new locs. Took ${RETRIES-n} tries. pool: ${pool.count}/${ItemPool.ITEM_COUNT} placed: ${inState.reached.collect({case i: ItemLoc => i}).size + locs.size}/${ItemPool.ITEM_COUNT} ")
          items
        } else {
          items.foreach(pool.add(_)) // put em back :upside_clown:
          getItems(n-1)
        }
      }

      val placedItems = getItems()

      val (shopIter, nonShopIter) = (shopLocs.iterator, nonShopLocs.iterator)

      val placements = r.shuffle(placedItems).map({
          case s: Sellable if shopIter.hasNext => ShopPlacement(s, shopIter.next(), r.between(-30, 20))
          case p if nonShopIter.hasNext => ItemPlacement(p, nonShopIter.next())
          case i => throw GeneratorError(s"Placement of $i failed; one of the iterators ran out! ${shopIter.toSeq}  ${nonShopIter.toSeq}" +
            s". Was placing $placedItems into ${locs.map(_.name)}")
        })
      val outState = inState + new GameState(Inv.Empty, Set(), reachable)
      placedItems.foreach(i => outState.inv.add(i))
      PlacementGroup(outState, placements, i)
    }.toEither.left.map(
      {
        case e: GeneratorError => e
        case t: Throwable => val e = GeneratorError(t.getMessage)
          e.addSuppressed(t)
          e.setStackTrace(t.getStackTrace)
          e
      })
  }

  object Runner {
    val setSeed = r.setSeed _
    val DEFAULT_INV = GameState(new Inv(Health() -> 6, Energy() -> 6, Sword -> 1))
    def mkSeed(advanced: Boolean = false) = {
      implicit val pool = ItemPool.build()
      if(advanced)
        recurse(Seq(), DEFAULT_INV.withParams(WorldState("advanced")))
      else
        recurse()
    }
    def recurse(grps: Seq[PlacementGroup] = Seq(), startState: GameState = DEFAULT_INV)(implicit pool: Inv): (Seq[PlacementGroup], Option[GeneratorError]) = {
      grps.lastOption.map(_.next()).getOrElse({
        PlacementGroup.mk(DEFAULT_INV)
      }) match {
        case Right(next) => recurse(grps :+ next)
        case Left(GeneratorError("successful gen")) => (grps, None)
        case Left(error) =>(grps, Some(error))
      }
    }
    def getSeedOpt(advanced: Boolean = false): Option[String] = {
      val (grps, err) = mkSeed()
      err match {
        case Some(e)  => println(s"$e"); None
        case None     => Some(grps.map(plcmnts => plcmnts.write).mkString("\n"))
      }
    }
    def forceGetSeed(advanced: Boolean = false, retries: Int = 10): String = {
      if(retries == 0)
        throw GeneratorError("Ran out of retries on forceGetSeed")
      getSeedOpt(advanced) match {
        case Some(seed) => seed
        case None       => forceGetSeed(advanced, retries-1)
      }
    }
    def apply(advanced: Boolean = false): Unit = {
      val file = new File(s"seeds/seed_0.wotwr")
      val bw = new BufferedWriter(new FileWriter(file))
      bw.write(forceGetSeed(advanced))
      bw.close()
    }

    def mk(pack: Int, count: Int = 100): Unit = {
      val name_base = s"${pack}"
      val dirPath =  s"seeds/seed_pack_$pack"
      val dir = new File(dirPath)
      if (!dir.exists())
        dir.mkdirs()
      for (n <- 1 until count) {
        val file = new File(s"${dirPath}/${name_base}_${n}_base.wotwr")
        val bw = new BufferedWriter(new FileWriter(file))
        bw.write(forceGetSeed())
        bw.close()
      }
      for (n <- count until (count + count/2)) {
        val file = new File(s"${dirPath}/${name_base}_${n}_advanced.wotwr")
        val bw = new BufferedWriter(new FileWriter(file))
        bw.write(forceGetSeed(true))
        bw.close()
      }

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
    lazy val ITEM_COUNT: Int = Nodes.items.size
    def build(size: Int = ITEM_COUNT)(implicit r: Random) = {
      val pool = new Inv(Health() -> 24, Energy() -> 24, Ore() -> 39, ShardSlot() -> 5) +
        Inv.mk(WorldEvent.poolItems ++ Shard.poolItems ++ Skill.poolItems ++ Teleporter.poolItems:_*)
      while(pool.count < size) pool.add(SpiritLight(r.between(50, 150)))
      pool
    }
  }
}