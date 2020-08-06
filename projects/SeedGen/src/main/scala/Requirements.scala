import scala.math.Ordering.Double.TotalOrdering
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
    def substitute(orig: Requirement, repl: Requirement): Requirement = if(this == orig) repl else this
    def children = Seq(this)
  }

  trait MultiReq extends Requirement {
    val reqs: Seq[Requirement]
    def builder(parts: Seq[Requirement]): Requirement
    override def children: Seq[Requirement] = reqs.flatMap(_.children)
    override def substitute(orig: Requirement, repl: Requirement): Requirement = builder(reqs.map({
      case r: MultiReq => r.substitute(orig, repl)
      case r if r == orig => repl
      case r => r
    }))
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
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(if (metBy(state)) GameState.Empty else GameState.mk(item))
    override def toString: String = item.name
  }


  case class EventReq(eventCode: Int) extends SingleItemReq(WorldEvent(eventCode))
  case class SkillReq(skillCode: Int) extends SingleItemReq(Skill(skillCode))
  case class TeleReq(teleCode: Int)   extends SingleItemReq(Teleporter(teleCode))

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
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = {
      if(metBy(state))
        Seq()
      else {
        val needed = count - state.inv.totalSpiritLight
        if(needed > 174) {
          val count = needed / 174
          return Seq(GameState(new Inv(SpiritLight(needed / (count + 1)) -> count)))
        }
        Seq(GameState(new Inv(SpiritLight(count - state.inv.totalSpiritLight) -> 1)))
      }
    }
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
    override def orbsAfterMet(state: GameState, orbs: Orbs): Orbs = orbs - Orbs(0, Math.floor(count * 10).toInt)
    def energy(state: GameState): Float = state.inv(Energy)/2f
    def metBy(state: GameState, orbs: Option[Orbs] = None): Boolean =
      orbs.map(_.energy >= count*10).getOrElse(energy(state) >= count)
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] =
      Seq(GameState(new Inv(Energy -> Math.ceil(Math.max(0, 2*count - state.inv(Energy))).toInt)))
    override def and(that: Requirement): Requirement = that match {
      case EnergyReq(c) => EnergyReq(c+count)
      case r => AllReqs(this, r)
    }
  }

  case class BreakWallReq(wallHealth: Int) extends Requirement {
    def energyCost(skill: Skill): Float = skill match {
      case Bow => Math.ceil(wallHealth/4f).toInt * 0.25f
      case Grenade => Math.ceil(wallHealth/10f).toInt
      case Shuriken => Math.ceil(wallHealth/4f).toInt * .5f
      case Spear => Math.ceil(wallHealth/20f).toInt * 2
    }
    override def orbsAfterMet(state: GameState, orbs: Orbs): Orbs = {
      if(state.inv.has(Sword) || state.inv.has(Smash))
        return orbs
      for(skill <- Seq(Bow, Grenade, Shuriken, Spear))
        if(state.inv.has(skill))
          return EnergyReq(energyCost(skill)).orbsAfterMet(state, orbs)
      throw GeneratorError("Unmet orbs after met")
    }
    def metBy(state: GameState, orbs: Option[Orbs] = None):Boolean =
      state.inv.has(Sword) ||
      state.inv.has(Smash) ||
        (state.inv.has(Bow) && EnergyReq(energyCost(Bow)).metBy(state, orbs)) ||
        (state.inv.has(Grenade) && EnergyReq(energyCost(Grenade)).metBy(state, orbs)) ||
        (state.inv.has(Shuriken) && EnergyReq(energyCost(Shuriken)).metBy(state, orbs)) ||
        (state.inv.has(Spear) && EnergyReq(energyCost(Spear)).metBy(state, orbs))
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] =
      (Seq(
        if(state.inv.has(Sword)) GameState.Empty else GameState.mk(Sword),
        if(state.inv.has(Smash)) GameState.Empty else GameState.mk(Smash),
      ) ++ Seq(Bow, Grenade, Shuriken, Spear).map(s => GameState(new Inv(s -> (if(state.inv.has(s)) 1 else 0), Energy -> Math.ceil(Math.max(0, 2*energyCost(s) - state.inv(Energy))).toInt)))).filter(g => g.inv.count > 0 && g.inv.count <= space)
  }

  case class DamageReq(damage: Int) extends Requirement  {
    def orbsMod(state: GameState, orbs: Orbs): Orbs = {
      if(orbs.health > damage ||
        health(state) <= damage ||
        !state.inv.has(Regen))
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


  class AnyReq(override val reqs: Requirement*) extends Requirement  with MultiReq {
    override def builder(parts: Seq[Requirement]): Requirement = AnyReq(parts)

    override def or(that: Requirement): Requirement = that match {
      case r: AnyReq => AnyReq(r.reqs ++ reqs )
      case _: AllReqs => throw  GeneratorError("Ors cannot contain Ands")
      case r => AnyReq(reqs :+ r )
    }
//    override def and(that: Requirement): Requirement = that match {
//      case AnyReq(kids)  =>
//        val overlap = reqs.toSet.union(kids.toSet)
//        if(overlap.isEmpty)
//          AllReqs(this, that)i
//        else
//          AllReqs((overlap + AnyReq(reqs.filterNot(overlap.contains))+ AnyReq(kids.filterNot(overlap.contains))).toSeq)
////      case r: AllReqs => AnyReq(reqs.map(k => k and r))
//      case r => AllReqs(this, r)
//    }
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
