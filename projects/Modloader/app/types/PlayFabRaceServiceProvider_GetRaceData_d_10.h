#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabRaceServiceProvider_GetRaceData_d_10 {
        namespace {
            inline app::PlayFabRaceServiceProvider_GetRaceData_d_10__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabRaceServiceProvider_GetRaceData_d_10__Class** type_info = &type_info_ref;
        inline app::PlayFabRaceServiceProvider_GetRaceData_d_10__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabRaceServiceProvider_GetRaceData_d_10__Class>(type_info, "SystemIntegration.Races", "PlayFabRaceServiceProvider", "<GetRaceData>d__10");
        }
        inline app::PlayFabRaceServiceProvider_GetRaceData_d_10* create() {
            return il2cpp::create_object<app::PlayFabRaceServiceProvider_GetRaceData_d_10>(get_class());
        }
        inline app::PlayFabRaceServiceProvider_GetRaceData_d_10__Boxed* box(app::PlayFabRaceServiceProvider_GetRaceData_d_10 value) {
            return il2cpp::box_value<app::PlayFabRaceServiceProvider_GetRaceData_d_10__Boxed>(get_class(), value);
        }
    } // namespace PlayFabRaceServiceProvider_GetRaceData_d_10
} // namespace app::classes::types
