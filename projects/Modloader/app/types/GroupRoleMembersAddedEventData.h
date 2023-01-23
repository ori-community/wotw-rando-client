#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroupRoleMembersAddedEventData__Class.h>
#include <Modloader/app/structs/GroupRoleMembersAddedEventData.h>

namespace app::classes::types {
    namespace GroupRoleMembersAddedEventData {
        namespace {
            inline app::GroupRoleMembersAddedEventData__Class* type_info_ref = nullptr;
        }
        inline app::GroupRoleMembersAddedEventData__Class** type_info = &type_info_ref;
        inline app::GroupRoleMembersAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleMembersAddedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupRoleMembersAddedEventData");
        }
        inline app::GroupRoleMembersAddedEventData* create() {
            return il2cpp::create_object<app::GroupRoleMembersAddedEventData>(get_class());
        }
    } // namespace GroupRoleMembersAddedEventData
} // namespace app::classes::types
