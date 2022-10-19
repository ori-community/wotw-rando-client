#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RolePropertyValues {
        namespace {
            inline app::RolePropertyValues__Class* type_info_ref = nullptr;
        }
        inline app::RolePropertyValues__Class** type_info = &type_info_ref;
        inline app::RolePropertyValues__Class* get_class() {
            return il2cpp::get_class<app::RolePropertyValues__Class>(type_info, "PlayFab.PlayStreamModels", "RolePropertyValues");
        }
        inline app::RolePropertyValues* create() {
            return il2cpp::create_object<app::RolePropertyValues>(get_class());
        }
    } // namespace RolePropertyValues
} // namespace app::classes::types
