#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeType_ListBuilder_1_System_Reflection_FieldInfo___Boxed.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::RuntimeType_ListBuilder_1_System_Reflection_FieldInfo_ {
    IL2CPP_REGISTER_METHOD(0x001FF7C0, void, ctor, (app::RuntimeType_ListBuilder_1_System_Reflection_FieldInfo___Boxed * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x001FF840, void, Add, (app::RuntimeType_ListBuilder_1_System_Reflection_FieldInfo___Boxed * this_ptr, app::FieldInfo_1* item))
    IL2CPP_REGISTER_METHOD(0x001FF820, app::FieldInfo_1__Array*, ToArray, (app::RuntimeType_ListBuilder_1_System_Reflection_FieldInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Count, (app::RuntimeType_ListBuilder_1_System_Reflection_FieldInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FF830, void, CopyTo, (app::RuntimeType_ListBuilder_1_System_Reflection_FieldInfo___Boxed * this_ptr, app::Object__Array* array, int32_t index))
} // namespace app::classes::System::RuntimeType_ListBuilder_1_System_Reflection_FieldInfo_
