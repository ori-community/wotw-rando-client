#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::MarshalByRefObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MarshalByRefObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02267EF0, app::ServerIdentity*, get_ObjectIdentity, (app::MarshalByRefObject * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708F98, MarshalByRefObject_get_ObjectIdentity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02267F40, void, set_ObjectIdentity, (app::MarshalByRefObject * this_ptr, app::ServerIdentity* value))
    IL2CPP_REGISTER_METHODINFO(0x04762C40, MarshalByRefObject_set_ObjectIdentity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02267F90, app::ObjRef*, CreateObjRef, (app::MarshalByRefObject * this_ptr, app::Type* requested_type))
    IL2CPP_REGISTER_METHODINFO(0x04734438, MarshalByRefObject_CreateObjRef__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02267FE0, app::Object*, InitializeLifetimeService, (app::MarshalByRefObject * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737550, MarshalByRefObject_InitializeLifetimeService__MethodInfo)
} // namespace app::classes::System::MarshalByRefObject
