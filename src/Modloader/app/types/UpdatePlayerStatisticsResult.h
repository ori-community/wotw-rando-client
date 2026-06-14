#pragma once
#include <Modloader/app/structs/UpdatePlayerStatisticsResult.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdatePlayerStatisticsResult {
        inline app::UpdatePlayerStatisticsResult__Class** type_info() {
            static app::UpdatePlayerStatisticsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdatePlayerStatisticsResult__Class**)(modloader::win::memory::resolve_rva(0x047480E0));
            }
            return cache;
        }
        inline app::UpdatePlayerStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::UpdatePlayerStatisticsResult__Class>(type_info(), "PlayFab.ClientModels", "UpdatePlayerStatisticsResult");
        }
        inline app::UpdatePlayerStatisticsResult* create() {
            return il2cpp::create_object<app::UpdatePlayerStatisticsResult>(get_class());
        }
    } // namespace UpdatePlayerStatisticsResult
} // namespace app::classes::types
