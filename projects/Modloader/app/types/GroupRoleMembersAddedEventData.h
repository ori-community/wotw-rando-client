#pragma once
#include <Modloader/app/structs/GroupRoleMembersAddedEventData.h>
#include <Modloader/app/structs/GroupRoleMembersAddedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupRoleMembersAddedEventData {
        inline app::GroupRoleMembersAddedEventData__Class** type_info() {
            static app::GroupRoleMembersAddedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupRoleMembersAddedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupRoleMembersAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleMembersAddedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupRoleMembersAddedEventData");
        }
        inline app::GroupRoleMembersAddedEventData* create() {
            return il2cpp::create_object<app::GroupRoleMembersAddedEventData>(get_class());
        }
    } // namespace GroupRoleMembersAddedEventData
} // namespace app::classes::types
