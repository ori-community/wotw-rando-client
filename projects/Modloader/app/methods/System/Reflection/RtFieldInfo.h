#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::RtFieldInfo {
    IL2CPP_REGISTER_METHOD(0x02690A30, app::Object*, UnsafeGetValue, (app::RtFieldInfo * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x026963E0, void, CheckConsistency, (app::RtFieldInfo * this_ptr, app::Object* target))
    IL2CPP_REGISTER_METHODINFO(0x04736458, RtFieldInfo_CheckConsistency__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026965D0, void, UnsafeSetValue, (app::RtFieldInfo * this_ptr, app::Object* obj, app::Object* value, app::BindingFlags__Enum invoke_attr, app::Binder* binder, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x02696620, void, SetValueDirect, (app::RtFieldInfo * this_ptr, app::TypedReference obj, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04754488, RtFieldInfo_SetValueDirect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RtFieldInfo * this_ptr))
} // namespace app::classes::System::Reflection::RtFieldInfo
