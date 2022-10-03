#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array {
        namespace {
            app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class* type_info_ref = nullptr;
        }
        app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class** type_info = &type_info_ref;
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class>(type_info, "", "PhysicalPhysicaSystemManagerPlugin+Data+PhysicalSystemManagerData[]");
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array* create() {
            return il2cpp::create_object<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array>(get_class());
        }
    } // namespace PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array
} // namespace app::classes::types
