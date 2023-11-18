#pragma once
#include <Modloader/app/structs/AvatarIKGoal__Enum.h>
#include <Modloader/app/structs/AvatarIKGoal__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AvatarIKGoal__Enum {
        inline app::AvatarIKGoal__Enum__Class** type_info() {
            static app::AvatarIKGoal__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AvatarIKGoal__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AvatarIKGoal__Enum__Class* get_class() {
            return il2cpp::get_class<app::AvatarIKGoal__Enum__Class>(type_info(), "UnityEngine", "AvatarIKGoal");
        }
        inline app::AvatarIKGoal__Enum* create() {
            return il2cpp::create_object<app::AvatarIKGoal__Enum>(get_class());
        }
    } // namespace AvatarIKGoal__Enum
} // namespace app::classes::types
