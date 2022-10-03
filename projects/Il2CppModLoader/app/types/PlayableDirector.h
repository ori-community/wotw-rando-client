#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayableDirector {
        namespace {
            app::PlayableDirector__Class* type_info_ref = nullptr;
        }
        app::PlayableDirector__Class** type_info = &type_info_ref;
        inline app::PlayableDirector__Class* get_class() {
            return il2cpp::get_class<app::PlayableDirector__Class>(type_info, "UnityEngine.Playables", "PlayableDirector");
        }
        inline app::PlayableDirector* create() {
            return il2cpp::create_object<app::PlayableDirector>(get_class());
        }
    } // namespace PlayableDirector
} // namespace app::classes::types
