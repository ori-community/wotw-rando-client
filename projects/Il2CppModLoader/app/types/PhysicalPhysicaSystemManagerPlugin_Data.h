#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicalPhysicaSystemManagerPlugin_Data {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicalPhysicaSystemManagerPlugin_Data__Class** type_info;
        inline app::PhysicalPhysicaSystemManagerPlugin_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalPhysicaSystemManagerPlugin_Data__Class>(type_info, "", "PhysicalPhysicaSystemManagerPlugin", "Data");
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data* create() {
            return il2cpp::create_object<app::PhysicalPhysicaSystemManagerPlugin_Data>(get_class());
        }
    } // namespace PhysicalPhysicaSystemManagerPlugin_Data
} // namespace app::classes::types
