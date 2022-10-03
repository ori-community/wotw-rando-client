#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterStatisticsRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateCharacterStatisticsRequest_1__Class** type_info;
        inline app::UpdateCharacterStatisticsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterStatisticsRequest_1__Class>(type_info, "PlayFab.ServerModels", "UpdateCharacterStatisticsRequest");
        }
        inline app::UpdateCharacterStatisticsRequest_1* create() {
            return il2cpp::create_object<app::UpdateCharacterStatisticsRequest_1>(get_class());
        }
    } // namespace UpdateCharacterStatisticsRequest_1
} // namespace app::classes::types
