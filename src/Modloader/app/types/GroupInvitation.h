#pragma once
#include <Modloader/app/structs/GroupInvitation.h>
#include <Modloader/app/structs/GroupInvitation__Array.h>
#include <Modloader/app/structs/GroupInvitation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupInvitation {
        inline app::GroupInvitation__Class** type_info() {
            static app::GroupInvitation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupInvitation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupInvitation__Class* get_class() {
            return il2cpp::get_class<app::GroupInvitation__Class>(type_info(), "PlayFab.GroupsModels", "GroupInvitation");
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
