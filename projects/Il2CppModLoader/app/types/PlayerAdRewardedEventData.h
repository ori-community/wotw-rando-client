#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
