package SeedGenerator {
  import SeedGenerator.implicits._
  trait Requirement {
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean
    def remaining(state: GameState = GameState.Empty, unaffordable: Set[FlagState] = Set(), space: Int = 999): Seq[GameState]
    def cheapestRemaining(state: GameState = GameState.Empty, unaffordable: Set[FlagState] = Set(), space: Int = 999): GameState = Timer("cheapest"){
      remaining(state, unaffordable, space)
      .minByOption(_.cost)
      .getOrElse(GameState.mk(Unobtainium))}
    def orbsAfterMet(state: GameState = GameState.Empty, orbs: Orbs): Orbs = orbs
    def and(that: Requirement): Requirement = AllReqs(this, that)
    def or(that: Requirement): Requirement = AnyReq(this, that)
    def children = Seq(this)
  }

  trait MultiReq extends Requirement {
    val reqs: Seq[Requirement]
    def builder(parts: Seq[Requirement]): Requirement
    override def children: Seq[Requirement] = reqs.flatMap(_.children)
  }

  case class StateReq(flag: String) extends Requirement {
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean = state.flags.contains(WorldState(flag))
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(
      if(metBy(state))
        GameState.Empty
      else
        if(unaffordable.contains(WorldState(flag)))
          GameState.mk(Unobtainium)
        else
          GameState.mk(WorldState(flag))
    )
  }

  class SingleItemReq(item: Item) extends Requirement  {
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean = state.inv has item
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(state missing item)
    override def toString: String = item.name
  }


  case class EventReq(eventCode: Int) extends SingleItemReq(WorldEvent(eventCode))
  case class SkillReq(skillCode: Int) extends SingleItemReq(Skill(skillCode))
  case class TeleReq(teleCode: Int)   extends SingleItemReq(Teleporter(teleCode))
  case class ShardReq(shardCode: Int) extends SingleItemReq(Shard(shardCode))

  case object Free extends Requirement {
    def metBy(state: GameState, orbs: Option[Orbs]): Boolean = orbs.forall(_.health > 0)
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState.Empty)

    override def and(that: Requirement): Requirement = that
    override def or(that: Requirement): Requirement = Free
  }

  case object Invalid extends Requirement {
    def metBy(state: GameState, orbs: Option[Orbs]) = false
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState.mk(Unobtainium))
  }

  case class OreReq(count: Int) extends Requirement {
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean = state.inv(Ore) >= count
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState(new Inv(Ore -> Math.max(0, count - state.inv(Ore)))))
    override def and(that: Requirement): Requirement = that match {
      case OreReq(c) => OreReq(c+count)
      case r => AllReqs(this, r)
    }
  }

  case class CashReq(count: Int) extends Requirement {
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean = state.inv.totalSpiritLight >= count
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = !metBy(state) ? {
      val needed = count - state.inv.totalSpiritLight
      if(needed > 174) {
        val count = needed / 174
        Seq(GameState(new Inv(SpiritLight(needed / (count + 1)) -> count)))
      } else
        Seq(GameState(new Inv(SpiritLight(count - state.inv.totalSpiritLight) -> 1)))
    } ?? Seq(GameState.Empty)
    override def and(that: Requirement): Requirement = that match {
      case CashReq(c) => CashReq(c+count)
      case r => AllReqs(this, r)
    }
  }

  case class KeystoneReq(count: Int) extends Requirement {
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean = state.inv(Keystone) >= count
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState(new Inv(Keystone -> Math.max(0, count - state.inv(Keystone)))))
  }

  case class EnergyReq(count: Float) extends Requirement {
    val mod = if (Settings.unsafePaths) 1 else 2
    override def orbsAfterMet(state: GameState, orbs: Orbs): Orbs = orbs - Orbs(0, Math.floor(count * mod * 10).toInt)
    def energy(state: GameState): Float = state.inv(Energy)/2f
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean =
      orbs.map(_.energy >= count * mod * 10).getOrElse(energy(state) >= count * mod)
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] =
      Seq(GameState(new Inv(Energy -> Math.ceil(Math.max(0, 2 * count * mod - state.inv(Energy))).toInt)))
    override def and(that: Requirement): Requirement = that match {
      case EnergyReq(c) => EnergyReq(c + count)
      case r => AllReqs(this, r)
    }
  }
  object EnergyReq {
    def apply(count: Float): Requirement = if(count > 0) new EnergyReq(count) else Free
  }

  case class SentryJumpReq(count: Int) extends Requirement {
    private val er = EnergyReq(count)
    override def metBy(state: GameState, orbs: Option[Orbs]): Boolean =
      state.inv.has(Sentry) &&
      (state.inv.has(Sword) || state.inv.has(Smash)) &&
      er.metBy(state, orbs)

    override def orbsAfterMet(state: GameState, orbs: Orbs): Orbs = er.orbsAfterMet(state, orbs)

    override def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = metBy(state) ? Seq(GameState.Empty) ??
      Seq( // yes yes this is awful i know i know
        state missing Sword,
        state missing Smash
      ).distinct.map(_ + er.remaining(state, unaffordable, space).head + state missing Sentry
      ).filter(g => g.inv.count <= space)
  }
  class WallReq(wallHealth: Int, skills: Map[Skill, (Float, Float)]) extends Requirement {
    def energyCost(skill: Skill): Float = skill match {
      case s if skills.contains(s) =>
        val (dmg, cost) = skills(s)
        Math.ceil(wallHealth/dmg).toInt * cost
      case s => Logger.warn(s"checking cost of non-valid skill $s"); 0
    }
    def energyReq(skill: Skill): Requirement = EnergyReq(energyCost(skill))
    override def orbsAfterMet(state: GameState, orbs: Orbs): Orbs =
      skills.keys.collect({ case s if state.inv.has(s) => energyReq(s).orbsAfterMet(state, orbs) }).maxBy(_.value)
    def metBy(state: GameState, orbs: Option[Orbs] = None):Boolean =
      skills.keys.exists(s => state.inv.has(s) && energyReq(s).metBy(state, orbs))
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = metBy(state) ? Seq(GameState.Empty) ??
      skills.keys.map(s => (state missing s) + energyReq(s).remaining(state).head).filter(_.inv.count <= space).toSeq
  }

  case class BreakWallReq(wallHealth: Int) extends WallReq(wallHealth,  Weapons.DPE)

  case class BackWallBreak(wallHealth: Int) extends WallReq(wallHealth,  Map(Shuriken -> (7f, 1.5f)))

  case class DamageReq(damage: Int) extends Requirement  {
    def orbsMod(state: GameState, orbs: Orbs): Orbs = {
      if(orbs.health > damage || health(state) <= damage || !state.inv.has(Regen))
        return orbs
      val healsNeeded = 1 + (damage-orbs.health)/30
      if(orbs.energy/10 >= healsNeeded)
        return (orbs + Orbs(30*healsNeeded, -10*healsNeeded)).min(state.inv.orbs)
      orbs
    }
    override def orbsAfterMet(state: GameState, orbs: Orbs): Orbs = orbsMod(state, orbs) - Orbs(damage, 0)
    def health(state: GameState): Int = state.inv(Health) * 5
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean =
      orbs.map(orbsMod(state, _).health > damage).getOrElse(health(state) > damage)
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState(new Inv(Health -> Math.max(0, Math.ceil((damage + 1 - health(state))/5f).intValue()))))
    override def and(that: Requirement): Requirement = that match {
      case DamageReq(d) => DamageReq(d+damage)
      case r => AllReqs(this, r)
    }
  }
  case class DangerReq(damage: Int) extends Requirement  {
    def orbsMod(state: GameState, orbs: Orbs): Orbs = {
      if(orbs.health > damage || health(state) <= damage || !state.inv.has(Regen))
        return orbs
      val healsNeeded = 1 + (damage-orbs.health)/30
      if(orbs.energy/10 >= healsNeeded)
        return (orbs + Orbs(30*healsNeeded, -10*healsNeeded)).min(state.inv.orbs)
      orbs
    }
    def health(state: GameState): Int = state.inv(Health) * 5
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean =
      orbs.map(orbsMod(state, _).health > damage).getOrElse(health(state) > damage)
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState(new Inv(Health -> Math.max(0, Math.ceil((damage + 1 - health(state))/5f).intValue()))))
  }

  object Weapons {
    val All = Seq(Sword, Smash, Bow, Grenade, Shuriken, Spear, Blaze)
    val RANGED = Seq(Bow, Grenade, Shuriken, Spear)
    val DPE = Map(
      Sword -> (4f, 0f), Smash -> (12f, 0f), Bow -> (4f, 0.25f),
      Grenade -> (12f, 1f), Shuriken -> (6f, .5f), Spear -> (20f, 2f), Blaze -> (9f, 1f)
    )
  }
  trait Enemy {
    def dodgeMultiplier = 1.0
    val health: Int
    def weapons: Seq[Skill] = Seq(Sword, Smash)
    def reqs: Requirement = Free
    def shielded: Boolean = false
  }

  trait Shielded extends Enemy { override def shielded: Boolean = true }

  trait Explodes extends Enemy {
    override def weapons: Seq[Skill] = if(Settings.gorlekPaths) Seq(Spear, Shuriken, Bow, Grenade) else Seq(Bow, Spear)
    override val health: Int = 1
  }
  class Flier(val health: Int) extends Enemy {
    override val reqs: Requirement = AnyReq(Seq(DoubleJump.req, Bash.req, Launch.req) ++ (if(Settings.gorlekPaths) Weapons.RANGED.map(_.req) else Nil))
  }
  class MinerEnemy(val health: Int) extends Enemy {
    override val reqs: Requirement = AnyReq(DoubleJump.req, Dash.req, Bash.req, Launch.req)
  }

  case class Boss(val health: Int) extends Enemy
  case object Mantis extends Enemy { val health = 32}
  case object Slug extends Enemy { val health = 13}
  case object WeakSlug extends Enemy { val health = 12}
  case object BombSlug extends Explodes
  case object CorruptSlug extends Explodes
  case object SneezeSlug extends Enemy {
    val health = 32
    override val reqs: Requirement = if(Settings.gorlekPaths) Free else AnyReq(DoubleJump.req, Dash.req, Bash.req, Launch.req)
  }
  case object ShieldSlug extends Shielded { val health = 24}
  case object Lizard extends Enemy { val health = 24}
  case object Bat extends Enemy {
    val health = 32
    override val reqs: Requirement =
      if(Settings.gorlekPaths)
        AnyReq(Weapons.RANGED.map(_.req) ++ Seq(Bash.req, Launch.req))
      else
        Bash.req
  }
  case object Hornbug extends Shielded {
    val health = 40
    override val reqs: Requirement = if(Settings.gorlekPaths) Free else AnyReq(DoubleJump.req, Dash.req, Bash.req, Launch.req)
  }
  case object Skeeto extends Flier(health = 20)
  case object SmallSkeeto extends Flier(health = 8)
  case object Bee extends Flier(health = 24)
  case object Crab extends Enemy {
    val health = 32
    override val reqs: Requirement = AnyReq(DoubleJump.req, Bash.req, Launch.req, Dash.req)
  } // exact same gameplay rules as SpinCrab
  case object Tentacle extends Enemy {
    val health = 40
    override val reqs: Requirement =
      if(Settings.gorlekPaths)
        AnyReq(Weapons.RANGED.map(_.req) ++ Seq(DoubleJump.req, Bash.req, Launch.req))
      else
        AnyReq(DoubleJump.req, Bash.req, Launch.req)
  }
  case object Balloon extends Explodes
  case object Miner extends MinerEnemy(40)
  case object MaceMiner extends MinerEnemy(60)
  case object ShieldMiner extends MinerEnemy(60) with Shielded
  case object CrystalMiner extends MinerEnemy(80)
  case object CrystalShieldMiner extends MinerEnemy(80) with Shielded
  case object Sandworm extends Enemy {
    val health = 20
    override val reqs: Requirement = if(Settings.gorlekPaths) Free else Burrow.req
  }
  case object Spiderling extends Enemy { val health = 12}
  case object Nest extends Enemy { val health = 25} // not... sure?
  case object Fish extends Enemy { val health = 10} // unused
  case object Waterworm extends Enemy { val health = 20} // unused
  case object Spitter extends Enemy {val health = 20 } // Unused?
  case object EnergyRefill extends Enemy { val health = 0 } // yes this is dumb no i don't care

  object CombatReq {
    def apply(enemies: Seq[(Enemy, Int)]): Requirement = {
      val t = enemies.toMap.keySet
      AllReqs(t.map(e => AnyReq(e.weapons.map(_.req))).toSeq) and AllReqs(t.map(_.reqs).toSeq)
    }
  } /*extends Requirement {
    override def metBy(state: GameState, orbs: Option[Orbs]): Boolean = {
      var energy: Double = (orbs ?? state.inv.orbs).energy / 5f
      for((e, cnt) <- enemies) {
        e match {
          case EnergyRefill =>
            energy += 10*cnt
          case enemy if enemy.reqs.metBy(state) =>
            val weps = enemy.weapons.filter(w => state.inv.has(w))
            if(weps.isEmpty) return false // no valid weapon; combat not possible
            if(enemy.shielded && !weps.contains(Smash)) {
              if(!Settings.gorlekPaths) return false // smash is only acceptable shield break in moki
              if(state.inv.contains(Launch)) {  } // pass
              else if(state.inv.contains(Grenade))
                energy -= cnt // break N shields
              else if(state.inv.contains(Spear))
                energy -= 2*cnt // spear costs more
              else return false
            }
            if(!(weps.contains(Sword) || weps.contains(Smash))) {
              val wep = weps.maxBy(w => { val (d,e) = Weapons.DPE(w); d/e})
              val (damage, cost) = Weapons.DPE(wep)
              energy -= Math.ceil(enemy.health*enemy.dodgeMultiplier/damage) * cost * cnt
            }
          case _ => return false
        }
      }
      Logger.debug(enemies.map(e => s"${e._1}x${e._2}").mkString(", ") + s": remaining energy=$energy")
      energy >= 0
    }
    override def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] =
      AllReqs(enemies.map(_._1.reqs)).remaining(state, unaffordable, space) // this may not work
  }*/


  class AnyReq(override val reqs: Requirement*) extends Requirement  with MultiReq {
    override def builder(parts: Seq[Requirement]): Requirement = AnyReq(parts)

    override def equals(obj: Any): Boolean = obj match {
      case AnyReq(otherReqs) => reqs.toSet == otherReqs.toSet
      case _ => false
    }

    override def or(that: Requirement): Requirement = that match {
      case r: AnyReq => AnyReq(r.reqs ++ reqs )
      case _: AllReqs => throw  GeneratorError("Ors cannot contain Ands")
      case r => AnyReq(reqs :+ r )
    }

    override def toString: String = s"(${reqs.mkString(" || ")})"
    override def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean = orbs.forall(_.health > 0) && reqs.exists(_.metBy(state))
    override def orbsAfterMet(state: GameState, orbs: Orbs): Orbs = reqs.filter(_.metBy(state)).map(_.orbsAfterMet(state, orbs)).maxBy(_.value)
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = reqs flatMap (_.remaining(state, unaffordable: Set[FlagState], space: Int))
    override def cheapestRemaining(state: GameState, unaffordable: Set[FlagState], space: Int): GameState = {
      var cheapest = GameState.mk(Unobtainium)
      for(req <- reqs) {
        val cur = req.cheapestRemaining(state, unaffordable, space)
        if(cur == GameState.Empty)
          return cur
        if(cur.cost() < cheapest.cost())
          cheapest = cur
      }
      cheapest
    }
  }

  object AnyReq {
    def apply(req0: Requirement, reqsRaw: Requirement*): Requirement = apply(req0 +: reqsRaw)
    def apply(reqsRaw: Seq[Requirement]): Requirement = Timer("OrConst"){
      val reqs: Seq[Requirement] = reqsRaw.filter(_.cheapestRemaining().cost < Double.PositiveInfinity).distinct//.sortByConsumption
      //      if (reqs.length < reqsRaw.length) reqsRaw.collect({ case r if !reqs.contains(r) && r != Invalid => println(s"Excluding $r") })
      reqs match {
        case Nil => Invalid
        case Seq(req) => req
        case reqs if reqs.contains(Free) => Free
        case reqs if reqs.exists(_.isInstanceOf[AnyReq]) =>
          val (anys, others) = reqs.partitionMap({
            case any: AnyReq => Left(any)
            case r           => Right(r)
          })
          new AnyReq(anys.flatMap(_.reqs) ++ others: _*)
        case reqs => new AnyReq(reqs: _*)
      }
    }
    def unapply(arg: AnyReq): Option[Seq[Requirement]] = Some(arg.reqs)
  }

  class AllReqs(val reqs: Requirement*) extends Requirement with MultiReq {
    override def builder(parts: Seq[Requirement]): Requirement = AnyReq(parts)
    override def equals(obj: Any): Boolean = obj match  {
      case AllReqs(otherReqs) => reqs.toSet == otherReqs.toSet
      case _ => false
    }
    override def and(that: Requirement): Requirement = that match {
      case AllReqs(kids) => AllReqs(reqs ++ kids)
      //      case AnyReq(kids) => AnyReq(kids.map(k => this and k))
      case r => AllReqs(reqs :+ r )
    }
    override def or (other: Requirement): Requirement = other match {
      case r:AllReqs if r.reqs.toSet == reqs.toSet => r
      case req => AnyReq(req, this)
    }
    override def toString: String = s"(${reqs.mkString(" && ")})"
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean = reqs.forall(_.metBy(state, orbs)) && orbs.forall(o => orbsAfterMet(state, o).valid)
    override def orbsAfterMet(state: GameState, orbs: Orbs): Orbs = reqs.foldLeft(orbs)((o, req) => req.orbsAfterMet(state, o))
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = {
      if (metBy(state))
        return Seq(GameState.Empty)
    var mergedInv = GameState.Empty
    for(req <- reqs)  {
      mergedInv = mergedInv + req.cheapestRemaining(state + mergedInv, unaffordable, space)
      if(mergedInv.inv.has(Unobtainium) || mergedInv.inv.size > space  )
        return Nil
    }
    Seq(mergedInv/*reqs.foldRight(GameState.Empty)((req, accInv) => accInv + req.cheapestRemaining(accInv + state))*/)
      /*      if (orReqs.length > 1)
            others.foreach(req => {
              mergedInv = mergedInv + req.cheapestRemaining(mergedInv + state)
            })
        reqs.map(_.cheapestRemaining(state)).fold(GameState.Empty)(_ + _)

      val greedy = Seq(orReqs.foldRight(mergedInv)((req, accInv) => accInv + req.cheapestRemaining(accInv + state)))
        Seq(orReqs.flatMap(_.remaining(state)).find(sus => sus.cost < greedy.cost && orReqs.forall(_.metBy(sus))).map(_ + mergedInv).getOrElse(greedy))
      else
        Seq(greedy)*/
    }
  }
  object AllReqs {
    def apply(req0: Requirement, reqsRaw: Requirement*): Requirement = apply(req0 +: reqsRaw)
    def apply(reqsRaw: Seq[Requirement]): Requirement = Timer("AndConst"){reqsRaw.filterNot(_ == Free).distinct match {
      case Nil => Free
      case Seq(req) => req
      case reqs if reqs.contains(Invalid) => Invalid
      case reqs if reqs.exists(_.isInstanceOf[AllReqs]) =>
        val (alls, others) = reqs.partitionMap({
          case all: AllReqs => Left(all)
          case r            => Right(r)
        })
        new AllReqs(alls.flatMap(_.reqs) ++ others :_*)
      case reqs => new AllReqs(reqs:_*)
    }}
    def unapply(arg: AllReqs): Option[Seq[Requirement]] = Some(arg.reqs)
  }


}
