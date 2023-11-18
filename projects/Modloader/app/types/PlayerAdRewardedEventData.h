#pragma once
#include <Modloader/app/structs/PlayerAdRewardedEventData.h>
#include <Modloader/app/structs/PlayerAdRewardedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAdRewardedEventData {
        inline app::PlayerAdRewardedEventData__Class** type_info() {
            static app::PlayerAdRewardedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerAdRewardedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerAdRewardedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdRewardedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerAdRewardedEventData");
        }
        inline app::PlayerAdRewardedEventData* create() {
            return il2cpp::create_object<app::PlayerAdRewardedEventData>(get_class());
        }
    } // namespace PlayerAdRewardedEventData
} // namespace app::classes::types
