#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetAccountInfoRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetAccountInfoRequest__Class** type_info;
        inline app::GetAccountInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::GetAccountInfoRequest__Class>(type_info, "PlayFab.ClientModels", "GetAccountInfoRequest");
        }
        inline app::GetAccountInfoRequest* create() {
            return il2cpp::create_object<app::GetAccountInfoRequest>(get_class());
        }
    } // namespace GetAccountInfoRequest
} // namespace app::classes::types
