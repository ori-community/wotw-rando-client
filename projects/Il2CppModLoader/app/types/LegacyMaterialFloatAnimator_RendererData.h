#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialFloatAnimator_RendererData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyMaterialFloatAnimator_RendererData__Class** type_info;
        inline app::LegacyMaterialFloatAnimator_RendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyMaterialFloatAnimator_RendererData__Class>(type_info, "", "LegacyMaterialFloatAnimator", "RendererData");
        }
        inline app::LegacyMaterialFloatAnimator_RendererData* create() {
            return il2cpp::create_object<app::LegacyMaterialFloatAnimator_RendererData>(get_class());
        }
        inline app::LegacyMaterialFloatAnimator_RendererData__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyMaterialFloatAnimator_RendererData__Array>(get_class(), size);
        }
    } // namespace LegacyMaterialFloatAnimator_RendererData
} // namespace app::classes::types
