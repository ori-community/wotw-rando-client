#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterForceAnimator {
        namespace {
            app::UberWaterForceAnimator__Class* type_info_ref = nullptr;
        }
        app::UberWaterForceAnimator__Class** type_info = &type_info_ref;
        inline app::UberWaterForceAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberWaterForceAnimator__Class>(type_info, "", "UberWaterForceAnimator");
        }
        inline app::UberWaterForceAnimator* create() {
            return il2cpp::create_object<app::UberWaterForceAnimator>(get_class());
        }
    } // namespace UberWaterForceAnimator
} // namespace app::classes::types
