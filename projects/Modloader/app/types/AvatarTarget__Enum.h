#pragma once
#include <Modloader/app/structs/AvatarTarget__Enum.h>
#include <Modloader/app/structs/AvatarTarget__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AvatarTarget__Enum {
        inline app::AvatarTarget__Enum__Class** type_info() {
            static app::AvatarTarget__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AvatarTarget__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AvatarTarget__Enum__Class* get_class() {
            return il2cpp::get_class<app::AvatarTarget__Enum__Class>(type_info(), "UnityEngine", "AvatarTarget");
        }
        inline app::AvatarTarget__Enum* create() {
            return il2cpp::create_object<app::AvatarTarget__Enum>(get_class());
        }
    } // namespace AvatarTarget__Enum
} // namespace app::classes::types
