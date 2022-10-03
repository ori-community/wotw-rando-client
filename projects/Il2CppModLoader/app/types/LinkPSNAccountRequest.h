#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkPSNAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkPSNAccountRequest__Class** type_info;
        inline app::LinkPSNAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkPSNAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkPSNAccountRequest");
        }
        inline app::LinkPSNAccountRequest* create() {
            return il2cpp::create_object<app::LinkPSNAccountRequest>(get_class());
        }
    } // namespace LinkPSNAccountRequest
} // namespace app::classes::types
