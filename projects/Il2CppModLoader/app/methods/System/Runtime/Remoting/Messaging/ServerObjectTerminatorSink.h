#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ServerObjectTerminatorSink * this_ptr, app::IMessageSink * next_sink))
    IL2CPP_REGISTER_METHOD(0x0231A370, app::IMessage *, SyncProcessMessage, (app::ServerObjectTerminatorSink * this_ptr, app::IMessage * msg))
    IL2CPP_REGISTER_METHOD(0x0231A4E0, app::IMessageCtrl *, AsyncProcessMessage, (app::ServerObjectTerminatorSink * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink))
}
