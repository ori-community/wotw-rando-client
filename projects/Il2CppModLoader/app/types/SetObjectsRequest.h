#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetObjectsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetObjectsRequest__Class** type_info;
        inline app::SetObjectsRequest__Class* get_class() {
            return il2cpp::get_class<app::SetObjectsRequest__Class>(type_info, "PlayFab.DataModels", "SetObjectsRequest");
        }
        inline app::SetObjectsRequest* create() {
            return il2cpp::create_object<app::SetObjectsRequest>(get_class());
        }
    } // namespace SetObjectsRequest
} // namespace app::classes::types
