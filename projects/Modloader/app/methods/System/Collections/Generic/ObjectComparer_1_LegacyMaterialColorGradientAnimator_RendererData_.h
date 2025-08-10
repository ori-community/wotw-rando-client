#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectComparer_1_LegacyMaterialColorGradientAnimator_RendererData_.h>

namespace app::classes::System::Collections::Generic::ObjectComparer_1_LegacyMaterialColorGradientAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(
        0x01CC3CF0,
        int32_t,
        Compare,
        app::ObjectComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr,
        app::LegacyMaterialColorGradientAnimator_RendererData x,
        app::LegacyMaterialColorGradientAnimator_RendererData y
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals, app::ObjectComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, app::ObjectComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectComparer_1_LegacyMaterialColorGradientAnimator_RendererData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectComparer_1_LegacyMaterialColorGradientAnimator_RendererData_
