#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialColorAnimator_RendererData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyMaterialColorAnimator_RendererData__Class** type_info;
        inline app::LegacyMaterialColorAnimator_RendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyMaterialColorAnimator_RendererData__Class>(type_info, "", "LegacyMaterialColorAnimator", "RendererData");
        }
        inline app::LegacyMaterialColorAnimator_RendererData* create() {
            return il2cpp::create_object<app::LegacyMaterialColorAnimator_RendererData>(get_class());
        }
        inline app::LegacyMaterialColorAnimator_RendererData__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyMaterialColorAnimator_RendererData__Array>(get_class(), size);
        }
    } // namespace LegacyMaterialColorAnimator_RendererData
} // namespace app::classes::types
