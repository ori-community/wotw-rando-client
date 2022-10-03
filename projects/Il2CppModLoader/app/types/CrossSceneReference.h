#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrossSceneReference__Class** type_info;
        inline app::CrossSceneReference__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReference__Class>(type_info, "Moon", "CrossSceneReference");
        }
        inline app::CrossSceneReference* create() {
            return il2cpp::create_object<app::CrossSceneReference>(get_class());
        }
    } // namespace CrossSceneReference
} // namespace app::classes::types
