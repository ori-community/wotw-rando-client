#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkKongregateAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkKongregateAccountRequest__Class** type_info;
        inline app::LinkKongregateAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkKongregateAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkKongregateAccountRequest");
        }
        inline app::LinkKongregateAccountRequest* create() {
            return il2cpp::create_object<app::LinkKongregateAccountRequest>(get_class());
        }
    } // namespace LinkKongregateAccountRequest
} // namespace app::classes::types
