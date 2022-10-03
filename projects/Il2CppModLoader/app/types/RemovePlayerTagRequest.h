#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemovePlayerTagRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemovePlayerTagRequest__Class** type_info;
        inline app::RemovePlayerTagRequest__Class* get_class() {
            return il2cpp::get_class<app::RemovePlayerTagRequest__Class>(type_info, "PlayFab.ServerModels", "RemovePlayerTagRequest");
        }
        inline app::RemovePlayerTagRequest* create() {
            return il2cpp::create_object<app::RemovePlayerTagRequest>(get_class());
        }
    } // namespace RemovePlayerTagRequest
} // namespace app::classes::types
