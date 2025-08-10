#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/ServerObjectTerminatorSink.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::ServerObjectTerminatorSink* this_ptr, app::IMessageSink* next_sink)
    IL2CPP_REGISTER_METHOD(0x0231A370, app::IMessage*, SyncProcessMessage, app::ServerObjectTerminatorSink* this_ptr, app::IMessage* msg)
    IL2CPP_REGISTER_METHOD(
        0x0231A4E0,
        app::IMessageCtrl*,
        AsyncProcessMessage,
        app::ServerObjectTerminatorSink* this_ptr,
        app::IMessage* msg,
        app::IMessageSink* reply_sink
    )
} // namespace app::classes::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink
