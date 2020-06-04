package SeedGenerator {
  import implicits._
  trait Requirement {
    def metBy(state: GameState): Boolean
    def remaining(state: GameState = GameState.Empty): Seq[GameState]
    def cheapestRemaining(state: GameState = GameState.Empty): GameState = remaining(state)
      .minByOption(_.cost)
      .getOrElse(GameState.mk(Unobtainium))
    def afterMet(state: GameState): GameState = state
    def and(that: Requirement): Requirement = AllReqs(this, that)
    def or(that: Requirement): Requirement = AnyReq(this, that)
    def substitute(orig: Requirement, repl: Requirement): Requirement = if(this == orig) repl else this
    def children = Seq(this)
  }

  trait Consumer extends Requirement

  case class StateReq(flag: String) extends Requirement {
    def metBy(state: GameState): Boolean = state.flags.contains(WorldState(flag))
    def remaining(state: GameState) = Seq(if(metBy(state)) GameState.Empty else GameState.mk(WorldState(flag)))
  }

  case class EventReq(eventCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has WorldEvent(eventCode)
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(WorldEvent(eventCode)))
    override def toString = s"${Skill.names.getOrElse(eventCode, s"Unknown World Event $eventCode")}"
  }

  case class SkillReq(skillCode: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv has Skill(skillCode)
    def remaining(state: GameState) = Seq(if (metBy(state)) GameState.Empty else GameState.mk(Skill(skillCode)))
    override def toString = s"${Skill.names.getOrElse(skillCode, s"Unknown Skill $skillCode")}"
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

  case class OreReq(count: Int) extends Requirement {
    def metBy(state: GameState): Boolean = state.inv(Ore) >= count
    def remaining(state: GameState) = Seq(GameState(new Inv(Ore -> Math.max(0, count - state.inv(Ore)))))
    override def and(that: Requirement): Requirement = that match {
      case OreReq(c) => OreReq(c+count)
      case r => AllReqs(this, r)
    }
  }

  case class CashReq(count: Int) extends Requirement with Consumer {
    def metBy(state: GameState): Boolean = state.inv.totalSpiritLight >= count
    override def afterMet(state: GameState): GameState = state.withoutCash(count)
    // TODO: make this work good with forced progression picking haha
    def remaining(state: GameState): Seq[GameState] = {
      if(metBy(state))
        Seq()
      else {
        val needed = count - state.inv.totalSpiritLight
        if(needed > 174) {
          val count = needed / 174
          Seq(GameState(new Inv(SpiritLight(needed / count + 1) -> count)))
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
    def metBy(state: GameState): Boolean = state.inv(Keystone) >= count
    def remaining(state: GameState) = Seq(GameState(new Inv(Keystone -> Math.max(0, count - state.inv(Keystone)))))
  }

  case class EnergyReq(count: Int) extends Requirement with Consumer {
    def energy(state: GameState): Float = state.inv(Energy)/2f
    def metBy(state: GameState): Boolean = energy(state) >= count
    override def afterMet(state: GameState): GameState = state.without(Energy, count*2)
    def remaining(state: GameState) = Seq(GameState(new Inv(Energy -> Math.max(0, 2*count - state.inv(Energy)))))
    override def and(that: Requirement): Requirement = that match {
      case EnergyReq(c) => EnergyReq(c+count)
      case r => AllReqs(this, r)
    }
  }

  case class DangerReq(damage: Int) extends Requirement with Consumer  {
    def health(state: GameState): Int = state.inv(Health) * 5
    def metBy(state: GameState): Boolean = health(state) > damage
    override def afterMet(state: GameState): GameState = state.without(Health, Math.ceil((damage+1)/5f).intValue())
    def remaining(state: GameState) = Seq(GameState(new Inv(Health -> Math.max(0, Math.ceil((damage + 1 - health(state))/5f).intValue()))))
    override def and(that: Requirement): Requirement = that match {
      case DangerReq(d) => DangerReq(d+damage)
      case r => AllReqs(this, r)
    }
  }

  case class DamageReq(damage: Int) extends Requirement with Consumer {
    def health(state: GameState): Int = state.inv(Health) * 5
    def metBy(state: GameState): Boolean = health(state) > damage
    override def afterMet(state: GameState): GameState = state.without(Health, Math.ceil((damage+1)/5f).intValue())
    def remaining(state: GameState) = Seq(GameState(new Inv(Health -> Math.max(0, Math.ceil((damage + 1 - health(state))/5f).intValue()))))
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
    override def afterMet(state: GameState): GameState = {
      val (consumers, others) = reqs.filter(_.metBy(state)).partitionMap({
        case cons: Consumer => Left(cons)
        case r              => Right(r)
      })
      if(others.nonEmpty)
        state
      else
        consumers match {
          case Seq(consumer) => consumer.afterMet(state)
          case Nil =>
            throw GeneratorError(s"invalid state; $this ${metBy(state)} $others, $consumers, ${state.inv}")
          case _ => consumers.map(_.afterMet(state)).maxBy(_.inv.count)
        }
    }
    def remaining(state: GameState): Seq[GameState] = reqs flatMap (_ remaining state)
    override def children: Seq[Requirement] = reqs.flatMap(_.children)
    override def substitute(orig: Requirement, repl: Requirement): Requirement = AnyReq(reqs.map({
      case r: AnyReq => r.substitute(orig, repl)
      case r: AllReqs => r.substitute(orig, repl)
      case r if r == orig => repl
      case r => r
    }):_*)
  }

  object AnyReq {
    def apply(reqsRaw: Requirement*): Requirement = {
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
    def metMaybe(state: GameState): Option[GameState] = reqs.foldLeft[Option[GameState]](Some(state))((st, req) => st.filter(req.metBy).map(req.afterMet))
    def metBy(state: GameState): Boolean = metMaybe(state).nonEmpty
    override def afterMet(state: GameState): GameState = {
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
      mergedInv = others.map(_.cheapestRemaining(state)).foldLeft(GameState.Empty)(_ + _)
      /*      others.foreach(req => {
              mergedInv = mergedInv + req.cheapestRemaining(mergedInv + state)
            })*/
      /*val greedy = */Seq(orReqs.foldRight(mergedInv)((req, accInv) => accInv + req.cheapestRemaining(accInv + state)))
/*      if (orReqs.length > 1)
        Seq(orReqs.flatMap(_.remaining(state)).find(sus => sus.cost < greedy.cost && orReqs.forall(_.metBy(sus))).map(_ + mergedInv).getOrElse(greedy))
      else
        Seq(greedy)*/
    }
    override def children: Seq[Requirement] = reqs.flatMap(_.children)
    override def substitute(orig: Requirement, repl: Requirement): Requirement = AllReqs(reqs.map({
      case r: AnyReq => r.substitute(orig, repl)
      case r: AllReqs => r.substitute(orig, repl)
      case r if r == orig => repl
      case r => r
    }):_*)
  }
  object AllReqs {
    def apply(reqsRaw: Requirement*): Requirement = reqsRaw.filterNot(_ == Free).distinct match {
      case Nil => Free
      case Seq(req) => req
      case reqs if reqs.exists(_.isInstanceOf[AllReqs]) =>
        val (alls, others) = reqs.partitionMap({
          case all: AllReqs => Left(all)
          case r            => Right(r)
        })
        new AllReqs(alls.flatMap(_.reqs) ++ others:_*)
      case reqs if reqs.contains(Invalid) => Invalid
      case reqs if reqs.exists(_.isInstanceOf[Consumer]) => new AllReqs(reqs:_*) with Consumer
      case reqs => new AllReqs(reqs:_*)
    }
  }

}
