#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinWallJumpPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinWallJumpPuppet__Class** type_info;
        inline app::SeinWallJumpPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinWallJumpPuppet__Class>(type_info, "", "SeinWallJumpPuppet");
        }
        inline app::SeinWallJumpPuppet* create() {
            return il2cpp::create_object<app::SeinWallJumpPuppet>(get_class());
        }
    } // namespace SeinWallJumpPuppet
} // namespace app::classes::types
