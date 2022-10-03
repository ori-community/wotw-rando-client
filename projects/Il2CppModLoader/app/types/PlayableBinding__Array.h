#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayableBinding__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayableBinding__Array__Class** type_info;
        inline app::PlayableBinding__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayableBinding__Array__Class>(type_info, "UnityEngine.Playables", "PlayableBinding[]");
        }
        inline app::PlayableBinding__Array* create() {
            return il2cpp::create_object<app::PlayableBinding__Array>(get_class());
        }
    } // namespace PlayableBinding__Array
} // namespace app::classes::types
