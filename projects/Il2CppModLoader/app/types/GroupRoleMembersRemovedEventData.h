#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupRoleMembersRemovedEventData {
        namespace {
            app::GroupRoleMembersRemovedEventData__Class* type_info_ref = nullptr;
        }
        app::GroupRoleMembersRemovedEventData__Class** type_info = &type_info_ref;
        inline app::GroupRoleMembersRemovedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleMembersRemovedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupRoleMembersRemovedEventData");
        }
        inline app::GroupRoleMembersRemovedEventData* create() {
            return il2cpp::create_object<app::GroupRoleMembersRemovedEventData>(get_class());
        }
    } // namespace GroupRoleMembersRemovedEventData
} // namespace app::classes::types
