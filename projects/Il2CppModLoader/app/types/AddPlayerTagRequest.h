#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddPlayerTagRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddPlayerTagRequest__Class** type_info;
        inline app::AddPlayerTagRequest__Class* get_class() {
            return il2cpp::get_class<app::AddPlayerTagRequest__Class>(type_info, "PlayFab.ServerModels", "AddPlayerTagRequest");
        }
        inline app::AddPlayerTagRequest* create() {
            return il2cpp::create_object<app::AddPlayerTagRequest>(get_class());
        }
    } // namespace AddPlayerTagRequest
} // namespace app::classes::types
