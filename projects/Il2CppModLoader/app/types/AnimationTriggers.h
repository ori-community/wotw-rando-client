#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationTriggers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationTriggers__Class** type_info;
        inline app::AnimationTriggers__Class* get_class() {
            return il2cpp::get_class<app::AnimationTriggers__Class>(type_info, "UnityEngine.UI", "AnimationTriggers");
        }
        inline app::AnimationTriggers* create() {
            return il2cpp::create_object<app::AnimationTriggers>(get_class());
        }
    } // namespace AnimationTriggers
} // namespace app::classes::types
