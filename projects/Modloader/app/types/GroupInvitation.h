#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroupInvitation__Class.h>
#include <Modloader/app/structs/GroupInvitation.h>
#include <Modloader/app/structs/GroupInvitation__Array.h>

namespace app::classes::types {
    namespace GroupInvitation {
        namespace {
            inline app::GroupInvitation__Class* type_info_ref = nullptr;
        }
        inline app::GroupInvitation__Class** type_info = &type_info_ref;
        inline app::GroupInvitation__Class* get_class() {
            return il2cpp::get_class<app::GroupInvitation__Class>(type_info, "PlayFab.GroupsModels", "GroupInvitation");
        }
        inline app::GroupInvitation* create() {
            return il2cpp::create_object<app::GroupInvitation>(get_class());
        }
        inline app::GroupInvitation__Array* create_array(int size) {
            return il2cpp::array_new<app::GroupInvitation__Array>(get_class(), size);
        }
        inline app::GroupInvitation__Array* create_array(const std::vector<app::GroupInvitation*>& items) {
            return il2cpp::array_new<app::GroupInvitation__Array>(get_class(), items);
        }
    } // namespace GroupInvitation
} // namespace app::classes::types
