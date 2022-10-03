#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationState__Class** type_info;
        inline app::AnimationState__Class* get_class() {
            return il2cpp::get_class<app::AnimationState__Class>(type_info, "UnityEngine", "AnimationState");
        }
        inline app::AnimationState* create() {
            return il2cpp::create_object<app::AnimationState>(get_class());
        }
    } // namespace AnimationState
} // namespace app::classes::types
