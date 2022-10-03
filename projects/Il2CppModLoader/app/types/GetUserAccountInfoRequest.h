#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetUserAccountInfoRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetUserAccountInfoRequest__Class** type_info;
        inline app::GetUserAccountInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::GetUserAccountInfoRequest__Class>(type_info, "PlayFab.ServerModels", "GetUserAccountInfoRequest");
        }
        inline app::GetUserAccountInfoRequest* create() {
            return il2cpp::create_object<app::GetUserAccountInfoRequest>(get_class());
        }
    } // namespace GetUserAccountInfoRequest
} // namespace app::classes::types
