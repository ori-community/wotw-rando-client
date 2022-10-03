#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIClip {
        namespace {
            app::GUIClip__Class* type_info_ref = nullptr;
        }
        app::GUIClip__Class** type_info = &type_info_ref;
        inline app::GUIClip__Class* get_class() {
            return il2cpp::get_class<app::GUIClip__Class>(type_info, "UnityEngine", "GUIClip");
        }
        inline app::GUIClip* create() {
            return il2cpp::create_object<app::GUIClip>(get_class());
        }
    } // namespace GUIClip
} // namespace app::classes::types
