#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneComponentTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneComponentTracker__Class** type_info;
        inline app::SceneComponentTracker__Class* get_class() {
            return il2cpp::get_class<app::SceneComponentTracker__Class>(type_info, "", "SceneComponentTracker");
        }
        inline app::SceneComponentTracker* create() {
            return il2cpp::create_object<app::SceneComponentTracker>(get_class());
        }
    } // namespace SceneComponentTracker
} // namespace app::classes::types
