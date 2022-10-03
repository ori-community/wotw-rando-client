#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::CrossContextChannel_ContextRestoreSink * this_ptr, app::IMessageSink* next, app::Context* context, app::IMessage* call))
    IL2CPP_REGISTER_METHOD(0x02305200, app::IMessage*, SyncProcessMessage, (app::CrossContextChannel_ContextRestoreSink * this_ptr, app::IMessage* msg))
    IL2CPP_REGISTER_METHOD(0x02305500, app::IMessageCtrl*, AsyncProcessMessage, (app::CrossContextChannel_ContextRestoreSink * this_ptr, app::IMessage* msg, app::IMessageSink* reply_sink))
    IL2CPP_REGISTER_METHODINFO(0x0470FD90, CrossContextChannel_ContextRestoreSink_AsyncProcessMessage__MethodInfo)
} // namespace app::classes::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink
