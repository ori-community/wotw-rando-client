#pragma once
#include <Modloader/app/structs/GetPlayerStatisticsResult_1.h>
#include <Modloader/app/structs/GetPlayerStatisticsResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerStatisticsResult_1 {
        inline app::GetPlayerStatisticsResult_1__Class** type_info() {
            static app::GetPlayerStatisticsResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerStatisticsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04721BC8));
            }
            return cache;
        }
        inline app::GetPlayerStatisticsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticsResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayerStatisticsResult");
        }
        inline app::GetPlayerStatisticsResult_1* create() {
            return il2cpp::create_object<app::GetPlayerStatisticsResult_1>(get_class());
        }
    } // namespace GetPlayerStatisticsResult_1
} // namespace app::classes::types
