package wotw.orirando.com.frontend.services.rpc

import java.util.Date

import wotw.orirando.com.shared.model.chat.ChatMessage
import org.scalamock.scalatest.MockFactory
import org.scalatest.{Matchers, WordSpec}

class ChatServiceTest extends WordSpec with Matchers with MockFactory {
  "ChatService and NotificationsCenter" should {
    "notify about new messages" in {
      val notificationsCenter = new NotificationsCenter
      val service: ChatService = new ChatService(notificationsCenter.msgListeners, notificationsCenter.connectionsListeners)

      var counter = 0
      val r1 = notificationsCenter.onNewMsg { case msg => counter += 1 }
      val r2 = notificationsCenter.onNewMsg { case msg => counter += 10 }

      service.newMessage(ChatMessage("text", "u1", new Date()))
      counter should be(11)

      service.newMessage(ChatMessage("text2", "u1", new Date()))
      counter should be(22)

      // it should not mix callbacks
      service.connectionsCountUpdate(5)
      counter should be(22)

      r1.cancel()
      r2.cancel()

      service.newMessage(ChatMessage("text3", "u1", new Date()))
      counter should be(22)
    }

    "notify about connections count change" in {
      val notificationsCenter = new NotificationsCenter
      val service: ChatService = new ChatService(notificationsCenter.msgListeners, notificationsCenter.connectionsListeners)

      var counter = 0
      val r1 = notificationsCenter.onConnectionsCountChange { case count => counter += count }
      val r2 = notificationsCenter.onConnectionsCountChange { case count => counter += count * 1000 }

      service.connectionsCountUpdate(5)
      counter should be(5005)

      // it should not mix callbacks
      service.newMessage(ChatMessage("text2", "u1", new Date()))
      counter should be(5005)

      service.connectionsCountUpdate(2)
      counter should be(7007)

      r1.cancel()
      r2.cancel()

      service.connectionsCountUpdate(11)
      counter should be(7007)
    }
  }
}
