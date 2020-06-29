package wotw.orirando.com.backend.services

import wotw.orirando.com.shared.model.auth.UserContext
import wotw.orirando.com.shared.rpc.client.MainClientRPC
import wotw.orirando.com.shared.rpc.client.chat.ChatNotificationsRPC
import io.udash.rpc.{ClientId, ClientRPCTarget}
import org.scalamock.scalatest.MockFactory
import org.scalatest.{Matchers, WordSpec}

class RpcClientsServiceTest extends WordSpec with Matchers with MockFactory {
  "RpcClientsService" should {
    "return active and authenticated clients ids" in {
      val chatNotificationsRpc = mock[ChatNotificationsRPC]
      (chatNotificationsRpc.connectionsCountUpdate _).expects(*).anyNumberOfTimes()

      val clientRpc = mock[MainClientRPC]
      ((clientRpc.chat _): () => ChatNotificationsRPC).expects().anyNumberOfTimes().returning(chatNotificationsRpc)

      val sendToClient = mockFunction[ClientRPCTarget, MainClientRPC]
      sendToClient.expects(*).anyNumberOfTimes().returning(clientRpc)

      val service: RpcClientsService = new RpcClientsService(sendToClient)
      service.activeClients.size should be(0)
      service.authenticatedClients.size should be(0)

      service.registerConnection(ClientId("c1"))
      service.activeClients.size should be(1)
      service.authenticatedClients.size should be(0)

      service.registerAuthenticatedConnection(ClientId("c1"), mock[UserContext])
      service.activeClients.size should be(1)
      service.authenticatedClients.size should be(1)

      service.registerConnection(ClientId("c2"))
      service.activeClients.size should be(2)
      service.authenticatedClients.size should be(1)

      service.unregisterConnection(ClientId("c2"))
      service.activeClients.size should be(1)
      service.authenticatedClients.size should be(1)

      service.unregisterConnection(ClientId("c1"))
      service.activeClients.size should be(0)
      service.authenticatedClients.size should be(0)
    }
  }
}
