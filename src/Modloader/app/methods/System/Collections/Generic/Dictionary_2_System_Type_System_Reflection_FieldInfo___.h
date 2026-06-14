#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_Reflection_FieldInfo___ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_System_Reflection_FieldInfo_* this_ptr,
        app::Type* key,
        app::FieldInfo_1__Array** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Type_System_Reflection_FieldInfo_* this_ptr,
        app::Type* key,
        app::FieldInfo_1__Array* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_System_Reflection_FieldInfo_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_Reflection_FieldInfo___
