package wotw.orirando.com.backend.rpc.secure

import wotw.orirando.com.backend.rpc.secure.chat.ChatEndpoint
import wotw.orirando.com.backend.services.DomainServices
import wotw.orirando.com.shared.model.auth.UserContext
import wotw.orirando.com.shared.rpc.server.secure.SecureRPC
import wotw.orirando.com.shared.rpc.server.secure.chat.ChatRPC

class SecureEndpoint(implicit domainServices: DomainServices, ctx: UserContext) extends SecureRPC {
  import domainServices._

  lazy val chatEndpoint = new ChatEndpoint

  override def chat(): ChatRPC = chatEndpoint
}
