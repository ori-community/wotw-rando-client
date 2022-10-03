#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Playable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Playable__Class** type_info;
        inline app::Playable__Class* get_class() {
            return il2cpp::get_class<app::Playable__Class>(type_info, "UnityEngine.Playables", "Playable");
        }
        inline app::Playable* create() {
            return il2cpp::create_object<app::Playable>(get_class());
        }
        inline app::Playable__Boxed* box(app::Playable value) {
            return il2cpp::box_value<app::Playable__Boxed>(get_class(), value);
        }
    } // namespace Playable
} // namespace app::classes::types
