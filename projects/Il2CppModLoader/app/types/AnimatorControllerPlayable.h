#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorControllerPlayable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimatorControllerPlayable__Class** type_info;
        inline app::AnimatorControllerPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimatorControllerPlayable__Class>(type_info, "UnityEngine.Animations", "AnimatorControllerPlayable");
        }
        inline app::AnimatorControllerPlayable* create() {
            return il2cpp::create_object<app::AnimatorControllerPlayable>(get_class());
        }
        inline app::AnimatorControllerPlayable__Boxed* box(app::AnimatorControllerPlayable value) {
            return il2cpp::box_value<app::AnimatorControllerPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimatorControllerPlayable
} // namespace app::classes::types
