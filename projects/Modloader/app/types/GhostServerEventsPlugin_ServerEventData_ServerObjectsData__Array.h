#pragma once
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array.h>
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array {
        inline app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array__Class** type_info() {
            static app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array__Class>(type_info(), "", "GhostServerEventsPlugin+ServerEventData+ServerObjectsData[]");
        }
        inline app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array* create() {
            return il2cpp::create_object<app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array>(get_class());
        }
    } // namespace GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array
} // namespace app::classes::types
