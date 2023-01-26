#pragma once
#include <Modloader/app/structs/GroupRoleCreatedEventData.h>
#include <Modloader/app/structs/GroupRoleCreatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupRoleCreatedEventData {
        inline app::GroupRoleCreatedEventData__Class** type_info() {
            static app::GroupRoleCreatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupRoleCreatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupRoleCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleCreatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupRoleCreatedEventData");
        }
        inline app::GroupRoleCreatedEventData* create() {
            return il2cpp::create_object<app::GroupRoleCreatedEventData>(get_class());
        }
    } // namespace GroupRoleCreatedEventData
} // namespace app::classes::types
