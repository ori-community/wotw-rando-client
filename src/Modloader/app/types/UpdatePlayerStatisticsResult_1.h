#pragma once
#include <Modloader/app/structs/UpdatePlayerStatisticsResult_1.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdatePlayerStatisticsResult_1 {
        inline app::UpdatePlayerStatisticsResult_1__Class** type_info() {
            static app::UpdatePlayerStatisticsResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdatePlayerStatisticsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04769940));
            }
            return cache;
        }
        inline app::UpdatePlayerStatisticsResult_1__Class* get_class() {
            return il2cpp::get_class<app::UpdatePlayerStatisticsResult_1__Class>(type_info(), "PlayFab.ServerModels", "UpdatePlayerStatisticsResult");
        }
        inline app::UpdatePlayerStatisticsResult_1* create() {
            return il2cpp::create_object<app::UpdatePlayerStatisticsResult_1>(get_class());
        }
    } // namespace UpdatePlayerStatisticsResult_1
} // namespace app::classes::types
