import scala.util.parsing.combinator._
import scala.util.parsing.input.Positional
import SeedGenerator.SeedGenerator.{Area, Requirement, SkillReq, HealthReq, OreReq, StateReq, WorldStateNode, locDataByName, EnergyReq,
                                    ItemLoc, AreaNode, ItemNode, StateNode, TeleReq, All, Any, Free, SeedGenState, Connection, Placeholder}
package AreaParser {

  import scala.io.Source
  import scala.util.parsing.input.{NoPosition, Position, Reader}

  object AreaParser {
    val debug = true

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
      def pickup      = positioned { "pickup"      ^^^ PICKUP }
      def state       = positioned { "state"       ^^^ STATE }
      def free        = positioned { "free"        ^^^ FREE }
      def requirement = positioned { "requirement" ^^^ REQUIREMENT }
      def connection  = positioned { "conn"        ^^^ CONNECTION }
      def colon       = positioned { ":"           ^^^ COLON }
      def comma       = positioned { ","           ^^^ COMMA }
      def or          = positioned { "OR"          ^^^ OR }

      def tokens: Parser[List[AreasToken]] = {
        phrase(rep1(comment | area | pickup | state | free | requirement | connection | colon |
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
//            println(s"$spaces, deindent by $dropped (this: ${curr})")
            ( kept, out ::: (dropped map (_ => DEDENT))
            )
          case INDENTATION(spaces) if spaces == indents.head => (indents, out :+ NEWLINE)
          // other tokens are ignored
          case token =>  (indents, out :+ token)
        }
      }

      private def procIndent(tokens: List[AreasToken]): List[AreasToken] = tokens.foldLeft((List(0), List[AreasToken]()))(foldme(_, _))._2
    }

    trait DebugParsers extends Parsers {
      class Wrap[+T](name:String,parser:Parser[T]) extends Parser[T] {
        def apply(in: Input): ParseResult[T] = {
          val first = if(!in.atEnd) in.first else "END"
          val pos = in.pos
          val t = parser.apply(in)
          if(debug) {
            if(t.successful)
              println(s"$name.apply; consumed $first at $pos, got ${t.get}")
            else
              println(s"$name.apply failed; unconsumed token(s) $first at $pos ${if(!in.atEnd && !in.rest.atEnd) s", next: ${in.rest.first}" else " END"} -> $t")
          }
          t
        }
      }
    }

    object AreasBuilder extends DebugParsers {
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

      val endl = rep1(comment.? ~> NEWLINE)
      val indent = comment.? ~> INDENT
      val dedent = comment.? ~> DEDENT
      val blanks = rep(dedent ~ indent | NEWLINE | comment)
      def requirements: Parser[Requirement] =  "req" !!! {
        val free: Parser[Requirement] =  FREE ^^^ Free
        def grenadeReq: Parser[Requirement] = IDENTIFIER("Grenade") ~> assign ^^ { case ASSIGN(cnt) => All(SkillReq(51), EnergyReq(cnt))}
        def sentryReq: Parser[Requirement] = IDENTIFIER("Sentry") ~> assign ^^ { case ASSIGN(cnt) => All(SkillReq(116), EnergyReq(cnt))}
        def skillReq: Parser[Requirement] = grenadeReq | sentryReq | accept("skillName", {
          case IDENTIFIER("Bash") => SkillReq(0)
          case IDENTIFIER("DoubleJump") => SkillReq(5)
          //   case IDENTIFIER("Torch") => SkillReq(99)
          case IDENTIFIER("Sword") => SkillReq(100)
          //   case IDENTIFIER("WallJump") => SkillReq(3)
          case IDENTIFIER("Launch") => SkillReq(8)
          case IDENTIFIER("Glide") => SkillReq(14)
          case IDENTIFIER("WaterBreath") => SkillReq(23)
          case IDENTIFIER("Grenade") => SkillReq(51)
          case IDENTIFIER("Grapple") => SkillReq(57)
          case IDENTIFIER("Flash") => SkillReq(62)
          case IDENTIFIER("Spike") => SkillReq(74)
          case IDENTIFIER("Spear") => SkillReq(74)
          case IDENTIFIER("Regenerate") => SkillReq(77)
          case IDENTIFIER("Bow") => SkillReq(97)
          case IDENTIFIER("Hammer") => SkillReq(98)
          case IDENTIFIER("Burrow") => SkillReq(101)
          case IDENTIFIER("Dash") => SkillReq(102)
          case IDENTIFIER("WaterDash") => SkillReq(104)
          case IDENTIFIER("SpiritStar") => SkillReq(106)
          case IDENTIFIER("Shuriken") => SkillReq(106)
          case IDENTIFIER("Wisps") => SkillReq(108)
          case IDENTIFIER("Blaze") => SkillReq(115)
          case IDENTIFIER("Sentry") => SkillReq(116)
          case IDENTIFIER("Flap") => SkillReq(118)
        })
        def tpReq: Parser[Requirement] = accept("teleporterName", {
          case IDENTIFIER("BurrowsTP") => TeleReq(0)
          case IDENTIFIER("ReachTP") => TeleReq(2)
          case IDENTIFIER("WellspringTP") => TeleReq(3)
          case IDENTIFIER("HollowTP") => TeleReq(5)
          case IDENTIFIER("DepthsTP") => TeleReq(6)
        })
        def oreReq: Parser[Requirement] = IDENTIFIER("Ore") ~> assign ^^ { case ASSIGN(cnt) => OreReq(cnt)}
        def energyReq: Parser[Requirement] = IDENTIFIER("Energy") ~> assign ^^ { case ASSIGN(cnt) => EnergyReq(cnt)}
        def damageReq: Parser[Requirement] = IDENTIFIER("Damage") ~> assign ^^ { case ASSIGN(cnt) => HealthReq(cnt)}
        def stateReq: Parser[Requirement] = accept("stateName", { case IDENTIFIER(s) => StateReq(s)})
        val simpleReq = skillReq | damageReq | energyReq | oreReq | tpReq | stateReq
        val orReq: Parser[Requirement] = rep1sep(simpleReq, OR) ^^ { case s => Any(s:_*) }
        val reqRHS: Parser[Requirement] = "reqRHS" !!! rep(simpleReq <~ COMMA) ~ (orReq | simpleReq) ^^ { case head ~ last => All(head :+ last:_*) }
        def diffReq: Parser[Requirement] = "diffReq" !!! accept("diff", {
          case IDENTIFIER("base") => Free
          case IDENTIFIER("advanced") => StateReq("advanced")
        })
        def lhsSimpleReq = diffReq | damageReq | stateReq
       val reqLHS = "reqLHS" !!! (repsep(lhsSimpleReq, COMMA) <~ COLON ^^ { case reqs => All(reqs:_*)})
        val reqLine = "reqLine" !!! (reqLHS ~ (free | reqRHS) ^^ {case lhs ~ rhs => lhs and rhs})
        val rhsBlock = "rhsBlock" !!! rep1sep(reqLine | reqRHS, endl) ^^ { case rhss => Any(rhss:_*) }
                                                                                            // i don't like this but i'm so tired
        def reqBlock: Parser[Requirement] = "reqBlock" !!! (reqLHS <~ indent) ~ rep1sep(reqBlock | rhsBlock, endl.?) <~ dedent ^^ { case lhs ~ rhss => Any(rhss.map(All(lhs, _)):_*) }
        val reqLines = "reqLines" !!! rep1sep(reqLine | reqBlock, endl.?) ^^ { case lines => Any(lines:_*)}
        free | (indent ~> reqLines <~ dedent)
      }
      val pickup =  "pickup node" !!! (PICKUP ~> identifier <~ COLON) ~ requirements ^^ { case IDENTIFIER(name) ~ reqs => Connection(Placeholder(name, ItemNode), reqs) }
      val state  =  "state node" !!! (STATE ~> identifier <~ COLON) ~ requirements ^^ { case IDENTIFIER(name) ~ reqs => Connection(WorldStateNode(name), reqs) }
      val conn = "conn node" !!! (CONNECTION ~> identifier <~ COLON) ~ requirements ^^ { case IDENTIFIER(name) ~ reqs => Connection(Placeholder(name, AreaNode), reqs) }
      val area = "area node" !!! (AREA ~> identifier <~ COLON <~ indent <~ blanks.?) ~ repsep(state | pickup | conn, blanks) <~ dedent ^^ { case IDENTIFIER(name) ~ conns => Area(name, conns) }
      val areas = "areas" !!! rep(endl) ~> repsep(area, blanks)
      val reqMacro  =  "reqMacro" !!! (REQUIREMENT ~> identifier <~ COLON) ~ requirements ^^ { case IDENTIFIER(name) ~ reqs => (name, reqs) }
      val macros = "macros" !!! repsep(reqMacro, blanks) ^^ { case macros => Map(macros:_*)}
      val file ="file" !!!  phrase(blanks ~> macros ~ areas <~ blanks) ^^ { case reqMacs ~ areas => validator(reqMacs, areas)}

      // do macro substitution, validate areas and states
      def validator(macros: Map[String, Requirement], areas: Seq[Area]): Seq[Area] = {
        val stateNodes = areas.flatMap(_.conns.filter(_.target.kind == StateNode).map(r => r.target.name))
        val stateReqs = areas.flatMap(_.conns.flatMap(_.req.cheapestRemaining().flags))
        val unusedStateReqs = stateReqs.filterNot(st => macros.contains(st.name) || stateNodes.contains(st.name)).toSet
        val locDataSrc = locDataByName
        if(unusedStateReqs.nonEmpty)
          println(s"non-referenced state reqs: $unusedStateReqs")
        val unusedMacros = macros.filterNot(mc => stateReqs.map(st => st.name).contains(mc._1)).toSet
        if(unusedMacros.nonEmpty)
          println(s"unused macros: $unusedMacros")
        val macroArea = Area("Virtual.Macros", macros.map({case (name, req) => Connection(WorldStateNode(name), req)}).toSeq)
        macroArea +: areas.map(area => Area(area.name, area.conns.flatMap({
          case Connection(target: Placeholder, reqs) if target.kind == ItemNode => ItemLoc.mk(target.name, locDataSrc).map(Connection(_, reqs))
          case c => Some(c)
        })))
      }

      def runP[T](tokens: Seq[AreasToken], p: Parser[T]) = {
        val reader = new AreasTokenReader(tokens)
        p(reader) match {
          case NoSuccess(msg, next) => Left(ParserError(msg))
          case Success(result, next) => Right(result)
        }
      }
      def runReq(tokens: Seq[AreasToken]) = runP(tokens, requirements)
    }


    def run2(in: String) = {
      AreasLexer(in) match {
        case Left(error) => Left(error)
        case Right(tokens) => AreasBuilder.runP(tokens, AreasBuilder.file) match {
          case Left(error) => Left(error)
          case Right(req) => Right(req)
        }
      }
    }
    def tokens(sourcefile: String = "areas.wotw") = {
      AreasLexer(Source.fromFile(sourcefile).mkString) match {
        case Left(_) => Seq()
        case Right(tokens) => tokens
      }
    }
    def printTokens(t: Seq[AreasToken]) = t.foreach({case AreaParser.INDENT => print("\nINDENT ") ; case AreaParser.DEDENT => print("\nDEDENT ") ; case AreaParser.NEWLINE => println(""); case t => print(s"$t ") })
    def run(sourcefile: String = "areas.wotw") = {
      run2(Source.fromFile(sourcefile).mkString)
    }
  }
}