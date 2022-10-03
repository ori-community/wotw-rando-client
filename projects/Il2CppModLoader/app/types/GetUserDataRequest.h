#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetUserDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetUserDataRequest__Class** type_info;
        inline app::GetUserDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetUserDataRequest__Class>(type_info, "PlayFab.ClientModels", "GetUserDataRequest");
        }
        inline app::GetUserDataRequest* create() {
            return il2cpp::create_object<app::GetUserDataRequest>(get_class());
        }
    } // namespace GetUserDataRequest
} // namespace app::classes::types
