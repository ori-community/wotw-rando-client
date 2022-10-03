#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateAvatarUrlRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateAvatarUrlRequest__Class** type_info;
        inline app::UpdateAvatarUrlRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateAvatarUrlRequest__Class>(type_info, "PlayFab.ClientModels", "UpdateAvatarUrlRequest");
        }
        inline app::UpdateAvatarUrlRequest* create() {
            return il2cpp::create_object<app::UpdateAvatarUrlRequest>(get_class());
        }
    } // namespace UpdateAvatarUrlRequest
} // namespace app::classes::types
