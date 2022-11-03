#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdatePlayerStatisticsRequest {
        inline app::UpdatePlayerStatisticsRequest__Class** type_info = (app::UpdatePlayerStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x0472E408));
        inline app::UpdatePlayerStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdatePlayerStatisticsRequest__Class>(type_info, "PlayFab.ClientModels", "UpdatePlayerStatisticsRequest");
        }
        inline app::UpdatePlayerStatisticsRequest* create() {
            return il2cpp::create_object<app::UpdatePlayerStatisticsRequest>(get_class());
        }
    } // namespace UpdatePlayerStatisticsRequest
} // namespace app::classes::types
