#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupRoleMembersAddedEventData {
        namespace {
            app::GroupRoleMembersAddedEventData__Class* type_info_ref = nullptr;
        }
        app::GroupRoleMembersAddedEventData__Class** type_info = &type_info_ref;
        inline app::GroupRoleMembersAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleMembersAddedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupRoleMembersAddedEventData");
        }
        inline app::GroupRoleMembersAddedEventData* create() {
            return il2cpp::create_object<app::GroupRoleMembersAddedEventData>(get_class());
        }
    } // namespace GroupRoleMembersAddedEventData
} // namespace app::classes::types
