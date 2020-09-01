package wotw.server.util

import org.slf4j.LoggerFactory

inline fun <reified T: Any>T.logger() = LoggerFactory.getLogger(T::class.java)