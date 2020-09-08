package wotw.build.main

import io.ktor.network.tls.certificates.generateCertificate
import java.io.File

//For local testing purposes
class CertificateGenerator {
    companion object {
        @JvmStatic
        fun main(args: Array<String>) {
            val jkspw = System.getenv("JKSPW") ?: throw Exception("JKSPW not set!")
            val keypw = System.getenv("KEYPW") ?: throw Exception("KEYPW not set!")

            val jksFile = File("/etc/letsencrypt/live/wotw.orirando.com/keystore.jks").apply {
                parentFile.mkdirs()
            }
            if (!jksFile.exists()) {
                generateCertificate(jksFile, keyAlias = "wotwrcert", jksPassword = jkspw, keyPassword = keypw)
            }
        }
    }
}
