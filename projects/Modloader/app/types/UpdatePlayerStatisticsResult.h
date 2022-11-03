#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdatePlayerStatisticsResult {
        inline app::UpdatePlayerStatisticsResult__Class** type_info = (app::UpdatePlayerStatisticsResult__Class**)(modloader::win::memory::resolve_rva(0x047480E0));
        inline app::UpdatePlayerStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::UpdatePlayerStatisticsResult__Class>(type_info, "PlayFab.ClientModels", "UpdatePlayerStatisticsResult");
        }
        inline app::UpdatePlayerStatisticsResult* create() {
            return il2cpp::create_object<app::UpdatePlayerStatisticsResult>(get_class());
        }
    } // namespace UpdatePlayerStatisticsResult
} // namespace app::classes::types
