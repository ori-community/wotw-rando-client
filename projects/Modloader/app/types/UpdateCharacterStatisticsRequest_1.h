#pragma once
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest_1.h>
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterStatisticsRequest_1 {
        inline app::UpdateCharacterStatisticsRequest_1__Class** type_info() {
            static app::UpdateCharacterStatisticsRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateCharacterStatisticsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04794DB8));
            }
            return cache;
        }
        inline app::UpdateCharacterStatisticsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterStatisticsRequest_1__Class>(type_info(), "PlayFab.ServerModels", "UpdateCharacterStatisticsRequest");
        }
        inline app::UpdateCharacterStatisticsRequest_1* create() {
            return il2cpp::create_object<app::UpdateCharacterStatisticsRequest_1>(get_class());
        }
    } // namespace UpdateCharacterStatisticsRequest_1
} // namespace app::classes::types
