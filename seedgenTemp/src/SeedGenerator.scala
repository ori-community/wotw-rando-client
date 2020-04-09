import java.io._

import scala.collection.mutable
import scala.io.Source
import scala.util.Random
object  Holder {
	//  just some neat little sugar for regexes, dw about it
	implicit class RegexOps(sc: StringContext) {
		def r = new util.matching.Regex(sc.parts.mkString, sc.parts.tail.map(_ => "x"): _*)
	}
}
import Holder._

trait Item {
	def itemType: Int
	def name: String
	def code: String
}
trait Sellable extends Item

trait SpiritLightItem extends Item {
	val itemType: Int = 0
	def amount: Int
	def name = s"${amount} Spirit Light"
	def code = s"${itemType}|${amount}"
}

case class SpiritLight(amount: Int)  extends SpiritLightItem

trait Resource extends Item with Sellable  {
	val itemType = 1
	def resourceType: Int
	def code = s"${itemType}|${resourceType}"
}

case class Health(resourceType: Int = 0, name: String = "Half-Health Cell") extends Resource
case class Energy(resourceType: Int = 1, name: String = "Half-Energy Cell") extends Resource
case class Ore(resourceType: Int = 2, name: String = "Gorlek Ore") extends Resource
case class Keystone(resourceType: Int = 3, name: String = "Keystone") extends Resource
case class ShardSlot(resourceType: Int = 4, name: String = "Shard Slot") extends Resource

case class Skill(skillId: Int) extends Item with Sellable {
	val itemType: Int = 2
	def code = s"$itemType|${this.skillId}"
	def name: String = Skill.names.getOrElse(this.skillId, s"Unknown skill ${this.skillId}")
}
object Skill { 	val names: Map[Int, String] = Map(
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
	//		100 -> "SpiritEdge",
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
)}

case class Shard(shardId: Int) extends Item with Sellable {
	val itemType: Int = 3
	def code = s"$itemType|${this.shardId}"
	def name: String = Shard.names.getOrElse(this.shardId, s"Unknown shard ${this.shardId}")
}
object Shard { 	val names: Map[Int, String] = Map(
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
) }

case class Teleporter(teleporterId: Int) extends Item with Sellable {
	val itemType: Int = 5
	def code = s"$itemType|${this.teleporterId}"
	def name: String = Teleporter.names.getOrElse(this.teleporterId, s"Unknown shard ${this.teleporterId}")
}
object Teleporter { 	val names: Map[Int, String] = Map(
	0 -> "Midnight Burrows",
	1 -> "Howls Den",
//	2 -> "Luma Pools (East)",
	3 -> "Wellspring",
	4 -> "Baur's Reach",
	5 -> "Kwoloks Hollow",
	6 -> "Mouldwood Depths",
	7 -> "Silent Woods (East)",
	8 -> "Silent Woods (West)",
	9 -> "Windswept Wastes (East)",
	10 -> "Windswept Wastes (West)",
	11 -> "Windtorn Ruins (Outer)",
	12 -> "Willows End",
	13 -> "Luma Pools (West)",
	14 -> "Windtorn Ruins (Inner)",
	15 -> "Spirit Willow",
	16 -> "Inkwater Marsh",
)
}

class Inv(items: (Item, Int)*) extends mutable.HashMap[Item, Int] {
	items.foreach({case (i: Item, count: Int) => this.set(i, count) })

	override def apply(item: Item) = this.getOrElse(item, 0)
	def set(item: Item, count: Int) = this(item) = count
	def asSeq = this.keys.toSeq.flatMap(k => (0 until this(k)).map(_=>k))
	def count = this.foldLeft(0)(_ + _._2)
	def has(item: Item, count: Int = 1) = this.getOrElse(item, 0) >= count
	def take(item: Item, count: Int = 1) = {
		if(!this.has(item, count))
			println(s"Error: taking ${count} of ${item} from ${this}, which doesn't have that many")
		this.set(item, Math.max(0, this (item) - count))
	}
	def add(item: Item, count: Int = 1) = this (item) = this.getOrElse(item, 0) + count
	def popRand(): Option[Item] = this.asSeq match {
		case s: Seq[Item] if(s.size > 0) => {
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
			if(sellables.isEmpty)
				return None
			val i = sellables(Random.nextInt(sellables.size))
			this.take(i)
			Some(i)
	}
	def merge(other: Inv) = {
		other.foreach({case (i: Item, count: Int) => this.set(i, Math.max(this(i), other(i)))})
	}
}

trait Requirement {
	def fulfilledBy(inv: Inv): Boolean
	def meetWith(inv: Inv): Inv
}

case object Free extends Requirement { def fulfilledBy(inv: Inv) = true; def meetWith(inv: Inv) = new Inv()}

case class SkillReq(skillCode: Int) extends Requirement {
	def meetWith(inv: Inv) = if(inv has Skill(skillCode)) new Inv() else new Inv(Skill(skillCode) -> 1)
	def fulfilledBy(inv: Inv): Boolean = inv has Skill(skillCode)
}
object Regen extends SkillReq(77)
object Bow extends SkillReq(97)
object DoubleJump extends SkillReq(5)
object Flap 		extends SkillReq(118)
object Grapple		extends SkillReq(57)
object Glide 		extends SkillReq(14)
object Launch 		extends SkillReq(8)
object Burrow 		extends SkillReq(101)
object Dash 		extends SkillReq(102)
object Smash 		extends SkillReq(98)
object Grenade 	extends SkillReq(51)
object WaterDash 	extends SkillReq(104)
object Flash 		extends SkillReq(62)
object Bash 		extends SkillReq(0)

case class OreRequirement(oreCount: Int) extends Requirement {
	def meetWith(inv: Inv) = new Inv(Ore() -> Math.max(0, oreCount - inv(Ore())))
	def fulfilledBy(inv: Inv): Boolean = inv(Ore()) >= oreCount
}

case class TeleReq(teleCode: Int) extends Requirement {
	def meetWith(inv: Inv): Inv = if(inv has Teleporter(teleCode)) new Inv() else new Inv(Teleporter(teleCode) -> 1)
	def fulfilledBy(inv: Inv): Boolean = inv has Teleporter(teleCode)
}

object AreaReq {
	def apply(areaName: String): Requirement = areaName match {
				case "Inkwater Marsh" => Free
				case "Kwolok's Hollow" => Any(All(Any(DoubleJump, Dash), Bow), KwoloksTP)
				case "Wellspring Glades" => Any(All(WellspringTP, DoubleJump, Dash), Voice)
				case "Windswept Wastes" => Any(WindsweptEastTP, All(Water, Bow, Glide))
				case "The Wellspring" => Any(WellspringTP, Voice)
				case "Willow's End" => Any(WillowsEndTP, All(Launch, Heart))
				case "Silent Woods" => Any(SilentWoodsTP, Water)
				case "Mouldwood Depths" => All(Voice, Glide)
				case "Midnight Burrows" => Any(All(DoubleJump, Dash, Bash), BurrowsTP)
				case "Luma Pools" => All(Water, Glide)
				case "Baur's Reach" => All(Voice, Glide, Flap)
				case "Windtorn Ruins" => Heart
				case s => {println(s"Where's ${s}") ; Free  }
		}
}
object WellspringTP extends TeleReq(3)
//object LumaEastTP extends TeleReq(2)
object KwoloksTP extends TeleReq(5)
object WillowsEndTP extends TeleReq(12)
object BaursReachTP extends TeleReq(4)
object SilentWoodsTP extends TeleReq(7)
object WindsweptEastTP extends TeleReq(9)
object MouldwoodTP extends TeleReq(6)
object BurrowsTP extends TeleReq(0)
object Water extends All(Grapple, Voice)

object Voice extends All(DoubleJump, Bash, Dash, Any(KwoloksTP, Bow))
object Memory extends All(Voice, Glide, Grenade)
object Strength extends All(Voice, Glide, WaterDash)
object Eyes extends All(Voice, Glide, Flash)
object Heart extends All(Memory, Strength, Eyes, Burrow)

case class Any(reqs: Requirement*) extends Requirement {
	def fulfilledBy(inv: Inv): Boolean = reqs.exists(_.fulfilledBy(inv))
	def meetWith(inv: Inv) = reqs.minBy(_.meetWith(inv).count).meetWith(inv)
}
case class All(reqs: Requirement*) extends Requirement {
	def fulfilledBy(inv: Inv): Boolean = reqs.forall(_.fulfilledBy(inv))
	def meetWith(inv: Inv) = {
		val mergedInv = new Inv()
		reqs.foreach(mergedInv merge _.meetWith(inv))
		mergedInv
	}
}
object SeedGenerator extends App {
	def ReqParse(req: String): Requirement = req match {
		case "DoubleJump" => DoubleJump
		case "Bow" => Bow
		case "Flap" => All(Flap, Glide)
		case "Grapple" => Grapple
		case "Glide" => Glide
		case "Launch" => Launch
		case "Burrow" => All(Burrow, Dash)
		case "Dash" => Dash
		case "Smash" => Smash
		case "Grenade" => Grenade
		case "WaterDash" => WaterDash
		case "Flash" => Flash
		case "Bash" => Bash
		case "Regenerate" => Regen
		case "Water" => Water
		case r"Ore \(([0-9]*)${count}\)" => OreRequirement(count.toInt)
		case "Wisps" => Heart
		case "Free" => Free
		case s if s.contains('|') => {
			Any(s.split('|').map(ReqParse _):_*)
		}
		case s => {
			println(s"Wot's an ${s}"); Free
		}
	}

	case class ItemLocation(category: String, value: String, zone: String, uberGroup: String, uberGroupId: Int, uberName: String, uberId: Int, x: Int, y: Int, rawReqs: String) {
		val reqs = All(All(rawReqs.split(",").map(s => ReqParse(s.trim)): _*), AreaReq(zone))
		val code = s"$uberGroupId|$uberId"
	}

	def maybeRand[T](source: Seq[T]) = if(source.size == 0) None else Some(source(Random.nextInt(source.size)))

	def itemLocs: Seq[ItemLocation] = {
		val pickupReg = """^([^,]*), ?([^,]*), ?([^,]*), ?([^,]*), ?([-0-9]*), ?([^,]*), ?([-0-9]*), ?([-0-9]*), ?([-0-9]*), (.*)""".r
		val pickupsFile = Source.fromFile("pickups.csv")
		val pickups = pickupsFile.getLines.flatMap {
			case pickupReg(_, 				_, 			_, 			_, 		_, 			_, 	_, 	_, _,	"Unreachable") => None
			case pickupReg(zone, category, value, uberGN, ugid, uberN, uid, x, y, reqs) =>
				Some(ItemLocation(category, value, zone, uberGN, ugid.toInt, uberN, uid.toInt, x.toInt, y.toInt, reqs))
			case line: String =>
				println(s"Couldn't parse line: $line")
				None
		}.toSeq
		pickupsFile.close()
		pickups.filter(loc => loc.category != "Quest" && loc.value != "ShardSlot")
	}
	case class Distro(sl: Int = 0, hc: Int= 0, ec: Int= 0, ore: Int= 0, sks: Int = 0)
	var areas: mutable.Map[String, Distro] = mutable.Map()
	def incAreas(item: Item, location: SeedGenerator.ItemLocation): Unit = {
		if(areas == null)
			areas = mutable.Map()
		val cur = SeedGenerator.areas.getOrElse(location.zone, Distro())
		item match {
			case _: SpiritLight => SeedGenerator.areas(location.zone) = Distro(cur.sl + 1, cur.hc, cur.ec, cur.ore, cur.sks)
			case _: Health => SeedGenerator.areas(location.zone) = Distro(cur.sl, cur.hc + 1, cur.ec, cur.ore, cur.sks)
			case _: Energy => SeedGenerator.areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec + 1, cur.ore, cur.sks)
			case _: Ore => SeedGenerator.areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec, cur.ore + 1, cur.sks)
			case _: Skill => SeedGenerator.areas(location.zone) = Distro(cur.sl, cur.hc, cur.ec, cur.ore + 1, cur.sks + 1)
			case _ => None
		}
	}

	def run(n: Int = 0, name_base: String = "seed", outputFolder: String = ""): Unit = {
		// Creating a file
		val itemPool = new Inv(
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
		)
		Shard.names.keys.foreach((s: Int) => itemPool(Shard(s)) = 1)
		Skill.names.keys.foreach((s: Int) => itemPool(Skill(s)) = 1)

		var locs = itemLocs
		while(locs.size > itemPool.count) itemPool.add(SpiritLight(Random.between(50, 150)))
		val playerState = new Inv()
		val dirPath = if(outputFolder != "") s"seeds/${outputFolder}" else "seeds"
		val dir = new File(dirPath)
		if(! dir.exists())
			dir.mkdirs()
		val file = new File(s"${dirPath}/${name_base}_${n}.wotwr")
		val bw = new BufferedWriter(new FileWriter(file))
		var balanceAreas = Seq[ItemLocation]()
		var balanceItems = Seq[Item]()
		var totalSpiritLight = 0

		def assign(item: Item, loc: ItemLocation): Unit = item match {
				case _:Skill => assignNow(item, loc)
				case _:Teleporter => assignNow(item, loc)
				case SpiritLight(count) =>
					totalSpiritLight += count
					assignLater(item, loc)
				case _  => assignLater(item, loc)
			}

		def assignLater(item: Item, loc: ItemLocation): Unit = {
			balanceAreas = balanceAreas ++ Seq(loc)
			balanceItems = balanceItems ++ Seq(item)
		}
		def itsLater = for { (item, area) <- Random.shuffle(balanceItems) zip Random.shuffle(balanceAreas) } assignNow(item, area)

		def assignNow(item: Item, loc: SeedGenerator.ItemLocation): Unit = {
			incAreas(item, loc)
			bw.write(s"${loc.code}|${item.code}\n")
		}

		def randItem = itemPool.popRand().map({ a => playerState.add(a); a }).getOrElse({
			println("Had to pull extra spirit light")
			SpiritLight(Random.between(50, 200))
		})
		def randShop = itemPool.popSellable().map({ a => playerState.add(a); a }).getOrElse({
			val stolen = balanceItems.collectFirst({case i: Sellable => i})
			stolen match {
				case Some(s: Sellable) =>
					balanceItems = balanceItems.filterNot(_ == s) ++ Seq(randItem)
					if(balanceItems.size < balanceAreas.size)
						balanceItems = balanceItems ++ (0 until balanceAreas.size - balanceItems.size).map(_ => s)
					if(balanceItems.size != balanceAreas.size)
						println(s"${file.getName}: balance mismatch!!! took $s from balanceItems (size ${balanceItems.size} vs BalanceAreas size: ${balanceAreas.size}")
					s
				case None =>
					println(s"${file.getName}: Had to pull extra sellable! items: ${itemPool.filter({case (_, c: Int) => c > 0})} locs: $locs")
					Health()
			}
		})
		while (locs.nonEmpty) {
			var reachables = locs.filter(_.reqs fulfilledBy playerState)
			if (reachables.isEmpty) {
				println(s"${file.getName}: Empty reachable! items: ${itemPool.filter({case (_, c: Int) => c > 0})} locs: $locs")
				bw.close()
				file.delete()
				return
			}
			if (reachables.size < 5 && reachables.size < locs.size) {
				maybeRand(locs.map(_.reqs.meetWith(playerState)).filter(_.count < reachables.size)) match {
					case Some(items) => items.foreach({
						case (item: Sellable, 1) if reachables.exists((i: ItemLocation) => i.category == "Shop") =>
								val loc = maybeRand(reachables.filter(_.category == "Shop")).get
								playerState.add(item, 1)
								itemPool.take(item, 1)
								locs = locs.filterNot(_ == loc)
								reachables = reachables.filterNot(_ == loc)
								assign(item, loc)
						case (item, 1) if reachables.exists((i: ItemLocation) => i.category != "Shop") =>
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
						println(s"Aaaa: ${locs.map(_.reqs.meetWith(playerState))}")
				}
			}
			maybeRand(reachables) match {
				case Some(loc: ItemLocation) if loc.category == "Shop" =>
					locs = locs.filterNot(_ == loc)
					reachables = reachables.filterNot(_ == loc)

					assignNow(randShop, loc)
				case Some(loc: ItemLocation) => {
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
	}
}
