#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerPhotonSessionAuthenticatedEventData {
        namespace {
            app::PlayerPhotonSessionAuthenticatedEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerPhotonSessionAuthenticatedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerPhotonSessionAuthenticatedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerPhotonSessionAuthenticatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerPhotonSessionAuthenticatedEventData");
        }
        inline app::PlayerPhotonSessionAuthenticatedEventData* create() {
            return il2cpp::create_object<app::PlayerPhotonSessionAuthenticatedEventData>(get_class());
        }
    } // namespace PlayerPhotonSessionAuthenticatedEventData
} // namespace app::classes::types
