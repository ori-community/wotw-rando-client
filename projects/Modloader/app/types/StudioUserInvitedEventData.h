#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StudioUserInvitedEventData__Class.h>
#include <Modloader/app/structs/StudioUserInvitedEventData.h>

namespace app::classes::types {
    namespace StudioUserInvitedEventData {
        namespace {
            inline app::StudioUserInvitedEventData__Class* type_info_ref = nullptr;
        }
        inline app::StudioUserInvitedEventData__Class** type_info = &type_info_ref;
        inline app::StudioUserInvitedEventData__Class* get_class() {
            return il2cpp::get_class<app::StudioUserInvitedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "StudioUserInvitedEventData");
        }
        inline app::StudioUserInvitedEventData* create() {
            return il2cpp::create_object<app::StudioUserInvitedEventData>(get_class());
        }
    } // namespace StudioUserInvitedEventData
} // namespace app::classes::types
