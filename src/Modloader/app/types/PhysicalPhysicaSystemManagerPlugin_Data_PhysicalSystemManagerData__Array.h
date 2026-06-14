#pragma once
#include <Modloader/app/structs/PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array.h>
#include <Modloader/app/structs/PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array {
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class** type_info() {
            static app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class>(type_info(), "", "PhysicalPhysicaSystemManagerPlugin+Data+PhysicalSystemManagerData[]");
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array* create() {
            return il2cpp::create_object<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array>(get_class());
        }
    } // namespace PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array
} // namespace app::classes::types
