#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerChangedAvatarEventData {
        namespace {
            app::PlayerChangedAvatarEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerChangedAvatarEventData__Class** type_info = &type_info_ref;
        inline app::PlayerChangedAvatarEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerChangedAvatarEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerChangedAvatarEventData");
        }
        inline app::PlayerChangedAvatarEventData* create() {
            return il2cpp::create_object<app::PlayerChangedAvatarEventData>(get_class());
        }
    } // namespace PlayerChangedAvatarEventData
} // namespace app::classes::types
