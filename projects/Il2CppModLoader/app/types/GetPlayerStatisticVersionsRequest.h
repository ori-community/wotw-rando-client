#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticVersionsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerStatisticVersionsRequest__Class** type_info;
        inline app::GetPlayerStatisticVersionsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticVersionsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerStatisticVersionsRequest");
        }
        inline app::GetPlayerStatisticVersionsRequest* create() {
            return il2cpp::create_object<app::GetPlayerStatisticVersionsRequest>(get_class());
        }
    } // namespace GetPlayerStatisticVersionsRequest
} // namespace app::classes::types
