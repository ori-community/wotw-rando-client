#pragma once
#include <Modloader/app/structs/PlayableDirector.h>
#include <Modloader/app/structs/PlayableDirector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableDirector {
        inline app::PlayableDirector__Class** type_info() {
            static app::PlayableDirector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayableDirector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayableDirector__Class* get_class() {
            return il2cpp::get_class<app::PlayableDirector__Class>(type_info(), "UnityEngine.Playables", "PlayableDirector");
        }
        inline app::PlayableDirector* create() {
            return il2cpp::create_object<app::PlayableDirector>(get_class());
        }
    } // namespace PlayableDirector
} // namespace app::classes::types
