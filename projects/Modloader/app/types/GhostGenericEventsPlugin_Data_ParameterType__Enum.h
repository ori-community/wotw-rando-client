#pragma once
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data_ParameterType__Enum.h>
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data_ParameterType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostGenericEventsPlugin_Data_ParameterType__Enum {
        inline app::GhostGenericEventsPlugin_Data_ParameterType__Enum__Class** type_info() {
            static app::GhostGenericEventsPlugin_Data_ParameterType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostGenericEventsPlugin_Data_ParameterType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostGenericEventsPlugin_Data_ParameterType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostGenericEventsPlugin_Data_ParameterType__Enum__Class>(type_info(), "", "GhostGenericEventsPlugin+Data", "ParameterType");
        }
        inline app::GhostGenericEventsPlugin_Data_ParameterType__Enum* create() {
            return il2cpp::create_object<app::GhostGenericEventsPlugin_Data_ParameterType__Enum>(get_class());
        }
    } // namespace GhostGenericEventsPlugin_Data_ParameterType__Enum
} // namespace app::classes::types
