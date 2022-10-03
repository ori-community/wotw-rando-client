#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyRotateAnimator {
        namespace {
            app::LegacyRotateAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyRotateAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyRotateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyRotateAnimator__Class>(type_info, "", "LegacyRotateAnimator");
        }
        inline app::LegacyRotateAnimator* create() {
            return il2cpp::create_object<app::LegacyRotateAnimator>(get_class());
        }
    } // namespace LegacyRotateAnimator
} // namespace app::classes::types
