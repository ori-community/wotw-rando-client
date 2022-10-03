#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AvatarMask {
        namespace {
            app::AvatarMask__Class* type_info_ref = nullptr;
        }
        app::AvatarMask__Class** type_info = &type_info_ref;
        inline app::AvatarMask__Class* get_class() {
            return il2cpp::get_class<app::AvatarMask__Class>(type_info, "UnityEngine", "AvatarMask");
        }
        inline app::AvatarMask* create() {
            return il2cpp::create_object<app::AvatarMask>(get_class());
        }
    } // namespace AvatarMask
} // namespace app::classes::types
