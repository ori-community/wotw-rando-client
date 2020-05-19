import scala.util.parsing.combinator._
import scala.util.parsing.input.Positional
import scala.language.reflectiveCalls
import SeedGenerator.{Area, Requirement, SkillReq, DamageReq, DangerReq, OreReq, StateReq, WorldStateNode, EnergyReq,
                    Invalid, AreaNode, ItemNode, StateNode, TeleReq, AllReqs, AnyReq, Free, Connection, Placeholder,
                    Skill, WorldEvent}
import scala.io.Source
import scala.util.parsing.input.{NoPosition, Position, Reader}
package AreaParser {

  import SeedGenerator.{CashReq, EventReq, Teleporter}


  trait ParseError
    case class LexerError(msg: String) extends ParseError
    case class ParserError(msg: String) extends ParseError

    sealed trait AreasToken extends Positional

    case class IDENTIFIER(str: String) extends AreasToken
    case class INDENTATION(spaces: Int) extends AreasToken
    case class ASSIGN(value: Int) extends AreasToken
    case class COMMENT(text: String) extends AreasToken
    case object AREA extends AreasToken
    case object PICKUP extends AreasToken
    case object STATE extends AreasToken
    case object FREE extends AreasToken
    case object REQUIREMENT extends AreasToken
    case object CONNECTION extends AreasToken
    case object COLON extends AreasToken
    case object COMMA extends AreasToken
    case object OR extends AreasToken
    case object NEWLINE extends AreasToken
    case object INDENT extends AreasToken
    case object DEDENT extends AreasToken
    case object REGION extends AreasToken

    object AreasLexer extends RegexParsers {
      def apply(code: String): Either[LexerError, List[AreasToken]] = {
        parse(tokens, code) match {
          case NoSuccess(msg, next) => Left(LexerError(msg))
          case Success(result, next) => Right(result)
        }
      }
      override def skipWhitespace = true
      override val whiteSpace = "[ \t\r\f]+".r

      def indentation: Parser[INDENTATION] = positioned {  "\n[ ]*".r ^^ { whitespace => INDENTATION(whitespace.replace("\n","").length) } }
      def identifier: Parser[IDENTIFIER] = positioned { "[a-zA-Z_][a-zA-Z.0-9_]*".r ^^ { str => IDENTIFIER(str) } }
      def assign: Parser[ASSIGN]   = positioned {  "= ?[1-9][0-9]*".r ^^ { str => ASSIGN(str.split("=")(1).trim().toInt) } }
      def comment: Parser[COMMENT] = positioned { "#[^\n]*".r ^^ { str => COMMENT(str.replaceFirst("#", "").trim) } }
      def area        = positioned { "area"        ^^^ AREA }
      def region      = positioned { "region"      ^^^ REGION }
      def requirement = positioned { "requirement" ^^^ REQUIREMENT }
      def pickup      = positioned { "pickup"      ^^^ PICKUP }
      def state       = positioned { "state"       ^^^ STATE }
      def free        = positioned { "free"        ^^^ FREE }
      def connection  = positioned { "conn"        ^^^ CONNECTION }
      def colon       = positioned { ":"           ^^^ COLON }
      def comma       = positioned { ","           ^^^ COMMA }
      def or          = positioned { "OR"          ^^^ OR }

      def tokens: Parser[List[AreasToken]] = {
        phrase(rep1(comment | area | region | pickup | state | free | requirement | connection | colon |
                    comma | or | assign | identifier | indentation)) ^^ { tokens => procIndent(tokens) }
      }
      private def foldme(acc: (List[Int], List[AreasToken]), curr: AreasToken): (List[Int], List[AreasToken])= {
        val (indents, out) = acc
        curr match {
          // if there is an increase in indentation level, we push this new level into the stack
          // and produce an INDENT
          case INDENTATION(spaces) if spaces > indents.head =>
//            println(s"$spaces, indent (this: ${curr})")
            (spaces :: indents, out :+ INDENT)
          // if there is a decrease, we pop from the stack until we have matched the new level,
          // producing a DEDENT for each pop
          case INDENTATION(spaces) if spaces < indents.head =>
            val (dropped, kept) = indents.partition(_ > spaces)
          // println(s"$spaces, deindent by $dropped (this: ${curr})")
            ( kept, out ::: (dropped map (_ => DEDENT))
            )
          case INDENTATION(spaces) if spaces == indents.head => (indents, out :+ NEWLINE)
          // comments are removed
          case COMMENT(_) => (indents, out)
          // other tokens are ignored
          case token =>  (indents, out :+ token)
        }
      }

      private def procIndent(tokens: List[AreasToken]) = tokens.foldLeft((List(0), List[AreasToken]()))(foldme(_, _))._2
    }

    trait DebugParsers extends Parsers {
      class Wrap[+T](name:String,parser:Parser[T]) extends Parser[T] {
        def apply(in: Input): ParseResult[T] = {
          val first = if(!in.atEnd) in.first else "END"
          val pos = in.pos
          val t = parser.apply(in)
          if(DebugParsers.debug) {
            if(t.successful)
              println(s"$name.apply; consumed $first at $pos, got ${t.get}")
            else
              println(s"$name.apply failed; unconsumed token(s) $first at $pos ${if(!in.atEnd && !in.rest.atEnd) s", next: ${in.rest.first}" else " END"} -> $t")
          }
          t
        }
      }
    }
    object DebugParsers {
      var debug = true
    }

    object AreasBuilder extends DebugParsers {
      var advanced = false
      implicit def toWrapped(name:String) = new {
        def !!![T](p:Parser[T]) = new Wrap(name,p)
      }

      override type Elem = AreasToken
      class AreasTokenReader(tokens: Seq[AreasToken]) extends Reader[AreasToken] {
        override def first: AreasToken = tokens.head
        override def atEnd: Boolean = tokens.isEmpty
        override def pos: Position = tokens.headOption.map(_.pos).getOrElse(NoPosition)
        override def rest: Reader[AreasToken] = new AreasTokenReader(tokens.tail)
      }

      private def identifier: Parser[IDENTIFIER] = { accept("identifier", { case id @ IDENTIFIER(name) => id }) }
      private def assign: Parser[ASSIGN] = { accept("assign", { case ass @ ASSIGN(int) => ass }) }
      private def comment: Parser[Unit] = { accept("comment", { case COMMENT(_) =>  }) }

      val endl = NEWLINE
      val indent = INDENT
      val dedent = DEDENT
      val blanks = rep(dedent ~ indent | NEWLINE)
      val free: Parser[Requirement] =  FREE ^^^ Free
      def grenadeReq: Parser[Requirement] = IDENTIFIER("Grenade") ~> assign ^^ { case ASSIGN(cnt) => AllReqs(SkillReq(51), EnergyReq(cnt))}
      def sentryReq: Parser[Requirement] = IDENTIFIER("Sentry") ~> assign ^^ { case ASSIGN(cnt) => AllReqs(SkillReq(116), EnergyReq(cnt))}
      def skillReq: Parser[Requirement] = grenadeReq | sentryReq |  accept("skillName", {
        case IDENTIFIER(name) if Skill.areaFileNames.get(name).nonEmpty =>
          val id = Skill.areaFileNames(name)
          if(id == 100 || Skill.poolItems.exists(_.skillId == id))
            SkillReq(id)
          else
            Invalid
      })
      def tpReq: Parser[Requirement] = accept("teleporterName", {
        case IDENTIFIER(name) if Teleporter.areaFileNames.get(name).nonEmpty =>
          val id = Teleporter.areaFileNames(name)
          if(Teleporter.poolItems.exists(_.teleporterId == id))
            TeleReq(id)
          else
            Invalid
      })
      def oreReq: Parser[Requirement] = IDENTIFIER("Ore") ~> assign ^^ { case ASSIGN(cnt) => OreReq(cnt)}
      def energyReq: Parser[Requirement] = IDENTIFIER("Energy") ~> assign ^^ { case ASSIGN(cnt) => EnergyReq(cnt)}
      def damageReq: Parser[Requirement] = IDENTIFIER("Damage") ~> assign ^^ { case ASSIGN(cnt) => DamageReq(cnt)}
      def cashReq: Parser[Requirement] =  IDENTIFIER("SpiritLight") ~> assign ^^ {case ASSIGN(cnt) => CashReq(cnt)}
      def unreachable: Parser[Requirement] = IDENTIFIER("Unreachable") ^^^ Invalid
      def worldEvReq: Parser[Requirement] = IDENTIFIER("Water") ^^^ EventReq(0)
      def stateReq: Parser[Requirement] = accept("stateName", { case IDENTIFIER(s) => StateReq(s)})
      def dangerReq: Parser[Requirement] = IDENTIFIER("Danger") ~> assign ^^ {case ASSIGN(cnt) => DangerReq(cnt)}
      val generalReqs = (skillReq | damageReq | dangerReq | energyReq | oreReq | cashReq | tpReq | unreachable | worldEvReq | stateReq)
      val regionReqs = (skillReq | dangerReq | energyReq | stateReq)

      def reqSec(baseReqs: Parser[Requirement]): Parser[Requirement] =  "req" !!! {
        val orReq: Parser[Requirement] = "orReq" !!! (baseReqs <~ OR) ~ rep1sep(baseReqs, OR) ^^ { case first ~  rest => AnyReq(first :: rest:_*) }
        val reqRHS: Parser[Requirement] = "reqRHS" !!! (rep(baseReqs <~ COMMA) ~ (orReq | baseReqs) <~ guard(NEWLINE | dedent) ^^ { case head ~ last => AllReqs(head :+ last:_*) }) | free
        def lhsBase: Parser[Requirement] = "lhsBase" !!! accept("diff", {
          case IDENTIFIER("base") => Free
          case IDENTIFIER("advanced") => if(advanced) Free else Invalid
        }) | baseReqs
        val reqLHS = "reqLHS" !!! (rep(lhsBase <~ COMMA) ~ (orReq | lhsBase) <~ COLON ^^ { case head ~ last => AllReqs(head :+ last:_*) })
        val reqLine = "reqLine" !!! (reqLHS ~ (free | reqRHS) <~ guard(NEWLINE | dedent)) ^^ {case lhs ~ rhs => lhs and rhs}
        val rhsBlock = "rhsBlock" !!! rep1sep(reqLine | reqRHS, endl.+) ^^ { case rhss => AnyReq(rhss:_*) }
        def reqBlock: Parser[Requirement] = "reqBlock" !!! (reqLHS <~ indent <~ endl.*) ~ rep1sep(reqBlock | rhsBlock, endl.*) <~ dedent ^^ { case lhs ~ rhss =>  AnyReq(rhss.map(AllReqs(lhs, _)):_*) }
        val reqLines = "reqLines" !!! rep1sep(reqLine | reqBlock, endl.*) ^^ { case lines => AnyReq(lines:_*)}
        free | (indent ~> blanks.? ~> reqLines <~ dedent)
      }
      val generalReqSec = reqSec(generalReqs)
      val pickup =  "pickup node" !!! (PICKUP ~> identifier <~ COLON) ~ generalReqSec ^^ { case IDENTIFIER(name) ~ reqs => Connection(Placeholder(name, ItemNode), reqs) }
      val state  =  "state node" !!! (STATE ~> identifier <~ COLON) ~ generalReqSec ^^ { case IDENTIFIER(name) ~ reqs => Connection(WorldStateNode(name), reqs) }
      val conn = "conn node" !!! (CONNECTION ~> identifier <~ COLON) ~ generalReqSec ^^ { case IDENTIFIER(name) ~ reqs => Connection(Placeholder(name, AreaNode), reqs) }
      val area = "area node" !!! (AREA ~> identifier <~ COLON <~ indent <~ blanks.?) ~ repsep(state | pickup | conn, blanks) <~ dedent ^^ { case IDENTIFIER(name) ~ conns => Area(name, conns) }
      val region = "region" !!! (REGION ~> identifier <~ COLON) ~ reqSec(regionReqs) ^^ { case IDENTIFIER(name) ~ reqs => (name, reqs) }
      val areaOrRegion = (area | region) ^^ {
        case area: Area => Left(area)
        case (name: String, r: Requirement) => Right(name -> r)
      }
      def areasAndRegions: Parser[(List[Area], Map[String, Requirement])] =
        "areas" !!! rep(endl) ~> repsep(areaOrRegion, blanks) ^^ { case parts =>
          val (areas, regionsRaw) = parts.partitionMap(a => a)
          (areas, regionsRaw.toMap)
        }
      val reqMacro  =  "reqMacro" !!! (REQUIREMENT ~> identifier <~ COLON) ~ generalReqSec ^^ { case IDENTIFIER(name) ~ reqs => (name, reqs) }
      val macros = "macros" !!! repsep(reqMacro, blanks) ^^ { case macros => Map(macros:_*)}
      val file ="file" !!!  phrase(blanks ~> macros ~ areasAndRegions <~ blanks) ^^ { case reqMacs ~ areas => validator(reqMacs, areas._1, areas._2)}

      // do macro substitution, validate areas and states
      def validator(macros: Map[String, Requirement], areas: Seq[Area], regions: Map[String, Requirement]) = {
        def stateReqs(areas: Seq[Area]) = areas.flatMap(_.conns.flatMap(_.req.children.collect({case r: StateReq => r})))

        val unusedMacros = macros.filterNot(mc => stateReqs(areas).map(st => st.flag).contains(mc._1)).toSet
        if(DebugParsers.debug && unusedMacros.nonEmpty)
          println(s"unused macros: $unusedMacros")
        val macroConns = macros.map({case (name, req) => Connection(WorldStateNode(name), req)}).toSeq

        def getUnusableStates(areas: Seq[Area]) = {
          val reachableStateNodes = areas.flatMap(_.conns.withFilter(_.target.kind == StateNode).map(r => r.target.name))
          stateReqs(areas).filterNot(st => macros.contains(st.flag) || reachableStateNodes.contains(st.flag)).toSet
        }

        def pruneStates(areas: Seq[Area], unused: Set[StateReq]) =
          areas.map({case Area(name, conns) => Area(name, conns.map(c => Connection(c.target, unused.foldLeft(c.req)((acc, flag) => acc.substitute(flag, Invalid)))))})
        def pruneStatesRecursive(areas: Seq[Area], unused: Set[StateReq] = Set()): Seq[Area] = {
          val newAreas = pruneStates(areas, unused)
          val newUnused = getUnusableStates(newAreas)
          if(newUnused.nonEmpty) {
            if(DebugParsers.debug)
              println(s"need to prune: ${newUnused}")
            return pruneStatesRecursive(newAreas, newUnused)
          }
          newAreas
        }

        // sub in macros
        pruneStatesRecursive(areas.map({
          case Area(Area.SPAWN, conns) => Area(Area.SPAWN, conns ++ macroConns)
          case area => area
        }))
          // find applicable regions
          .map(a => (a, regions.collectFirst({case (rName, rReq) if a.name.startsWith(rName) => rReq})))
          // apply their reqs
          .map({
            case (area, Some(req)) =>
              if(DebugParsers.debug)
                println(s"adding $req to paths in ${area.name}")
              area.name -> Area(area.name, area.conns.map(c => Connection(c.target, req and c.req)))
            case (area, None) => area.name -> area
          }).toMap
      }

      def runP[T](tokens: Seq[AreasToken], p: Parser[T]) = {
        val reader = new AreasTokenReader(tokens)
        p(reader) match {
          case NoSuccess(msg, next) => Left(ParserError(msg))
          case Success(result, next) => Right(result)
        }
      }
      def tokens(sourcefile: String = "areas.wotw"): Seq[AreasToken] = {
        val s = Source.fromFile(sourcefile)
        AreasLexer(s.mkString) match {
          case Left(_) => Seq()
          case Right(tokens) => tokens
        }
      }
      def printTokens(t: Seq[AreasToken]): Unit = t.foreach({case AreaParser.INDENT => print("\nINDENT ") ; case AreaParser.DEDENT => print("\nDEDENT ") ; case AreaParser.NEWLINE => println(""); case t => print(s"$t ") })
      def run(sourcefile: String = "areas.wotw", print: Boolean = false, advanced: Boolean = false): Either[ParseError, Map[String, Area]] = {
        DebugParsers.debug = print
        AreasBuilder.advanced = false
        val s = Source.fromFile(sourcefile)
        AreasLexer(s.mkString) match {
          case Left(error) => Left(error)
          case Right(tokens) => AreasBuilder.runP(tokens, AreasBuilder.file) match {
            case Left(error) => Left(error)
            case Right(req) => Right(req)
          }
        }
      }
    }


  }
