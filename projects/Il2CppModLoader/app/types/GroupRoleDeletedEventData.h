#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupRoleDeletedEventData {
        namespace {
            app::GroupRoleDeletedEventData__Class* type_info_ref = nullptr;
        }
        app::GroupRoleDeletedEventData__Class** type_info = &type_info_ref;
        inline app::GroupRoleDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleDeletedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupRoleDeletedEventData");
        }
        inline app::GroupRoleDeletedEventData* create() {
            return il2cpp::create_object<app::GroupRoleDeletedEventData>(get_class());
        }
    } // namespace GroupRoleDeletedEventData
} // namespace app::classes::types
