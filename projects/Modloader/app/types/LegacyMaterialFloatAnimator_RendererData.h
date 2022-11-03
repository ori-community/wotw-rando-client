#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyMaterialFloatAnimator_RendererData {
        inline app::LegacyMaterialFloatAnimator_RendererData__Class** type_info = (app::LegacyMaterialFloatAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x04797840));
        inline app::LegacyMaterialFloatAnimator_RendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyMaterialFloatAnimator_RendererData__Class>(type_info, "", "LegacyMaterialFloatAnimator", "RendererData");
        }
        inline app::LegacyMaterialFloatAnimator_RendererData* create() {
            return il2cpp::create_object<app::LegacyMaterialFloatAnimator_RendererData>(get_class());
        }
        inline app::LegacyMaterialFloatAnimator_RendererData__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyMaterialFloatAnimator_RendererData__Array>(get_class(), size);
        }
        inline app::LegacyMaterialFloatAnimator_RendererData__Array* create_array(const std::vector<app::LegacyMaterialFloatAnimator_RendererData*>& items) {
            return il2cpp::array_new<app::LegacyMaterialFloatAnimator_RendererData__Array>(get_class(), items);
        }
    } // namespace LegacyMaterialFloatAnimator_RendererData
} // namespace app::classes::types
