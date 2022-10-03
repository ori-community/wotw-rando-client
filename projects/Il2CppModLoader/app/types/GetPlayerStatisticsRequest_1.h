#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticsRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerStatisticsRequest_1__Class** type_info;
        inline app::GetPlayerStatisticsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerStatisticsRequest");
        }
        inline app::GetPlayerStatisticsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayerStatisticsRequest_1>(get_class());
        }
    } // namespace GetPlayerStatisticsRequest_1
} // namespace app::classes::types
