#pragma once
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Array.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData {
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class** type_info() {
            static app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class**)(modloader::win::memory::resolve_rva(0x04725720));
            }
            return cache;
        }
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class>(type_info(), "", "GhostWorldObjectsLifetimePlugin", "WorldRecordableEventsData");
        }
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData>(get_class());
        }
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Array>(get_class(), size);
        }
        inline app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Array* create_array(const std::vector<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData*>& items) {
            return il2cpp::array_new<app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Array>(get_class(), items);
        }
    } // namespace GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData
} // namespace app::classes::types
