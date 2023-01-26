#pragma once
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData.h>
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData__Array.h>
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData__Boxed.h>
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialColorGradientAnimator_RendererData {
        inline app::LegacyMaterialColorGradientAnimator_RendererData__Class** type_info() {
            static app::LegacyMaterialColorGradientAnimator_RendererData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyMaterialColorGradientAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x0478C2C8));
            }
            return cache;
        }
        inline app::LegacyMaterialColorGradientAnimator_RendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyMaterialColorGradientAnimator_RendererData__Class>(type_info(), "", "LegacyMaterialColorGradientAnimator", "RendererData");
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
        inline app::LegacyMaterialColorGradientAnimator_RendererData__Array* create_array(const std::vector<app::LegacyMaterialColorGradientAnimator_RendererData>& items) {
            return il2cpp::array_new<app::LegacyMaterialColorGradientAnimator_RendererData__Array>(get_class(), items);
        }
    } // namespace LegacyMaterialColorGradientAnimator_RendererData
} // namespace app::classes::types
