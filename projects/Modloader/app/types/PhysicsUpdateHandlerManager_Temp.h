#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsUpdateHandlerManager_Temp {
        inline app::PhysicsUpdateHandlerManager_Temp__Class** type_info = (app::PhysicsUpdateHandlerManager_Temp__Class**)(modloader::win::memory::resolve_rva(0x04705EA0));
        inline app::PhysicsUpdateHandlerManager_Temp__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsUpdateHandlerManager_Temp__Class>(type_info, "Moon", "PhysicsUpdateHandlerManager", "Temp");
        }
        inline app::PhysicsUpdateHandlerManager_Temp* create() {
            return il2cpp::create_object<app::PhysicsUpdateHandlerManager_Temp>(get_class());
        }
    } // namespace PhysicsUpdateHandlerManager_Temp
} // namespace app::classes::types
