#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Reflection::Emit::MethodBuilder {
    IL2CPP_REGISTER_METHOD(0x02680F90, app::MethodAttributes__Enum, get_Attributes, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047378E8, MethodBuilder_get_Attributes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680FE0, app::Type*, get_DeclaringType, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783EC8, MethodBuilder_get_DeclaringType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02681030, app::String*, get_Name, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797CC0, MethodBuilder_get_Name__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02681080, app::ParameterInfo_1__Array*, GetParameters, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047040D8, MethodBuilder_GetParameters__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026810D0, app::RuntimeMethodHandle, get_MethodHandle, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793920, MethodBuilder_get_MethodHandle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02681100, app::Type*, get_ReflectedType, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770208, MethodBuilder_get_ReflectedType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02681130, app::MethodInfo_1*, GetBaseDefinition, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F8B0, MethodBuilder_GetBaseDefinition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02681160, app::Object__Array*, GetCustomAttributes_1, (app::MethodBuilder * this_ptr, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x0478E120, MethodBuilder_GetCustomAttributes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02681190, app::Object__Array*, GetCustomAttributes_2, (app::MethodBuilder * this_ptr, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04799758, MethodBuilder_GetCustomAttributes_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026811C0, app::MethodImplAttributes__Enum, GetMethodImplementationFlags, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472E7C0, MethodBuilder_GetMethodImplementationFlags__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026811F0, app::Object*, Invoke, (app::MethodBuilder * this_ptr, app::Object* obj, app::BindingFlags__Enum invoke_attr, app::Binder* binder, app::Object__Array* parameters, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHODINFO(0x04750780, MethodBuilder_Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02681220, bool, IsDefined, (app::MethodBuilder * this_ptr, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04731DC0, MethodBuilder_IsDefined__MethodInfo)
} // namespace app::classes::System::Reflection::Emit::MethodBuilder
