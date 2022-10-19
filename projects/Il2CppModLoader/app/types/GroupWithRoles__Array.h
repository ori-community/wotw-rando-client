#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroupWithRoles__Array {
        namespace {
            inline app::GroupWithRoles__Array__Class* type_info_ref = nullptr;
        }
        inline app::GroupWithRoles__Array__Class** type_info = &type_info_ref;
        inline app::GroupWithRoles__Array__Class* get_class() {
            return il2cpp::get_class<app::GroupWithRoles__Array__Class>(type_info, "PlayFab.GroupsModels", "GroupWithRoles[]");
        }
        inline app::GroupWithRoles__Array* create() {
            return il2cpp::create_object<app::GroupWithRoles__Array>(get_class());
        }
    } // namespace GroupWithRoles__Array
} // namespace app::classes::types
