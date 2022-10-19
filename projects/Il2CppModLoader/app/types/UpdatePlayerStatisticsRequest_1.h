#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdatePlayerStatisticsRequest_1 {
        inline app::UpdatePlayerStatisticsRequest_1__Class** type_info = (app::UpdatePlayerStatisticsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04796538));
        inline app::UpdatePlayerStatisticsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdatePlayerStatisticsRequest_1__Class>(type_info, "PlayFab.ServerModels", "UpdatePlayerStatisticsRequest");
        }
        inline app::UpdatePlayerStatisticsRequest_1* create() {
            return il2cpp::create_object<app::UpdatePlayerStatisticsRequest_1>(get_class());
        }
    } // namespace UpdatePlayerStatisticsRequest_1
} // namespace app::classes::types
