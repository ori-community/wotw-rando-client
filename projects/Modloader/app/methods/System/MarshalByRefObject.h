#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/ObjRef.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ServerIdentity.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::MarshalByRefObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MarshalByRefObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02267EF0, app::ServerIdentity*, get_ObjectIdentity, app::MarshalByRefObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02267F40, void, set_ObjectIdentity, app::MarshalByRefObject* this_ptr, app::ServerIdentity* value)
    IL2CPP_REGISTER_METHOD(0x02267F90, app::ObjRef*, CreateObjRef, app::MarshalByRefObject* this_ptr, app::Type* requested_type)
    IL2CPP_REGISTER_METHOD(0x02267FE0, app::Object*, InitializeLifetimeService, app::MarshalByRefObject* this_ptr)
} // namespace app::classes::System::MarshalByRefObject
