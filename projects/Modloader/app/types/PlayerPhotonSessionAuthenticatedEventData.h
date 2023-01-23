#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerPhotonSessionAuthenticatedEventData__Class.h>
#include <Modloader/app/structs/PlayerPhotonSessionAuthenticatedEventData.h>

namespace app::classes::types {
    namespace PlayerPhotonSessionAuthenticatedEventData {
        namespace {
            inline app::PlayerPhotonSessionAuthenticatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerPhotonSessionAuthenticatedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerPhotonSessionAuthenticatedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerPhotonSessionAuthenticatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerPhotonSessionAuthenticatedEventData");
        }
        inline app::PlayerPhotonSessionAuthenticatedEventData* create() {
            return il2cpp::create_object<app::PlayerPhotonSessionAuthenticatedEventData>(get_class());
        }
    } // namespace PlayerPhotonSessionAuthenticatedEventData
} // namespace app::classes::types
