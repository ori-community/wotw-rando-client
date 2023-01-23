#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReportLocationAction_GameLocations__Enum__Class.h>
#include <Modloader/app/structs/ReportLocationAction_GameLocations__Enum.h>

namespace app::classes::types {
    namespace ReportLocationAction_GameLocations__Enum {
        namespace {
            inline app::ReportLocationAction_GameLocations__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ReportLocationAction_GameLocations__Enum__Class** type_info = &type_info_ref;
        inline app::ReportLocationAction_GameLocations__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ReportLocationAction_GameLocations__Enum__Class>(type_info, "", "ReportLocationAction", "GameLocations");
        }
        inline app::ReportLocationAction_GameLocations__Enum* create() {
            return il2cpp::create_object<app::ReportLocationAction_GameLocations__Enum>(get_class());
        }
    } // namespace ReportLocationAction_GameLocations__Enum
} // namespace app::classes::types
