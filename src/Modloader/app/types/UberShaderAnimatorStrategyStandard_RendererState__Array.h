#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_RendererState__Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_RendererState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyStandard_RendererState__Array {
        inline app::UberShaderAnimatorStrategyStandard_RendererState__Array__Class** type_info() {
            static app::UberShaderAnimatorStrategyStandard_RendererState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderAnimatorStrategyStandard_RendererState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyStandard_RendererState__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyStandard_RendererState__Array__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyStandard+RendererState[]");
        }
        inline app::UberShaderAnimatorStrategyStandard_RendererState__Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyStandard_RendererState__Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyStandard_RendererState__Array
} // namespace app::classes::types
