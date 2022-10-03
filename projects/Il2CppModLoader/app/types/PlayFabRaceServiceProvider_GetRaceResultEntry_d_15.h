#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabRaceServiceProvider_GetRaceResultEntry_d_15 {
        namespace {
            app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Class* type_info_ref = nullptr;
        }
        app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Class** type_info = &type_info_ref;
        inline app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Class>(type_info, "SystemIntegration.Races", "PlayFabRaceServiceProvider", "<GetRaceResultEntry>d__15");
        }
        inline app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15* create() {
            return il2cpp::create_object<app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15>(get_class());
        }
        inline app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Boxed* box(app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15 value) {
            return il2cpp::box_value<app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Boxed>(get_class(), value);
        }
    } // namespace PlayFabRaceServiceProvider_GetRaceResultEntry_d_15
} // namespace app::classes::types
