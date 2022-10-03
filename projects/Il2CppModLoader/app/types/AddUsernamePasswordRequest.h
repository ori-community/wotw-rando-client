#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddUsernamePasswordRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddUsernamePasswordRequest__Class** type_info;
        inline app::AddUsernamePasswordRequest__Class* get_class() {
            return il2cpp::get_class<app::AddUsernamePasswordRequest__Class>(type_info, "PlayFab.ClientModels", "AddUsernamePasswordRequest");
        }
        inline app::AddUsernamePasswordRequest* create() {
            return il2cpp::create_object<app::AddUsernamePasswordRequest>(get_class());
        }
    } // namespace AddUsernamePasswordRequest
} // namespace app::classes::types
