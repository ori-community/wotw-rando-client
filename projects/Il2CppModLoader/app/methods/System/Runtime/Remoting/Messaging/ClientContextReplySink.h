#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::ClientContextReplySink {
    IL2CPP_REGISTER_METHOD(0x01A9AC30, void, ctor, (app::ClientContextReplySink * this_ptr, app::Context * ctx, app::IMessageSink * reply_sink))
    IL2CPP_REGISTER_METHOD(0x0230E550, app::IMessage *, SyncProcessMessage, (app::ClientContextReplySink * this_ptr, app::IMessage * msg))
    IL2CPP_REGISTER_METHOD(0x0230E650, app::IMessageCtrl *, AsyncProcessMessage, (app::ClientContextReplySink * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink))
    IL2CPP_REGISTER_METHODINFO(0x047672D8, ClientContextReplySink_AsyncProcessMessage__MethodInfo)
}
