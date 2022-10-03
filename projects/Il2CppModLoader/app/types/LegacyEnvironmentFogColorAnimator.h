#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyEnvironmentFogColorAnimator {
        namespace {
            app::LegacyEnvironmentFogColorAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyEnvironmentFogColorAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyEnvironmentFogColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyEnvironmentFogColorAnimator__Class>(type_info, "", "LegacyEnvironmentFogColorAnimator");
        }
        inline app::LegacyEnvironmentFogColorAnimator* create() {
            return il2cpp::create_object<app::LegacyEnvironmentFogColorAnimator>(get_class());
        }
    } // namespace LegacyEnvironmentFogColorAnimator
} // namespace app::classes::types
