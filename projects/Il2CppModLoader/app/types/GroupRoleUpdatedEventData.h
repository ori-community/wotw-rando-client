#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroupRoleUpdatedEventData {
        namespace {
            inline app::GroupRoleUpdatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::GroupRoleUpdatedEventData__Class** type_info = &type_info_ref;
        inline app::GroupRoleUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupRoleUpdatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupRoleUpdatedEventData");
        }
        inline app::GroupRoleUpdatedEventData* create() {
            return il2cpp::create_object<app::GroupRoleUpdatedEventData>(get_class());
        }
    } // namespace GroupRoleUpdatedEventData
} // namespace app::classes::types
