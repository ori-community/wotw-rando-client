#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/LeaseSink.h>

namespace app::classes::System::Runtime::Remoting::Lifetime::LeaseSink {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::LeaseSink* this_ptr, app::IMessageSink* next_sink)
    IL2CPP_REGISTER_METHOD(0x02308A50, app::IMessage*, SyncProcessMessage, app::LeaseSink* this_ptr, app::IMessage* msg)
    IL2CPP_REGISTER_METHOD(0x02308B00, app::IMessageCtrl*, AsyncProcessMessage, app::LeaseSink* this_ptr, app::IMessage* msg, app::IMessageSink* reply_sink)
    IL2CPP_REGISTER_METHOD(0x02308BC0, void, RenewLease, app::LeaseSink* this_ptr, app::IMessage* msg)
} // namespace app::classes::System::Runtime::Remoting::Lifetime::LeaseSink
