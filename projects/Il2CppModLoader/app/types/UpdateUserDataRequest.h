#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateUserDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateUserDataRequest__Class** type_info;
        inline app::UpdateUserDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserDataRequest__Class>(type_info, "PlayFab.ClientModels", "UpdateUserDataRequest");
        }
        inline app::UpdateUserDataRequest* create() {
            return il2cpp::create_object<app::UpdateUserDataRequest>(get_class());
        }
    } // namespace UpdateUserDataRequest
} // namespace app::classes::types
