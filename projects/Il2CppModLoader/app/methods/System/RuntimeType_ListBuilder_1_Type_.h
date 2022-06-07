#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::RuntimeType_ListBuilder_1_Type_ {
    IL2CPP_REGISTER_METHOD(0x001FF7C0, void, ctor, (app::RuntimeType_ListBuilder_1_Type___Boxed * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0474F598, RuntimeType_ListBuilder_1_Type___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF840, void, Add, (app::RuntimeType_ListBuilder_1_Type___Boxed * this_ptr, app::Type * item))
    IL2CPP_REGISTER_METHODINFO(0x04735398, RuntimeType_ListBuilder_1_Type__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Count, (app::RuntimeType_ListBuilder_1_Type___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757220, RuntimeType_ListBuilder_1_Type__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF830, void, CopyTo, (app::RuntimeType_ListBuilder_1_Type___Boxed * this_ptr, app::Object__Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047735B0, RuntimeType_ListBuilder_1_Type__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF820, app::Type__Array *, ToArray, (app::RuntimeType_ListBuilder_1_Type___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729F38, RuntimeType_ListBuilder_1_Type__ToArray__MethodInfo)
}
