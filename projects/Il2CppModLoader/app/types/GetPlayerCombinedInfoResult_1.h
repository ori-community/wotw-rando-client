#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerCombinedInfoResult_1__Class** type_info;
        inline app::GetPlayerCombinedInfoResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerCombinedInfoResult");
        }
        inline app::GetPlayerCombinedInfoResult_1* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoResult_1>(get_class());
        }
    } // namespace GetPlayerCombinedInfoResult_1
} // namespace app::classes::types
