#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerTagsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerTagsRequest__Class** type_info;
        inline app::GetPlayerTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTagsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerTagsRequest");
        }
        inline app::GetPlayerTagsRequest* create() {
            return il2cpp::create_object<app::GetPlayerTagsRequest>(get_class());
        }
    } // namespace GetPlayerTagsRequest
} // namespace app::classes::types
