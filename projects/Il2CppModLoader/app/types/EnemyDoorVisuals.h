#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyDoorVisuals {
        inline app::EnemyDoorVisuals__Class** type_info = (app::EnemyDoorVisuals__Class**)(modloader::win::memory::resolve_rva(0x0478EBA8));
        inline app::EnemyDoorVisuals__Class* get_class() {
            return il2cpp::get_class<app::EnemyDoorVisuals__Class>(type_info, "", "EnemyDoorVisuals");
        }
        inline app::EnemyDoorVisuals* create() {
            return il2cpp::create_object<app::EnemyDoorVisuals>(get_class());
        }
    } // namespace EnemyDoorVisuals
} // namespace app::classes::types
