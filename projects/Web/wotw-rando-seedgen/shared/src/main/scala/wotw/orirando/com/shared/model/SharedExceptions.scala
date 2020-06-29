package wotw.orirando.com.shared.model

import com.avsystem.commons.serialization.HasGenCodec
import io.udash.rpc.serialization.DefaultExceptionCodecRegistry

/**
  * Exception registry providing codecs for custom exceptions.
  * It enables the RPC to transport exceptions from the server to the client as a request result.
  */
class SharedExceptions extends DefaultExceptionCodecRegistry {
  import wotw.orirando.com.shared.model.SharedExceptions._

  register(UnauthorizedException.codec)
  register(UserNotFound.codec)
}

object SharedExceptions {
  case class UnauthorizedException() extends RuntimeException("Provided token is invalid.")
  object UnauthorizedException extends HasGenCodec[UnauthorizedException]

  case class UserNotFound() extends RuntimeException("Provided username or password is invalid.")
  object UserNotFound extends HasGenCodec[UserNotFound]
}