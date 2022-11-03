#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::MonoMethodInfo {
    IL2CPP_REGISTER_METHOD(0x02692400, void, get_method_info, (void* handle, app::MonoMethodInfo* info))
    IL2CPP_REGISTER_METHOD(0x02692410, int32_t, get_method_attributes, (void* handle))
    IL2CPP_REGISTER_METHOD(0x02692420, app::MonoMethodInfo, GetMethodInfo, (void* handle))
    IL2CPP_REGISTER_METHOD(0x02692470, app::Type*, GetDeclaringType, (void* handle))
    IL2CPP_REGISTER_METHOD(0x02692490, app::Type*, GetReturnType, (void* handle))
    IL2CPP_REGISTER_METHOD(0x02692410, app::MethodAttributes__Enum, GetAttributes, (void* handle))
    IL2CPP_REGISTER_METHOD(0x026924B0, app::CallingConventions__Enum, GetCallingConvention, (void* handle))
    IL2CPP_REGISTER_METHOD(0x026924D0, app::MethodImplAttributes__Enum, GetMethodImplementationFlags, (void* handle))
    IL2CPP_REGISTER_METHOD(0x02692500, app::ParameterInfo_1__Array*, get_parameter_info, (void* handle, app::MemberInfo_1* member))
    IL2CPP_REGISTER_METHOD(0x02692500, app::ParameterInfo_1__Array*, GetParametersInfo, (void* handle, app::MemberInfo_1* member))
} // namespace app::classes::System::Reflection::MonoMethodInfo
