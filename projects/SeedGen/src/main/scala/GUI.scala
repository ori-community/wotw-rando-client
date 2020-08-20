import SeedGenerator._
  object Main extends App {
    // autorun section
    if(args.nonEmpty)
      ReachChecker(args.toSeq)
    else {
      FXGUI.show()
    }
  }
