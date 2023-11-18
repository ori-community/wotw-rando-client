#pragma once
#include <Modloader/app/structs/GetPlayerStatisticsRequest.h>
#include <Modloader/app/structs/GetPlayerStatisticsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticsRequest {
        inline app::GetPlayerStatisticsRequest__Class** type_info() {
            static app::GetPlayerStatisticsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x04793250));
            }
            return cache;
        }
        inline app::GetPlayerStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerStatisticsRequest");
        }
        inline app::GetPlayerStatisticsRequest* create() {
            return il2cpp::create_object<app::GetPlayerStatisticsRequest>(get_class());
        }
    } // namespace GetPlayerStatisticsRequest
} // namespace app::classes::types
