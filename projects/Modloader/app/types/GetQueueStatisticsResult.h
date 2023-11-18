#pragma once
#include <Modloader/app/structs/GetQueueStatisticsResult.h>
#include <Modloader/app/structs/GetQueueStatisticsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetQueueStatisticsResult {
        inline app::GetQueueStatisticsResult__Class** type_info() {
            static app::GetQueueStatisticsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetQueueStatisticsResult__Class**)(modloader::win::memory::resolve_rva(0x04704E20));
            }
            return cache;
        }
        inline app::GetQueueStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::GetQueueStatisticsResult__Class>(type_info(), "PlayFab.MultiplayerModels", "GetQueueStatisticsResult");
        }
        inline app::GetQueueStatisticsResult* create() {
            return il2cpp::create_object<app::GetQueueStatisticsResult>(get_class());
        }
    } // namespace GetQueueStatisticsResult
} // namespace app::classes::types
