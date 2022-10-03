#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetUserBansRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetUserBansRequest__Class** type_info;
        inline app::GetUserBansRequest__Class* get_class() {
            return il2cpp::get_class<app::GetUserBansRequest__Class>(type_info, "PlayFab.ServerModels", "GetUserBansRequest");
        }
        inline app::GetUserBansRequest* create() {
            return il2cpp::create_object<app::GetUserBansRequest>(get_class());
        }
    } // namespace GetUserBansRequest
} // namespace app::classes::types
