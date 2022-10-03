#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AvatarIKGoal__Enum {
        namespace {
            app::AvatarIKGoal__Enum__Class* type_info_ref = nullptr;
        }
        app::AvatarIKGoal__Enum__Class** type_info = &type_info_ref;
        inline app::AvatarIKGoal__Enum__Class* get_class() {
            return il2cpp::get_class<app::AvatarIKGoal__Enum__Class>(type_info, "UnityEngine", "AvatarIKGoal");
        }
        inline app::AvatarIKGoal__Enum* create() {
            return il2cpp::create_object<app::AvatarIKGoal__Enum>(get_class());
        }
    } // namespace AvatarIKGoal__Enum
} // namespace app::classes::types
