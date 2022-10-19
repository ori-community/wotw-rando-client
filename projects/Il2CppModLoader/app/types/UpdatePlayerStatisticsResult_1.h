#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdatePlayerStatisticsResult_1 {
        inline app::UpdatePlayerStatisticsResult_1__Class** type_info = (app::UpdatePlayerStatisticsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04769940));
        inline app::UpdatePlayerStatisticsResult_1__Class* get_class() {
            return il2cpp::get_class<app::UpdatePlayerStatisticsResult_1__Class>(type_info, "PlayFab.ServerModels", "UpdatePlayerStatisticsResult");
        }
        inline app::UpdatePlayerStatisticsResult_1* create() {
            return il2cpp::create_object<app::UpdatePlayerStatisticsResult_1>(get_class());
        }
    } // namespace UpdatePlayerStatisticsResult_1
} // namespace app::classes::types
