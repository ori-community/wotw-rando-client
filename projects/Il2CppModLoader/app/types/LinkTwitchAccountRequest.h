#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkTwitchAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkTwitchAccountRequest__Class** type_info;
        inline app::LinkTwitchAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkTwitchAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkTwitchAccountRequest");
        }
        inline app::LinkTwitchAccountRequest* create() {
            return il2cpp::create_object<app::LinkTwitchAccountRequest>(get_class());
        }
    } // namespace LinkTwitchAccountRequest
} // namespace app::classes::types
