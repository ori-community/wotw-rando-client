#pragma once
#include <Modloader/app/structs/GetPlayerStatisticsResult.h>
#include <Modloader/app/structs/GetPlayerStatisticsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticsResult {
        inline app::GetPlayerStatisticsResult__Class** type_info() {
            static app::GetPlayerStatisticsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerStatisticsResult__Class**)(modloader::win::memory::resolve_rva(0x04702240));
            }
            return cache;
        }
        inline app::GetPlayerStatisticsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerStatisticsResult");
        }
        inline app::GetPlayerStatisticsResult* create() {
            return il2cpp::create_object<app::GetPlayerStatisticsResult>(get_class());
        }
    } // namespace GetPlayerStatisticsResult
} // namespace app::classes::types
