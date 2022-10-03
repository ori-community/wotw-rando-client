#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VFXSpawnerState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VFXSpawnerState__Class** type_info;
        inline app::VFXSpawnerState__Class* get_class() {
            return il2cpp::get_class<app::VFXSpawnerState__Class>(type_info, "UnityEngine.Experimental.VFX", "VFXSpawnerState");
        }
        inline app::VFXSpawnerState* create() {
            return il2cpp::create_object<app::VFXSpawnerState>(get_class());
        }
    } // namespace VFXSpawnerState
} // namespace app::classes::types
