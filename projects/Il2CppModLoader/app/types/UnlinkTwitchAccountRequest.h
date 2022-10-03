#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkTwitchAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkTwitchAccountRequest__Class** type_info;
        inline app::UnlinkTwitchAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkTwitchAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkTwitchAccountRequest");
        }
        inline app::UnlinkTwitchAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkTwitchAccountRequest>(get_class());
        }
    } // namespace UnlinkTwitchAccountRequest
} // namespace app::classes::types
