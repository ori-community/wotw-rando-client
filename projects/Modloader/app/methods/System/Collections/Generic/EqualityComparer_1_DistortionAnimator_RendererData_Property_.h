#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualityComparer_1_DistortionAnimator_RendererData_Property_.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property__Array.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_DistortionAnimator_RendererData_Property_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_DistortionAnimator_RendererData_Property_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02CC6C40, app::EqualityComparer_1_DistortionAnimator_RendererData_Property_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B5C960, int32_t, IndexOf, (app::EqualityComparer_1_DistortionAnimator_RendererData_Property_ * this_ptr, app::DistortionAnimator_RendererData_Property__Array* array, app::DistortionAnimator_RendererData_Property value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B5CA40, int32_t, LastIndexOf, (app::EqualityComparer_1_DistortionAnimator_RendererData_Property_ * this_ptr, app::DistortionAnimator_RendererData_Property__Array* array, app::DistortionAnimator_RendererData_Property value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B5CB20, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_DistortionAnimator_RendererData_Property_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B5CC20, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_DistortionAnimator_RendererData_Property_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_DistortionAnimator_RendererData_Property_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_DistortionAnimator_RendererData_Property_
