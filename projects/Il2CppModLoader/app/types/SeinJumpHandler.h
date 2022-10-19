#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinJumpHandler {
        inline app::SeinJumpHandler__Class** type_info = (app::SeinJumpHandler__Class**)(modloader::win::memory::resolve_rva(0x04741D90));
        inline app::SeinJumpHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinJumpHandler__Class>(type_info, "Game", "SeinJumpHandler");
        }
        inline app::SeinJumpHandler* create() {
            return il2cpp::create_object<app::SeinJumpHandler>(get_class());
        }
    } // namespace SeinJumpHandler
} // namespace app::classes::types
