#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkKongregateAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkKongregateAccountRequest__Class** type_info;
        inline app::UnlinkKongregateAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkKongregateAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkKongregateAccountRequest");
        }
        inline app::UnlinkKongregateAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkKongregateAccountRequest>(get_class());
        }
    } // namespace UnlinkKongregateAccountRequest
} // namespace app::classes::types
