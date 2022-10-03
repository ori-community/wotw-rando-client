#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorOverrideController {
        namespace {
            app::AnimatorOverrideController__Class* type_info_ref = nullptr;
        }
        app::AnimatorOverrideController__Class** type_info = &type_info_ref;
        inline app::AnimatorOverrideController__Class* get_class() {
            return il2cpp::get_class<app::AnimatorOverrideController__Class>(type_info, "UnityEngine", "AnimatorOverrideController");
        }
        inline app::AnimatorOverrideController* create() {
            return il2cpp::create_object<app::AnimatorOverrideController>(get_class());
        }
    } // namespace AnimatorOverrideController
} // namespace app::classes::types
