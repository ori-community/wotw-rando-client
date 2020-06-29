package wotw.orirando.com.shared.model.auth

import io.udash.auth.PermissionId
import io.udash.auth.{Permission => UdashPermission}
import org.scalatest.{Matchers, WordSpec}

class UserContextTest extends WordSpec with Matchers {
  "UserContext" should {
    "verify user's permissions" in {
      class TestPerm(override val id: PermissionId) extends UdashPermission

      val ctx = UserContext(
        UserToken("token"), "name",
        Set(PermissionId("p1"), PermissionId("p2"))
      )

      ctx.has(new TestPerm(PermissionId("p1"))) should be(true)
      ctx.has(new TestPerm(PermissionId("p2"))) should be(true)
      ctx.has(new TestPerm(PermissionId("p3"))) should be(false)
    }
  }
}
