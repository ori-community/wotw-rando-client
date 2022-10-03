#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdatePlayerStatisticsRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdatePlayerStatisticsRequest_1__Class** type_info;
        inline app::UpdatePlayerStatisticsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdatePlayerStatisticsRequest_1__Class>(type_info, "PlayFab.ServerModels", "UpdatePlayerStatisticsRequest");
        }
        inline app::UpdatePlayerStatisticsRequest_1* create() {
            return il2cpp::create_object<app::UpdatePlayerStatisticsRequest_1>(get_class());
        }
    } // namespace UpdatePlayerStatisticsRequest_1
} // namespace app::classes::types
