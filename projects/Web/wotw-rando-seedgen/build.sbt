import org.scalajs.jsenv.selenium.SeleniumJSEnv
import org.openqa.selenium.Capabilities
import org.openqa.selenium.chrome.ChromeOptions

Global / cancelable := true

name := "wotw-rando-seedgen"

// We need to generate slightly different structure for IntelliJ in order to better support ScalaJS cross projects.
// idea.managed property is set by IntelliJ when running SBT (shell or import), idea.runid is set only for IntelliJ's
// SBT shell. In order for this technique to work, you MUST NOT set the "Use the sbt shell for build and import"
// option in IntelliJ's SBT settings.
val forIdeaImport = System.getProperty("idea.managed", "false").toBoolean && System.getProperty("idea.runid") == null

inThisBuild(Seq(
  version := "0.1.0-SNAPSHOT",
  scalaVersion := Dependencies.versionOfScala,
  organization := "wotw.orirando.com",
  scalacOptions ++= Seq(
    "-feature",
    "-deprecation",
    "-unchecked",
    "-language:implicitConversions",
    "-language:existentials",
    "-language:dynamics",
    "-Xfuture",
    "-Xfatal-warnings",
    "-Xlint:_,-missing-interpolator,-adapted-args",
    "-Ybackend-parallelism", "4",
    "-Ycache-plugin-class-loader:last-modified",
    "-Ycache-macro-class-loader:last-modified",
  ),
))

val TestAndCompileDep = "test->test;compile->compile"

// Custom SBT tasks
val copyAssets = taskKey[Unit]("Copies all assets to the target directory.")
val cssDir = settingKey[File]("Target for `compileCss` task.")
val compileCss = taskKey[Unit]("Compiles CSS files.")
val compileStatics = taskKey[File](
  "Compiles JavaScript files and copies all assets to the target directory."
)
val compileAndOptimizeStatics = taskKey[File](
  "Compiles and optimizes JavaScript files and copies all assets to the target directory."
)

// Settings for JS tests run in browser
val browserCapabilities: Capabilities = {
  // requires ChromeDriver: https://sites.google.com/a/chromium.org/chromedriver/
  new ChromeOptions().setHeadless(true).addArguments("--disable-gpu")
}

val noPublishSettings = Seq(
  skip in publish := true,
  Compile / doc := (doc / target).value,
)

// Reusable settings for all modules
val commonSettings = noPublishSettings ++ Seq(
  moduleName := "wotw-rando-seedgen-" + moduleName.value,
  // Use separate directories for IDE and SBT targets
  Compile / ideOutputDirectory := Some(target.value.getParentFile / "out/production"),
  Test / ideOutputDirectory := Some(target.value.getParentFile / "out/test"),
  Test / fork := true,
)

// Reusable settings for modules compiled to JS
val commonJsSettings = commonSettings ++ Seq(
  Compile / emitSourceMaps := true,
  Test / parallelExecution := false,
  Test / fork := false,
  Test / jsEnv := new SeleniumJSEnv(browserCapabilities),
  scalacOptions += "-P:scalajs:sjsDefinedByDefault",
)

def sourceDirsSettings(baseMapper: File => File): Seq[Def.Setting[Seq[File]]] = {
  def mkSourceDirs(base: File, scalaBinary: String, conf: String): Seq[File] = Seq(
    base / "src" / conf / "scala",
    base / "src" / conf / s"scala-$scalaBinary",
  )

  def mkResourceDirs(base: File, conf: String): Seq[File] = Seq(
    base / "src" / conf / "resources"
  )
  Seq(
    Compile / unmanagedSourceDirectories ++=
      mkSourceDirs(baseMapper(baseDirectory.value), scalaBinaryVersion.value, "main"),
    Compile / unmanagedResourceDirectories ++=
      mkResourceDirs(baseMapper(baseDirectory.value), "main"),
    Test / unmanagedSourceDirectories ++=
      mkSourceDirs(baseMapper(baseDirectory.value), scalaBinaryVersion.value, "test"),
    Test / unmanagedResourceDirectories ++=
      mkResourceDirs(baseMapper(baseDirectory.value), "test"),
  )
}

lazy val root = project.in(file("."))
  .aggregate(`shared-js`, `shared`, frontend, backend, packager)
  .settings(
    noPublishSettings,
    Compile / run := (backend / Compile / run).evaluated,
  )

def jvmProject(proj: Project): Project = {
  proj.settings(
    commonSettings,
    sourceDirsSettings(_ / "jvm"),
  )
}

def jsProjectFor(jvmProj: Project, jsProj: Project): Project = {
  jsProj.in(jvmProj.base / "js")
    .enablePlugins(ScalaJSPlugin)
    .configure(p => if (forIdeaImport) p.dependsOn(jvmProj) else p)
    .settings(
      commonJsSettings,

      moduleName := jvmProj.id,
      sourceDirsSettings(_.getParentFile),
      // workaround for some cross-compilation problems in IntelliJ
      libraryDependencies :=
        (if (forIdeaImport) (jvmProj / libraryDependencies).value else Seq.empty) ++ libraryDependencies.value
    )
}

lazy val shared = jvmProject(project).settings(
    libraryDependencies ++= Dependencies.crossDeps.value,
    libraryDependencies ++= Dependencies.crossTestDeps.value
)

lazy val `shared-js` = jsProjectFor(shared, project)
  .settings(
    libraryDependencies ++= Dependencies.crossDeps.value,
    libraryDependencies ++= Dependencies.crossTestDeps.value
  )

val frontendWebContent = "UdashStatics/WebContent"
lazy val frontend = project.in(file("frontend"))
  .enablePlugins(ScalaJSPlugin) // enables Scala.js plugin in this module
  .dependsOn(`shared-js` % TestAndCompileDep)
  .settings(
    commonJsSettings,
    libraryDependencies ++= Dependencies.frontendDeps.value,
    jsDependencies ++= Dependencies.frontendJSDeps.value, // native JS dependencies

    // Make this module executable in JS
    Compile / mainClass := Some("wotw.orirando.com.frontend.JSLauncher"),
    Compile / scalaJSUseMainModuleInitializer := true,
    Test / scalaJSUseMainModuleInitializer := false,

    // Implementation of custom tasks defined above
    copyAssets := {
      IO.copyDirectory(
        sourceDirectory.value / "main/assets",
        target.value / frontendWebContent
      )
    },

    // Compiles CSS files and put them in the target directory
    cssDir := (Compile / fastOptJS / target).value / frontendWebContent / "styles",
    compileCss := Def.taskDyn {
      val dir = (Compile / cssDir).value
      val path = dir.absolutePath
      dir.mkdirs()
      (backend / Compile / runMain).toTask(s" wotw.orirando.com.backend.css.CssRenderer $path false")
    }.value,

    // Compiles JS files without full optimizations
    compileStatics := { (Compile / fastOptJS / target).value / "UdashStatics" },
    compileStatics := compileStatics.dependsOn(
      Compile / fastOptJS, Compile / copyAssets, Compile / compileCss
    ).value,

    // Compiles JS files with full optimizations
    compileAndOptimizeStatics := { (Compile / fullOptJS / target).value / "UdashStatics" },
    compileAndOptimizeStatics := compileAndOptimizeStatics.dependsOn(
      Compile / fullOptJS, Compile / copyAssets, Compile / compileCss
    ).value,

    // Target files for Scala.js plugin
    Compile / fastOptJS / artifactPath :=
      (Compile / fastOptJS / target).value /
        frontendWebContent / "scripts" / "frontend.js",
    Compile / fullOptJS / artifactPath :=
      (Compile / fullOptJS / target).value /
        frontendWebContent / "scripts" / "frontend.js",
    Compile / packageJSDependencies / artifactPath :=
      (Compile / packageJSDependencies / target).value /
        frontendWebContent / "scripts" / "frontend-deps.js",
    Compile / packageMinifiedJSDependencies / artifactPath :=
      (Compile / packageMinifiedJSDependencies / target).value /
        frontendWebContent / "scripts" / "frontend-deps.js",

    // Workaround for source JS dependencies overwriting the minified ones - just use the latter all the time
    skip in (Compile / packageJSDependencies) := true,
    (Compile / fastOptJS) := (Compile / fastOptJS).dependsOn(Compile / packageMinifiedJSDependencies).value
  )

lazy val backend = project.in(file("backend"))
  .dependsOn(shared % TestAndCompileDep)
  .settings(commonSettings)
  .settings(
    libraryDependencies ++= Dependencies.backendDeps.value,
    Compile / mainClass := Some("wotw.orirando.com.backend.Launcher"),
  )

lazy val packager = project
  .in(file("packager"))
  .dependsOn(backend)
  .enablePlugins(JavaServerAppPackaging)
  .settings(commonSettings)
  .settings(
    normalizedName := "wotw-rando-seedgen",
    Compile / mainClass := (backend / Compile / mainClass).value,

    // add frontend statics to the package
    Universal / mappings ++= {
      import Path.relativeTo
      val frontendStatics = (frontend / Compile / compileAndOptimizeStatics).value
      (frontendStatics.allPaths --- frontendStatics) pair relativeTo(frontendStatics.getParentFile)
    },
  )
