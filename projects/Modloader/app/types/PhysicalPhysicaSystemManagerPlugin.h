#pragma once
#include <Modloader/app/structs/PhysicalPhysicaSystemManagerPlugin.h>
#include <Modloader/app/structs/PhysicalPhysicaSystemManagerPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicalPhysicaSystemManagerPlugin {
        inline app::PhysicalPhysicaSystemManagerPlugin__Class** type_info() {
            static app::PhysicalPhysicaSystemManagerPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicalPhysicaSystemManagerPlugin__Class**)(modloader::win::memory::resolve_rva(0x047568A8));
            }
            return cache;
        }
        inline app::PhysicalPhysicaSystemManagerPlugin__Class* get_class() {
            return il2cpp::get_class<app::PhysicalPhysicaSystemManagerPlugin__Class>(type_info(), "", "PhysicalPhysicaSystemManagerPlugin");
        }
        inline app::PhysicalPhysicaSystemManagerPlugin* create() {
            return il2cpp::create_object<app::PhysicalPhysicaSystemManagerPlugin>(get_class());
        }
    } // namespace PhysicalPhysicaSystemManagerPlugin
} // namespace app::classes::types
