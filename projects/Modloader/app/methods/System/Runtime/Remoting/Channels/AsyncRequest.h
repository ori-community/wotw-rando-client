#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Channels::AsyncRequest {
    IL2CPP_REGISTER_METHOD(0x01A9AC30, void, ctor, (app::AsyncRequest * this_ptr, app::IMessage* msg_request, app::IMessageSink* reply_sink))
}
