#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ReflectionOnlyType {
    IL2CPP_REGISTER_METHOD(0x02698FB0, void, ctor, (app::ReflectionOnlyType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02699050, app::RuntimeTypeHandle, get_TypeHandle, (app::ReflectionOnlyType * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A4B0, ReflectionOnlyType_get_TypeHandle__MethodInfo)
} // namespace app::classes::System::ReflectionOnlyType
