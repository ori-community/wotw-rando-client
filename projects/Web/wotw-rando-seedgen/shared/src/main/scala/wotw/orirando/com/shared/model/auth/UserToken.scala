package wotw.orirando.com.shared.model.auth

import com.avsystem.commons.serialization.{HasGenCodec, transparent}

/** User identification token. Passed with the RPC requests. */
@transparent
case class UserToken(token: String) extends AnyVal
object UserToken extends HasGenCodec[UserToken]
