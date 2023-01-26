#pragma once
#include <Modloader/app/structs/GroupRoleUpdatedEventData.h>
#include <Modloader/app/structs/GroupRoleUpdatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupRoleUpdatedEventData {
        inline app::GroupRoleUpdatedEventData__Class** type_info() {
            static app::GroupRoleUpdatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupRoleUpdatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupRoleUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleUpdatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupRoleUpdatedEventData");
        }
        inline app::GroupRoleUpdatedEventData* create() {
            return il2cpp::create_object<app::GroupRoleUpdatedEventData>(get_class());
        }
    } // namespace GroupRoleUpdatedEventData
} // namespace app::classes::types
