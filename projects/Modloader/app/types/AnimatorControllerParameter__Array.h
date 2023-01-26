#pragma once
#include <Modloader/app/structs/AnimatorControllerParameter__Array.h>
#include <Modloader/app/structs/AnimatorControllerParameter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorControllerParameter__Array {
        inline app::AnimatorControllerParameter__Array__Class** type_info() {
            static app::AnimatorControllerParameter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorControllerParameter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorControllerParameter__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimatorControllerParameter__Array__Class>(type_info(), "UnityEngine", "AnimatorControllerParameter[]");
        }
        inline app::AnimatorControllerParameter__Array* create() {
            return il2cpp::create_object<app::AnimatorControllerParameter__Array>(get_class());
        }
    } // namespace AnimatorControllerParameter__Array
} // namespace app::classes::types
