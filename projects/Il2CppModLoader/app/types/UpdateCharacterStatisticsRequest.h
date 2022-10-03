#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterStatisticsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateCharacterStatisticsRequest__Class** type_info;
        inline app::UpdateCharacterStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterStatisticsRequest__Class>(type_info, "PlayFab.ClientModels", "UpdateCharacterStatisticsRequest");
        }
        inline app::UpdateCharacterStatisticsRequest* create() {
            return il2cpp::create_object<app::UpdateCharacterStatisticsRequest>(get_class());
        }
    } // namespace UpdateCharacterStatisticsRequest
} // namespace app::classes::types
