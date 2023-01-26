#pragma once
#include <Modloader/app/structs/PlayerStatisticChangedEventData.h>
#include <Modloader/app/structs/PlayerStatisticChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStatisticChangedEventData {
        inline app::PlayerStatisticChangedEventData__Class** type_info() {
            static app::PlayerStatisticChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerStatisticChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerStatisticChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerStatisticChangedEventData");
        }
        inline app::PlayerStatisticChangedEventData* create() {
            return il2cpp::create_object<app::PlayerStatisticChangedEventData>(get_class());
        }
    } // namespace PlayerStatisticChangedEventData
} // namespace app::classes::types
