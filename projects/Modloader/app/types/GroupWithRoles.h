#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroupWithRoles {
        namespace {
            inline app::GroupWithRoles__Class* type_info_ref = nullptr;
        }
        inline app::GroupWithRoles__Class** type_info = &type_info_ref;
        inline app::GroupWithRoles__Class* get_class() {
            return il2cpp::get_class<app::GroupWithRoles__Class>(type_info, "PlayFab.GroupsModels", "GroupWithRoles");
        }
        inline app::GroupWithRoles* create() {
            return il2cpp::create_object<app::GroupWithRoles>(get_class());
        }
        inline app::GroupWithRoles__Array* create_array(int size) {
            return il2cpp::array_new<app::GroupWithRoles__Array>(get_class(), size);
        }
        inline app::GroupWithRoles__Array* create_array(const std::vector<app::GroupWithRoles*>& items) {
            return il2cpp::array_new<app::GroupWithRoles__Array>(get_class(), items);
        }
    } // namespace GroupWithRoles
} // namespace app::classes::types
