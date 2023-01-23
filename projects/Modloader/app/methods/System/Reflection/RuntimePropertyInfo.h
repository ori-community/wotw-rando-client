#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/RuntimePropertyInfo.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/RuntimeModule.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Reflection::RuntimePropertyInfo {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BindingFlags__Enum, get_BindingFlags, (app::RuntimePropertyInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026981A0, app::Module*, get_Module, (app::RuntimePropertyInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02698290, app::RuntimeType*, GetDeclaringTypeInternal, (app::RuntimePropertyInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02698370, app::RuntimeType*, get_ReflectedTypeInternal, (app::RuntimePropertyInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026981A0, app::RuntimeModule*, GetRuntimeModule, (app::RuntimePropertyInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02698450, app::String*, ToString, (app::RuntimePropertyInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02698460, app::String*, FormatNameAndSig, (app::RuntimePropertyInfo * this_ptr, bool serialization))
    IL2CPP_REGISTER_METHOD(0x026986D0, void, GetObjectData, (app::RuntimePropertyInfo * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04757410, RuntimePropertyInfo_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026988D0, app::String*, SerializationToString, (app::RuntimePropertyInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RuntimePropertyInfo * this_ptr))
} // namespace app::classes::System::Reflection::RuntimePropertyInfo
