#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsUpdateHandlerManager_Temp {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsUpdateHandlerManager_Temp__Class** type_info;
        inline app::PhysicsUpdateHandlerManager_Temp__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsUpdateHandlerManager_Temp__Class>(type_info, "Moon", "PhysicsUpdateHandlerManager", "Temp");
        }
        inline app::PhysicsUpdateHandlerManager_Temp* create() {
            return il2cpp::create_object<app::PhysicsUpdateHandlerManager_Temp>(get_class());
        }
    } // namespace PhysicsUpdateHandlerManager_Temp
} // namespace app::classes::types
