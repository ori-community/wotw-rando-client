#pragma once
#include <Modloader/app/structs/PhysicsUpdateHandlerManager.h>
#include <Modloader/app/structs/PhysicsUpdateHandlerManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsUpdateHandlerManager {
        inline app::PhysicsUpdateHandlerManager__Class** type_info() {
            static app::PhysicsUpdateHandlerManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsUpdateHandlerManager__Class**)(modloader::win::memory::resolve_rva(0x047528E0));
            }
            return cache;
        }
        inline app::PhysicsUpdateHandlerManager__Class* get_class() {
            return il2cpp::get_class<app::PhysicsUpdateHandlerManager__Class>(type_info(), "Moon", "PhysicsUpdateHandlerManager");
        }
        inline app::PhysicsUpdateHandlerManager* create() {
            return il2cpp::create_object<app::PhysicsUpdateHandlerManager>(get_class());
        }
    } // namespace PhysicsUpdateHandlerManager
} // namespace app::classes::types
