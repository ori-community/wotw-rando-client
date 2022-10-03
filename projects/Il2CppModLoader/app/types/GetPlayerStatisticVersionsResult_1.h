#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticVersionsResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerStatisticVersionsResult_1__Class** type_info;
        inline app::GetPlayerStatisticVersionsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticVersionsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerStatisticVersionsResult");
        }
        inline app::GetPlayerStatisticVersionsResult_1* create() {
            return il2cpp::create_object<app::GetPlayerStatisticVersionsResult_1>(get_class());
        }
    } // namespace GetPlayerStatisticVersionsResult_1
} // namespace app::classes::types
