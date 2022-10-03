#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerStatisticsRequest__Class** type_info;
        inline app::GetPlayerStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerStatisticsRequest");
        }
        inline app::GetPlayerStatisticsRequest* create() {
            return il2cpp::create_object<app::GetPlayerStatisticsRequest>(get_class());
        }
    } // namespace GetPlayerStatisticsRequest
} // namespace app::classes::types
