#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AvatarIKHint__Enum {
        namespace {
            app::AvatarIKHint__Enum__Class* type_info_ref = nullptr;
        }
        app::AvatarIKHint__Enum__Class** type_info = &type_info_ref;
        inline app::AvatarIKHint__Enum__Class* get_class() {
            return il2cpp::get_class<app::AvatarIKHint__Enum__Class>(type_info, "UnityEngine", "AvatarIKHint");
        }
        inline app::AvatarIKHint__Enum* create() {
            return il2cpp::create_object<app::AvatarIKHint__Enum>(get_class());
        }
    } // namespace AvatarIKHint__Enum
} // namespace app::classes::types
