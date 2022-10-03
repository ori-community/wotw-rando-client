#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetSharedGroupDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetSharedGroupDataRequest__Class** type_info;
        inline app::GetSharedGroupDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetSharedGroupDataRequest__Class>(type_info, "PlayFab.ClientModels", "GetSharedGroupDataRequest");
        }
        inline app::GetSharedGroupDataRequest* create() {
            return il2cpp::create_object<app::GetSharedGroupDataRequest>(get_class());
        }
    } // namespace GetSharedGroupDataRequest
} // namespace app::classes::types
