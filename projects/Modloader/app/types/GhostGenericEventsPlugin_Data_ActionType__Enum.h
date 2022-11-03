#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostGenericEventsPlugin_Data_ActionType__Enum {
        namespace {
            inline app::GhostGenericEventsPlugin_Data_ActionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GhostGenericEventsPlugin_Data_ActionType__Enum__Class** type_info = &type_info_ref;
        inline app::GhostGenericEventsPlugin_Data_ActionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostGenericEventsPlugin_Data_ActionType__Enum__Class>(type_info, "", "GhostGenericEventsPlugin+Data", "ActionType");
        }
        inline app::GhostGenericEventsPlugin_Data_ActionType__Enum* create() {
            return il2cpp::create_object<app::GhostGenericEventsPlugin_Data_ActionType__Enum>(get_class());
        }
    } // namespace GhostGenericEventsPlugin_Data_ActionType__Enum
} // namespace app::classes::types
