#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::RuntimeType_ListBuilder_1_Object_ {
    IL2CPP_REGISTER_METHOD(0x001FF7E0, app::Object*, get_Item, (app::RuntimeType_ListBuilder_1_Object___Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Count, (app::RuntimeType_ListBuilder_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FF7C0, void, ctor, (app::RuntimeType_ListBuilder_1_Object___Boxed * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x001FF820, app::Object__Array*, ToArray, (app::RuntimeType_ListBuilder_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FF830, void, CopyTo, (app::RuntimeType_ListBuilder_1_Object___Boxed * this_ptr, app::Object__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x001FF840, void, Add, (app::RuntimeType_ListBuilder_1_Object___Boxed * this_ptr, app::Object* item))
} // namespace app::classes::System::RuntimeType_ListBuilder_1_Object_
