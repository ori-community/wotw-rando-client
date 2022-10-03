#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupInvitation__Array {
        namespace {
            app::GroupInvitation__Array__Class* type_info_ref = nullptr;
        }
        app::GroupInvitation__Array__Class** type_info = &type_info_ref;
        inline app::GroupInvitation__Array__Class* get_class() {
            return il2cpp::get_class<app::GroupInvitation__Array__Class>(type_info, "PlayFab.GroupsModels", "GroupInvitation[]");
        }
        inline app::GroupInvitation__Array* create() {
            return il2cpp::create_object<app::GroupInvitation__Array>(get_class());
        }
    } // namespace GroupInvitation__Array
} // namespace app::classes::types
