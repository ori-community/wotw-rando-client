#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinJumpHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinJumpHandler__Class** type_info;
        inline app::SeinJumpHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinJumpHandler__Class>(type_info, "Game", "SeinJumpHandler");
        }
        inline app::SeinJumpHandler* create() {
            return il2cpp::create_object<app::SeinJumpHandler>(get_class());
        }
    } // namespace SeinJumpHandler
} // namespace app::classes::types
