#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsRaycaster {
        inline app::PhysicsRaycaster__Class** type_info = (app::PhysicsRaycaster__Class**)(modloader::win::memory::resolve_rva(0x0471A688));
        inline app::PhysicsRaycaster__Class* get_class() {
            return il2cpp::get_class<app::PhysicsRaycaster__Class>(type_info, "UnityEngine.EventSystems", "PhysicsRaycaster");
        }
        inline app::PhysicsRaycaster* create() {
            return il2cpp::create_object<app::PhysicsRaycaster>(get_class());
        }
    } // namespace PhysicsRaycaster
} // namespace app::classes::types
