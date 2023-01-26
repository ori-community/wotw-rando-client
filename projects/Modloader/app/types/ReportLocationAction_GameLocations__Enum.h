#pragma once
#include <Modloader/app/structs/ReportLocationAction_GameLocations__Enum.h>
#include <Modloader/app/structs/ReportLocationAction_GameLocations__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReportLocationAction_GameLocations__Enum {
        inline app::ReportLocationAction_GameLocations__Enum__Class** type_info() {
            static app::ReportLocationAction_GameLocations__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReportLocationAction_GameLocations__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReportLocationAction_GameLocations__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ReportLocationAction_GameLocations__Enum__Class>(type_info(), "", "ReportLocationAction", "GameLocations");
        }
        inline app::ReportLocationAction_GameLocations__Enum* create() {
            return il2cpp::create_object<app::ReportLocationAction_GameLocations__Enum>(get_class());
        }
    } // namespace ReportLocationAction_GameLocations__Enum
} // namespace app::classes::types
