#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo_ {
    IL2CPP_REGISTER_METHOD(0x001FF7C0, void, ctor, (app::RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo___Boxed * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x047298C8, RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF840, void, Add, (app::RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo___Boxed * this_ptr, app::PropertyInfo_1 * item))
    IL2CPP_REGISTER_METHODINFO(0x0476B720, RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF820, app::PropertyInfo_1__Array *, ToArray, (app::RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473B8F8, RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Count, (app::RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471C7D8, RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF830, void, CopyTo, (app::RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo___Boxed * this_ptr, app::Object__Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047241B8, RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF7E0, app::PropertyInfo_1 *, get_Item, (app::RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo___Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474A9D8, RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo__get_Item__MethodInfo)
}
