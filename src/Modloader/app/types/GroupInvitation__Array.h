#pragma once
#include <Modloader/app/structs/GroupInvitation__Array.h>
#include <Modloader/app/structs/GroupInvitation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupInvitation__Array {
        inline app::GroupInvitation__Array__Class** type_info() {
            static app::GroupInvitation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupInvitation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupInvitation__Array__Class* get_class() {
            return il2cpp::get_class<app::GroupInvitation__Array__Class>(type_info(), "PlayFab.GroupsModels", "GroupInvitation[]");
        }
        inline app::GroupInvitation__Array* create() {
            return il2cpp::create_object<app::GroupInvitation__Array>(get_class());
        }
    } // namespace GroupInvitation__Array
} // namespace app::classes::types
