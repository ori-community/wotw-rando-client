package wotw.orirando.com.frontend.services

import wotw.orirando.com.shared.model.auth.{UserContext, UserToken}
import wotw.orirando.com.shared.model.SharedExceptions
import org.scalamock.scalatest.AsyncMockFactory
import wotw.orirando.com.shared.rpc.server.MainServerRPC
import wotw.orirando.com.shared.rpc.server.open.AuthRPC
import wotw.orirando.com.shared.rpc.server.secure.SecureRPC
import org.scalatest.{AsyncWordSpec, Matchers}

import scala.concurrent.Future

class UserContextServiceTest extends AsyncWordSpec with Matchers with AsyncMockFactory {
  "UserContextService" should {
    "forward login request to the server and keep user context" in {
      val ctx = UserContext(UserToken("t"), "u", Set.empty)

      val authRpcMock = mock[AuthRPC]
      (authRpcMock.login _).expects(ctx.name, "p").once().returning(Future.successful(ctx))

      val rpcMock = mock[MainServerRPC]
      (rpcMock.auth _: () => AuthRPC).expects().anyNumberOfTimes().returning(authRpcMock)

      val service: UserContextService = new UserContextService(rpcMock)

      service.currentContext.isEmpty should be(true)
      intercept[SharedExceptions.UnauthorizedException](service.getCurrentContext)

      for {
        r <- service.login(ctx.name, "p")
      } yield {
        r should be(ctx)
        service.currentContext.get should be(ctx)
        service.getCurrentContext should be(ctx)
      }
    }

    "expose API of secure RPC interface with filled UserToken" in {
      val ctx = UserContext(UserToken("t"), "u", Set.empty)

      val authRpcMock = mock[AuthRPC]
      (authRpcMock.login _).expects(ctx.name, "p").once().returning(Future.successful(ctx))

      val rpcMock = mock[MainServerRPC]
      (rpcMock.auth _: () => AuthRPC).expects().anyNumberOfTimes().returning(authRpcMock)
      (rpcMock.secure _).expects(ctx.token).once().returning(mock[SecureRPC])

      val service: UserContextService = new UserContextService(rpcMock)

      service.secureRpc().isEmpty should be(true)

      for {
        _ <- service.login(ctx.name, "p")
      } yield {
        service.secureRpc() shouldNot be(null)
      }
    }

    "not send login request when user was already authenticated" in {
      val ctx = UserContext(UserToken("t"), "u", Set.empty)

      val authRpcMock = mock[AuthRPC]
      (authRpcMock.login _).expects(ctx.name, "p").once().returning(Future.successful(ctx))

      val rpcMock = mock[MainServerRPC]
      (rpcMock.auth _: () => AuthRPC).expects().anyNumberOfTimes().returning(authRpcMock)
      (rpcMock.secure _).expects(ctx.token).once().returning(mock[SecureRPC])

      val service: UserContextService = new UserContextService(rpcMock)

      service.secureRpc().isEmpty should be(true)

      for {
        _ <- service.login(ctx.name, "p")
        _ <- service.login(ctx.name, "p2")
        _ <- service.login(ctx.name, "p3")
      } yield {
        service.secureRpc() shouldNot be(null)
      }
    }
  }
}
