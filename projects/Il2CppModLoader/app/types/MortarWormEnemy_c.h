#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWormEnemy_c {
        inline app::MortarWormEnemy_c__Class** type_info = (app::MortarWormEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x04750C58));
        inline app::MortarWormEnemy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarWormEnemy_c__Class>(type_info, "", "MortarWormEnemy", "<>c");
        }
        inline app::MortarWormEnemy_c* create() {
            return il2cpp::create_object<app::MortarWormEnemy_c>(get_class());
        }
    } // namespace MortarWormEnemy_c
} // namespace app::classes::types
