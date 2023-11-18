#pragma once
#include <Modloader/app/structs/GroupWithRoles__Array.h>
#include <Modloader/app/structs/GroupWithRoles__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupWithRoles__Array {
        inline app::GroupWithRoles__Array__Class** type_info() {
            static app::GroupWithRoles__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupWithRoles__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupWithRoles__Array__Class* get_class() {
            return il2cpp::get_class<app::GroupWithRoles__Array__Class>(type_info(), "PlayFab.GroupsModels", "GroupWithRoles[]");
        }
        inline app::GroupWithRoles__Array* create() {
            return il2cpp::create_object<app::GroupWithRoles__Array>(get_class());
        }
    } // namespace GroupWithRoles__Array
} // namespace app::classes::types
