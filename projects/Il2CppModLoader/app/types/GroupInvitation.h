#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupInvitation {
        namespace {
            app::GroupInvitation__Class* type_info_ref = nullptr;
        }
        app::GroupInvitation__Class** type_info = &type_info_ref;
        inline app::GroupInvitation__Class* get_class() {
            return il2cpp::get_class<app::GroupInvitation__Class>(type_info, "PlayFab.GroupsModels", "GroupInvitation");
        }
        inline app::GroupInvitation* create() {
            return il2cpp::create_object<app::GroupInvitation>(get_class());
        }
        inline app::GroupInvitation__Array* create_array(int size) {
            return il2cpp::array_new<app::GroupInvitation__Array>(get_class(), size);
        }
    } // namespace GroupInvitation
} // namespace app::classes::types
