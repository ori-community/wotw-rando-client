#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayableGraph {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayableGraph__Class** type_info;
        inline app::PlayableGraph__Class* get_class() {
            return il2cpp::get_class<app::PlayableGraph__Class>(type_info, "UnityEngine.Playables", "PlayableGraph");
        }
        inline app::PlayableGraph* create() {
            return il2cpp::create_object<app::PlayableGraph>(get_class());
        }
        inline app::PlayableGraph__Boxed* box(app::PlayableGraph value) {
            return il2cpp::box_value<app::PlayableGraph__Boxed>(get_class(), value);
        }
    } // namespace PlayableGraph
} // namespace app::classes::types
