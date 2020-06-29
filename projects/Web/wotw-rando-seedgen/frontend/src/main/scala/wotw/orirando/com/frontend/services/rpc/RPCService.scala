package wotw.orirando.com.frontend.services.rpc

import wotw.orirando.com.shared.rpc.client.MainClientRPC
import wotw.orirando.com.shared.rpc.client.chat.ChatNotificationsRPC

class RPCService(notificationsCenter: NotificationsCenter) extends MainClientRPC {
  override val chat: ChatNotificationsRPC =
    new ChatService(notificationsCenter.msgListeners, notificationsCenter.connectionsListeners)
}