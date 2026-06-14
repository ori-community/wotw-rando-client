#pragma once
#include <Modloader/app/structs/PlayableBehaviour.h>
#include <Modloader/app/structs/PlayableBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableBehaviour {
        inline app::PlayableBehaviour__Class** type_info() {
            static app::PlayableBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayableBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayableBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PlayableBehaviour__Class>(type_info(), "UnityEngine.Playables", "PlayableBehaviour");
        }
        inline app::PlayableBehaviour* create() {
            return il2cpp::create_object<app::PlayableBehaviour>(get_class());
        }
    } // namespace PlayableBehaviour
} // namespace app::classes::types
