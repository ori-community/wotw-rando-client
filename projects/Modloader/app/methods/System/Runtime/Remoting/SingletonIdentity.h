#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SingletonIdentity.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageSink.h>

namespace app::classes::System::Runtime::Remoting::SingletonIdentity {
    IL2CPP_REGISTER_METHOD(0x01D836D0, void, ctor, (app::SingletonIdentity * this_ptr, app::String* object_uri, app::Context* context, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x01D84E80, app::MarshalByRefObject*, GetServerObject, (app::SingletonIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D85000, app::IMessage*, SyncObjectProcessMessage, (app::SingletonIdentity * this_ptr, app::IMessage* msg))
    IL2CPP_REGISTER_METHOD(0x01D850E0, app::IMessageCtrl*, AsyncObjectProcessMessage, (app::SingletonIdentity * this_ptr, app::IMessage* msg, app::IMessageSink* reply_sink))
} // namespace app::classes::System::Runtime::Remoting::SingletonIdentity
