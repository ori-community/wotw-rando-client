#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetObjectsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetObjectsRequest__Class** type_info;
        inline app::GetObjectsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetObjectsRequest__Class>(type_info, "PlayFab.DataModels", "GetObjectsRequest");
        }
        inline app::GetObjectsRequest* create() {
            return il2cpp::create_object<app::GetObjectsRequest>(get_class());
        }
    } // namespace GetObjectsRequest
} // namespace app::classes::types
