#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerInputButtonRebinder {
        inline app::PlayerInputButtonRebinder__Class** type_info = (app::PlayerInputButtonRebinder__Class**)(modloader::win::memory::resolve_rva(0x04705C80));
        inline app::PlayerInputButtonRebinder__Class* get_class() {
            return il2cpp::get_class<app::PlayerInputButtonRebinder__Class>(type_info, "", "PlayerInputButtonRebinder");
        }
        inline app::PlayerInputButtonRebinder* create() {
            return il2cpp::create_object<app::PlayerInputButtonRebinder>(get_class());
        }
    } // namespace PlayerInputButtonRebinder
} // namespace app::classes::types
