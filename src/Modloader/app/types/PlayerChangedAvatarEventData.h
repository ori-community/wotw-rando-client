#pragma once
#include <Modloader/app/structs/PlayerChangedAvatarEventData.h>
#include <Modloader/app/structs/PlayerChangedAvatarEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerChangedAvatarEventData {
        inline app::PlayerChangedAvatarEventData__Class** type_info() {
            static app::PlayerChangedAvatarEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerChangedAvatarEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerChangedAvatarEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerChangedAvatarEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerChangedAvatarEventData");
        }
        inline app::PlayerChangedAvatarEventData* create() {
            return il2cpp::create_object<app::PlayerChangedAvatarEventData>(get_class());
        }
    } // namespace PlayerChangedAvatarEventData
} // namespace app::classes::types
