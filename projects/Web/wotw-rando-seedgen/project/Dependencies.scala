import org.scalajs.sbtplugin.ScalaJSPlugin.autoImport._
import org.portablescala.sbtplatformdeps.PlatformDepsPlugin.autoImport._
import sbt._

object Dependencies {
  val versionOfScala = "2.12.10"

  // Udash
  val udashVersion = "0.8.1"
  val udashJQueryVersion = "3.0.1"

  // Backend
  val jettyVersion = "9.4.20.v20190813"
  val logbackVersion = "1.2.3"
  val typesafeConfigVersion = "1.4.0"

  // JS dependencies
  val bootstrapVersion = "4.1.3"
  val highchartsVersion = "5.0.14"

  // Testing
  val scalatestVersion = "3.0.8"
  val scalamockVersion = "4.1.0"

  // Dependencies for both frontend and backend
  // Those have to be cross-compilable
  val crossDeps = Def.setting(Seq(
    "io.udash" %%% "udash-core" % udashVersion,
    "io.udash" %%% "udash-rpc" % udashVersion,
    "io.udash" %%% "udash-rest" % udashVersion,
    "io.udash" %%% "udash-i18n" % udashVersion,
    "io.udash" %%% "udash-css" % udashVersion,
    "io.udash" %%% "udash-auth" % udashVersion,
  ))

  // Dependencies compiled to JavaScript code
  val frontendDeps = Def.setting(Seq(
    "io.udash" %%% "udash-core" % udashVersion,
    "io.udash" %%% "udash-rpc" % udashVersion,
    "io.udash" %%% "udash-i18n" % udashVersion,
    "io.udash" %%% "udash-css" % udashVersion,
    "io.udash" %%% "udash-auth" % udashVersion,

    // type-safe wrapper for Twitter Bootstrap
    "io.udash" %%% "udash-bootstrap4" % udashVersion,
    // type-safe wrapper for Highcharts
    "io.udash" %%% "udash-charts" % udashVersion,
    // type-safe wrapper for jQuery
    "io.udash" %%% "udash-jquery" % udashJQueryVersion,
  ))

  // JavaScript libraries dependencies
  // Those will be added into frontend-deps.js
  val frontendJSDeps = Def.setting(Seq(
    // "jquery.js" is provided by "udash-jquery" dependency
    "org.webjars" % "bootstrap" % bootstrapVersion / "js/bootstrap.bundle.js"
      minified "js/bootstrap.bundle.min.js" dependsOn "jquery.js",

    // Highcharts JS files
    "org.webjars" % "highcharts" % highchartsVersion /
      s"$highchartsVersion/highcharts.src.js" minified s"$highchartsVersion/highcharts.js" dependsOn "jquery.js",
    "org.webjars" % "highcharts" % highchartsVersion /
      s"$highchartsVersion/highcharts-3d.src.js" minified s"$highchartsVersion/highcharts-3d.js" dependsOn s"$highchartsVersion/highcharts.src.js",
    "org.webjars" % "highcharts" % highchartsVersion /
      s"$highchartsVersion/highcharts-more.src.js" minified s"$highchartsVersion/highcharts-more.js" dependsOn s"$highchartsVersion/highcharts.src.js",
    "org.webjars" % "highcharts" % highchartsVersion /
      s"$highchartsVersion/modules/exporting.src.js" minified s"$highchartsVersion/modules/exporting.js" dependsOn s"$highchartsVersion/highcharts.src.js",
    "org.webjars" % "highcharts" % highchartsVersion /
      s"$highchartsVersion/modules/drilldown.src.js" minified s"$highchartsVersion/modules/drilldown.js" dependsOn s"$highchartsVersion/highcharts.src.js",
    "org.webjars" % "highcharts" % highchartsVersion /
      s"$highchartsVersion/modules/heatmap.src.js" minified s"$highchartsVersion/modules/heatmap.js" dependsOn s"$highchartsVersion/highcharts.src.js",


  ))

  // Dependencies for JVM part of code
  val backendDeps = Def.setting(Seq(
    "io.udash" %% "udash-rpc" % udashVersion,
    "io.udash" %% "udash-rest" % udashVersion,
    "io.udash" %% "udash-i18n" % udashVersion,
    "io.udash" %% "udash-css" % udashVersion,

    "org.eclipse.jetty" % "jetty-server" % jettyVersion,
    "org.eclipse.jetty" % "jetty-rewrite" % jettyVersion,
    "org.eclipse.jetty.websocket" % "websocket-server" % jettyVersion,

    "com.typesafe" % "config" % typesafeConfigVersion,

    // server logging backend
    "ch.qos.logback" % "logback-classic" % logbackVersion,
  ))

  // Test dependencies
  val crossTestDeps = Def.setting(Seq(
    "org.scalatest" %%% "scalatest" % scalatestVersion,
    "org.scalamock" %%% "scalamock" % scalamockVersion
  ).map(_ % Test))
}
