#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayerStatisticsResult__Class.h>
#include <Modloader/app/structs/GetPlayerStatisticsResult.h>

namespace app::classes::types {
    namespace GetPlayerStatisticsResult {
        inline app::GetPlayerStatisticsResult__Class** type_info = (app::GetPlayerStatisticsResult__Class**)(modloader::win::memory::resolve_rva(0x04702240));
        inline app::GetPlayerStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayerStatisticsResult");
        }
        inline app::GetPlayerStatisticsResult* create() {
            return il2cpp::create_object<app::GetPlayerStatisticsResult>(get_class());
        }
    } // namespace GetPlayerStatisticsResult
} // namespace app::classes::types
