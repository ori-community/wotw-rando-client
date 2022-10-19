#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerAbilities_c {
        inline app::PlayerAbilities_c__Class** type_info = (app::PlayerAbilities_c__Class**)(modloader::win::memory::resolve_rva(0x047559B0));
        inline app::PlayerAbilities_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerAbilities_c__Class>(type_info, "", "PlayerAbilities", "<>c");
        }
        inline app::PlayerAbilities_c* create() {
            return il2cpp::create_object<app::PlayerAbilities_c>(get_class());
        }
    } // namespace PlayerAbilities_c
} // namespace app::classes::types
