#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorControllerParameter__Array {
        namespace {
            app::AnimatorControllerParameter__Array__Class* type_info_ref = nullptr;
        }
        app::AnimatorControllerParameter__Array__Class** type_info = &type_info_ref;
        inline app::AnimatorControllerParameter__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimatorControllerParameter__Array__Class>(type_info, "UnityEngine", "AnimatorControllerParameter[]");
        }
        inline app::AnimatorControllerParameter__Array* create() {
            return il2cpp::create_object<app::AnimatorControllerParameter__Array>(get_class());
        }
    } // namespace AnimatorControllerParameter__Array
} // namespace app::classes::types
