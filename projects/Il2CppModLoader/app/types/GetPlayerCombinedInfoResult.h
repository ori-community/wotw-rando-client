#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerCombinedInfoResult__Class** type_info;
        inline app::GetPlayerCombinedInfoResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayerCombinedInfoResult");
        }
        inline app::GetPlayerCombinedInfoResult* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoResult>(get_class());
        }
    } // namespace GetPlayerCombinedInfoResult
} // namespace app::classes::types
