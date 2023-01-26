#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClientContextReplySink.h>
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageSink.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ClientContextReplySink {
    IL2CPP_REGISTER_METHOD(0x01A9AC30, void, ctor, (app::ClientContextReplySink * this_ptr, app::Context* ctx, app::IMessageSink* reply_sink))
    IL2CPP_REGISTER_METHOD(0x0230E550, app::IMessage*, SyncProcessMessage, (app::ClientContextReplySink * this_ptr, app::IMessage* msg))
    IL2CPP_REGISTER_METHOD(0x0230E650, app::IMessageCtrl*, AsyncProcessMessage, (app::ClientContextReplySink * this_ptr, app::IMessage* msg, app::IMessageSink* reply_sink))
} // namespace app::classes::System::Runtime::Remoting::Messaging::ClientContextReplySink
