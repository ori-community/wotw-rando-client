#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroupRoleCreatedEventData {
        namespace {
            inline app::GroupRoleCreatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::GroupRoleCreatedEventData__Class** type_info = &type_info_ref;
        inline app::GroupRoleCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleCreatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupRoleCreatedEventData");
        }
        inline app::GroupRoleCreatedEventData* create() {
            return il2cpp::create_object<app::GroupRoleCreatedEventData>(get_class());
        }
    } // namespace GroupRoleCreatedEventData
} // namespace app::classes::types
