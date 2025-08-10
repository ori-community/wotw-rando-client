#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/ServerContextTerminatorSink.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ServerContextTerminatorSink {
    IL2CPP_REGISTER_METHOD(0x02319F80, app::IMessage*, SyncProcessMessage, app::ServerContextTerminatorSink* this_ptr, app::IMessage* msg)
    IL2CPP_REGISTER_METHOD(
        0x0231A100,
        app::IMessageCtrl*,
        AsyncProcessMessage,
        app::ServerContextTerminatorSink* this_ptr,
        app::IMessage* msg,
        app::IMessageSink* reply_sink
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ServerContextTerminatorSink* this_ptr)
} // namespace app::classes::System::Runtime::Remoting::Messaging::ServerContextTerminatorSink
