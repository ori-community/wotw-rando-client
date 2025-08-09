#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/ServerIdentity.h>
#include <Modloader/app/structs/ServerObjectReplySink.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ServerObjectReplySink {
    IL2CPP_REGISTER_METHOD(0x01A9AC30, void, ctor, app::ServerObjectReplySink* this_ptr, app::ServerIdentity* identity, app::IMessageSink* reply_sink)
    IL2CPP_REGISTER_METHOD(0x0231A250, app::IMessage*, SyncProcessMessage, app::ServerObjectReplySink* this_ptr, app::IMessage* msg)
    IL2CPP_REGISTER_METHOD(
        0x0231A320,
        app::IMessageCtrl*,
        AsyncProcessMessage,
        app::ServerObjectReplySink* this_ptr,
        app::IMessage* msg,
        app::IMessageSink* reply_sink
    )
} // namespace app::classes::System::Runtime::Remoting::Messaging::ServerObjectReplySink
