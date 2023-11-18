#pragma once
#include <Modloader/app/structs/GetQueueStatisticsRequest.h>
#include <Modloader/app/structs/GetQueueStatisticsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetQueueStatisticsRequest {
        inline app::GetQueueStatisticsRequest__Class** type_info() {
            static app::GetQueueStatisticsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetQueueStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x04722E90));
            }
            return cache;
        }
        inline app::GetQueueStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetQueueStatisticsRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "GetQueueStatisticsRequest");
        }
        inline app::GetQueueStatisticsRequest* create() {
            return il2cpp::create_object<app::GetQueueStatisticsRequest>(get_class());
        }
    } // namespace GetQueueStatisticsRequest
} // namespace app::classes::types
