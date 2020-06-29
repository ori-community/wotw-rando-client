package wotw.orirando.com.backend.services

import java.util.Date

import wotw.orirando.com.shared.model.auth.Permission
import wotw.orirando.com.shared.model.chat.ChatMessage

import scala.collection.mutable
import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.Future

class ChatService(rpcClientsService: RpcClientsService) {
  private val msgs: mutable.ArrayBuffer[ChatMessage] = mutable.ArrayBuffer.empty

  /** Saves new message and notifies all clients with read access. */
  def sendMsg(username: String, text: String): Future[Unit] = Future {
    val trimmed = text.trim
    if (trimmed.nonEmpty) {
      val msg = ChatMessage(trimmed, username, new Date())
      msgs.synchronized(msgs += msg)

      rpcClientsService.authenticatedClients.foreach { case (id, context) =>
        if (context.has(Permission.ChatRead)) {
          rpcClientsService.sendToClient(id).chat().newMessage(msg)
        }
      }
    }
  }

  /** Returns all existing messages. */
  def latestMessages(): Future[Seq[ChatMessage]] = Future {
    msgs.synchronized(msgs.toVector)
  }
}
