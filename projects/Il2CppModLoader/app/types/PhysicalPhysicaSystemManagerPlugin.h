#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicalPhysicaSystemManagerPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicalPhysicaSystemManagerPlugin__Class** type_info;
        inline app::PhysicalPhysicaSystemManagerPlugin__Class* get_class() {
            return il2cpp::get_class<app::PhysicalPhysicaSystemManagerPlugin__Class>(type_info, "", "PhysicalPhysicaSystemManagerPlugin");
        }
        inline app::PhysicalPhysicaSystemManagerPlugin* create() {
            return il2cpp::create_object<app::PhysicalPhysicaSystemManagerPlugin>(get_class());
        }
    } // namespace PhysicalPhysicaSystemManagerPlugin
} // namespace app::classes::types
