#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Object_UberShaderCurveBake_GradientData___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberShaderCurveBake_GradientData.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_UberShaderCurveBake_GradientData_ {
    IL2CPP_REGISTER_METHOD(
        0x0014FCA0,
        void,
        ctor,
        app::KeyValuePair_2_System_Object_UberShaderCurveBake_GradientData___Boxed* this_ptr,
        app::Object* key,
        app::UberShaderCurveBake_GradientData value
    )
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_Key, app::KeyValuePair_2_System_Object_UberShaderCurveBake_GradientData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0014FCD0,
        app::UberShaderCurveBake_GradientData,
        get_Value,
        app::KeyValuePair_2_System_Object_UberShaderCurveBake_GradientData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00151620, app::String*, ToString, app::KeyValuePair_2_System_Object_UberShaderCurveBake_GradientData___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_UberShaderCurveBake_GradientData_
