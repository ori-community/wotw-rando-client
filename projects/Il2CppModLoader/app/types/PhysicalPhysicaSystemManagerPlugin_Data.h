#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicalPhysicaSystemManagerPlugin_Data {
        inline app::PhysicalPhysicaSystemManagerPlugin_Data__Class** type_info = (app::PhysicalPhysicaSystemManagerPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04720758));
        inline app::PhysicalPhysicaSystemManagerPlugin_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalPhysicaSystemManagerPlugin_Data__Class>(type_info, "", "PhysicalPhysicaSystemManagerPlugin", "Data");
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data* create() {
            return il2cpp::create_object<app::PhysicalPhysicaSystemManagerPlugin_Data>(get_class());
        }
    } // namespace PhysicalPhysicaSystemManagerPlugin_Data
} // namespace app::classes::types
