#pragma once
#include <Modloader/app/structs/PlayerAdRewardValuedEventData.h>
#include <Modloader/app/structs/PlayerAdRewardValuedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAdRewardValuedEventData {
        inline app::PlayerAdRewardValuedEventData__Class** type_info() {
            static app::PlayerAdRewardValuedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerAdRewardValuedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerAdRewardValuedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdRewardValuedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerAdRewardValuedEventData");
        }
        inline app::PlayerAdRewardValuedEventData* create() {
            return il2cpp::create_object<app::PlayerAdRewardValuedEventData>(get_class());
        }
    } // namespace PlayerAdRewardValuedEventData
} // namespace app::classes::types
