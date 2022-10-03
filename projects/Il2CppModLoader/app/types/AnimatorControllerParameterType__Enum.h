#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorControllerParameterType__Enum {
        namespace {
            app::AnimatorControllerParameterType__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimatorControllerParameterType__Enum__Class** type_info = &type_info_ref;
        inline app::AnimatorControllerParameterType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimatorControllerParameterType__Enum__Class>(type_info, "UnityEngine", "AnimatorControllerParameterType");
        }
        inline app::AnimatorControllerParameterType__Enum* create() {
            return il2cpp::create_object<app::AnimatorControllerParameterType__Enum>(get_class());
        }
    } // namespace AnimatorControllerParameterType__Enum
} // namespace app::classes::types
