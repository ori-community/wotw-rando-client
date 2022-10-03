#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateSharedGroupRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateSharedGroupRequest__Class** type_info;
        inline app::CreateSharedGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateSharedGroupRequest__Class>(type_info, "PlayFab.ClientModels", "CreateSharedGroupRequest");
        }
        inline app::CreateSharedGroupRequest* create() {
            return il2cpp::create_object<app::CreateSharedGroupRequest>(get_class());
        }
    } // namespace CreateSharedGroupRequest
} // namespace app::classes::types
