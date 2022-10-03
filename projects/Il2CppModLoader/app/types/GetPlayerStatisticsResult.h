#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerStatisticsResult__Class** type_info;
        inline app::GetPlayerStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayerStatisticsResult");
        }
        inline app::GetPlayerStatisticsResult* create() {
            return il2cpp::create_object<app::GetPlayerStatisticsResult>(get_class());
        }
    } // namespace GetPlayerStatisticsResult
} // namespace app::classes::types
