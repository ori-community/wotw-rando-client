name := "SeedGen"

version := "0.1"

scalaVersion := "2.13.3"

assemblyOutputPath in assembly := file("C:\\moon\\SeedGen.jar")
//assemblyJarName in assembly := "SeedGen.jar"
libraryDependencies += "org.scalafx" %% "scalafx" % "12.0.2-R18"
// Determine OS version of JavaFX binaries
lazy val osName = System.getProperty("os.name") match {
  case n if n.startsWith("Linux")   => "linux"
  case n if n.startsWith("Mac")     => "mac"
  case n if n.startsWith("Windows") => "win"
  case _ => throw new Exception("Unknown platform!")
}

// Add dependency on JavaFX libraries, OS dependent
lazy val javaFXModules = Seq("base", "controls", "fxml", "graphics", "media")
libraryDependencies ++= javaFXModules.map( m =>
  "org.openjfx" % s"javafx-$m" % "12-ea+8" classifier osName
)

assemblyMergeStrategy in assembly := {
  case "module-info.class" => MergeStrategy.discard
  case x if x.endsWith("/module-info.class") => MergeStrategy.discard
  case x => (assemblyMergeStrategy in assembly).value(x)
}

libraryDependencies += "org.json4s" %% "json4s-native" % "3.6.9"
libraryDependencies += "com.lihaoyi" %% "fastparse" % "2.2.2" // SBT
libraryDependencies += "org.scala-lang.modules" %% "scala-parallel-collections" % "0.2.0"

scalacOptions += "-deprecation"
scalacOptions += "-feature"
