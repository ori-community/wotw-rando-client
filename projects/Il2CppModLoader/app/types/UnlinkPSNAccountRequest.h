#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkPSNAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkPSNAccountRequest__Class** type_info;
        inline app::UnlinkPSNAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkPSNAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkPSNAccountRequest");
        }
        inline app::UnlinkPSNAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkPSNAccountRequest>(get_class());
        }
    } // namespace UnlinkPSNAccountRequest
} // namespace app::classes::types
