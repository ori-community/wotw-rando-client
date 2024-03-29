#pragma once
#include <Modloader/app/structs/PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Boxed.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d {
        inline app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Class** type_info() {
            static app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Class>(type_info(), "SystemIntegration.Races", "PlayFabRaceServiceProvider+<>c__DisplayClass10_0", "<<GetRaceData>b__0>d");
        }
        inline app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d* create() {
            return il2cpp::create_object<app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d>(get_class());
        }
        inline app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Boxed* box(app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d value) {
            return il2cpp::box_value<app::PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Boxed>(get_class(), value);
        }
    } // namespace PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d
} // namespace app::classes::types
