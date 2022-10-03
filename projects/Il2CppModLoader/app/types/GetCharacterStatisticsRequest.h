#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterStatisticsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterStatisticsRequest__Class** type_info;
        inline app::GetCharacterStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterStatisticsRequest__Class>(type_info, "PlayFab.ClientModels", "GetCharacterStatisticsRequest");
        }
        inline app::GetCharacterStatisticsRequest* create() {
            return il2cpp::create_object<app::GetCharacterStatisticsRequest>(get_class());
        }
    } // namespace GetCharacterStatisticsRequest
} // namespace app::classes::types
