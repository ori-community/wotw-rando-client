#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWormEnemy {
        inline app::MortarWormEnemy__Class** type_info = (app::MortarWormEnemy__Class**)(modloader::win::memory::resolve_rva(0x04797B08));
        inline app::MortarWormEnemy__Class* get_class() {
            return il2cpp::get_class<app::MortarWormEnemy__Class>(type_info, "", "MortarWormEnemy");
        }
        inline app::MortarWormEnemy* create() {
            return il2cpp::create_object<app::MortarWormEnemy>(get_class());
        }
    } // namespace MortarWormEnemy
} // namespace app::classes::types
