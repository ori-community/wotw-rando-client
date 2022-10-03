#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneEntityPlaycountResetter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneEntityPlaycountResetter__Class** type_info;
        inline app::SceneEntityPlaycountResetter__Class* get_class() {
            return il2cpp::get_class<app::SceneEntityPlaycountResetter__Class>(type_info, "Moon.Timeline.Systems", "SceneEntityPlaycountResetter");
        }
        inline app::SceneEntityPlaycountResetter* create() {
            return il2cpp::create_object<app::SceneEntityPlaycountResetter>(get_class());
        }
    } // namespace SceneEntityPlaycountResetter
} // namespace app::classes::types
