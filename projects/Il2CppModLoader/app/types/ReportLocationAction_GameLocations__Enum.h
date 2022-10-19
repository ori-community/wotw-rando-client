#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
