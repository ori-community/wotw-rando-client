#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetQueueStatisticsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetQueueStatisticsResult__Class** type_info;
        inline app::GetQueueStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::GetQueueStatisticsResult__Class>(type_info, "PlayFab.MultiplayerModels", "GetQueueStatisticsResult");
        }
        inline app::GetQueueStatisticsResult* create() {
            return il2cpp::create_object<app::GetQueueStatisticsResult>(get_class());
        }
    } // namespace GetQueueStatisticsResult
} // namespace app::classes::types
