#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWormEnemy_States {
        inline app::MortarWormEnemy_States__Class** type_info = (app::MortarWormEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0470B8A8));
        inline app::MortarWormEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarWormEnemy_States__Class>(type_info, "", "MortarWormEnemy", "States");
        }
        inline app::MortarWormEnemy_States* create() {
            return il2cpp::create_object<app::MortarWormEnemy_States>(get_class());
        }
    } // namespace MortarWormEnemy_States
} // namespace app::classes::types
