#pragma once
#include <Modloader/app/structs/LegacyMaterialFloatAnimator_RendererData.h>
#include <Modloader/app/structs/LegacyMaterialFloatAnimator_RendererData__Array.h>
#include <Modloader/app/structs/LegacyMaterialFloatAnimator_RendererData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialFloatAnimator_RendererData {
        inline app::LegacyMaterialFloatAnimator_RendererData__Class** type_info() {
            static app::LegacyMaterialFloatAnimator_RendererData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyMaterialFloatAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x04797840));
            }
            return cache;
        }
        inline app::LegacyMaterialFloatAnimator_RendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyMaterialFloatAnimator_RendererData__Class>(type_info(), "", "LegacyMaterialFloatAnimator", "RendererData");
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
