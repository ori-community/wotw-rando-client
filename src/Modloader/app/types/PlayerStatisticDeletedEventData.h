#pragma once
#include <Modloader/app/structs/PlayerStatisticDeletedEventData.h>
#include <Modloader/app/structs/PlayerStatisticDeletedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStatisticDeletedEventData {
        inline app::PlayerStatisticDeletedEventData__Class** type_info() {
            static app::PlayerStatisticDeletedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerStatisticDeletedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerStatisticDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticDeletedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerStatisticDeletedEventData");
        }
        inline app::PlayerStatisticDeletedEventData* create() {
            return il2cpp::create_object<app::PlayerStatisticDeletedEventData>(get_class());
        }
    } // namespace PlayerStatisticDeletedEventData
} // namespace app::classes::types
