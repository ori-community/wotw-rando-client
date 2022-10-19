#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WormMortarShootingState {
        inline app::WormMortarShootingState__Class** type_info = (app::WormMortarShootingState__Class**)(modloader::win::memory::resolve_rva(0x0476FE40));
        inline app::WormMortarShootingState__Class* get_class() {
            return il2cpp::get_class<app::WormMortarShootingState__Class>(type_info, "", "WormMortarShootingState");
        }
        inline app::WormMortarShootingState* create() {
            return il2cpp::create_object<app::WormMortarShootingState>(get_class());
        }
    } // namespace WormMortarShootingState
} // namespace app::classes::types
