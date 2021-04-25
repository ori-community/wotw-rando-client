name := "SeedGen"

version := "0.1"

scalaVersion := "2.12.12"

assemblyOutputPath in assembly := file("C:\\moon\\SeedGen.jar")
mainClass in assembly := Some("SeedGenerator.EntryPoint")
//assemblyJarName in assembly := "SeedGen.jar"
libraryDependencies += "org.scalafx" %% "scalafx" % "8.0.181-R13"
scalacOptions += "-target:jvm-1.8"

assemblyMergeStrategy in assembly := {
  case "module-info.class" => MergeStrategy.discard
  case x if x.endsWith("/module-info.class") => MergeStrategy.discard
  case x => (assemblyMergeStrategy in assembly).value(x)
}

sourceGenerators in Compile += Def.task {
  import scala.io.Source
  val file = (sourceDirectory in Compile).value / "scala" / "Version.scala"
  IO.write(file,
    """package SeedGenerator {
      |  object Version {
      |    def apply(): String = """".stripMargin + {
    val src = Source.fromFile("C:\\moon\\VERSION")
    val ret = src.mkString
    ret
    } + """"
        |  }
        |}
        |""".stripMargin)
  Seq(file)
}.taskValue


libraryDependencies += "org.json4s" %% "json4s-native" % "3.6.9"
libraryDependencies += "com.lihaoyi" %% "fastparse" % "2.2.2" // SBT
scalacOptions ++= Seq("-unchecked", "-deprecation", "-Xcheckinit", "-encoding", "utf8", "-feature")

// Fork a new JVM for 'run' and 'test:run', to avoid JavaFX double initialization problems
fork in run := true