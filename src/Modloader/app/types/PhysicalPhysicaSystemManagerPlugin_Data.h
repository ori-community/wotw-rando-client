#pragma once
#include <Modloader/app/structs/PhysicalPhysicaSystemManagerPlugin_Data.h>
#include <Modloader/app/structs/PhysicalPhysicaSystemManagerPlugin_Data__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicalPhysicaSystemManagerPlugin_Data {
        inline app::PhysicalPhysicaSystemManagerPlugin_Data__Class** type_info() {
            static app::PhysicalPhysicaSystemManagerPlugin_Data__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicalPhysicaSystemManagerPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04720758));
            }
            return cache;
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalPhysicaSystemManagerPlugin_Data__Class>(type_info(), "", "PhysicalPhysicaSystemManagerPlugin", "Data");
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data* create() {
            return il2cpp::create_object<app::PhysicalPhysicaSystemManagerPlugin_Data>(get_class());
        }
    } // namespace PhysicalPhysicaSystemManagerPlugin_Data
} // namespace app::classes::types
