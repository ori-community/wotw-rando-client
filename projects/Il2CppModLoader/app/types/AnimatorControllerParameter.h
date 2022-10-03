#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorControllerParameter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimatorControllerParameter__Class** type_info;
        inline app::AnimatorControllerParameter__Class* get_class() {
            return il2cpp::get_class<app::AnimatorControllerParameter__Class>(type_info, "UnityEngine", "AnimatorControllerParameter");
        }
        inline app::AnimatorControllerParameter* create() {
            return il2cpp::create_object<app::AnimatorControllerParameter>(get_class());
        }
        inline app::AnimatorControllerParameter__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimatorControllerParameter__Array>(get_class(), size);
        }
    } // namespace AnimatorControllerParameter
} // namespace app::classes::types
