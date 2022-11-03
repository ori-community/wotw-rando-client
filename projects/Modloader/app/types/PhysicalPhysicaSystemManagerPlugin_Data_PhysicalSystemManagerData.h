#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData {
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Class** type_info = (app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Class**)(modloader::win::memory::resolve_rva(0x04773E98));
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Class>(type_info, "", "PhysicalPhysicaSystemManagerPlugin+Data", "PhysicalSystemManagerData");
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData* create() {
            return il2cpp::create_object<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData>(get_class());
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array>(get_class(), size);
        }
        inline app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array* create_array(const std::vector<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData*>& items) {
            return il2cpp::array_new<app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Array>(get_class(), items);
        }
    } // namespace PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData
} // namespace app::classes::types
