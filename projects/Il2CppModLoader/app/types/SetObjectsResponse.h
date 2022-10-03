#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetObjectsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetObjectsResponse__Class** type_info;
        inline app::SetObjectsResponse__Class* get_class() {
            return il2cpp::get_class<app::SetObjectsResponse__Class>(type_info, "PlayFab.DataModels", "SetObjectsResponse");
        }
        inline app::SetObjectsResponse* create() {
            return il2cpp::create_object<app::SetObjectsResponse>(get_class());
        }
    } // namespace SetObjectsResponse
} // namespace app::classes::types
