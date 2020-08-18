name := "SeedGen"

version := "0.1"

scalaVersion := "2.13.1"

assemblyOutputPath in assembly := file("C:\\moon\\SeedGen.jar")
//assemblyJarName in assembly := "SeedGen.jar"
libraryDependencies += "org.scalafx" %% "scalafx" % "14-R19"
// Determine OS version of JavaFX binaries
lazy val osName = System.getProperty("os.name") match {
  case n if n.startsWith("Linux")   => "linux"
  case n if n.startsWith("Mac")     => "mac"
  case n if n.startsWith("Windows") => "win"
  case _ => throw new Exception("Unknown platform!")
}

// Add dependency on JavaFX libraries, OS dependent
lazy val javaFXModules = Seq("base", "controls", "fxml", "graphics", "media", "swing", "web")
libraryDependencies ++= javaFXModules.map( m =>
  "org.openjfx" % s"javafx-$m" % "14.0.1" classifier osName
)

libraryDependencies += "org.json4s" %% "json4s-native" % "3.6.9"
libraryDependencies += "org.scala-lang.modules" %% "scala-parser-combinators" % "1.1.2"
libraryDependencies += "com.lihaoyi" %% "fastparse" % "2.2.2" // SBT
libraryDependencies += "org.scala-lang.modules" %% "scala-parallel-collections" % "0.2.0"
libraryDependencies += "org.scala-lang.modules" %% "scala-swing" % "2.1.1"

scalacOptions += "-deprecation"
scalacOptions += "-feature"
