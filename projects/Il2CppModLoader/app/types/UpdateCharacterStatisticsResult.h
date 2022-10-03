#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterStatisticsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateCharacterStatisticsResult__Class** type_info;
        inline app::UpdateCharacterStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterStatisticsResult__Class>(type_info, "PlayFab.ClientModels", "UpdateCharacterStatisticsResult");
        }
        inline app::UpdateCharacterStatisticsResult* create() {
            return il2cpp::create_object<app::UpdateCharacterStatisticsResult>(get_class());
        }
    } // namespace UpdateCharacterStatisticsResult
} // namespace app::classes::types
