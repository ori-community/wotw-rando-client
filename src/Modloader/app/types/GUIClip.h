#pragma once
#include <Modloader/app/structs/GUIClip.h>
#include <Modloader/app/structs/GUIClip__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIClip {
        inline app::GUIClip__Class** type_info() {
            static app::GUIClip__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIClip__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIClip__Class* get_class() {
            return il2cpp::get_class<app::GUIClip__Class>(type_info(), "UnityEngine", "GUIClip");
        }
        inline app::GUIClip* create() {
            return il2cpp::create_object<app::GUIClip>(get_class());
        }
    } // namespace GUIClip
} // namespace app::classes::types
