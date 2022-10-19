#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsUpdateHandlerManager {
        inline app::PhysicsUpdateHandlerManager__Class** type_info = (app::PhysicsUpdateHandlerManager__Class**)(modloader::win::memory::resolve_rva(0x047528E0));
        inline app::PhysicsUpdateHandlerManager__Class* get_class() {
            return il2cpp::get_class<app::PhysicsUpdateHandlerManager__Class>(type_info, "Moon", "PhysicsUpdateHandlerManager");
        }
        inline app::PhysicsUpdateHandlerManager* create() {
            return il2cpp::create_object<app::PhysicsUpdateHandlerManager>(get_class());
        }
    } // namespace PhysicsUpdateHandlerManager
} // namespace app::classes::types
