#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticsResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerStatisticsResult_1__Class** type_info;
        inline app::GetPlayerStatisticsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerStatisticsResult");
        }
        inline app::GetPlayerStatisticsResult_1* create() {
            return il2cpp::create_object<app::GetPlayerStatisticsResult_1>(get_class());
        }
    } // namespace GetPlayerStatisticsResult_1
} // namespace app::classes::types
