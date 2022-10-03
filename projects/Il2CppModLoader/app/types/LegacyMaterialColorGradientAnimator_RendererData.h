#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialColorGradientAnimator_RendererData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyMaterialColorGradientAnimator_RendererData__Class** type_info;
        inline app::LegacyMaterialColorGradientAnimator_RendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyMaterialColorGradientAnimator_RendererData__Class>(type_info, "", "LegacyMaterialColorGradientAnimator", "RendererData");
        }
        inline app::LegacyMaterialColorGradientAnimator_RendererData* create() {
            return il2cpp::create_object<app::LegacyMaterialColorGradientAnimator_RendererData>(get_class());
        }
        inline app::LegacyMaterialColorGradientAnimator_RendererData__Boxed* box(app::LegacyMaterialColorGradientAnimator_RendererData value) {
            return il2cpp::box_value<app::LegacyMaterialColorGradientAnimator_RendererData__Boxed>(get_class(), value);
        }
        inline app::LegacyMaterialColorGradientAnimator_RendererData__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyMaterialColorGradientAnimator_RendererData__Array>(get_class(), size);
        }
    } // namespace LegacyMaterialColorGradientAnimator_RendererData
} // namespace app::classes::types
