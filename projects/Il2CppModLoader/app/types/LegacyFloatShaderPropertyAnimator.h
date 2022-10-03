#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyFloatShaderPropertyAnimator {
        namespace {
            app::LegacyFloatShaderPropertyAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyFloatShaderPropertyAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyFloatShaderPropertyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyFloatShaderPropertyAnimator__Class>(type_info, "", "LegacyFloatShaderPropertyAnimator");
        }
        inline app::LegacyFloatShaderPropertyAnimator* create() {
            return il2cpp::create_object<app::LegacyFloatShaderPropertyAnimator>(get_class());
        }
    } // namespace LegacyFloatShaderPropertyAnimator
} // namespace app::classes::types
