#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DisposerReplySink.h>
#include <Modloader/app/structs/IDisposable.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageSink.h>

namespace app::classes::System::Runtime::Remoting::DisposerReplySink {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::DisposerReplySink * this_ptr, app::IMessageSink* next, app::IDisposable* disposable))
    IL2CPP_REGISTER_METHOD(0x02306340, app::IMessage*, SyncProcessMessage, (app::DisposerReplySink * this_ptr, app::IMessage* msg))
    IL2CPP_REGISTER_METHOD(0x02306400, app::IMessageCtrl*, AsyncProcessMessage, (app::DisposerReplySink * this_ptr, app::IMessage* msg, app::IMessageSink* reply_sink))
} // namespace app::classes::System::Runtime::Remoting::DisposerReplySink
