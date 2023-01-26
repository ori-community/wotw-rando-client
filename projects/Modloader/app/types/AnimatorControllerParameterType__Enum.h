#pragma once
#include <Modloader/app/structs/AnimatorControllerParameterType__Enum.h>
#include <Modloader/app/structs/AnimatorControllerParameterType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorControllerParameterType__Enum {
        inline app::AnimatorControllerParameterType__Enum__Class** type_info() {
            static app::AnimatorControllerParameterType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorControllerParameterType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorControllerParameterType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimatorControllerParameterType__Enum__Class>(type_info(), "UnityEngine", "AnimatorControllerParameterType");
        }
        inline app::AnimatorControllerParameterType__Enum* create() {
            return il2cpp::create_object<app::AnimatorControllerParameterType__Enum>(get_class());
        }
    } // namespace AnimatorControllerParameterType__Enum
} // namespace app::classes::types
