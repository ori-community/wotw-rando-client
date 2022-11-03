#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AvatarMask {
        namespace {
            inline app::AvatarMask__Class* type_info_ref = nullptr;
        }
        inline app::AvatarMask__Class** type_info = &type_info_ref;
        inline app::AvatarMask__Class* get_class() {
            return il2cpp::get_class<app::AvatarMask__Class>(type_info, "UnityEngine", "AvatarMask");
        }
        inline app::AvatarMask* create() {
            return il2cpp::create_object<app::AvatarMask>(get_class());
        }
    } // namespace AvatarMask
} // namespace app::classes::types
