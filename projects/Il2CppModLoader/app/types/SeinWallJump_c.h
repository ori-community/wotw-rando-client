#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinWallJump_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinWallJump_c__Class** type_info;
        inline app::SeinWallJump_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinWallJump_c__Class>(type_info, "", "SeinWallJump", "<>c");
        }
        inline app::SeinWallJump_c* create() {
            return il2cpp::create_object<app::SeinWallJump_c>(get_class());
        }
    } // namespace SeinWallJump_c
} // namespace app::classes::types
