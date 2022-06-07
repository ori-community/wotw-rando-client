#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink {
    IL2CPP_REGISTER_METHOD(0x023101D0, app::IMessage *, SyncProcessMessage, (app::EnvoyTerminatorSink * this_ptr, app::IMessage * msg))
    IL2CPP_REGISTER_METHOD(0x023102A0, app::IMessageCtrl *, AsyncProcessMessage, (app::EnvoyTerminatorSink * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EnvoyTerminatorSink * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02310380, void, cctor, ())
}
