#pragma once
#include <Modloader/app/structs/Animation.h>
#include <Modloader/app/structs/Animation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Animation {
        inline app::Animation__Class** type_info() {
            static app::Animation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Animation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Animation__Class* get_class() {
            return il2cpp::get_class<app::Animation__Class>(type_info(), "UnityEngine", "Animation");
        }
        inline app::Animation* create() {
            return il2cpp::create_object<app::Animation>(get_class());
        }
    } // namespace Animation
} // namespace app::classes::types
