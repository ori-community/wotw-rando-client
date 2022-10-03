#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetUserBansResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetUserBansResult__Class** type_info;
        inline app::GetUserBansResult__Class* get_class() {
            return il2cpp::get_class<app::GetUserBansResult__Class>(type_info, "PlayFab.ServerModels", "GetUserBansResult");
        }
        inline app::GetUserBansResult* create() {
            return il2cpp::create_object<app::GetUserBansResult>(get_class());
        }
    } // namespace GetUserBansResult
} // namespace app::classes::types
