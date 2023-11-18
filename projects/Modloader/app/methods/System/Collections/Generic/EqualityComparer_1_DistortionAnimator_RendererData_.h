#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_DistortionAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_DistortionAnimator_RendererData_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02CC75A0, app::EqualityComparer_1_DistortionAnimator_RendererData_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B49B00, int32_t, IndexOf, (app::EqualityComparer_1_DistortionAnimator_RendererData_ * this_ptr, app::DistortionAnimator_RendererData__Array* array, app::DistortionAnimator_RendererData value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B49BF0, int32_t, LastIndexOf, (app::EqualityComparer_1_DistortionAnimator_RendererData_ * this_ptr, app::DistortionAnimator_RendererData__Array* array, app::DistortionAnimator_RendererData value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B49CE0, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_DistortionAnimator_RendererData_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B49DE0, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_DistortionAnimator_RendererData_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_DistortionAnimator_RendererData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_DistortionAnimator_RendererData_
