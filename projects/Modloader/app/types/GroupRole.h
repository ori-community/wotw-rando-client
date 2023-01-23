#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroupRole__Class.h>
#include <Modloader/app/structs/GroupRole.h>
#include <Modloader/app/structs/GroupRole__Array.h>

namespace app::classes::types {
    namespace GroupRole {
        namespace {
            inline app::GroupRole__Class* type_info_ref = nullptr;
        }
        inline app::GroupRole__Class** type_info = &type_info_ref;
        inline app::GroupRole__Class* get_class() {
            return il2cpp::get_class<app::GroupRole__Class>(type_info, "PlayFab.GroupsModels", "GroupRole");
        }
        inline app::GroupRole* create() {
            return il2cpp::create_object<app::GroupRole>(get_class());
        }
        inline app::GroupRole__Array* create_array(int size) {
            return il2cpp::array_new<app::GroupRole__Array>(get_class(), size);
        }
        inline app::GroupRole__Array* create_array(const std::vector<app::GroupRole*>& items) {
            return il2cpp::array_new<app::GroupRole__Array>(get_class(), items);
        }
    } // namespace GroupRole
} // namespace app::classes::types
