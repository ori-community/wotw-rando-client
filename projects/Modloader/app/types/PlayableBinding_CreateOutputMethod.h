#pragma once
#include <Modloader/app/structs/PlayableBinding_CreateOutputMethod.h>
#include <Modloader/app/structs/PlayableBinding_CreateOutputMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableBinding_CreateOutputMethod {
        inline app::PlayableBinding_CreateOutputMethod__Class** type_info() {
            static app::PlayableBinding_CreateOutputMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayableBinding_CreateOutputMethod__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayableBinding_CreateOutputMethod__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayableBinding_CreateOutputMethod__Class>(type_info(), "UnityEngine.Playables", "PlayableBinding", "CreateOutputMethod");
        }
        inline app::PlayableBinding_CreateOutputMethod* create() {
            return il2cpp::create_object<app::PlayableBinding_CreateOutputMethod>(get_class());
        }
    } // namespace PlayableBinding_CreateOutputMethod
} // namespace app::classes::types
