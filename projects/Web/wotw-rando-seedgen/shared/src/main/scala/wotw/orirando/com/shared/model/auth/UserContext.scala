package wotw.orirando.com.shared.model.auth

import com.avsystem.commons.serialization.HasGenCodec
import io.udash.auth.{PermissionId, Permission => UdashPermission, UserCtx => UdashUserCtx}

/** User data container. */
case class UserContext(token: UserToken, name: String, permissions: Set[PermissionId]) extends UdashUserCtx {
  override def has(permission: UdashPermission): Boolean = permissions.contains(permission.id)
  override def isAuthenticated: Boolean = true
}
object UserContext extends HasGenCodec[UserContext]