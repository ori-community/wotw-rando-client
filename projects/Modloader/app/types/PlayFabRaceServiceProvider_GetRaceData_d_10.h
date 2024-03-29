#pragma once
#include <Modloader/app/structs/PlayFabRaceServiceProvider_GetRaceData_d_10.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_GetRaceData_d_10__Boxed.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_GetRaceData_d_10__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabRaceServiceProvider_GetRaceData_d_10 {
        inline app::PlayFabRaceServiceProvider_GetRaceData_d_10__Class** type_info() {
            static app::PlayFabRaceServiceProvider_GetRaceData_d_10__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabRaceServiceProvider_GetRaceData_d_10__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabRaceServiceProvider_GetRaceData_d_10__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabRaceServiceProvider_GetRaceData_d_10__Class>(type_info(), "SystemIntegration.Races", "PlayFabRaceServiceProvider", "<GetRaceData>d__10");
        }
        inline app::PlayFabRaceServiceProvider_GetRaceData_d_10* create() {
            return il2cpp::create_object<app::PlayFabRaceServiceProvider_GetRaceData_d_10>(get_class());
        }
        inline app::PlayFabRaceServiceProvider_GetRaceData_d_10__Boxed* box(app::PlayFabRaceServiceProvider_GetRaceData_d_10 value) {
            return il2cpp::box_value<app::PlayFabRaceServiceProvider_GetRaceData_d_10__Boxed>(get_class(), value);
        }
    } // namespace PlayFabRaceServiceProvider_GetRaceData_d_10
} // namespace app::classes::types
