#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupRoleCreatedEventData {
        namespace {
            app::GroupRoleCreatedEventData__Class* type_info_ref = nullptr;
        }
        app::GroupRoleCreatedEventData__Class** type_info = &type_info_ref;
        inline app::GroupRoleCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleCreatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupRoleCreatedEventData");
        }
        inline app::GroupRoleCreatedEventData* create() {
            return il2cpp::create_object<app::GroupRoleCreatedEventData>(get_class());
        }
    } // namespace GroupRoleCreatedEventData
} // namespace app::classes::types
