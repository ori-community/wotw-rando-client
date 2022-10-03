#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinWallJump {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinWallJump__Class** type_info;
        inline app::SeinWallJump__Class* get_class() {
            return il2cpp::get_class<app::SeinWallJump__Class>(type_info, "", "SeinWallJump");
        }
        inline app::SeinWallJump* create() {
            return il2cpp::create_object<app::SeinWallJump>(get_class());
        }
    } // namespace SeinWallJump
} // namespace app::classes::types
