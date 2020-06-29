package wotw.orirando.com.backend.services

import wotw.orirando.com.shared.model.auth.{Permission, UserContext, UserToken}
import wotw.orirando.com.shared.rpc.client.MainClientRPC
import wotw.orirando.com.shared.rpc.client.chat.ChatNotificationsRPC
import io.udash.rpc.ClientId
import org.scalamock.scalatest.AsyncMockFactory
import org.scalatest.{AsyncWordSpec, Matchers}

class ChatServiceTest extends AsyncWordSpec with Matchers with AsyncMockFactory {
  "ChatService" should {
    "save non empty messages and return list of collected messages" in {
      val clientMock = mock[RpcClientsService]
      (clientMock.authenticatedClients _).expects().anyNumberOfTimes().returning(Map.empty)
      val service = new ChatService(clientMock)

      for {
        _ <- service.sendMsg("user1", "msg1")
        lm1 <- service.latestMessages()

        _ <- service.sendMsg("user2", "msg2")
        lm2 <- service.latestMessages()

        _ <- service.sendMsg("user2", "")
        lm3 <- service.latestMessages()

        _ <- service.sendMsg("user2", "    \t\n  ")
        lm4 <- service.latestMessages()

        msgs <- service.latestMessages()
      } yield {
        lm1.size should be(1)
        lm2.size should be(2)
        lm3.size should be(2)
        lm4.size should be(2)

        msgs(0).author should be("user1")
        msgs(0).text should be("msg1")
        msgs(1).author should be("user2")
        msgs(1).text should be("msg2")
      }
    }

    "trim messages" in {
      val clientMock = mock[RpcClientsService]
      (clientMock.authenticatedClients _).expects().anyNumberOfTimes().returning(Map.empty)
      val service = new ChatService(clientMock)

      for {
        _ <- service.sendMsg("user1", "  \t msg1\n\n")
        lm1 <- service.latestMessages()

        _ <- service.sendMsg("user2", "\n msg2  ")
        lm2 <- service.latestMessages()

        msgs <- service.latestMessages()
      } yield {
        lm1.size should be(1)
        lm2.size should be(2)

        msgs(0).author should be("user1")
        msgs(0).text should be("msg1")
        msgs(1).author should be("user2")
        msgs(1).text should be("msg2")
      }
    }

    "notify authenticated clients about new messages" in {
      val chatRPC = mock[ChatNotificationsRPC]
      (chatRPC.newMessage _).expects(*).twice()

      val mainRPC = mock[MainClientRPC]
      (mainRPC.chat _: () => ChatNotificationsRPC).expects().anyNumberOfTimes().returning(chatRPC)

      val clientMock = mock[RpcClientsService]
      (clientMock.authenticatedClients _).expects().anyNumberOfTimes().returning(Map(
        ClientId("c1") -> UserContext(UserToken("t1"), "u1", Permission.values.map(_.id).toSet),
        ClientId("c2") -> UserContext(UserToken("t2"), "u2", Set(Permission.ChatRead.id)),
        ClientId("c3") -> UserContext(UserToken("t3"), "u3", Set.empty)
      ))
      (clientMock.sendToClient _).expects(ClientId("c1")).once().returning(mainRPC)
      (clientMock.sendToClient _).expects(ClientId("c2")).once().returning(mainRPC)


      val service = new ChatService(clientMock)
      service.sendMsg("user1", "msg").map { _ should be(()) }
    }
  }
}
