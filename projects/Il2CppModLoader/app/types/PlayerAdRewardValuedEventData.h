#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
