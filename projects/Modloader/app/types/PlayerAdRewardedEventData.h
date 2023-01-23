#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerAdRewardedEventData__Class.h>
#include <Modloader/app/structs/PlayerAdRewardedEventData.h>

namespace app::classes::types {
    namespace PlayerAdRewardedEventData {
        namespace {
            inline app::PlayerAdRewardedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAdRewardedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerAdRewardedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdRewardedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerAdRewardedEventData");
        }
        inline app::PlayerAdRewardedEventData* create() {
            return il2cpp::create_object<app::PlayerAdRewardedEventData>(get_class());
        }
    } // namespace PlayerAdRewardedEventData
} // namespace app::classes::types
