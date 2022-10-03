#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetAccountInfoResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetAccountInfoResult__Class** type_info;
        inline app::GetAccountInfoResult__Class* get_class() {
            return il2cpp::get_class<app::GetAccountInfoResult__Class>(type_info, "PlayFab.ClientModels", "GetAccountInfoResult");
        }
        inline app::GetAccountInfoResult* create() {
            return il2cpp::create_object<app::GetAccountInfoResult>(get_class());
        }
    } // namespace GetAccountInfoResult
} // namespace app::classes::types
