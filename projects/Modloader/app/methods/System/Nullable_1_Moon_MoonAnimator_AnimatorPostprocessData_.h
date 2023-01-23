#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___Boxed.h>
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData_ {
    IL2CPP_REGISTER_METHOD(0x0011E7F0, void, ctor, (app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___Boxed * this_ptr, app::MoonAnimator_AnimatorPostprocessData value))
    IL2CPP_REGISTER_METHODINFO(0x04764F60, Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F52B0, bool, get_HasValue, (app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756BA0, Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F52C0, app::MoonAnimator_AnimatorPostprocessData, get_Value, (app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470CF80, Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F53E0, bool, Equals_1, (app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F5460, bool, Equals_2, (app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___Boxed * this_ptr, app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData_ other))
    IL2CPP_REGISTER_METHOD(0x001F5510, int32_t, GetHashCode, (app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F55F0, app::MoonAnimator_AnimatorPostprocessData, GetValueOrDefault_1, (app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F5610, app::MoonAnimator_AnimatorPostprocessData, GetValueOrDefault_2, (app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___Boxed * this_ptr, app::MoonAnimator_AnimatorPostprocessData default_value))
    IL2CPP_REGISTER_METHOD(0x001F5660, app::String*, ToString, (app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254EF70, app::Object*, Box, (app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData_ o))
    IL2CPP_REGISTER_METHOD(0x0254F010, app::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_Moon_MoonAnimator_AnimatorPostprocessData_
