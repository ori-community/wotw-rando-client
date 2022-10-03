#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateUserTitleDisplayNameRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateUserTitleDisplayNameRequest__Class** type_info;
        inline app::UpdateUserTitleDisplayNameRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserTitleDisplayNameRequest__Class>(type_info, "PlayFab.ClientModels", "UpdateUserTitleDisplayNameRequest");
        }
        inline app::UpdateUserTitleDisplayNameRequest* create() {
            return il2cpp::create_object<app::UpdateUserTitleDisplayNameRequest>(get_class());
        }
    } // namespace UpdateUserTitleDisplayNameRequest
} // namespace app::classes::types
