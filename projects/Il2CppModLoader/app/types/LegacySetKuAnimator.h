#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacySetKuAnimator {
        namespace {
            app::LegacySetKuAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacySetKuAnimator__Class** type_info = &type_info_ref;
        inline app::LegacySetKuAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacySetKuAnimator__Class>(type_info, "", "LegacySetKuAnimator");
        }
        inline app::LegacySetKuAnimator* create() {
            return il2cpp::create_object<app::LegacySetKuAnimator>(get_class());
        }
    } // namespace LegacySetKuAnimator
} // namespace app::classes::types
