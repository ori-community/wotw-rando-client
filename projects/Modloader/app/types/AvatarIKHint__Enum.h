#pragma once
#include <Modloader/app/structs/AvatarIKHint__Enum.h>
#include <Modloader/app/structs/AvatarIKHint__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AvatarIKHint__Enum {
        inline app::AvatarIKHint__Enum__Class** type_info() {
            static app::AvatarIKHint__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AvatarIKHint__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AvatarIKHint__Enum__Class* get_class() {
            return il2cpp::get_class<app::AvatarIKHint__Enum__Class>(type_info(), "UnityEngine", "AvatarIKHint");
        }
        inline app::AvatarIKHint__Enum* create() {
            return il2cpp::create_object<app::AvatarIKHint__Enum>(get_class());
        }
    } // namespace AvatarIKHint__Enum
} // namespace app::classes::types
