#pragma once
#include <Modloader/app/structs/GroupRoleDeletedEventData.h>
#include <Modloader/app/structs/GroupRoleDeletedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupRoleDeletedEventData {
        inline app::GroupRoleDeletedEventData__Class** type_info() {
            static app::GroupRoleDeletedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupRoleDeletedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupRoleDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleDeletedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupRoleDeletedEventData");
        }
        inline app::GroupRoleDeletedEventData* create() {
            return il2cpp::create_object<app::GroupRoleDeletedEventData>(get_class());
        }
    } // namespace GroupRoleDeletedEventData
} // namespace app::classes::types
