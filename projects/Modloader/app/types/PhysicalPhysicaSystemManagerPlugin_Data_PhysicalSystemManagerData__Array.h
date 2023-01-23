#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class.h>
#include <Modloader/app/structs/PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array.h>

namespace app::classes::types {
    namespace PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array {
        namespace {
            inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class* type_info_ref = nullptr;
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class** type_info = &type_info_ref;
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array__Class>(type_info, "", "PhysicalPhysicaSystemManagerPlugin+Data+PhysicalSystemManagerData[]");
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array* create() {
            return il2cpp::create_object<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array>(get_class());
        }
    } // namespace PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array
} // namespace app::classes::types
