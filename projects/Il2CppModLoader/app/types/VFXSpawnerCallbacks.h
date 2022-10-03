#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VFXSpawnerCallbacks {
        namespace {
            app::VFXSpawnerCallbacks__Class* type_info_ref = nullptr;
        }
        app::VFXSpawnerCallbacks__Class** type_info = &type_info_ref;
        inline app::VFXSpawnerCallbacks__Class* get_class() {
            return il2cpp::get_class<app::VFXSpawnerCallbacks__Class>(type_info, "UnityEngine.Experimental.VFX", "VFXSpawnerCallbacks");
        }
        inline app::VFXSpawnerCallbacks* create() {
            return il2cpp::create_object<app::VFXSpawnerCallbacks>(get_class());
        }
    } // namespace VFXSpawnerCallbacks
} // namespace app::classes::types
