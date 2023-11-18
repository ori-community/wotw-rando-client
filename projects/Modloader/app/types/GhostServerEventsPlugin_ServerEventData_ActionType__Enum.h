#pragma once
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData_ActionType__Enum.h>
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData_ActionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostServerEventsPlugin_ServerEventData_ActionType__Enum {
        inline app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum__Class** type_info() {
            static app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum__Class>(type_info(), "", "GhostServerEventsPlugin+ServerEventData", "ActionType");
        }
        inline app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum* create() {
            return il2cpp::create_object<app::GhostServerEventsPlugin_ServerEventData_ActionType__Enum>(get_class());
        }
    } // namespace GhostServerEventsPlugin_ServerEventData_ActionType__Enum
} // namespace app::classes::types
