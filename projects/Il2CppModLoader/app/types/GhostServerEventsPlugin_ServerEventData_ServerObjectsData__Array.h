#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array {
        namespace {
            app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array__Class* type_info_ref = nullptr;
        }
        app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array__Class** type_info = &type_info_ref;
        inline app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array__Class>(type_info, "", "GhostServerEventsPlugin+ServerEventData+ServerObjectsData[]");
        }
        inline app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array* create() {
            return il2cpp::create_object<app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array>(get_class());
        }
    } // namespace GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array
} // namespace app::classes::types
