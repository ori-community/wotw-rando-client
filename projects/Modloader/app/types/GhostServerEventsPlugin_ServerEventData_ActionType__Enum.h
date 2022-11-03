#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostServerEventsPlugin_ServerEventData_ActionType__Enum {
        namespace {
            inline app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum__Class** type_info = &type_info_ref;
        inline app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum__Class>(type_info, "", "GhostServerEventsPlugin+ServerEventData", "ActionType");
        }
        inline app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum* create() {
            return il2cpp::create_object<app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum>(get_class());
        }
    } // namespace GhostServerEventsPlugin_ServerEventData_ActionType__Enum
} // namespace app::classes::types
