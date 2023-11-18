#pragma once
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum {
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum__Class** type_info() {
            static app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum__Class>(type_info(), "", "GhostWorldObjectsLifetimePlugin+WorldRecordableEventsData", "ActionType");
        }
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum>(get_class());
        }
    } // namespace GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ActionType__Enum
} // namespace app::classes::types
