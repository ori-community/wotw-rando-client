#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsRaycaster {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsRaycaster__Class** type_info;
        inline app::PhysicsRaycaster__Class* get_class() {
            return il2cpp::get_class<app::PhysicsRaycaster__Class>(type_info, "UnityEngine.EventSystems", "PhysicsRaycaster");
        }
        inline app::PhysicsRaycaster* create() {
            return il2cpp::create_object<app::PhysicsRaycaster>(get_class());
        }
    } // namespace PhysicsRaycaster
} // namespace app::classes::types
