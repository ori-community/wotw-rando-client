#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkGameCenterAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkGameCenterAccountRequest__Class** type_info;
        inline app::UnlinkGameCenterAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkGameCenterAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkGameCenterAccountRequest");
        }
        inline app::UnlinkGameCenterAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkGameCenterAccountRequest>(get_class());
        }
    } // namespace UnlinkGameCenterAccountRequest
} // namespace app::classes::types
