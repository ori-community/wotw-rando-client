package wotw.orirando.com.shared.rpc.server

import wotw.orirando.com.shared.model.auth.UserToken
import wotw.orirando.com.shared.rpc.server.open.AuthRPC
import wotw.orirando.com.shared.rpc.server.secure.SecureRPC
import io.udash.i18n._
import io.udash.rpc._

trait MainServerRPC {
  /** Returns an RPC for authentication. */
  def auth(): AuthRPC

  /** Verifies provided UserToken and returns a [[wotw.orirando.com.shared.rpc.server.secure.SecureRPC]] if the token is valid. */
  def secure(token: UserToken): SecureRPC

  /** Returns an RPC serving translations from the server resources. */
  def translations(): RemoteTranslationRPC
}

object MainServerRPC extends DefaultServerRpcCompanion[MainServerRPC]