package wotw.orirando.com.frontend.services.rpc

import wotw.orirando.com.shared.model.chat.ChatMessage
import io.udash.utils.{CallbacksHandler, Registration}

/** Provides notifications about new messages and connections status. */
class NotificationsCenter {
  private[rpc] val msgListeners: CallbacksHandler[ChatMessage] = new CallbacksHandler[ChatMessage]
  private[rpc] val connectionsListeners: CallbacksHandler[Int] = new CallbacksHandler[Int]

  def onNewMsg(callback: msgListeners.CallbackType): Registration =
    msgListeners.register(callback)

  def onConnectionsCountChange(callback: connectionsListeners.CallbackType): Registration =
    connectionsListeners.register(callback)
}
