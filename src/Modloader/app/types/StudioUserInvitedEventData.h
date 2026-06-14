#pragma once
#include <Modloader/app/structs/StudioUserInvitedEventData.h>
#include <Modloader/app/structs/StudioUserInvitedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StudioUserInvitedEventData {
        inline app::StudioUserInvitedEventData__Class** type_info() {
            static app::StudioUserInvitedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StudioUserInvitedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StudioUserInvitedEventData__Class* get_class() {
            return il2cpp::get_class<app::StudioUserInvitedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "StudioUserInvitedEventData");
        }
        inline app::StudioUserInvitedEventData* create() {
            return il2cpp::create_object<app::StudioUserInvitedEventData>(get_class());
        }
    } // namespace StudioUserInvitedEventData
} // namespace app::classes::types
