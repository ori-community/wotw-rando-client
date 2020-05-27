import java.io.{BufferedWriter, File, FileWriter}

import scala.collection.mutable.{Map => MMap}
import scala.collection.parallel.CollectionConverters._
import scala.io.Source
import scala.util.{Random, Try}

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
    implicit val r: Random = new Random()
  }
  import SeedGenerator.implicits._

  case class LocData(area: String, name: String, category: String, value: String, zone: String, uberGroup: String, uberGroupId: Int, uberName: String, uberId: Int, x: Int, y: Int) {
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
    lazy val byName: Map[String, LocData] = all.map(data => s"${data.area}.${data.name}" -> data).toMap
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
        case Some(x) => println(s"Warning: $x was of unexpected type!"); state
        case None =>println(s"Warning: $name not in nodes!"); state
    }
  }

  case class Area(name: String, _conns: Seq[Connection] = Seq()) extends Node {
    val conns: Seq[Connection] = _conns.filterNot(_.req == Invalid)
    override val kind: NodeType = AreaNode
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
    override val kind: NodeType = ItemNode
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
    override def kind: NodeType = StateNode
    override def reached(state: GameState, nodes: Map[String, Node] = Map()): GameState = state + GameState.mk(WorldState(name), this)
  }

  trait Path {
    def source: Node
    def dest: Node
    def req: Requirement
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
    def filterFar(paths: Set[Path], nodes: Set[Node], far: Int): Set[Path] = paths.filter({
        case _: SimplePath => true
        case ChainedPath(links) if links.size < far => true
        case ChainedPath(links)  => nodes.contains(links.reverseIterator.drop(far-1).next().dest)
      })
  }
  case class SimplePath(source: Node, dest: Node, req: Requirement) extends Path {
    override def toString: String = s"${source.name}=>$req=>${dest.name}"
    override def substitute(orig: Requirement, repl: Requirement): Path = SimplePath(source, dest, req.substitute(orig, repl))
  }
  case class ChainedPath(paths: Seq[Path]) extends Path {
    def source: Node = paths.head.source
    def dest: Node = paths.last.dest
    override def nodes: Set[Node] = (source +: paths.map(_.dest)).toSet
    def req: Requirement = paths.foldLeft[Requirement](Free)((req, path) => req and path.req)
    override def toString: String = paths.foldLeft(source.name)((acc, p) =>  s"$acc=>${p.req}=>${p.dest.name}")
    def canCompose(other: Path): Boolean = other match {
      case SimplePath(s, d, _) => s == dest && !nodes.contains(d) // must link, no loops
      case c: ChainedPath => c.source == dest && !c.paths.exists(child => nodes.contains(child.dest)) // must link, no loops
    }
    def compose(other: Path): Option[Path] =  if(canCompose(other)) Some(other match {
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

    def pathByName(name: String): Option[(Node, Set[Path])] = paths.find(_._1.name == name)

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
      def pathAcc(p: Path): Set[Path] = if(pathsToHere.nonEmpty) pathsToHere.flatMap(_ and p) else Set(p)
      area.paths.flatMap(path => path.dest.kind match {
        case AreaNode if !seen.contains(path.dest.name) => _areas.get(path.dest.name).map(getAllPathsRecursive(_, pathAcc(path))).getOrElse({println("aaaaaa"); Map[Node, Set[Path]]()})
        case StateNode => Map(path.dest -> pathsToHere.filter(!_.req.children.contains(StateReq(path.dest.name))).flatMap(_ and path))
        case _ => Map(path.dest -> pathAcc(path))
      }).groupMapReduce(_._1)(_._2)(_ ++ _)
    }


    def stateCosts(items: Inv, far: Int): (Map[FlagState, GameState], Map[FlagState, GameState]) = {
      val (reached, flags) = getReachable(items)
      val state = GameState(items, flags)
      @scala.annotation.tailrec
      def refineRecursive(good: Map[FlagState, GameState], hasFlags: Map[FlagState, GameState]): (Map[FlagState, GameState], Map[FlagState, GameState]) = {
        val (newGood, newFlags) = (hasFlags.view.mapValues(s => s.flags.foldLeft(GameState(s.inv))((acc, flag) => acc + (if(state.flags.contains(flag)) GameState.Empty else good.getOrElse(flag, GameState.mk(flag)))))
          ++ good).toMap.partition(_._2.flags.isEmpty)
        if(newGood.size != good.size) {
          refineRecursive(newGood, newFlags)
        } else
          (newGood, newFlags)
      }
      val (good, needsRefined) = paths.collect[FlagState, GameState]({
        case (WorldStateNode(flag), _) if reached.contains(WorldStateNode(flag)) || state.flags.contains(WorldState(flag))
                                        => WorldState(flag) -> GameState.Empty
        case (WorldStateNode(flag), p)  => WorldState(flag) -> Path.filterFar(p, reached, far).foldLeft[Requirement](Invalid)((acc, p) => acc or p.req).cheapestRemaining(state)
      }).filterNot(_._2.inv.has(Unobtainium)).partition(_._2.flags.isEmpty)
      refineRecursive(good, needsRefined)
    }


    def fixAreas(areas: Map[String, Area]): Map[String, Area] = areas.values.map(area => area.name -> Area(area.name, area.conns.flatMap({
      case Connection(target: Placeholder, Invalid) if target.kind == ItemNode => println(target.name); None
      case Connection(target: Placeholder, reqs) if target.kind == ItemNode => ItemLoc.mk(target.name).map(Connection(_, reqs))
      case c => Some(c)
    }))).toMap

    var populatedWithSetting: Option[Boolean] = None
    def populate(debug: Boolean = false, advanced: Boolean = false): Boolean = {
      if(populatedWithSetting.contains(advanced))
        return true // already done lol
      AreaParser.AreasBuilder.run(print = debug) match {
        case Right(value) =>
          _areas = fixAreas(value)
          _items = _areas.flatMap(_._2.conns.collect({ case Connection(t: ItemLoc, r) if r != Invalid => t.name -> t }))
          _paths = getAllPathsRecursive()
          populatedWithSetting = Some(advanced)
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
    def code: String = loc.data.code
    def data = s"${loc.data.code}|${item.code}"
    def write: String = {
      Tracking.incAreas(item, loc.data)
      val dataPad = " " * (20 - data.length)
      val namePad = " " * (17 - item.name.length)
      s"$data$dataPad//$namePad${item.name} from ${loc.data.info}"
    }
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
      val progText = if(prog.count > 0) s" -- Chosen: ${prog.progText}" else ""
      val keyItems = placements.map(_.item).filterNot(prog.has(_)).collect({case i: Important => i})
      val keyItemsText = if(keyItems.nonEmpty) s" -- Randomly Placed: ${keyItems.mkString(", ")}" else ""
      if(standalone)
        s"// Placement Group ${i+1}$progText$keyItemsText"
      else
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
    def debugPrint(x: Any)(implicit debug: Boolean = false): Unit = if(debug) println(x)
    def trymk(inState: GameState, i:Int=0)
             (implicit r: Random, pool: Inv, debug: Boolean = false): Either[GeneratorError, PlacementGroup] = Try {
      mk(inState, i)
    }.toEither.left.map(
      {
        case e: GeneratorError => e
        case t: Throwable => val e = GeneratorError(t.getMessage)
          e.addSuppressed(t)
          e.setStackTrace(t.getStackTrace)
          e
      })
    def mk(inState: GameState, i:Int=0)(implicit r: Random, pool: Inv, debug: Boolean = false): PlacementGroup = {
      debugPrint(s"Starting iter: ${inState.reached.filter(_.kind == ItemNode)}")
      val (reachable, flags) = Nodes.getReachable(inState.inv, inState.flags)
      val state = inState + new GameState(Inv.Empty, flags)

      val locs = r.shuffle((reachable -- state.reached).collect({ case n: ItemLoc => n }).toSeq)
      val count = pool.count
      val placed = inState.reached.collect({ case n: ItemLoc => n }).size
      if(count+placed != ItemPool.SIZE)
        println(s"ERROR: $count + $placed != ${ItemPool.SIZE}")
      debugPrint(s"starting random placement into ${locs.size} locs,  ($placed /${ItemPool.SIZE} placed already, have itempool size $count")

      if(locs.isEmpty)
        throw GeneratorError(s"no new locs (${reachable.size} out of ${ItemPool.SIZE} reached)")
      def addPlacementsToState(ps: Seq[Placement], prefix: String = ""): Unit =
        ps.foreach(p => {state.inv.add(p.item); debugPrint(prefix + " " + p)})
      def assignRandom(itemLocs: Seq[ItemLoc]): Seq[Placement] = {
        val (shops, locs) = itemLocs.partition(_.data.category == "Shop")
          shops.map(shop => ShopPlacement(pool.popMerch.getOrElse(throw GeneratorError(s"${pool.merchToPop} $itemLocs ${pool.asSeq}")), shop)) ++
          locs.map(nonShop => ItemPlacement(pool.popRand.getOrElse(throw GeneratorError(s"${pool.merchToPop} $itemLocs ${pool.asSeq}")), nonShop))
      }
      if(reachable.size == ItemPool.SIZE) {
        val randPlacements = assignRandom(locs)
        addPlacementsToState(randPlacements, "rand: ")
        return PlacementGroup(state + new GameState(Inv.Empty, Set(), reachable), Inv.Empty, randPlacements, i)
      }

      val locIter = locs.iterator
      val reservedForProg = (1 to (locs.size match {
        // if random placement doesn't open something (and it often won't), we gotta place something. Reserve item slots for it so we aren't in trouble
        case n if n < 3 => n  // pick how many slots to save by how big the pool is.
        case n if n < 5 => 3  // ideally we'd like 3?
        case n if n < 10 => 4 // tweak if necessary
        case n if n < 15 => 6
        case _ => 8
      })).map(_ => locIter.next())
      debugPrint(s"reserving ${reservedForProg.size}: $reservedForProg")
      val randPlacements = assignRandom(locIter.toSeq)
      addPlacementsToState(randPlacements, "rand: ")
      if(randPlacements.nonEmpty) {
        val (newReach, _) = Nodes.getReachable(state.inv, flags)
        val newCount = (newReach -- reachable).collect({ case n: ItemLoc => n }).size
        debugPrint(s"checked new reachables, got $newCount")
        if(newCount > reservedForProg.size || newReach.size == ItemPool.SIZE)
          return PlacementGroup(state + new GameState(Inv.Empty, Set(), reachable -- reservedForProg), Inv.Empty, randPlacements, i)
    }

      def getProgressionPath(sizeLeft: Int, far: Int = 3): Inv = {
        var _fullWeight = 0d
        val (flagRemaining, unaffordable) = Nodes.stateCosts(state.inv, far)
        implicit val flagCosts: Map[FlagState, Double] = flagRemaining.view.mapValues(_.cost(state.flags.map(_ -> 0d).toMap)).toMap

        val remaining = ItemPool.SIZE - reachable.size
        if(remaining == 0)
          return Inv.Empty
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
        val possiblePathsPartial = Nodes.paths.toSeq
          .withFilter({
            case (node: ItemLoc, _) => !reachable.contains(node)
            case _ => false
          })
          .flatMap({ case (_, paths) => Path.filterFar(paths, reachable, far).flatMap(_.req.remaining(state)) })
          .toSet
          .map[GameState](state => GameState(state.inv) +
            state.flags.foldLeft(GameState.Empty)((acc, flag) => acc + flagRemaining.getOrElse(flag, GameState.mk(flag)))
          )
        val singles = possiblePathsPartial.filter(_.inv.count == 1).map(_.inv.head._1)
        val possiblePaths = possiblePathsPartial
          .withFilter(s => s.inv.count == 1 || !singles.exists(s.inv.has(_)))
          .withFilter(s =>
            s.inv.count <= sizeLeft &&
              s.flags.forall(f => state.flags.contains(f)) &&
              s.inv.forall(kv => pool.has(kv._1, kv._2))
          )
          .map((s: GameState) => s -> (Nodes.getReachable(state.inv + s.inv, state.flags)._1 -- reachable).size)
          .toSeq
          .collect({
            case (items, n) if n >= Math.min(3, remaining) => (acc(items), items)
            case (items, 1) => (acc(items, .1), items)
        })
        if(possiblePaths.isEmpty) {
          if(far < 8) {
            debugPrint(s"group $i: failed at far=$far, looking deeper")
            return getProgressionPath(sizeLeft, far+2)
          }
          println(s"pool: $pool")
          println(s"inv: ${state.inv}")

          println(flagRemaining.mkString("\n"))
          println(unaffordable.mkString("\n"))
          var possiblePathsPruned = possiblePathsPartial.filter(s => s.inv.count == 1 || !singles.exists(s.inv.has(_)))
          val tooBig = possiblePathsPruned.filterNot(_.inv.count <= sizeLeft)
          if(tooBig.nonEmpty)
            println("too big:\n" + tooBig.mkString("\n"))
          possiblePathsPruned = possiblePathsPruned.filter(_.inv.count <= sizeLeft)
          val flagProb = possiblePathsPruned.filterNot(_.flags.forall(state.flags.contains))
          if(flagProb.nonEmpty)
            println("flags:\n" + flagProb.map(s => (s.flags, s.flags -- flags)).mkString("\n"))
          (Nodes.items.values.toSet[Node] -- reachable).take(5).foreach(n => {
            println(s"${n.name}: \n\t${Nodes.paths(n).map(_.req.cheapestRemaining(state)).mkString("\n\t")}")
          })

          throw GeneratorError(s"No possible paths???")
        }
        val limit = r.nextDouble() * _fullWeight
        val chosenPath = possiblePaths.dropWhile(_._1 < limit).headOption.getOrElse(possiblePaths.last)._2.inv
        debugPrint(s"choose $limit: $chosenPath")
        chosenPath
      }
      val progPath = getProgressionPath(reservedForProg.size)
      val (progLocs, remaining) = reservedForProg.splitAt(progPath.count)
      val progPlacements = progPath.asSeq.zip(progLocs).map({
            // this might seem sketch but it's almost literally always impossible
            // for a progression item not to be Merch
        case (item: Merch, shop) if shop.data.category == "Shop" =>
          pool.take(item)
          pool.merchToPop-=1
          ShopPlacement(item, shop)
        case (item, nonShop) =>
          pool.take(item)
          ItemPlacement(item, nonShop)
      })
      val restPlacements =  progPlacements ++ assignRandom(remaining)
      addPlacementsToState(restPlacements, "prog: (")
      PlacementGroup(state + new GameState(Inv.Empty, Set(), reachable), progPath, randPlacements ++ restPlacements, i)
    }
  }



object Runner {
    def setSeed(): Long => Unit = r.setSeed
    val DEFAULT_INV: GameState = GameState(new Inv(Health -> 6, Energy -> 6, Sword -> 1))
    private def mkSeed(advanced: Boolean = false)(implicit debug: Boolean = false) = {
    def mkSeed(advanced: Boolean = false)(implicit debug: Boolean = false) = {
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
        case None       => forceGetSeed(advanced, retries-1, debug, time = false)
      }
      val t1 = System.currentTimeMillis()
      if(time)
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
      val name_base = s"$pack"
      val dirPath =  s"seeds/seed_pack_$pack"
      val dir = new File(dirPath)
      if (!dir.exists())
        dir.mkdirs()
      Nodes.populate()
      val t1 = System.currentTimeMillis()
      println(s"populated base paths in ${(t1-t0)/1000f}s")
      (1 until count).par.foreach(n => {
        val file = new File(s"$dirPath/${name_base}_${n}_base.wotwr")
        val bw = new BufferedWriter(new FileWriter(file))
        bw.write(forceGetSeed())
        bw.close()
      })
      val t2 = System.currentTimeMillis()
      println(s"Generated base seeds in ${(t2-t1)/1000f}s (average ${(t2-t1)/(1000f*count)}s, ${(t2-t0)/1000f}s total)")
      Nodes.populate()
      val t3 = System.currentTimeMillis()
      println(s"populated advanced paths in ${(t3-20)/1000f}s (${(t3-t0)/1000f}s total)")

      (count until (count + count/2)).par.foreach(n => {
        val file = new File(s"$dirPath/${name_base}_${n}_advanced.wotwr")
        val bw = new BufferedWriter(new FileWriter(file))
        bw.write(forceGetSeed(advanced = true))
        bw.close()
      })
      val t4 = System.currentTimeMillis()
      println(s"Generated ${count/2} advanced seeds in ${(t4-t3)/1000f}s (average ${(t4-t3)/(500f*count)}s,  ${(t4-t0)/1000f}s total)")
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
  lazy val SIZE: Int = Nodes.items.size
  def build(size: Int = SIZE)(implicit r: Random): Inv = {
    val pool = new Inv(Health -> 24, Energy -> 24, Ore -> 39, ShardSlot -> 5) +
      Inv.mk(WorldEvent.poolItems ++ Shard.poolItems ++ Skill.poolItems ++ Teleporter.poolItems:_*)
    while(pool.count < size) pool.add(SpiritLight(r.between(50, 150)))
    pool.merchToPop = LocData.all.count(data => data.category == "Shop")
    pool
  }
}
}