import fastparse._
import java.io.{BufferedWriter, FileWriter}
import scala.io.Source
import java.io.File
import AreaParser.ParseError

package SeedGenerator {

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
    def equalsNum[_ :P]: P[Int] = P("=" ~ CharsWhileIn("0-9").!.map(_.toInt))
    def nameParser[_: P]: P[String] = P(!("quest" | "state" | "pickup" | "conn" | "advanced" | "Checkpoint" | "refill") ~ CharsWhileIn("a-zA-Z").! ~~ ("." ~~ CharsWhileIn("a-zA-Z").!).?.map(_.map(s => s".$s").getOrElse(""))).map(ts)
    def oreReq[_: P]: P[Requirement] = P("Ore" ~~/ equalsNum).map(OreReq)
    def energyReq[_: P]: P[Requirement] = P("Energy" ~~/ equalsNum).map(EnergyReq)
    def grenadeReq[_: P]: P[Requirement] = P("Grenade" ~~/ equalsNum).map(i => AllReqs(SkillReq(51), EnergyReq(i)))
    def dangerReq[_: P]: P[Requirement] = P(("Danger" | "Damage") ~~/ equalsNum).map(DangerReq)
    def ksReq[_: P]: P[Requirement] = P("Keystone" ~~/ equalsNum).map(KeystoneReq)
    def cashReq[_: P]: P[Requirement] = P("SpiritLight" ~~/ equalsNum).map(CashReq)
    def free[_: P]: P[Requirement] = P("free").map(_ => Free)
    def unfree[_: P]: P[Requirement] = P("Unreachable").map(_ => Invalid)
    def tpReq[_: P]: P[Requirement] = P(nameMapParser(Teleporter.areaFileNames)).map(id => if(Teleporter.poolItems.exists(_.teleporterId == id)) TeleReq(id) else Invalid)
    def skillReq[_: P]: P[Requirement] = P(nameMapParser(Skill.areaFileNames)).map(id => if(id == 100 || Skill.poolItems.exists(_.skillId == id)) SkillReq(id) else Invalid)
    def eventReq[_: P]: P[Requirement] = P(nameMapParser(WorldEvent.areaFileNames)).map(EventReq)
    def diffReq[_ :P]: P[Requirement] = P("base" | "advanced").!.map({case "base" => Free; case "advanced" => if(doAdvanced) Free else Invalid})
    def stateReq[_:P]: P[Requirement] = P(nameParser).map(StateReq)
    def singleReq[_:P]: P[Requirement] = P(oreReq | energyReq | grenadeReq | dangerReq | ksReq | cashReq | free | tpReq | skillReq | eventReq | diffReq | unfree | stateReq)//.log
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
      def blockBody[_: P]: P[Requirement] = "\n" ~~ deeper.flatMapX(i => new ReqParser(indent = i).req.repX(1, sep = ("\n" + " " * i)./)
      ).map(AnyReq(_))//.log
      def block[_: P]: P[Requirement] = P(reqLHS ~ blockBody).map{case (head, body) => head and body}//.log
      def line[_:P]: P[Requirement] = P(reqLine | reqRHS)//.log
      def req[_:P]: P[Requirement] = P( NoCut(block) | line )
      def reqBlock[_:P]: P[Requirement] = P(free | NoCut(reqLine) | NoCut(blockBody)).rep.map(AnyReq(_)).log
    }
    def checkpoint[_:P]: P[Refiller] = P("Checkpoint").map(_ => Checkpoint)
    def spiritWell[_:P]: P[Refiller] = P("Full").map(_ => Well).log
    def crystal[_:P]: P[Refiller] = P("Energy" ~~/ equalsNum).map(EnergyCrystals)
    def plant[_:P]: P[Refiller] = P("Health" ~~/ equalsNum).map(HealthPlants)
    def refill[_:P]: P[(Refiller, Requirement)] = P("  refill" ~/ (checkpoint | spiritWell | crystal | plant) ~~ colon ~ new ReqParser(1).reqBlock).log

    case class Region(prefix: String, req: Requirement)
    def endl[_:P]: P[Unit] = P("\n")
    def reqMacro[_:P]: P[Connection] = P("requirement " ~/ nameParser ~~ colon ~ new ReqParser(0).reqBlock).map({case (name, req) => Connection(WorldStateNode(name), req)})//.log
    def state[_:P]: P[Connection] = P("  state" ~/ nameParser ~~ colon ~ new ReqParser(1).reqBlock).map({case (name, req) => Connection(WorldStateNode(name), req)}).log
    def quest[_:P]: P[Connection] = P("  quest" ~/ nameParser ~~ colon ~ new ReqParser(1).reqBlock).map({case (name, req) => Connection(QuestNode(name), req)}).log
    def conn[_:P]: P[Connection] = P("  conn" ~/ nameParser ~~ colon ~ new ReqParser(1).reqBlock).map({case (name, req) => Connection(Placeholder(name, AreaNode), req)})//.log
    def pickup[_:P]: P[Connection] = P("  pickup" ~/ nameParser ~~ colon ~ new ReqParser(1).reqBlock).map({case (name, req) => Connection(Placeholder(name, ItemNode), req)}).log
    def area[_:P]: P[Area] = P("area" ~/ nameParser ~~ colon ~ endl ~~ NoCut(refill.repX(sep=endl) ~ endl).? ~~ (state | quest | pickup | conn).repX(sep=endl)).map{case (name, _, conns) => Area(name, conns)}.log
    def region[_:P]: P[Region] = P("region" ~/ nameParser ~~ colon ~ new ReqParser(0).reqBlock).map({case (prefix, req) => Region(prefix, req)})
    def regionOrArea[_:P]: P[Either[Region, Area]] = P(NoCut(region) | NoCut(area)).map{
      case r: Region => Left(r)
      case a: Area => Right(a)
    }
    def macroSection[_:P]: P[Seq[Connection]] = reqMacro.rep(1, sep=endl)
    def file[_:P]: P[(Seq[Connection], Seq[Either[Region, Area]])] = P(endl ~ NoCut(macroSection) ~ endl ~ regionOrArea.rep(sep=endl) ~ endl ~ End)
    def input: String = {
      val path = if(new File("areas.wotw").exists()) "areas.wotw" else "C:\\moon\\areas.wotw"
      val src = Source.fromFile(path)
      UI.debug(s"Loading logic from $path")
      val raw = src.mkString.replace("\r\n","\n")
      src.close()
      "\n *(?=\n)".r.replaceAllIn(" *#[^\n]*".r.replaceAllIn(raw,""), "")
    }

    def validator(macros: Seq[Connection], areasAndRegions: Seq[Either[Region, Area]]): Map[String, Area] = Timer("validator"){
      val (regions, areas) = areasAndRegions.partitionMap(a => a)
      def stateReqs(areas: Seq[Area]) = areas.flatMap(_.conns.flatMap(_.req.children.collect({case r: StateReq => r})))
      val unusedMacros = macros.filterNot(mc => stateReqs(areas).map(st => st.flag).contains(mc.target.name)).toSet
      if(unusedMacros.nonEmpty)
        UI.log(s"unused macros: $unusedMacros")
      areas.map({
        case Area(Area.SPAWN, conns) => Area(Area.SPAWN, conns ++ macros)
        case area => area
      })
        // find applicable regions
        .map(a => (a, regions.collectFirst({case Region(rName, rReq) if a.name.startsWith(rName) => rReq})))
        // apply their reqs
        .map({
          case (area, Some(req)) =>
//              println(s"adding $req to paths in ${area.name}")
            area.name -> Area(area.name, area.conns.map({
              case Connection(target, r) if target.kind != AreaNode => Connection(target, req and r)
              case c => c
            }))
          case (area, None) => area.name -> area
        }).toMap
    }
    var doAdvanced = false
    def parseFile(advanced: Boolean): Either[ParseError, Map[String, Area]] = {
      doAdvanced = advanced
      parse(input, file(_)) match {
        case Parsed.Success((macros, regionAreas), _) => Right(validator(macros, regionAreas))
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
