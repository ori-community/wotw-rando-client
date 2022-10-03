#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindSpeedAnimator {
        namespace {
            app::WindSpeedAnimator__Class* type_info_ref = nullptr;
        }
        app::WindSpeedAnimator__Class** type_info = &type_info_ref;
        inline app::WindSpeedAnimator__Class* get_class() {
            return il2cpp::get_class<app::WindSpeedAnimator__Class>(type_info, "", "WindSpeedAnimator");
        }
        inline app::WindSpeedAnimator* create() {
            return il2cpp::create_object<app::WindSpeedAnimator>(get_class());
        }
    } // namespace WindSpeedAnimator
} // namespace app::classes::types
