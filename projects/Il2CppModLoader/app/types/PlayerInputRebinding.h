#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerInputRebinding {
        inline app::PlayerInputRebinding__Class** type_info = (app::PlayerInputRebinding__Class**)(modloader::win::memory::resolve_rva(0x04710308));
        inline app::PlayerInputRebinding__Class* get_class() {
            return il2cpp::get_class<app::PlayerInputRebinding__Class>(type_info, "", "PlayerInputRebinding");
        }
        inline app::PlayerInputRebinding* create() {
            return il2cpp::create_object<app::PlayerInputRebinding>(get_class());
        }
    } // namespace PlayerInputRebinding
} // namespace app::classes::types
