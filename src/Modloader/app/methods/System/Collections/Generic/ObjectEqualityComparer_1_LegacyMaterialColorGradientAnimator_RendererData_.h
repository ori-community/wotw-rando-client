#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData.h>
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_LegacyMaterialColorGradientAnimator_RendererData_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_LegacyMaterialColorGradientAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD0C40,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr,
        app::LegacyMaterialColorGradientAnimator_RendererData x,
        app::LegacyMaterialColorGradientAnimator_RendererData y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr,
        app::LegacyMaterialColorGradientAnimator_RendererData obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0D00,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr,
        app::LegacyMaterialColorGradientAnimator_RendererData__Array* array,
        app::LegacyMaterialColorGradientAnimator_RendererData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0E90,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr,
        app::LegacyMaterialColorGradientAnimator_RendererData__Array* array,
        app::LegacyMaterialColorGradientAnimator_RendererData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CC3E60,
        bool,
        Equals_2,
        app::ObjectEqualityComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_LegacyMaterialColorGradientAnimator_RendererData_
