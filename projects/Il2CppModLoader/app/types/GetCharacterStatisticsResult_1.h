#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterStatisticsResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterStatisticsResult_1__Class** type_info;
        inline app::GetCharacterStatisticsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterStatisticsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterStatisticsResult");
        }
        inline app::GetCharacterStatisticsResult_1* create() {
            return il2cpp::create_object<app::GetCharacterStatisticsResult_1>(get_class());
        }
    } // namespace GetCharacterStatisticsResult_1
} // namespace app::classes::types
