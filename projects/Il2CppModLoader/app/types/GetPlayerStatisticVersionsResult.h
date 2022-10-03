#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticVersionsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerStatisticVersionsResult__Class** type_info;
        inline app::GetPlayerStatisticVersionsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticVersionsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayerStatisticVersionsResult");
        }
        inline app::GetPlayerStatisticVersionsResult* create() {
            return il2cpp::create_object<app::GetPlayerStatisticVersionsResult>(get_class());
        }
    } // namespace GetPlayerStatisticVersionsResult
} // namespace app::classes::types
