#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClientActivatedIdentity.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Remoting::ClientActivatedIdentity {
    IL2CPP_REGISTER_METHOD(0x01A9FF60, void, ctor, (app::ClientActivatedIdentity * this_ptr, app::String* object_uri, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::MarshalByRefObject*, GetServerObject, (app::ClientActivatedIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, SetClientProxy, (app::ClientActivatedIdentity * this_ptr, app::MarshalByRefObject* obj))
    IL2CPP_REGISTER_METHOD(0x01A9FF80, void, OnLifetimeExpired, (app::ClientActivatedIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AA0030, app::IMessage*, SyncObjectProcessMessage, (app::ClientActivatedIdentity * this_ptr, app::IMessage* msg))
    IL2CPP_REGISTER_METHOD(0x01AA0110, app::IMessageCtrl*, AsyncObjectProcessMessage, (app::ClientActivatedIdentity * this_ptr, app::IMessage* msg, app::IMessageSink* reply_sink))
} // namespace app::classes::System::Runtime::Remoting::ClientActivatedIdentity
