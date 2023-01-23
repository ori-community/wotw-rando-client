#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerAdRewardValuedEventData__Class.h>
#include <Modloader/app/structs/PlayerAdRewardValuedEventData.h>

namespace app::classes::types {
    namespace PlayerAdRewardValuedEventData {
        namespace {
            inline app::PlayerAdRewardValuedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAdRewardValuedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerAdRewardValuedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdRewardValuedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerAdRewardValuedEventData");
        }
        inline app::PlayerAdRewardValuedEventData* create() {
            return il2cpp::create_object<app::PlayerAdRewardValuedEventData>(get_class());
        }
    } // namespace PlayerAdRewardValuedEventData
} // namespace app::classes::types
