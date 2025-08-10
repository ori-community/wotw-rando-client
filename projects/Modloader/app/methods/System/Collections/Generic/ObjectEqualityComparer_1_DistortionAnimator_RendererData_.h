#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DistortionAnimator_RendererData.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_DistortionAnimator_RendererData_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_DistortionAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD0C40,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_DistortionAnimator_RendererData_* this_ptr,
        app::DistortionAnimator_RendererData x,
        app::DistortionAnimator_RendererData y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_DistortionAnimator_RendererData_* this_ptr,
        app::DistortionAnimator_RendererData obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0D00,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_DistortionAnimator_RendererData_* this_ptr,
        app::DistortionAnimator_RendererData__Array* array,
        app::DistortionAnimator_RendererData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0E90,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_DistortionAnimator_RendererData_* this_ptr,
        app::DistortionAnimator_RendererData__Array* array,
        app::DistortionAnimator_RendererData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_DistortionAnimator_RendererData_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_DistortionAnimator_RendererData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_DistortionAnimator_RendererData_
