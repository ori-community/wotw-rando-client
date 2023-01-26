#pragma once
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData__Array.h>
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyMaterialColorGradientAnimator_RendererData__Array {
        inline app::LegacyMaterialColorGradientAnimator_RendererData__Array__Class** type_info() {
            static app::LegacyMaterialColorGradientAnimator_RendererData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyMaterialColorGradientAnimator_RendererData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyMaterialColorGradientAnimator_RendererData__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialColorGradientAnimator_RendererData__Array__Class>(type_info(), "", "LegacyMaterialColorGradientAnimator+RendererData[]");
        }
        inline app::LegacyMaterialColorGradientAnimator_RendererData__Array* create() {
            return il2cpp::create_object<app::LegacyMaterialColorGradientAnimator_RendererData__Array>(get_class());
        }
    } // namespace LegacyMaterialColorGradientAnimator_RendererData__Array
} // namespace app::classes::types
