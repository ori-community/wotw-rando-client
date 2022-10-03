#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterStatisticsRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterStatisticsRequest_1__Class** type_info;
        inline app::GetCharacterStatisticsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterStatisticsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterStatisticsRequest");
        }
        inline app::GetCharacterStatisticsRequest_1* create() {
            return il2cpp::create_object<app::GetCharacterStatisticsRequest_1>(get_class());
        }
    } // namespace GetCharacterStatisticsRequest_1
} // namespace app::classes::types
