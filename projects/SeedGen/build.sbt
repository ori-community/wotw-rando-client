name := "SeedGen"

version := "0.1"

scalaVersion := "2.13.1"

libraryDependencies += "org.scala-lang.modules" %% "scala-parser-combinators" % "1.1.2"
libraryDependencies += "com.lihaoyi" %% "fastparse" % "2.2.2" // SBT
libraryDependencies += "org.scala-lang.modules" %% "scala-parallel-collections" % "0.2.0"
scalacOptions += "-deprecation"
scalacOptions += "-feature"
