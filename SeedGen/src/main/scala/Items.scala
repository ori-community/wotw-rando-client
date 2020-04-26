package SeedGenerator {

  import scala.collection.mutable
  import scala.util.Random

  trait Item {
    def itemType: Int
    def name: String
    def code: String
    def cost: Double = 1 // 1/weight, more or less
    override def toString = s"$name"
  }

  trait Sellable extends Item
  trait Unplaceable extends Item {
    override val cost = Double.PositiveInfinity
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
    def code = s"$itemType|${skillId}"
    def name: String = s"Skill ${Skill.names.getOrElse(skillId, s"Unknown (${skillId})")}"
    override val cost = 5
  }

  object Skill {
    val names: Map[Int, String] = Map(
      0 -> "Bash",
      3 -> "WallJump",
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
      99 -> "Torch",
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
    val poolItems = names.keys.withFilter(!Seq(3, 99, 100).contains(_)).map(Skill(_)).toSeq
  }

  case class Shard(shardId: Int) extends Item with Sellable {
    val itemType: Int = 3
    def code = s"$itemType|${shardId}"
    def name: String = s"Shard ${Shard.names.getOrElse(shardId, s"Unknown (${shardId})")}"
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
    val poolItems = names.keys.map(Shard(_)).toSeq
  }

  case class Teleporter(teleporterId: Int) extends Item with Sellable {
    val itemType: Int = 5
    def code = s"$itemType|${teleporterId}"
    def name: String = s"${Teleporter.names.getOrElse(teleporterId, s"Unknown (${teleporterId})")} TP"
    override val cost = 3
  }

  object Teleporter {
    val names: Map[Int, String] = Map(
      0 -> "Burrows",
      1 -> "Den",
      2 -> "East Pools",
      3 -> "Wellspring",
      4 -> "Reach",
      5 -> "Hollow",
      6 -> "Depths",
      7 -> "West Woods",
      8 -> "East Woods",
      9 -> "West Wastes",
      10 -> "East Wastes",
      11 -> "Outer Ruins",
      12 -> "Willow",
      13 -> "West Pools",
      14 -> "Inner Ruins",
      15 -> "Shriek",
      16 -> "Marsh",
    )
    val poolItems = names.keys.withFilter(!Seq(2, 13, 14, 15, 16).contains(_)).map(Teleporter(_)).toSeq
  }

  // fake inventory items
  object Unobtainium extends Item with Unplaceable {
    override def name: String = "Unobtainium"
    override val cost = Double.PositiveInfinity
  }
  trait FlagState { def name: String }

  case class WorldState(name: String) extends FlagState
  case class SeedGenState(name: String) extends FlagState // will become a series of case objects later

  case class GameState(inv: Inv, flags: Set[FlagState] = Set(), reached: Set[Node] = Set()) {
    def +(other: GameState): GameState = GameState(inv + other.inv, flags ++ other.flags, reached ++ other.reached)
    def cost(implicit flagCosts: Map[FlagState, Double] = Map()) =  inv.cost + flags.foldLeft(0d)((i, f) => i + flagCosts.getOrElse(f, 10000d))
    def canEqual(that: Any): Boolean = that.isInstanceOf[GameState]
    override def equals(state: Any): Boolean = {
      state match {
        case other: GameState => other.flags == flags &&
          other.reached == reached &&
          other.inv == inv
        case _ => false
      }
    }
    def withParams(params: Either[Item, Either[FlagState, Node]]*) = this + GameState.mk(params:_*)
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

  // extending hashset instead of encapsulating it here was pure folly, tbh
  class Inv(items: (Item, Int)*) extends mutable.HashMap[Item, Int] {
    items.foreach({ case (i: Item, count: Int) => set(i, count) })
    def set(item: Item, count: Int): Unit = this (item) = count
    override def apply(item: Item): Int = getOrElse(item, 0)
    override def toString = s"Inv: (${
      filter(_._2 > 0).filterNot(kv => kv._1.isInstanceOf[SpiritLight] || kv._1.isInstanceOf[Shard]).map({
        case (item, 1) => s"$item"
        case (item, c) => s"$c ${item}"
      }).mkString(", ")
    })"

    def asSeq: Seq[Item] = keys.toSeq.flatMap(k => (0 until this (k)).map(_ => k))
    def count = foldLeft(0)(_ + _._2)
    def cost: Double = foldLeft(0d)({ case (cost: Double, (i: Item, c: Int)) => cost + i.cost * c })
    def has(item: Item, count: Int = 1) = getOrElse(item, 0) >= count
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
    def popRand(implicit r: Random): Option[Item] = asSeq match {
      case s: Seq[Item] if (s.size > 0) => {
        val i = r.shuffle(s).apply(r.nextInt(s.size))
        take(i)
        Some(i)
      }
      case _ => None
    }
    def popSellable(implicit r: Random): Option[Sellable] = {
      val sellables = asSeq.collect({case i: Sellable => i})
      if (sellables.isEmpty)
        return None
      val i = sellables(r.nextInt(sellables.size))
      take(i)
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

}
