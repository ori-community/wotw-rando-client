#pragma once
#include <Modloader/app/structs/AvatarMask.h>
#include <Modloader/app/structs/AvatarMask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AvatarMask {
        inline app::AvatarMask__Class** type_info() {
            static app::AvatarMask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AvatarMask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AvatarMask__Class* get_class() {
            return il2cpp::get_class<app::AvatarMask__Class>(type_info(), "UnityEngine", "AvatarMask");
        }
        inline app::AvatarMask* create() {
            return il2cpp::create_object<app::AvatarMask>(get_class());
        }
    } // namespace AvatarMask
} // namespace app::classes::types
