package wotw.orirando.com.frontend.views.chat

import wotw.orirando.com.frontend.services.TranslationsService
import wotw.orirando.com.shared.css.ChatStyles
import wotw.orirando.com.shared.i18n.Translations
import io.udash._
import io.udash.bindings.modifiers.Binding
import io.udash.bootstrap.button.UdashButton
import io.udash.bootstrap.card.UdashCard
import io.udash.bootstrap.form.UdashForm.FormEvent
import io.udash.bootstrap.form.{UdashForm, UdashInputGroup}
import io.udash.bootstrap.utils.BootstrapStyles.Color
import io.udash.bootstrap.utils.UdashIcons.FontAwesome
import io.udash.component.ComponentId
import io.udash.css._
import io.udash.i18n._

class ChatView(model: ModelProperty[ChatModel], presenter: ChatPresenter, translationsService: TranslationsService)
  extends FinalView with CssView {

  import translationsService._

  import scalatags.JsDom.all._

  private def messagesWindow(nested: Binding.NestedInterceptor) = div(
    ChatStyles.messagesWindow,
    nested(repeat(model.subSeq(_.msgs)) { msgProperty =>
      val msg = msgProperty.get
      div(
        ChatStyles.msgContainer,
        strong(msg.author, ": "),
        span(msg.text),
        span(ChatStyles.msgDate, msg.created.toString)
      ).render
    })
  )

  // Standard Udash TextInput (we don't need Bootstrap Forms input wrapping)
  private val msgInput = TextInput(model.subProp(_.msgInput))(
    translatedAttrDynamic(Translations.Chat.inputPlaceholder, "placeholder")(_.apply())
  )

  // Button from Udash Bootstrap wrapper
  private val submitButton = UdashButton(
    buttonStyle = Color.Primary.toProperty,
    block = true.toProperty, componentId = ComponentId("send")
  )(_ => Seq(span(FontAwesome.Solid.paperPlane), tpe := "submit"))

  private val msgForm = UdashForm(
    componentId = ComponentId("msg-from"),
  )(factory =>
    factory.disabled(presenter.hasWriteAccess.toProperty.transform(!_))(nested =>
      nested(UdashInputGroup()(
        UdashInputGroup.input(msgInput.render),
        UdashInputGroup.appendButton(submitButton)
      ))
    )
  )

  msgForm.listen {
    case FormEvent(_, FormEvent.EventType.Submit) => presenter.sendMsg()
  }


  override def getTemplate: Modifier = div(
    UdashCard(componentId = ComponentId("chat-panel"))(factory => Seq(
      factory.header(nested => nested(produce(model.subProp(_.connectionsCount)) { count =>
        span(translatedDynamic(Translations.Chat.connections)(_.apply(count))).render
      })),
      factory.body(messagesWindow),
      factory.footer(nested => nested(msgForm))
    )
    )
  )
}
