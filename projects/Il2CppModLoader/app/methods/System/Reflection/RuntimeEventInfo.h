#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Reflection::RuntimeEventInfo {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BindingFlags__Enum, get_BindingFlags, (app::RuntimeEventInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026970A0, app::Module*, get_Module, (app::RuntimeEventInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02697190, app::RuntimeType*, GetDeclaringTypeInternal, (app::RuntimeEventInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02697270, app::RuntimeType*, get_ReflectedTypeInternal, (app::RuntimeEventInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026970A0, app::RuntimeModule*, GetRuntimeModule, (app::RuntimeEventInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02697350, void, GetObjectData, (app::RuntimeEventInfo * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0472F7A0, RuntimeEventInfo_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RuntimeEventInfo * this_ptr))
} // namespace app::classes::System::Reflection::RuntimeEventInfo
