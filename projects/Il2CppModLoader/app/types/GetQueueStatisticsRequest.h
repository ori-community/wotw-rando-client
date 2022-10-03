#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetQueueStatisticsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetQueueStatisticsRequest__Class** type_info;
        inline app::GetQueueStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetQueueStatisticsRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetQueueStatisticsRequest");
        }
        inline app::GetQueueStatisticsRequest* create() {
            return il2cpp::create_object<app::GetQueueStatisticsRequest>(get_class());
        }
    } // namespace GetQueueStatisticsRequest
} // namespace app::classes::types
