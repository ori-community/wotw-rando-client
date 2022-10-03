#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabWebRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabWebRequest__Class** type_info;
        inline app::PlayFabWebRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayFabWebRequest__Class>(type_info, "PlayFab.Internal", "PlayFabWebRequest");
        }
        inline app::PlayFabWebRequest* create() {
            return il2cpp::create_object<app::PlayFabWebRequest>(get_class());
        }
    } // namespace PlayFabWebRequest
} // namespace app::classes::types
