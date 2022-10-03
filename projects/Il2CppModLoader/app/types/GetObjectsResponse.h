#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetObjectsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetObjectsResponse__Class** type_info;
        inline app::GetObjectsResponse__Class* get_class() {
            return il2cpp::get_class<app::GetObjectsResponse__Class>(type_info, "PlayFab.DataModels", "GetObjectsResponse");
        }
        inline app::GetObjectsResponse* create() {
            return il2cpp::create_object<app::GetObjectsResponse>(get_class());
        }
    } // namespace GetObjectsResponse
} // namespace app::classes::types
