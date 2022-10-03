#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Contexts::CrossContextChannel {
    IL2CPP_REGISTER_METHOD(0x023048D0, app::IMessage*, SyncProcessMessage, (app::CrossContextChannel * this_ptr, app::IMessage* msg))
    IL2CPP_REGISTER_METHOD(0x02304CE0, app::IMessageCtrl*, AsyncProcessMessage, (app::CrossContextChannel * this_ptr, app::IMessage* msg, app::IMessageSink* reply_sink))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CrossContextChannel * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Contexts::CrossContextChannel
