#pragma once
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdatePlayerStatisticsRequest {
        inline app::UpdatePlayerStatisticsRequest__Class** type_info() {
            static app::UpdatePlayerStatisticsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdatePlayerStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x0472E408));
            }
            return cache;
        }
        inline app::UpdatePlayerStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdatePlayerStatisticsRequest__Class>(type_info(), "PlayFab.ClientModels", "UpdatePlayerStatisticsRequest");
        }
        inline app::UpdatePlayerStatisticsRequest* create() {
            return il2cpp::create_object<app::UpdatePlayerStatisticsRequest>(get_class());
        }
    } // namespace UpdatePlayerStatisticsRequest
} // namespace app::classes::types
