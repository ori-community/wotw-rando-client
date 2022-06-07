#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo_ {
    IL2CPP_REGISTER_METHOD(0x001FF7C0, void, ctor, (app::RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo___Boxed * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04760F20, RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF840, void, Add, (app::RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo___Boxed * this_ptr, app::ConstructorInfo * item))
    IL2CPP_REGISTER_METHODINFO(0x04717588, RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF820, app::ConstructorInfo__Array *, ToArray, (app::RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047251B8, RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Count, (app::RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04749210, RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF830, void, CopyTo, (app::RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo___Boxed * this_ptr, app::Object__Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472D2C0, RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF7E0, app::ConstructorInfo *, get_Item, (app::RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo___Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04747900, RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo__get_Item__MethodInfo)
}
