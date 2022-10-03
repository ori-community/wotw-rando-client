#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData__Class** type_info;
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData__Class>(type_info, "", "GhostWorldObjectsLifetimePlugin+WorldRecordableEventsData", "WorldObjectData");
        }
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData>(get_class());
        }
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData__Array>(get_class(), size);
        }
    } // namespace GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData
} // namespace app::classes::types
