#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetQueueStatisticsRequest {
        inline app::GetQueueStatisticsRequest__Class** type_info = (app::GetQueueStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x04722E90));
        inline app::GetQueueStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetQueueStatisticsRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetQueueStatisticsRequest");
        }
        inline app::GetQueueStatisticsRequest* create() {
            return il2cpp::create_object<app::GetQueueStatisticsRequest>(get_class());
        }
    } // namespace GetQueueStatisticsRequest
} // namespace app::classes::types
