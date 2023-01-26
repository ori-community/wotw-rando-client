#pragma once
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest_1.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdatePlayerStatisticsRequest_1 {
        inline app::UpdatePlayerStatisticsRequest_1__Class** type_info() {
            static app::UpdatePlayerStatisticsRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdatePlayerStatisticsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04796538));
            }
            return cache;
        }
        inline app::UpdatePlayerStatisticsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdatePlayerStatisticsRequest_1__Class>(type_info(), "PlayFab.ServerModels", "UpdatePlayerStatisticsRequest");
        }
        inline app::UpdatePlayerStatisticsRequest_1* create() {
            return il2cpp::create_object<app::UpdatePlayerStatisticsRequest_1>(get_class());
        }
    } // namespace UpdatePlayerStatisticsRequest_1
} // namespace app::classes::types
