#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ClientContextTerminatorSink * this_ptr, app::Context* ctx))
    IL2CPP_REGISTER_METHOD(0x0230E6A0, app::IMessage*, SyncProcessMessage, (app::ClientContextTerminatorSink * this_ptr, app::IMessage* msg))
    IL2CPP_REGISTER_METHOD(0x0230E8A0, app::IMessageCtrl*, AsyncProcessMessage, (app::ClientContextTerminatorSink * this_ptr, app::IMessage* msg, app::IMessageSink* reply_sink))
} // namespace app::classes::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink
