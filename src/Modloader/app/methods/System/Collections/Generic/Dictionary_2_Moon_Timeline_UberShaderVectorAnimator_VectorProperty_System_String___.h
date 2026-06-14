#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String_.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UberShaderVectorAnimator_VectorProperty__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___ {
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String_* this_ptr,
        app::UberShaderVectorAnimator_VectorProperty__Enum key
    )
    IL2CPP_REGISTER_METHOD(
        0x02C35530,
        app::String__Array*,
        get_Item,
        app::Dictionary_2_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String_* this_ptr,
        app::UberShaderVectorAnimator_VectorProperty__Enum key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String_* this_ptr,
        app::UberShaderVectorAnimator_VectorProperty__Enum key,
        app::String__Array* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___
