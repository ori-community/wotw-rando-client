#pragma once
#include <Modloader/app/structs/LegacyFloatShaderPropertyAnimator.h>
#include <Modloader/app/structs/LegacyFloatShaderPropertyAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyFloatShaderPropertyAnimator {
        inline app::LegacyFloatShaderPropertyAnimator__Class** type_info() {
            static app::LegacyFloatShaderPropertyAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyFloatShaderPropertyAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyFloatShaderPropertyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyFloatShaderPropertyAnimator__Class>(type_info(), "", "LegacyFloatShaderPropertyAnimator");
        }
        inline app::LegacyFloatShaderPropertyAnimator* create() {
            return il2cpp::create_object<app::LegacyFloatShaderPropertyAnimator>(get_class());
        }
    } // namespace LegacyFloatShaderPropertyAnimator
} // namespace app::classes::types
