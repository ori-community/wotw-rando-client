#pragma once
#include <Modloader/app/structs/PlayerPhotonSessionAuthenticatedEventData.h>
#include <Modloader/app/structs/PlayerPhotonSessionAuthenticatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerPhotonSessionAuthenticatedEventData {
        inline app::PlayerPhotonSessionAuthenticatedEventData__Class** type_info() {
            static app::PlayerPhotonSessionAuthenticatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerPhotonSessionAuthenticatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerPhotonSessionAuthenticatedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerPhotonSessionAuthenticatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerPhotonSessionAuthenticatedEventData");
        }
        inline app::PlayerPhotonSessionAuthenticatedEventData* create() {
            return il2cpp::create_object<app::PlayerPhotonSessionAuthenticatedEventData>(get_class());
        }
    } // namespace PlayerPhotonSessionAuthenticatedEventData
} // namespace app::classes::types
