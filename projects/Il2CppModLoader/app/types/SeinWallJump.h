#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinWallJump {
        inline app::SeinWallJump__Class** type_info = (app::SeinWallJump__Class**)(modloader::win::memory::resolve_rva(0x0470D9D0));
        inline app::SeinWallJump__Class* get_class() {
            return il2cpp::get_class<app::SeinWallJump__Class>(type_info, "", "SeinWallJump");
        }
        inline app::SeinWallJump* create() {
            return il2cpp::create_object<app::SeinWallJump>(get_class());
        }
    } // namespace SeinWallJump
} // namespace app::classes::types
