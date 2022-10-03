#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsUpdateHandlerManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsUpdateHandlerManager__Class** type_info;
        inline app::PhysicsUpdateHandlerManager__Class* get_class() {
            return il2cpp::get_class<app::PhysicsUpdateHandlerManager__Class>(type_info, "Moon", "PhysicsUpdateHandlerManager");
        }
        inline app::PhysicsUpdateHandlerManager* create() {
            return il2cpp::create_object<app::PhysicsUpdateHandlerManager>(get_class());
        }
    } // namespace PhysicsUpdateHandlerManager
} // namespace app::classes::types
