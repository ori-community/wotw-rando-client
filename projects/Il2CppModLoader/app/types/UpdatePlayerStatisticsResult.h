#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdatePlayerStatisticsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdatePlayerStatisticsResult__Class** type_info;
        inline app::UpdatePlayerStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::UpdatePlayerStatisticsResult__Class>(type_info, "PlayFab.ClientModels", "UpdatePlayerStatisticsResult");
        }
        inline app::UpdatePlayerStatisticsResult* create() {
            return il2cpp::create_object<app::UpdatePlayerStatisticsResult>(get_class());
        }
    } // namespace UpdatePlayerStatisticsResult
} // namespace app::classes::types
