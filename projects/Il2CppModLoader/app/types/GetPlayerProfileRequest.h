#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerProfileRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerProfileRequest__Class** type_info;
        inline app::GetPlayerProfileRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerProfileRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerProfileRequest");
        }
        inline app::GetPlayerProfileRequest* create() {
            return il2cpp::create_object<app::GetPlayerProfileRequest>(get_class());
        }
    } // namespace GetPlayerProfileRequest
} // namespace app::classes::types
