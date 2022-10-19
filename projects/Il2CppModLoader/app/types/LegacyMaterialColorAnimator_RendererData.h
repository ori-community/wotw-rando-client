#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyMaterialColorAnimator_RendererData {
        inline app::LegacyMaterialColorAnimator_RendererData__Class** type_info = (app::LegacyMaterialColorAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x04777AB0));
        inline app::LegacyMaterialColorAnimator_RendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyMaterialColorAnimator_RendererData__Class>(type_info, "", "LegacyMaterialColorAnimator", "RendererData");
        }
        inline app::LegacyMaterialColorAnimator_RendererData* create() {
            return il2cpp::create_object<app::LegacyMaterialColorAnimator_RendererData>(get_class());
        }
        inline app::LegacyMaterialColorAnimator_RendererData__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyMaterialColorAnimator_RendererData__Array>(get_class(), size);
        }
        inline app::LegacyMaterialColorAnimator_RendererData__Array* create_array(const std::vector<app::LegacyMaterialColorAnimator_RendererData*>& items) {
            return il2cpp::array_new<app::LegacyMaterialColorAnimator_RendererData__Array>(get_class(), items);
        }
    } // namespace LegacyMaterialColorAnimator_RendererData
} // namespace app::classes::types
