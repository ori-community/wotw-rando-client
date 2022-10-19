#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerStatisticsRequest {
        inline app::GetPlayerStatisticsRequest__Class** type_info = (app::GetPlayerStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x04793250));
        inline app::GetPlayerStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerStatisticsRequest");
        }
        inline app::GetPlayerStatisticsRequest* create() {
            return il2cpp::create_object<app::GetPlayerStatisticsRequest>(get_class());
        }
    } // namespace GetPlayerStatisticsRequest
} // namespace app::classes::types
