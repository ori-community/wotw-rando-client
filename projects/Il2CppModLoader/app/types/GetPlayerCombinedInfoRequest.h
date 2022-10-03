#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerCombinedInfoRequest__Class** type_info;
        inline app::GetPlayerCombinedInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerCombinedInfoRequest");
        }
        inline app::GetPlayerCombinedInfoRequest* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoRequest>(get_class());
        }
    } // namespace GetPlayerCombinedInfoRequest
} // namespace app::classes::types
