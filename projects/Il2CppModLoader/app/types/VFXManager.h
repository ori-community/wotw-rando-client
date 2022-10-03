#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VFXManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VFXManager__Class** type_info;
        inline app::VFXManager__Class* get_class() {
            return il2cpp::get_class<app::VFXManager__Class>(type_info, "UnityEngine.Experimental.VFX", "VFXManager");
        }
        inline app::VFXManager* create() {
            return il2cpp::create_object<app::VFXManager>(get_class());
        }
    } // namespace VFXManager
} // namespace app::classes::types
