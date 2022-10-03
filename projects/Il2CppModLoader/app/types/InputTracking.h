#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputTracking {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InputTracking__Class** type_info;
        inline app::InputTracking__Class* get_class() {
            return il2cpp::get_class<app::InputTracking__Class>(type_info, "UnityEngine.XR", "InputTracking");
        }
        inline app::InputTracking* create() {
            return il2cpp::create_object<app::InputTracking>(get_class());
        }
    } // namespace InputTracking
} // namespace app::classes::types
