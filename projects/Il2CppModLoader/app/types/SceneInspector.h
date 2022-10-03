#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneInspector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneInspector__Class** type_info;
        inline app::SceneInspector__Class* get_class() {
            return il2cpp::get_class<app::SceneInspector__Class>(type_info, "", "SceneInspector");
        }
        inline app::SceneInspector* create() {
            return il2cpp::create_object<app::SceneInspector>(get_class());
        }
    } // namespace SceneInspector
} // namespace app::classes::types
