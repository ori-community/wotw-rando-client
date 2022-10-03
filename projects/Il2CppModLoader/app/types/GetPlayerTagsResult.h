#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerTagsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerTagsResult__Class** type_info;
        inline app::GetPlayerTagsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTagsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayerTagsResult");
        }
        inline app::GetPlayerTagsResult* create() {
            return il2cpp::create_object<app::GetPlayerTagsResult>(get_class());
        }
    } // namespace GetPlayerTagsResult
} // namespace app::classes::types
