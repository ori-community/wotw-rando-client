package wotw.orirando.com.shared.model.chat

import java.util.Date

import com.avsystem.commons.serialization.HasGenCodec

/** Model of the message display in the GUI chat window. */
case class ChatMessage(text: String, author: String, created: Date)
object ChatMessage extends HasGenCodec[ChatMessage]
