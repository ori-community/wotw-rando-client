#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateSharedGroupDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateSharedGroupDataRequest__Class** type_info;
        inline app::UpdateSharedGroupDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateSharedGroupDataRequest__Class>(type_info, "PlayFab.ClientModels", "UpdateSharedGroupDataRequest");
        }
        inline app::UpdateSharedGroupDataRequest* create() {
            return il2cpp::create_object<app::UpdateSharedGroupDataRequest>(get_class());
        }
    } // namespace UpdateSharedGroupDataRequest
} // namespace app::classes::types
