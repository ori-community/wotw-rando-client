package wotw.orirando.com.shared.model.auth

import com.avsystem.commons.misc.{EnumCtx, ValueEnum, ValueEnumCompanion}
import io.udash.auth.{PermissionId, Permission => UdashPermission}

/** Class representing a user permission.
  *
  * It extends `io.udash.auth.Permission`, so you can use it with auth utilities from Udash.
  *
  * It also extends `ValueEnum` which is an alternative way of implementing
  * enums as compared to traditional Scala approach of using a sealed hierarchy
  * with objects representing enum values. This implementation generates much smaller JS size and provides additional
  * enum features known from Java.
  */
sealed class Permission private(val id: PermissionId)(implicit val enumCtx: EnumCtx)
  extends UdashPermission with ValueEnum

object Permission extends ValueEnumCompanion[Permission] {
  final val ChatRead: Value = new Permission(PermissionId("chat.read"))
  final val ChatWrite: Value = new Permission(PermissionId("chat.write"))
}
