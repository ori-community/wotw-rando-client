#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_UberShaderCurveBake_GradientData_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberShaderCurveBake_GradientData.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_UberShaderCurveBake_GradientData_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_UberShaderCurveBake_GradientData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_String_UberShaderCurveBake_GradientData_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(
        0x02E0FDF0,
        app::UberShaderCurveBake_GradientData,
        get_Item,
        app::Dictionary_2_System_String_UberShaderCurveBake_GradientData_* this_ptr,
        app::String* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA8780,
        void,
        set_Item,
        app::Dictionary_2_System_String_UberShaderCurveBake_GradientData_* this_ptr,
        app::String* key,
        app::UberShaderCurveBake_GradientData value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA87E0,
        void,
        Add,
        app::Dictionary_2_System_String_UberShaderCurveBake_GradientData_* this_ptr,
        app::String* key,
        app::UberShaderCurveBake_GradientData value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_UberShaderCurveBake_GradientData_
