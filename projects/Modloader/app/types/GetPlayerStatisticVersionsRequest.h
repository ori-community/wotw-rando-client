#pragma once
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticVersionsRequest {
        inline app::GetPlayerStatisticVersionsRequest__Class** type_info() {
            static app::GetPlayerStatisticVersionsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerStatisticVersionsRequest__Class**)(modloader::win::memory::resolve_rva(0x047741E0));
            }
            return cache;
        }
        inline app::GetPlayerStatisticVersionsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticVersionsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerStatisticVersionsRequest");
        }
        inline app::GetPlayerStatisticVersionsRequest* create() {
            return il2cpp::create_object<app::GetPlayerStatisticVersionsRequest>(get_class());
        }
    } // namespace GetPlayerStatisticVersionsRequest
} // namespace app::classes::types
