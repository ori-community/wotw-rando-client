#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroupRoleUpdatedEventData__Class.h>
#include <Modloader/app/structs/GroupRoleUpdatedEventData.h>

namespace app::classes::types {
    namespace GroupRoleUpdatedEventData {
        namespace {
            inline app::GroupRoleUpdatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::GroupRoleUpdatedEventData__Class** type_info = &type_info_ref;
        inline app::GroupRoleUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleUpdatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupRoleUpdatedEventData");
        }
        inline app::GroupRoleUpdatedEventData* create() {
            return il2cpp::create_object<app::GroupRoleUpdatedEventData>(get_class());
        }
    } // namespace GroupRoleUpdatedEventData
} // namespace app::classes::types
