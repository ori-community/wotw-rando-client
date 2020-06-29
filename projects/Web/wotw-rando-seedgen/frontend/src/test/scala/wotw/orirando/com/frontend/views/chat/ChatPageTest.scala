package wotw.orirando.com.frontend.views.chat

import java.util.Date

import wotw.orirando.com.frontend.routing.ChatState
import wotw.orirando.com.frontend.services.UserContextService
import wotw.orirando.com.frontend.services.rpc.NotificationsCenter
import wotw.orirando.com.shared.model.auth.{Permission, UserContext, UserToken}
import wotw.orirando.com.shared.model.chat.ChatMessage
import wotw.orirando.com.shared.model.SharedExceptions
import wotw.orirando.com.shared.rpc.server.secure.chat.ChatRPC
import io.udash.properties.model.ModelProperty
import io.udash.utils.Registration
import org.scalamock.scalatest.AsyncMockFactory
import org.scalatest.{AsyncWordSpec, Matchers}

import scala.concurrent.Future

class ChatPageTest extends AsyncWordSpec with Matchers with AsyncMockFactory {
  "ChatPage" should {
    "verify user authentication status" in {
      val notificationsCenter = mock[NotificationsCenter]
      (notificationsCenter.onNewMsg _).expects(*).never()
      (notificationsCenter.onConnectionsCountChange _).expects(*).never()

      val chatRpc = mock[ChatRPC]
      val userService = mock[UserContextService]
      (userService.getCurrentContext _).expects().throwing(new SharedExceptions.UnauthorizedException)

      val model = ModelProperty(ChatModel(Seq.empty, "", 0))
      recoverToSucceededIf[SharedExceptions.UnauthorizedException](
        Future(new ChatPresenter(model, chatRpc, userService, notificationsCenter))
      )
    }

    "load msgs and connections count on init" in {
      val messages = Seq(
        ChatMessage("t1", "u1", new Date),
        ChatMessage("t2", "u1", new Date)
      )
      val connectionsCount = 5
      val ctx = UserContext(UserToken("t1"), "u1", Set(Permission.ChatRead.id))

      val notificationsCenter = mock[NotificationsCenter]
      (notificationsCenter.onNewMsg _).expects(*).once()
      (notificationsCenter.onConnectionsCountChange _).expects(*).once()

      val chatRpc = mock[ChatRPC]
      (chatRpc.latestMessages _: () => Future[Seq[ChatMessage]]).expects().once().returning(Future.successful(messages))
      (chatRpc.connectedClientsCount _: () => Future[Int]).expects().once().returning(Future.successful(connectionsCount))

      val userService = mock[UserContextService]
      (userService.getCurrentContext _).expects().anyNumberOfTimes().returning(ctx)
      (userService.currentContext _).expects().anyNumberOfTimes().returning(Some(ctx))

      val model = ModelProperty(ChatModel(Seq.empty, "", 0))
      val presenter = new ChatPresenter(model, chatRpc, userService, notificationsCenter)

      presenter.handleState(ChatState)

      Future {
        model.subSeq(_.msgs).get should be(messages)
        model.subProp(_.connectionsCount).get should be(connectionsCount)
      }
    }

    "not load msgs on init if user doesn't have read permission" in {
      val connectionsCount = 5
      val ctx = UserContext(UserToken("t1"), "u1", Set.empty)

      val notificationsCenter = mock[NotificationsCenter]
      (notificationsCenter.onNewMsg _).expects(*).once()
      (notificationsCenter.onConnectionsCountChange _).expects(*).once()

      val chatRpc = mock[ChatRPC]
      (chatRpc.connectedClientsCount _: () => Future[Int]).expects().once().returning(Future.successful(connectionsCount))

      val userService = mock[UserContextService]
      (userService.getCurrentContext _).expects().anyNumberOfTimes().returning(ctx)
      (userService.currentContext _).expects().anyNumberOfTimes().returning(Some(ctx))

      val model = ModelProperty(ChatModel(Seq.empty, "", 0))
      val presenter = new ChatPresenter(model, chatRpc, userService, notificationsCenter)

      presenter.handleState(ChatState)

      Future {
        model.subSeq(_.msgs).get.size should be(1) // error message
        model.subProp(_.connectionsCount).get should be(connectionsCount)
      }
    }

    "remove callbacks from NotificationsCenter on close" in {
      class DummyRegistration extends Registration {
        private var active = true
        override def cancel(): Unit = active = false
        override def restart(): Unit = active = true
        override def isActive: Boolean = active
      }

      val notificationsCenter = mock[NotificationsCenter]
      (notificationsCenter.onNewMsg _).expects(*).once().returning(new DummyRegistration)
      (notificationsCenter.onConnectionsCountChange _).expects(*).once().returning(new DummyRegistration)
      val chatRpc = mock[ChatRPC]
      val userService = mock[UserContextService]
      (userService.getCurrentContext _).expects().returning(UserContext(UserToken("t1"), "u1", Set.empty))

      val model = ModelProperty(ChatModel(Seq.empty, "", 0))
      val presenter = new ChatPresenter(model, chatRpc, userService, notificationsCenter)
      presenter.hasActiveNotificationsCenterCallbacks should be(true)

      presenter.onClose()
      presenter.hasActiveNotificationsCenterCallbacks should be(false)
    }

    "send non-empty messages to server and clear input" in {
      val notificationsCenter = mock[NotificationsCenter]
      (notificationsCenter.onNewMsg _).expects(*).once()
      (notificationsCenter.onConnectionsCountChange _).expects(*).once()
      val chatRpc = mock[ChatRPC]
      (chatRpc.sendMsg _).expects("Testtest").once()
      val userService = mock[UserContextService]
      (userService.getCurrentContext _).expects().returning(UserContext(UserToken("t1"), "u1", Set.empty))

      val model = ModelProperty(ChatModel(Seq.empty, "", 0))
      val presenter = new ChatPresenter(model, chatRpc, userService, notificationsCenter)

      model.subProp(_.msgInput).set("   \t\nTesttest   \n\t  \t\t")
      presenter.sendMsg()
      model.subProp(_.msgInput).get should be("")

      model.subProp(_.msgInput).set("   \t\n   \n\t  \t\t")
      presenter.sendMsg()
      model.subProp(_.msgInput).get should be("")
    }
  }
}
