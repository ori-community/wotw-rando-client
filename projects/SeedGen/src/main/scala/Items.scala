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

  trait Merch extends Item
  trait Important extends Item // literally just "show this in spoilers"
  trait Unplaceable extends Item {
    override val cost: Double = Double.PositiveInfinity
    override def code: String = "ERROR|ERROR"
    val itemType: Int = -1
  }

  trait SpiritLightItem extends Item {
    val itemType: Int = 0
    def amount: Int
    def name = s"$amount Spirit Light"
    def code = s"$itemType|$amount"
    override val cost: Double = amount / 100f
  }

  case class SpiritLight(amount: Int) extends SpiritLightItem
  class Resource(resourceType: Int, val name: String) extends Item with Merch {
    val itemType = 1
    def code = s"$itemType|$resourceType"
  }

  case object Health extends Resource(0, "Half-Health Cell") with Important { override val cost = 0.2f }
  case object Energy extends Resource(1, "Half-Energy Cell") with Important
  case object Ore extends Resource(2, "Gorlek Ore") with Important
  case object Keystone extends Resource(3, "Keystone") with Important
  case object ShardSlot extends Resource(4, "Shard Slot")

  case class WorldEvent(eventId: Int) extends Item with Merch with Important  {
    val itemType: Int = 9
    def code = s"$itemType|$eventId"
    def name: String = s"${WorldEvent.names.getOrElse(eventId, s"Unknown World Event $eventId")}"
    override val cost = 7
  }

  case class Bonus(bonusId: Int, val name: String) extends Item with Merch  {
    val itemType: Int = 10
    def code = s"$itemType|$bonusId"
  }
  object HealthRegen extends Bonus(0, "Health Regeneration")
  object EnergyRegen extends Bonus(1, "Energy Regeneration")
  object ExtraJump extends Bonus(2, "Extra Double Jump")
  object ExtraDash extends Bonus(3, "Extra Air Dash")

  object Bonus {
    def poolItems: Seq[Bonus] =
      if(Config().bonusItems)
        new Inv((HealthRegen, 3), (EnergyRegen, 3), (ExtraDash, 1), (ExtraJump, 1)).asSeq.collect{case a: Bonus => a}
      else
        Nil
  }


  object WorldEvent {
    val names: Map[Int, String] = Map(
      0 -> "Water"
    )
    val areaFileNames: Map[String, Int] = names.map({case (a, b) => b->a})
    val poolItems: Seq[WorldEvent] = names.keys.map(WorldEvent(_)).toSeq
  }
  object Water extends WorldEvent(0)

  case class Skill(skillId: Int) extends Item with Merch with Important {
    val itemType: Int = 2
    def code = s"$itemType|$skillId"
    def name: String = s"${Skill.names.getOrElse(skillId, s"Unknown ($skillId)")}"
    override val cost: Double = Skill.costs.getOrElse(skillId, 5d)
  }
  object Skill {
    val itemType: Int = 2
    val areaFileNames: Map[String, Int] = Map("Bash" ->0, "DoubleJump" ->5, "Torch" ->99, "Sword" ->100, "WallJump" ->3, "Launch" ->8, "Feather"->14, "Glide" ->14, "WaterBreath" ->23, "LightBurst"->51, "Grenade" ->51, "Grapple" ->57, "Flash" ->62, "Spike" ->74, "Spear" ->74, "Regenerate" ->77, "Bow" ->97, "Hammer" ->98, "Burrow" ->101, "Dash" ->102, "WaterDash" ->104, "SpiritStar" ->106, "Shuriken" ->106, "Blaze" ->115, "Sentry" ->116, "Flap" ->118)
    val costs: Map[Int, Double] = Map(8 -> 16, 77 -> 3, 98 -> 4,
      100 -> 8 // TODO: delete this when item pool editor
    )
    val names: Map[Int, String] = Map(
      0 -> "Bash",
      3 -> "Wall Jump",
      5 -> "Double Jump",
      8 -> "Launch",
      14 -> "Feather",
      23 -> "Water Breath",
      51 -> "Light Burst",
      57 -> "Grapple",
      62 -> "Flash",
      74 -> "Spike",
      77 -> "Regenerate",
      97 -> "Bow",
      98 -> "Hammer",
      99 -> "Torch",
      100 -> "Sword",
      101 -> "Burrow",
      102 -> "Dash",
      104 -> "Water Dash",
      106 -> "Shuriken",
      108 -> "Seir",
      115 -> "Blaze",
      116 -> "Sentry",
      118 -> "Flap",
      120 -> "Ancestral Light",
      121 -> "Ancestral Light"
    )
    def poolItems: Seq[Skill] = names.keys.withFilter(!Seq(3, 99, 100, 108).contains(_)).map(Skill(_)).toSeq  ++
      (if(Config().flags.noSword) Seq(Sword) else Nil)
  }
  case class Shard(shardId: Int) extends Item with Merch {
    val itemType: Int = 3
    def code = s"$itemType|$shardId"
    def name: String = s"${Shard.names.getOrElse(shardId, s"Unknown ($shardId)")}"
  }

  object Shard {
    val names: Map[Int, String] = Map(
      1 -> "Overcharge",
      2 -> "Triple Jump",
      3 -> "Wingclip",
      4 -> "Bounty",
      5 -> "Swap",
      8 -> "Magnet",
      9 -> "Splinter",
      13 -> "Reckless",
      14 -> "Quickshot",
      18 -> "Resilience",
      19 -> "Light Harvest",
      22 -> "Vitality",
      23 -> "Life Harvest",
      25 -> "Energy Harvest",
      26 -> "Energy",
      27 -> "Life Pact",
      28 -> "Last Stand",
      30 -> "Secret",
      32 -> "Ultra Bash",
      33 -> "Ultra Grapple",
      34 -> "Overflow",
      35 -> "Thorn",
      36 -> "Catalyst",
      38 -> "Turmoil",
      39 -> "Sticky",
      40 -> "Finesse",
      41 -> "Spirit Surge",
      43 -> "Lifeforce",
      44 -> "Deflector",
      46 -> "Fracture",
      47 -> "Arcing",
    )
    val poolItems: Seq[Shard] = names.keys.map(Shard(_)).toSeq
  }
  case class Teleporter(teleporterId: Int) extends Item with Merch with Important {
    val itemType: Int = 5
    def code = s"$itemType|$teleporterId"
    def name: String = s"${Teleporter.names.getOrElse(teleporterId, s"Unknown ($teleporterId)")} TP"
    override val cost: Double = Teleporter.costs.getOrElse(teleporterId, 4d)
  }

  object Teleporter {
    val itemType: Int = 5
    val costs: Map[Int, Double] = Map(3 -> 14, 11->10)
    val areaFileNames = Map("BurrowsTP" -> 0, "DenTP" -> 1, "EastPoolsTP" -> 2, "WellspringTP" -> 3, "ReachTP" -> 4, "HollowTP" -> 5, "DepthsTP" -> 6, "WestWoodsTP" -> 7, "EastWoodsTP" -> 8, "WestWastesTP" -> 9, "EastWastesTP" -> 10, "OuterRuinsTP" -> 11, "WillowTP" -> 12, "WestPoolsTP" -> 13, "InnerRuinsTP" -> 14, "GladesTP" -> 17)
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
      17 -> "Glades"
    )
    def poolItems: Seq[Teleporter] = if(Config().tps) names.keys.withFilter(!Seq(13, 14, 15, 16).contains(_)).map(Teleporter(_)).toSeq else Nil
  }

  // fake inventory items
  object Unobtainium extends Item with Unplaceable {
    override def name: String = "Unobtainium"
    override val cost: Double = Double.PositiveInfinity
  }
  trait FlagState {
    def name: String
  }
  object FlagState {
    def unapply(arg: FlagState): Option[String] = Some(arg.name)
  }

  case class WorldState(name: String) extends FlagState
  case class SeedGenState(name: String) extends FlagState // will become a series of case objects later


  case class GameState(inv: Inv, flags: Set[FlagState] = Set(), reached: Set[Node] = Set()) {
    def progInv: Inv = inv.progInv
    def +(other: GameState): GameState = GameState(inv + other.inv, flags ++ other.flags, reached ++ other.reached)
    def -(other: GameState): GameState = GameState(inv - other.inv, flags -- other.flags, reached -- other.reached)
    def noFlags: GameState = GameState(inv, Set(), reached)
    def invOnly: GameState = GameState(inv)
    def items: Set[ItemLoc] = reached.collect({case i: ItemLoc => i})
    def areas: Set[Area] = reached.collect({case a: Area => a})
    def noReached: GameState = GameState(inv, flags)
    def without(item: Item, count: Int): GameState = GameState(inv.without(item, count), flags, reached)
    def withoutCash(cash: Int): GameState = GameState(inv.withoutCash(cash), flags, reached)
    def cost(implicit flagCosts: Map[FlagState, Double] = Map()): Double = inv.cost + flags.foldLeft(0d)((i, f) => i + flagCosts.getOrElse(f, 10000d))
    def canEqual(that: Any): Boolean = that.isInstanceOf[GameState]
    override def equals(state: Any): Boolean = {
      state match {
        case other: GameState => other.flags == flags &&
          other.reached == reached &&
          other.inv == inv
        case _ => false
      }
    }
    def withParams(params: Either[Item, Either[FlagState, Node]]*): GameState = this + GameState.mk(params:_*)
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

  case class Orbs(health: Int, energy: Int) {
    def max(other: Orbs): Orbs = Orbs(Math.max(this.health, other.health), Math.max(this.energy, other.energy))
    def min(other: Orbs): Orbs = Orbs(Math.min(this.health, other.health), Math.min(this.energy, other.energy))
    def +(other: Orbs): Orbs = Orbs(health+other.health, energy + other.energy)
    def -(other: Orbs): Orbs = Orbs(health - other.health, energy - other.energy)
    def value: Int = health + 3*energy // subject to change
    def valid: Boolean  = health > 0 && energy >= 0
  }

  // extending hashset instead of encapsulating it here was pure folly, tbh
  class Inv(items: (Item, Int)*) extends mutable.HashMap[Item, Int] {
    def progInv(): Inv = Inv.mk(
      asSeq.collect {case i: Important => i
    }:_*)
    def subsetOf(other: Inv): Boolean = Timer("subsetChecks"){other.count > this.count && forall{case (i, c) => other.has(i,c)}}
    items.collect({ case (i: Item, count: Int) if count > 0 => set(i, count) })
    def totalSpiritLight: Int = collect({case (SpiritLight(amount), i) => amount*i}).sum
    def withoutCash(cash: Int): Inv = {
      val totalLight = collect({case (SpiritLight(amount), i) => amount*i}).sum
      if(totalLight < cash)
        Config.error("THIS SEEMS SUBOPTIMAL")
      new Inv(keys.flatMap({
        case _: SpiritLight => None
        case i => Some(i -> this(i))
      }).toSeq :+ (SpiritLight(totalLight - cash) -> 1):_*)
    }
    def orbs: Orbs = Orbs(this(Health)*5, this(Energy)*5)
    def set(item: Item, count: Int): Unit =  this (item) = count
    override def apply(item: Item): Int = getOrElse(item, 0)
    override def toString = s"Inv: (${
      filter(_._2 > 0).toSeq.sortBy({
        case (_: SpiritLight, _) => 2
        case (_: Shard, _) => 1
        case _ => 0
      }).map({
        case (item, 1) => s"$item"
        case (item, c) => s"$c $item"
      }).mkString(", ")})"
    def progText: String = s"${filter(_._2 > 0).map({
        case (item, 1) => s"$item"
        case (item, c) => s"$c $item"
      }).mkString(", ")}"
    def asSeq: Seq[Item] = keys.toSeq.flatMap(k => (0 until this (k)).map(_ => k))
    def count: Int = foldLeft(0)(_ + _._2)
    override def isEmpty: Boolean = count == 0
    def cost: Double = foldLeft(0d)({ case (cost: Double, (i: Item, c: Int)) => cost + i.cost * c })
    def has(item: Item, count: Int = 1): Boolean = getOrElse(item, 0) >= count
    def transfer(source: Inv, item: Item, count: Int = 1)(implicit r: Random): Unit = {
      if (source.take(item, count))
        add(item, count)
    }

    def take(item: Item, count: Int = 1)(implicit r: Random): Boolean = {
      if (!has(item, count)) {
        item match {
          case SpiritLight(amount)  =>
            val slAmount = totalSpiritLight
            if(amount * count > slAmount)
              throw GeneratorError(s"Error: Tried to take ${count*amount} Spirit Light from pool with only $slAmount")
            val spiritLights = asSeq.collect({case s: SpiritLight => val c = this(s) ; remove(s); c}).sum
            val afterSLCount = Math.max(spiritLights - count, 0)
            if(afterSLCount > 0) {
              val average = (slAmount - amount*count) / afterSLCount
              (0 until afterSLCount).foreach(_ => add(SpiritLight(r.between(average-50, average+50))))
              Config.debug(s"take($item, $count): reshuffled spirit light (new average value of $average, across $afterSLCount, total $totalSpiritLight)")
              return true
            }
          case _ =>
            throw GeneratorError(s"Error: taking $count of $item from $asSeq, which doesn't have that many")
        }
      }
      set(item, Math.max(0, this (item) - count))
      if(this(item) == 0)
        remove(item)
      true
    }
    def without(item: Item, count: Int): Inv = {
      if (!has(item, count)) {
        Config.error(s"couldn't build ${this} without $count of $item")
      }
      new Inv(keys.map({
        case i if i == item => i -> (this(i)-count)
        case i => i -> this(i)
      }).toSeq:_*)
    }
    var merchToPop = 16
    def add(item: Item, count: Int = 1): Unit = set(item, this (item) + count)
    def popRand(implicit r: Random): Option[Item] = {
      val s =
        if(merchToPop > 0) {
          val (merch, norm) = asSeq.partition(_.isInstanceOf[Merch])
          norm ++ r.shuffle(merch).drop(merchToPop)
        } else asSeq
      if (s.nonEmpty) {
        val i = s(r.nextInt(s.size))
        if(i == Launch && count > 165) {
            // if we haven't placed half the items yet,
            // reroll launch count/500 % of the time
            if(r.nextFloat() < count/500f)
              return popRand
        }
        take(i)
        Some(i)
      } else
        None
    }

    def popMerch(reroll: Boolean = true)(implicit r: Random): Option[Merch] = {
      val merch = asSeq.collect({case i: Merch => i})
      if (merch.isEmpty)
        return None
      val i = merch(r.nextInt(merch.size))
      if(reroll && i == Keystone)
        return popMerch(false)

      merchToPop -= 1
      take(i)
      Some(i)
    }
    def +(other: Inv): Inv = {
      new Inv((other.keys ++ keys).toSeq.map({
        case Health => (Health, this(Health) + other(Health))
        case Energy => (Energy, this(Energy) + other(Energy))
        case Keystone => (Keystone, this(Keystone) + other(Keystone))
        case Ore => (Ore, this(Ore) + other(Ore))
        case i => (i, Math.max(this (i), other(i)))
      }): _*)
    }
    def - (other: Inv): Inv = {
      new Inv(keys.toSeq.flatMap({
        case i if this(i) <= other(i)  => None
        case i    => Some(i -> this(i))
      }): _*)
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

  object Regen extends Skill(77)
  object Bow extends Skill(97)
  object DoubleJump extends Skill(5)
  object Flap extends Skill(118)
  object Grapple extends Skill(57)
  object Glide extends Skill(14)
  object Launch extends Skill(8)
  object Sword extends Skill(100)
  object Burrow extends Skill(101)
  object Dash extends Skill(102)
  object Smash extends Skill(98)
  object Grenade extends Skill(51)
  object WaterDash extends Skill(104)
  object Flash extends Skill(62)
  object Bash extends Skill(0)
  object Shuriken extends Skill(106)
  object Spear extends Skill(74)

  object BurrowsTP extends Teleporter(0)
  object DenTP extends Teleporter(1)
  object EastPoolsTP extends Teleporter(2)
  object WellspringTP extends Teleporter(3)
  object ReachTP extends Teleporter(4)
  object HollowTP extends Teleporter(5)
  object DepthsTP extends Teleporter(6)
  object WestWoodsTP extends Teleporter(7)
  object EastWoodsTP extends Teleporter(8)
  object WestWastesTP extends Teleporter(9)
  object EastWastesTP extends Teleporter(10)
  object OuterRuinsTP extends Teleporter(11)
  object WillowTP extends Teleporter(12)
  object WestPoolsTP extends Teleporter(13)
  object InnerRuinsTP extends Teleporter(14)
  object ShriekTP extends Teleporter(15)
  object MarshTP extends Teleporter(16)
}
