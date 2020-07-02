import scala.collection.mutable.{Map => MMap}


package SeedGenerator {
  import SeedGenerator.implicits._
  trait Requirement {
    def metBy(state: GameState): Boolean
    def remaining(state: GameState = GameState.Empty, unaffordable: Set[FlagState] = Set(), space: Int = 999): Seq[GameState]
    def cheapestRemaining(state: GameState = GameState.Empty, unaffordable: Set[FlagState] = Set(), space: Int = 999): GameState = Timer("cheapest"){
      remaining(state, unaffordable, space)
      .minByOption(_.cost)
      .getOrElse(GameState.mk(Unobtainium))}
    def and(that: Requirement): Requirement = AllReqs(this, that)
    def or(that: Requirement): Requirement = AnyReq(this, that)
    def substitute(orig: Requirement, repl: Requirement): Requirement = if(this == orig) repl else this
    def children = Seq(this)
  }
/*  object RemainDP {
    var state: GameState = GameState.Empty
    var unaffordable: Set[FlagState] = Set()
    var flagCosts: Map[FlagState, GameState] = Map()
    var space: Int = 999
    def setState(newState: GameState, _unaffordable: Set[FlagState], _flagCosts: Map[FlagState, GameState], _space: Int): Unit = if(state != newState) {
      state = newState
      unaffordable = _unaffordable
      space = _space
      table.clear()
    }

    val table: MMap[Requirement, Seq[GameState]] = MMap[Requirement, Seq[GameState]]()
  }*/

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
    def metBy(state: GameState): Boolean = state.flags.contains(WorldState(flag))
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

  case class EventReq(eventCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has WorldEvent(eventCode)
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(if (metBy(state)) GameState.Empty else GameState.mk(WorldEvent(eventCode)))
    override def toString = s"${WorldEvent.names.getOrElse(eventCode, s"Unknown World Event $eventCode")}"
  }

  case class SkillReq(skillCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has Skill(skillCode)
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(if (metBy(state)) GameState.Empty else GameState.mk(Skill(skillCode)))
    override def toString = s"${Skill.names.getOrElse(skillCode, s"Unknown Skill $skillCode")}"
  }

  case object Free extends Requirement {
    def metBy(state: GameState) = true
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState.Empty)

    override def and(that: Requirement): Requirement = that
    override def or(that: Requirement): Requirement = Free
  }

  case object Invalid extends Requirement {
    def metBy(state: GameState) = false
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState.mk(Unobtainium))
  }

  case class OreReq(count: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv(Ore) >= count
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState(new Inv(Ore -> Math.max(0, count - state.inv(Ore)))))
    override def and(that: Requirement): Requirement = that match {
      case OreReq(c) => OreReq(c+count)
      case r => AllReqs(this, r)
    }
  }

  case class CashReq(count: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv.totalSpiritLight >= count
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = {
      if(metBy(state))
        Seq()
      else {
        val needed = count - state.inv.totalSpiritLight
        if(needed > 174) {
          val count = needed / 174
          return Seq(GameState(new Inv(SpiritLight(needed / (count + 1)) -> count)))
        }
        return Seq(GameState(new Inv(SpiritLight(count - state.inv.totalSpiritLight) -> 1)))
      }
    }
    override def and(that: Requirement): Requirement = that match {
      case CashReq(c) => CashReq(c+count)
      case r => AllReqs(this, r)
    }
  }

  case class KeystoneReq(count: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv(Keystone) >= count
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState(new Inv(Keystone -> Math.max(0, count - state.inv(Keystone)))))
  }

  case class EnergyReq(count: Int) extends Requirement {
    def energy(state: GameState): Float = state.inv(Energy)/2f
    def metBy(state: GameState): Boolean = energy(state) >= count
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState(new Inv(Energy -> Math.max(0, 2*count - state.inv(Energy)))))
    override def and(that: Requirement): Requirement = that match {
      case EnergyReq(c) => EnergyReq(c+count)
      case r => AllReqs(this, r)
    }
  }

  case class DamageReq(damage: Int) extends Requirement  {
    def health(state: GameState): Int = state.inv(Health) * 5
    def metBy(state: GameState): Boolean = health(state) > damage
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(GameState(new Inv(Health -> Math.max(0, Math.ceil((damage + 1 - health(state))/5f).intValue()))))
    override def and(that: Requirement): Requirement = that match {
      case DamageReq(d) => DamageReq(d+damage)
      case r => AllReqs(this, r)
    }
  }

  case class TeleReq(teleCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has Teleporter(teleCode)
    def remaining(state: GameState, unaffordable: Set[FlagState], space: Int): Seq[GameState] = Seq(if (metBy(state)) GameState.Empty else GameState.mk(Teleporter(teleCode)))
  }

  class AnyReq(override val reqs: Requirement*) extends Requirement  with MultiReq {
    override def builder(parts: Seq[Requirement]): Requirement = AnyReq(parts)

    override def or(that: Requirement): Requirement = that match {
      case r: AnyReq => AnyReq(r.reqs ++ reqs )
      case r => AnyReq(reqs :+ r )
    }
//    override def and(that: Requirement): Requirement = that match {
//      case AnyReq(kids)  =>
//        val overlap = reqs.toSet.union(kids.toSet)
//        if(overlap.isEmpty)
//          AllReqs(this, that)
//        else
//          AllReqs((overlap + AnyReq(reqs.filterNot(overlap.contains))+ AnyReq(kids.filterNot(overlap.contains))).toSeq)
////      case r: AllReqs => AnyReq(reqs.map(k => k and r))
//      case r => AllReqs(this, r)
//    }
    override def toString: String = s"(${reqs.mkString(" || ")})"
    override def metBy(state: GameState): Boolean = reqs.exists(_.metBy(state))
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
    def apply(reqsRaw: Seq[Requirement]): Requirement = {
      val reqs: Seq[Requirement] = reqsRaw.filter(_.cheapestRemaining().cost < Double.PositiveInfinity).distinct
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
      def metBy(state: GameState): Boolean = reqs.forall(_.metBy(state))
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
    def apply(reqsRaw: Seq[Requirement]): Requirement = reqsRaw.filterNot(_ == Free).distinct match {
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
    }
    def unapply(arg: AllReqs): Option[Seq[Requirement]] = Some(arg.reqs)
  }

}
