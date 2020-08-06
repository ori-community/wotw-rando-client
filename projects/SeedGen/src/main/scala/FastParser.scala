import fastparse._
import java.io.{BufferedWriter, FileWriter}
import scala.io.Source
import java.io.File
import SeedGenerator.implicits._
import scala.collection.mutable.{Map=>MMap}
package SeedGenerator {
  trait ParseError

  object FastParser {
    def colon[_:P]: P[Unit] = P(":")
    def comma[_:P]: P[Unit] = P(",")
    def or[_:P]: P[Unit] = P("OR")

    def anyP[_: P, T](ps: Seq[() => P[T]]): P[T] = ps match {
      case Nil => Fail
      case Seq(a) => P(a())
      case h => P(h.head() | anyP(h.tail))
    }
    def strList[_: P](strs: => Seq[String]): P[String] = P(anyP(strs.map(n => () => P(n).!)))
    def nameMapParser[_: P, VT](m: Map[String, VT]): P[VT] = strList(m.keys.toSeq).map(m)


    implicit val whitespace: P[_] => P[Unit] = { implicit ctx: ParsingRun[_] =>
      CharsWhileIn(" \t", 0)
    }
    def ts(t: (String, String)): String = t._1 + t._2
    def num[_ :P]: P[Int] = P(("-".!.? ~~ CharsWhileIn("0-9").!).map({
      case (Some(_), digits) => -digits.toInt
      case (None, digits) => digits.toInt
    }))
    def equalsNum[_ :P]: P[Int] = P("=" ~ num)
    def nameParser[_: P]: P[String] = P(!("quest" | "state" | "pickup" | "conn" | "unsafe" | "Checkpoint" | "refill") ~ CharsWhileIn("a-zA-Z").! ~~ ("." ~~ CharsWhileIn("a-zA-Z").!).?.map(_.map(s => s".$s").getOrElse(""))).map(ts)
    def oreReq[_: P]: P[Requirement] = P("Ore" ~~/ equalsNum).map(OreReq)
    def energyReq[_: P]: P[Requirement] = P("Energy" ~~/ equalsNum).map(EnergyReq(_))
    def grenadeReq[_: P]: P[Requirement] = P("Grenade" ~~/ equalsNum).map(i => AllReqs(SkillReq(51), EnergyReq(i)))
    def bowReq[_: P]: P[Requirement] = P("Bow" ~~/ equalsNum).map(i => AllReqs(SkillReq(97), EnergyReq(0.25f * i)))
    def spearReq[_: P]: P[Requirement] = P("Spear" ~~/ equalsNum).map(i => AllReqs(SkillReq(74), EnergyReq(2f * i)))
    def dangerReq[_: P]: P[Requirement] = P(("Danger" | "Damage") ~~/ equalsNum).map(DamageReq)
    def wallReq[_: P]: P[Requirement] = P("BreakWall" ~~/ equalsNum).map(BreakWallReq)
    def shardReq[_: P]: P[Requirement] = P("TripleJump").map(_ => TripleJump.req) // TODO: hahahaha we'll come back to this
    def sentryJumpReq[_: P]: P[Requirement] = P("SentryJump" ~~/ equalsNum).map(n => if(Config().glitchPaths) SentryJumpReq(n) else Invalid)
    def ksReq[_: P]: P[Requirement] = P("Keystone" ~~/ equalsNum).map(n => if(Config().flags.noKSDoors) Free else KeystoneReq(n))
    def cashReq[_: P]: P[Requirement] = P("SpiritLight" ~~/ equalsNum).map(CashReq)
    def free[_: P]: P[Requirement] = P("free").map(_ => Free)
    def unfree[_: P]: P[Requirement] = P("Unreachable").map(_ => Invalid)
    def tpReq[_: P]: P[Requirement] = P(nameMapParser(Teleporter.areaFileNames)).map(id => TeleReq(id))
    def skillReq[_: P]: P[Requirement] = grenadeReq | bowReq | spearReq | sentryJumpReq | P(nameMapParser(Skill.areaFileNames)).map(id => if(id == 100 || Skill.poolItems.exists(_.skillId == id)) SkillReq(id) else Invalid)
    def eventReq[_: P]: P[Requirement] = P(nameMapParser(WorldEvent.areaFileNames)).map(EventReq)
    def diffReq[_ :P]: P[Requirement] = P("moki" | "unsafe" | "gorlek" | "glitch").!.map({
      case "moki" => Free
      case "gorlek" => if(Config().gorlekPaths) Free else Invalid
      case "glitch" => if(Config().glitchPaths) Free else Invalid
      case "unsafe" => if(Config().unsafePaths) Free else Invalid
    })
    def stateReq[_:P]: P[Requirement] = P(nameParser).map({
      case s if knownMacros.contains(s) => knownMacros(s)
      case s => StateReq(s)
    })
    def singleReq[_:P]: P[Requirement] = P(diffReq | tpReq | skillReq | oreReq | energyReq | dangerReq | ksReq | cashReq | wallReq | free | eventReq | shardReq | unfree | stateReq)//.log
    def orReqs[_:P]: P[Requirement] = P(singleReq.rep(sep=or)).map(AnyReq(_))//.log
    def andReqs[_:P]: P[Requirement] = P(NoCut(singleReq.rep(sep=comma, min=1) ~ (or ~ orReqs).?)).map({
      case (reqs, Some(orReq)) =>
        AllReqs(reqs.dropRight(1)) and (reqs.last or orReq)
      case (reqs, None) => AllReqs(reqs)
    })//.log
    def reqRHS[_:P]: P[Requirement] = P(andReqs)
    def reqLHS[_:P]: P[Requirement] = P(andReqs ~~ colon)//.log
    def reqLine[_:P]: P[Requirement] = P(reqLHS ~ !"\n" ~ reqRHS ~ &("\n")).map{case (lhs, rhs) => lhs and rhs}
    class ReqParser(indent: Int) {
      def deeper[_: P]: P[Int] = P( " ".repX(indent + 1).!.map(_.length) )
      def blockBody[_: P]: P[Seq[Requirement]] = "\n" ~~ deeper.flatMapX(i => new ReqParser(indent = i).req.repX(1, sep = ("\n" + " " * i)./)
      ).map(_.flatten)//.log
      def block[_: P]: P[Seq[Requirement]] = P(reqLHS ~ blockBody).map{case (head, body) => body.map(b => head and b)}//.log
      def line[_:P]: P[Requirement] = P(reqLine | reqRHS)//.log
      def req[_:P]: P[Seq[Requirement]] = P( NoCut(block) | line.map(Seq(_)) )
      def reqBlock[_:P]: P[Seq[Requirement]] = P(free.map(Seq(_)) | (NoCut(reqLine.map(Seq(_))) | NoCut(blockBody)).rep.map(_.flatten))//.log
    }
    trait RefillBuilder {def build(r: Requirement): Refiller}
    case object CPBuilder extends RefillBuilder   { def build(r: Requirement): Refiller = Checkpoint(r) }
    case object WellBuilder extends RefillBuilder { def build(r: Requirement): Refiller = Well(r) }
    case class ECBuilder(count: Int) extends RefillBuilder { def build(r: Requirement): Refiller = EnergyCrystals(count, r) }
    case class HPBuilder(count: Int) extends RefillBuilder { def build(r: Requirement): Refiller = HealthPlants(count, r) }
    def checkpoint[_:P]: P[RefillBuilder] = P("Checkpoint").map(_ => CPBuilder)//.log
    def spiritWell[_:P]: P[RefillBuilder] = P("Full").map(_ => WellBuilder)//.log
    def crystal[_:P]: P[RefillBuilder] = P("Energy" ~~/ equalsNum).map(ECBuilder)//.log
    def plant[_:P]: P[RefillBuilder] = P("Health" ~~/ equalsNum).map(HPBuilder)//.log
    def refillReq[_:P]: P[Refiller] = P("  refill" ~ (crystal | plant | checkpoint | spiritWell) ~~
      ((colon ~ new ReqParser(1).reqBlock.map(AnyReq(_))) | &("\n").map(_ => Free))).map({case (builder, req) => builder.build(req)})
//      .log
    def refillBlock[_:P]: P[RefillGroup] = P(refillReq.repX(sep=endl, min=1).map(RefillGroup))
//      .log
    case class Region(prefix: String, req: Requirement)
    def atParser[_:P]: P[Coords] = P(" at " ~~ num ~~ "," ~~ " ".? ~~ num).map(xy => Coords(xy._1, xy._2))//.log
    def endl[_:P]: P[Unit] = P("\n")
    def reqMacro[_:P]: P[Unit] = P("requirement " ~/ nameParser ~~ colon ~ new ReqParser(0).reqBlock).map({case (name, req) => knownMacros(name) = AnyReq(req)})//.log
    def state[_:P]: P[Connection] = P("  state" ~/ nameParser ~~ colon ~ new ReqParser(1).reqBlock).map({case (name, req) => Connection(WorldStateNode(name), req)})//.log
    def quest[_:P]: P[Connection] = P("  quest" ~/ nameParser ~~ colon ~ new ReqParser(1).reqBlock).map({case (name, req) => Connection(QuestNode(name), req)})//.log
    def conn[_:P]: P[Connection] = P("  conn" ~/ nameParser ~~ colon ~ new ReqParser(1).reqBlock).map({case (name, req) => Connection(Placeholder(name, AreaNode), req)})//.log
    def pickup[_:P]: P[Connection] = P("  pickup" ~/ nameParser ~~ colon ~ new ReqParser(1).reqBlock).map({case (name, req) => Connection(Placeholder(name, ItemNode), req)})//.log
    def area[_:P]: P[Area] = P("anchor" ~/ nameParser ~~ atParser.? ~~ colon ~ endl ~~ (refillBlock ~ endl.?).? ~~ (state | quest | pickup | conn).repX(sep=endl)).map{
      case (name, coords,  refills, conns) => Area(name, conns, refills.getOrElse(RefillGroup()), coords)
    }//.log
    def region[_:P]: P[Region] = P("region" ~/ nameParser ~~ colon ~ new ReqParser(0).reqBlock).map({case (prefix, reqs) => Region(prefix, AnyReq(reqs))})
    def regionOrArea[_:P]: P[Either[Region, Area]] = P(NoCut(region) | NoCut(area)).map{
      case r: Region => Left(r)
      case a: Area => Right(a)
    }
    def macroSection[_:P]: P[Unit] = reqMacro.rep(1, sep=endl)
    def file[_:P]: P[Seq[Either[Region, Area]]] = P(endl ~ NoCut(macroSection) ~ endl ~ regionOrArea.rep(sep=endl) ~ endl ~ End)
    def input: String = {
      val path = if(new File("areas.wotw").exists()) "areas.wotw" else "C:\\moon\\areas.wotw"
      val src = Source.fromFile(path)
      Config.debug(s"Loading logic from $path")
      val raw = src.mkString.replace("\r\n","\n")
      src.close()
      "\n *(?=\n)".r.replaceAllIn(" *#[^\n]*".r.replaceAllIn(raw,""), "")
    }

    def validator(areasAndRegions: Seq[Either[Region, Area]]): Map[String, Area] = Timer("validator"){
      val (regions, areas) = areasAndRegions.partitionMap(a => a)
      def stateReqs(areas: Seq[Area]) = areas.flatMap(_.conns.flatMap(_.reqs.flatMap(_.children.collect({case r: StateReq => r}))))
//      val unusedMacros = macros.filterNot(mc => stateReqs(areas).map(st => st.flag).contains(mc.target.name)).toSet
//      if(unusedMacros.nonEmpty)
//        Config.warn(s"unused macros: $unusedMacros")
      areas
        // find applicable regions
        .map(a => (a, regions.collectFirst({case Region(rName, rReq) if a.name.startsWith(rName) => rReq})))
        // apply their reqs
        .map({
          case (area, Some(Free)) => area.name -> area
          case (area, Some(req)) =>
//              println(s"adding $req to paths in ${area.name}")
            area.name -> area.copy(conns = area.conns.map({
              case Connection(target, r)  => Connection(target, r.map(_ and req))
              case c => c
            }))
          case (area, None) => area.name -> area
        }).toMap
    }
    val knownMacros = MMap[String, Requirement]()
    def parseFile(): Either[ParseError, Map[String, Area]] = {
      knownMacros.clear()
      parse(input, file(_)) match {
        case Parsed.Success( regionAreas, _) => Right(validator(regionAreas))
        case f: Parsed.Failure => Left(FPError(s"Failed to parse areas.wotw; $f", f))
      }
    }

    def writeIntermediate(): Unit = {
      val bw = new BufferedWriter(new FileWriter("nofluff.wotw"))
      bw.write(input)
      bw.close()
    }
    case class FPError(msg: String, f: Parsed.Failure) extends ParseError
  }
}
