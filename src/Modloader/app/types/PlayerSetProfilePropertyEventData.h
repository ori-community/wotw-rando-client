#pragma once
#include <Modloader/app/structs/PlayerSetProfilePropertyEventData.h>
#include <Modloader/app/structs/PlayerSetProfilePropertyEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerSetProfilePropertyEventData {
        inline app::PlayerSetProfilePropertyEventData__Class** type_info() {
            static app::PlayerSetProfilePropertyEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerSetProfilePropertyEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerSetProfilePropertyEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerSetProfilePropertyEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerSetProfilePropertyEventData");
        }
        inline app::PlayerSetProfilePropertyEventData* create() {
            return il2cpp::create_object<app::PlayerSetProfilePropertyEventData>(get_class());
        }
    } // namespace PlayerSetProfilePropertyEventData
} // namespace app::classes::types
