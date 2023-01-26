#pragma once
#include <Modloader/app/structs/PlayerBannedEventData.h>
#include <Modloader/app/structs/PlayerBannedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerBannedEventData {
        inline app::PlayerBannedEventData__Class** type_info() {
            static app::PlayerBannedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerBannedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerBannedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerBannedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerBannedEventData");
        }
        inline app::PlayerBannedEventData* create() {
            return il2cpp::create_object<app::PlayerBannedEventData>(get_class());
        }
    } // namespace PlayerBannedEventData
} // namespace app::classes::types
