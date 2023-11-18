#pragma once
#include <Modloader/app/structs/GroupRoleMembersRemovedEventData.h>
#include <Modloader/app/structs/GroupRoleMembersRemovedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupRoleMembersRemovedEventData {
        inline app::GroupRoleMembersRemovedEventData__Class** type_info() {
            static app::GroupRoleMembersRemovedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupRoleMembersRemovedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupRoleMembersRemovedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleMembersRemovedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupRoleMembersRemovedEventData");
        }
        inline app::GroupRoleMembersRemovedEventData* create() {
            return il2cpp::create_object<app::GroupRoleMembersRemovedEventData>(get_class());
        }
    } // namespace GroupRoleMembersRemovedEventData
} // namespace app::classes::types
