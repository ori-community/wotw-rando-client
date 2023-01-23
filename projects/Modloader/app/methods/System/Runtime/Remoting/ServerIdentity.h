#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ServerIdentity.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ILease.h>
#include <Modloader/app/structs/ObjRef.h>
#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/Lease.h>

namespace app::classes::System::Runtime::Remoting::ServerIdentity {
    IL2CPP_REGISTER_METHOD(0x01D836D0, void, ctor, (app::ServerIdentity * this_ptr, app::String* object_uri, app::Context* context, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Type*, get_ObjectType, (app::ServerIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D836E0, void, StartTrackingLifetime, (app::ServerIdentity * this_ptr, app::ILease* lease))
    IL2CPP_REGISTER_METHOD(0x01D839B0, void, OnLifetimeExpired, (app::ServerIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D839C0, app::ObjRef*, CreateObjRef, (app::ServerIdentity * this_ptr, app::Type* requested_type))
    IL2CPP_REGISTER_METHOD(0x01D83DB0, void, AttachServerObject, (app::ServerIdentity * this_ptr, app::MarshalByRefObject* server_object, app::Context* context))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Lease*, get_Lease, (app::ServerIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Context*, get_Context, (app::ServerIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_Context, (app::ServerIdentity * this_ptr, app::Context* value))
    IL2CPP_REGISTER_METHOD(0x01D83E70, void, DisposeServerObject, (app::ServerIdentity * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::ServerIdentity
