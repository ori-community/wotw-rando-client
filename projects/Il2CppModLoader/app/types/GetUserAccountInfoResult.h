#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetUserAccountInfoResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetUserAccountInfoResult__Class** type_info;
        inline app::GetUserAccountInfoResult__Class* get_class() {
            return il2cpp::get_class<app::GetUserAccountInfoResult__Class>(type_info, "PlayFab.ServerModels", "GetUserAccountInfoResult");
        }
        inline app::GetUserAccountInfoResult* create() {
            return il2cpp::create_object<app::GetUserAccountInfoResult>(get_class());
        }
    } // namespace GetUserAccountInfoResult
} // namespace app::classes::types
