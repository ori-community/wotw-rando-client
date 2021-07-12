buildscript {
    repositories {
        jcenter()
        mavenCentral()
    }
}

val kotlin_version = "1.5.10"
val ktor_version = "1.6.0"
val logback_version = "1.2.3"
val exposed_version = "0.31.1"
val kotlinx_html_version = "0.7.1"
val serialization_version = "1.2.1"

plugins {
    id("org.jetbrains.kotlin.multiplatform") version "1.5.10"
    kotlin("plugin.serialization") version "1.5.10"
}

repositories {
    jcenter()
    maven("https://dl.bintray.com/kotlin/ktor")
    maven(url = "https://dl.bintray.com/kordlib/Kord")
    mavenCentral()
}

kotlin {
    jvm()
    js() {
        browser {
            dceTask {
                dceOptions {
                    keep("ktor-ktor-io.\$\$importsForInline\$\$.ktor-ktor-io.io.ktor.utils.io")
                }
            }
        }
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(kotlin("stdlib-common"))
                implementation("io.ktor:ktor-client-core:$ktor_version")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:$serialization_version")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:$serialization_version")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-protobuf:$serialization_version")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }

        val jvmMain by getting {
            dependencies {
                implementation(kotlin("stdlib-jdk8"))
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:$serialization_version")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:$serialization_version")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-protobuf:$serialization_version")

                implementation("io.github.classgraph:classgraph:4.8.87")

                implementation("io.ktor:ktor-server-netty:$ktor_version")
                implementation("io.ktor:ktor-websockets:$ktor_version")
                implementation("io.ktor:ktor-html-builder:$ktor_version")
                implementation("io.ktor:ktor-serialization:$ktor_version")
                implementation("io.ktor:ktor-network-tls-certificates:$ktor_version")
                implementation("io.ktor:ktor-auth:$ktor_version")
                implementation("io.ktor:ktor-server-sessions:$ktor_version")

                implementation("ch.qos.logback:logback-classic:$logback_version")

                implementation("org.jetbrains.exposed:exposed-core:$exposed_version")
                implementation("org.jetbrains.exposed:exposed-dao:$exposed_version")
                implementation("org.jetbrains.exposed:exposed-jdbc:$exposed_version")
                implementation("com.zaxxer:HikariCP:3.4.5")

                implementation("org.postgresql:postgresql:42.2.14")

                implementation("dev.kord:kord-core:0.7.0-RC3")
            }
        }
        val jvmTest by getting {
            dependencies {
                implementation(kotlin("test"))
                implementation(kotlin("test-junit"))
            }
        }
        val jsMain by getting {
            dependencies {
                implementation(kotlin("stdlib-js"))
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core-js:$serialization_version")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json-js:$serialization_version")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-protobuf-js:$serialization_version")

                implementation("org.jetbrains.kotlinx:kotlinx-html-js:${kotlinx_html_version}")

                implementation("io.ktor:ktor-client-js:$ktor_version")
                implementation("io.ktor:ktor-client-serialization-js:$ktor_version")

                implementation("org.jetbrains.kotlin-wrappers:kotlin-react:17.0.2-pre.206-kotlin-$kotlin_version")
                implementation("org.jetbrains.kotlin-wrappers:kotlin-react-dom:17.0.2-pre.206-kotlin-$kotlin_version")
                implementation("org.jetbrains.kotlin-wrappers:kotlin-styled:5.3.0-pre.206-kotlin-$kotlin_version")
                implementation("org.jetbrains.kotlin-wrappers:kotlin-extensions:1.0.1-pre.206-kotlin-$kotlin_version")
                implementation("org.jetbrains.kotlin-wrappers:kotlin-css-js:1.0.0-pre.206-kotlin-$kotlin_version")
                implementation("org.jetbrains.kotlin-wrappers:kotlin-react-router-dom:5.2.0-pre.206-kotlin-$kotlin_version")
                implementation(npm("styled-components", "5.1.0"))
                implementation(npm("inline-style-prefixer", "6.0.0"))
                implementation(npm("react", "16.13.1"))
                implementation(npm("react-dom", "16.13.1"))
                implementation(npm("react-is", "16.13.1"))
                implementation(npm("react-router-dom", "5.1.2"))
                implementation(npm("react-select", "4.3.1"))
                implementation(npm("file-saver", "2.0.5"))
                implementation(npm("react-modal", "3.14.3"))

            }
        }
        val jsTest by getting {
            dependencies {
                implementation(kotlin("test-js"))
            }
        }
    }
}

tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile>().configureEach {
    kotlinOptions.jvmTarget = "1.8"
}
tasks.withType<org.jetbrains.kotlin.gradle.tasks.Kotlin2JsCompile>().configureEach {}

val jvmJar = tasks.named<Jar>("jvmJar") {
    //includes webpack
    val taskName = "jsBrowserProductionWebpack"//if (project.hasProperty("isProduction")) "jsBrowserProductionWebpack"  else "jsBrowserDevelopmentWebpack"
    val jsWebpack = tasks.getByName<org.jetbrains.kotlin.gradle.targets.js.webpack.KotlinWebpack>(taskName)

    dependsOn(jsWebpack)
    from(jsWebpack.entry, jsWebpack.destinationDirectory)
}

//Generates self-signed test certificate
val generateJks = tasks.create<JavaExec>("generateJks") {
    group = "application"
    main = "wotw.build.main.CertificateGenerator"
    classpath(configurations["jvmRuntimeClasspath"], jvmJar)
}

tasks.create<JavaExec>("run") {
    group = "application"
    main = "wotw.server.main.WotwBackendServer"
    classpath(configurations["jvmRuntimeClasspath"], jvmJar)
}